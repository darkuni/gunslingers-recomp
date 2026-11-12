// Host-driven device events (vertical retrace, ...)
#include "hle.h"
#include "game.h"
#include "hostclock.h"
#include <thread>
#include <chrono>
#include <atomic>
#include <algorithm>

void mmio_poke(uint32_t a, uint32_t v);
uint64_t g_vi_count = 0;
static std::atomic<int> vi_inflight{0};

// Raise SDK interrupt `n` (__OSInterrupt numbering) by calling the registered handler.
void raise_interrupt(Ctx* c, int n) {
    uint32_t table = R32(c->r[13] - G_SDA_INTERRUPT_TABLE);
    uint32_t h = table ? R32(table + 4 * n) : 0;
    if (!h) return;
    uint32_t cur = R32(0x800000D4u);
    guest_call(c, h, {(uint32_t)n, cur});
}

// Retrace pacing: normal speed is 59.94 Hz; faster game speeds shorten the period.
// The fast-forward button runs at 4x (or double the set speed), capped at 8x.
// Retraces are always paced: raising the next one as soon as the previous handler
// returned kept the interrupt handler busy forever and starved the game.
#include "config.h"
#include "hostinput.h"
// Retrace interrupts. Never deliver them back to back: after a stall (a slow frame, the PC busy) the
// console would simply have missed those retraces, and games that queue frames per retrace (Geometry
// Wars: Galaxies wakes its present thread from the retrace callback; a second callback before that
// thread runs loses a wakeup, and after five the frame queue overflows) break if they all arrive at
// once. So: skip retraces we fell behind on, and keep at least half a period between deliveries.
static std::atomic<int64_t> vi_last_ns{0};
static int64_t vi_now_ns() { return std::chrono::duration_cast<std::chrono::nanoseconds>(std::chrono::steady_clock::now().time_since_epoch()).count(); }
static void vi_thread() {
    using clk = std::chrono::steady_clock;
    auto next = clk::now();
    static const double env_hz = getenv("VI_HZ") ? atof(getenv("VI_HZ")) : 0;
    for (;;) {
        int speed = std::max(1, std::min(8, g_cfg.speed));
        if (g_host_input.buttons & IN_TURBO) speed = std::min(8, std::max(4, speed * 2));
        double hz = env_hz > 0 ? env_hz : 59.94 * speed;
        auto period = std::chrono::nanoseconds((long long)(1e9 / hz));
        next += period;
        precise_sleep_until(next);
        if (clk::now() - next > period) next = clk::now();     // fell behind: drop the missed retraces
        if (vi_inflight.load()) continue;
        int64_t gap = vi_now_ns() - vi_last_ns.load();
        if (gap < period.count() / 2) precise_sleep_until(clk::now() + std::chrono::nanoseconds(period.count() / 2 - gap));
        vi_inflight.store(1);
        post_irq([](Ctx* c) {
            g_vi_count++;
            extern uint32_t mmio_peek(uint32_t);
            if (getenv("VIXFB") && g_vi_count % 300 == 0) fprintf(g_log, "[vi] %llu TFBL %04X%04X BFBL %04X%04X\n", (unsigned long long)g_vi_count, mmio_peek(0xCC00201Cu), mmio_peek(0xCC00201Eu), mmio_peek(0xCC002024u), mmio_peek(0xCC002026u));
            mmio_poke(0xCC002030u, 0x8000u | 0x1001u);   // DI0: retrace interrupt pending
            raise_interrupt(c, 24);                       // PI_VI
            vi_last_ns.store(vi_now_ns());
            vi_inflight.store(0);
        });
    }
}

void devices_start2();
void devices_start() {
    std::thread(vi_thread).detach();
    devices_start2();
}

// ---------------------------------------------------------------- decrementer (OSAlarm)
#include <mutex>
#include <condition_variable>
static std::mutex dec_mx;
static std::condition_variable dec_cv;
static uint64_t dec_deadline_ns = 0;      // 0 = disarmed
static uint64_t dec_gen = 0;
static std::chrono::steady_clock::time_point dec_t0 = std::chrono::steady_clock::now();
static uint64_t now_ns() { return std::chrono::duration_cast<std::chrono::nanoseconds>(std::chrono::steady_clock::now() - dec_t0).count(); }

void dec_write(uint32_t v) {
    std::lock_guard<std::mutex> g(dec_mx);
    int32_t ticks = (int32_t)v;
    if (ticks < 0) ticks = 0;
    // timebase 60.75 MHz
    dec_deadline_ns = now_ns() + (uint64_t)ticks * 100000ull / 6075ull + 1;
    dec_gen++;
    dec_cv.notify_one();
}
uint32_t dec_read() {
    std::lock_guard<std::mutex> g(dec_mx);
    if (!dec_deadline_ns) return 0x7FFFFFFFu;
    int64_t rem = (int64_t)dec_deadline_ns - (int64_t)now_ns();
    return (uint32_t)(int32_t)(rem * 6075 / 100000);
}
// Waits use the precise host sleep (high-resolution timer + short spin on Windows): a condition
// variable wait there rounds up to the scheduler tick, and games that poll with short
// OSSleepTicks (TARGET: Terror's loader) then crawl. Sleep in slices of at most 1 ms so an
// earlier deadline written meanwhile is still caught on time.
static void dec_thread() {
    std::unique_lock<std::mutex> lk(dec_mx);
    for (;;) {
        if (!dec_deadline_ns) { dec_cv.wait(lk); continue; }
        uint64_t dl = dec_deadline_ns, now = now_ns();
        if (now < dl) {
            uint64_t slice = std::min<uint64_t>(dl - now, 1000000ull);
            lk.unlock();
            precise_sleep_until(dec_t0 + std::chrono::nanoseconds(now + slice));
            lk.lock();
            continue;
        }
        {
            uint64_t late = (now_ns() - dl) / 1000;
            g_diag_dec++; g_diag_dec_late_us += late;
            { uint64_t _v = late, _m = g_diag_dec_late_max.load(); while (_v > _m && !g_diag_dec_late_max.compare_exchange_weak(_m, _v)) {} }
        }
        dec_deadline_ns = 0;
        lk.unlock();
        post_irq([](Ctx* c) {
            // DecrementerExceptionCallback(exception=8, context=current)
            guest_call(c, G_DECREMENTER_CB, {8u, R32(0x800000D4u)});
        });
        lk.lock();
    }
}
void devices_start2() { std::thread(dec_thread).detach(); }
