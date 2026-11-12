// Guest setjmp/longjmp coroutines (Hudson's HuPrc process system in Lost in Shadow).
//
// The game runs its processes on their own guest stacks and switches between them with a private
// setjmp/longjmp pair (gcsetjmp / gclongjmp): the scheduler longjmps into a process, the process
// setjmps its own buffer and longjmps back to the scheduler's to yield. A new process starts by
// longjmp to a buffer whose saved LR / SP were set to the process function and its stack.
//
// Recompiled code cannot jump into the middle of a function, so each guest execution chain gets a
// host fiber (its own host stack), and each recompiled setjmp call site takes a host setjmp:
//   gcsetjmp site  - the recompiler emits  __builtin_setjmp(site->env)  around the guest call and
//                    records the site (owner fiber, enclosing frame) under the guest buffer address
//   gclongjmp      - loads the guest registers from the buffer (as the real one does), then
//                    resumes the site's fiber and host-longjmps to its setjmp, so the guest call
//                    returns again with the new value; a buffer nobody setjmp'd at its current LR
//                    starts a new fiber running that LR (a new or killed process)
// A site is valid while the recompiled function that holds it has not returned (frame ids). A fiber
// that longjmps away with no valid site left can never be resumed and is freed.
#include "hle.h"
#include <unordered_map>
#include <vector>
#include <memory>
#include <cstdlib>
#include <cstdio>
#include <algorithm>
#ifdef _WIN32
#include <windows.h>
#else
#include <ucontext.h>
#endif

#define LOG g_log

struct Fiber;
struct JmpSite {
    void* env[5];          // __builtin_setjmp buffer
    Fiber* fiber = nullptr;
    uint32_t frame = 0;    // frame id of the recompiled function that holds the setjmp
    uint32_t lr = 0;       // guest LR saved in the buffer when it was set
    bool armed = false;
};
struct Fiber {
#ifdef _WIN32
    void* handle = nullptr;
#else
    ucontext_t uc;
    void* stack = nullptr;
#endif
    std::vector<uint32_t> frames;     // live recompiled frames that contain setjmp sites
    JmpSite* pending = nullptr;       // resume: longjmp here
    uint32_t start_lr = 0;            // new fiber: guest function to run
    bool root = false, dead = false;
};

static thread_local Fiber* t_fiber = nullptr;
static thread_local std::vector<Fiber*>* t_zombies = nullptr;
static std::unordered_map<uint32_t, std::unique_ptr<JmpSite>> g_sites;   // guest buffer -> site
static uint32_t g_next_frame = 1;
static uint32_t g_jmp_value = 0;
extern thread_local Ctx* t_cur_ctx;

static Fiber* cur_fiber() {
    if (!t_fiber) {
        t_fiber = new Fiber();
        t_fiber->root = true;
        t_zombies = new std::vector<Fiber*>();
#ifdef _WIN32
        t_fiber->handle = ConvertThreadToFiber(nullptr);
        if (!t_fiber->handle) t_fiber->handle = GetCurrentFiber();
#endif
    }
    return t_fiber;
}

static bool frame_live(Fiber* f, uint32_t id) {
    for (uint32_t x : f->frames) if (x == id) return true;
    return false;
}
static bool resumable(Fiber* f) {
    for (auto& kv : g_sites) {
        JmpSite* s = kv.second.get();
        if (s->armed && s->fiber == f && frame_live(f, s->frame)) return true;
    }
    return false;
}
static void free_fiber(Fiber* f) {
    for (auto& kv : g_sites) if (kv.second->fiber == f) { kv.second->fiber = nullptr; kv.second->armed = false; }
#ifdef _WIN32
    DeleteFiber(f->handle);
#else
    free(f->stack);
#endif
    delete f;
}
static void reap() {
    for (Fiber* z : *t_zombies) if (z != t_fiber) free_fiber(z);
    t_zombies->erase(std::remove_if(t_zombies->begin(), t_zombies->end(), [](Fiber* z) { return z != t_fiber; }), t_zombies->end());
}

static void fiber_body();
#ifdef _WIN32
static void WINAPI fiber_entry(void*) { fiber_body(); }
#else
static void fiber_entry() { fiber_body(); }
#endif

static Fiber* new_fiber(uint32_t lr) {
    Fiber* f = new Fiber();
    f->start_lr = lr;
    const size_t SZ = 1u << 20;
#ifdef _WIN32
    f->handle = CreateFiber(SZ, fiber_entry, nullptr);
#else
    getcontext(&f->uc);
    f->stack = malloc(SZ);
    f->uc.uc_stack.ss_sp = f->stack;
    f->uc.uc_stack.ss_size = SZ;
    f->uc.uc_link = nullptr;
    makecontext(&f->uc, fiber_entry, 0);
#endif
    return f;
}

// switch the host thread to fiber `to`; returns when this fiber is resumed (with me->pending set)
static void switch_fiber(Fiber* to) {
    Fiber* me = cur_fiber();
    if (!me->root && !resumable(me)) { me->dead = true; t_zombies->push_back(me); }
    t_fiber = to;
#ifdef _WIN32
    SwitchToFiber(to->handle);
#else
    swapcontext(&me->uc, &to->uc);
#endif
    t_fiber = me;
    reap();
}

static void resume_pending() {
    Fiber* me = cur_fiber();
    JmpSite* s = me->pending;
    me->pending = nullptr;
    // frames above the site's are being unwound
    while (!me->frames.empty() && me->frames.back() != s->frame) me->frames.pop_back();
    __builtin_longjmp(s->env, 1);
}

static void fiber_body() {
    t_fiber->dead = false;
    reap();
    Ctx* c = t_cur_ctx;
    uint32_t lr = t_fiber->start_lr;
    for (;;) {
        // the real gclongjmp leaves LR = the function, so a process function that returns runs again
        c->lr = lr;
        dispatch(c, lr);
        static int warned = 0;
        if (warned++ < 4) fprintf(LOG, "[coroutine] process function %08X returned: running it again\n", lr);
    }
}

// ---------------------------------------------------------------- recompiler interface
uint32_t jmp_frame_enter() {
    uint32_t id = g_next_frame++;
    if (!id) id = g_next_frame++;
    cur_fiber()->frames.push_back(id);
    return id;
}
void jmp_frame_leave(uint32_t id) {
    auto& v = cur_fiber()->frames;
    while (!v.empty()) { uint32_t x = v.back(); v.pop_back(); if (x == id) break; }
}
void* jmp_site(uint32_t buf) {
    auto& p = g_sites[buf];
    if (!p) p.reset(new JmpSite());
    Fiber* f = cur_fiber();
    p->fiber = f;
    p->frame = f->frames.empty() ? 0 : f->frames.back();
    p->armed = false;
    return p.get();
}
void jmp_armed(void* site, uint32_t buf) {
    JmpSite* s = (JmpSite*)site;
    s->lr = R32(buf);
    s->armed = true;
}
uint32_t jmp_value() { return g_jmp_value; }

// gclongjmp(buf, value): guest-visible effect of the real one, then the host transfer
void hle_gclongjmp(Ctx* c) {
    uint32_t buf = c->r[3], v = c->r[4];
    c->lr = R32(buf);
    c->cr = R32(buf + 4);
    c->r[1] = R32(buf + 8);
    c->r[2] = R32(buf + 0xC);
    for (int i = 13; i < 32; i++) c->r[i] = R32(buf + 0x14 + 4 * (i - 13));
    for (int i = 14; i < 32; i++) c->f[i] = RF64(buf + 0x60 + 8 * (i - 14));
    c->fpscr = (uint32_t)d2u(RF64(buf + 0xF0));
    c->r[3] = v ? v : 1;
    g_jmp_value = c->r[3];
    auto it = g_sites.find(buf);
    JmpSite* s = it == g_sites.end() ? nullptr : it->second.get();
    if (s && s->armed && s->fiber && s->lr == c->lr && frame_live(s->fiber, s->frame)) {
        if (s->fiber == cur_fiber()) {
            Fiber* me = cur_fiber();
            me->pending = s;
            resume_pending();
        }
        s->fiber->pending = s;
        switch_fiber(s->fiber);
        resume_pending();
    }
    // start a new chain at LR (new process, or a killed one sent to its end function)
    if (s && s->armed && s->fiber && s->fiber != cur_fiber() && !s->fiber->root && frame_live(s->fiber, s->frame)) {
        // the buffer's old fiber is waiting in a yield that will never be resumed
        Fiber* old = s->fiber;
        s->fiber = nullptr; s->armed = false;
        if (!old->dead) { old->dead = true; t_zombies->push_back(old); }
    }
    Fiber* f = new_fiber(c->lr);
    switch_fiber(f);
    resume_pending();
}
