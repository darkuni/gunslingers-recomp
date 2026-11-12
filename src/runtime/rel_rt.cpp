// Tracks which REL module the game linked where, so recompiled module code can form its addresses and
// dispatch() can find module functions called through pointers.
#include "ppc.h"
#include "rel_rt.h"
#include <cstdio>
extern FILE* g_log;
#define LOG g_log

static int identify(uint32_t m) {
    uint32_t n = R32(m + 0xC), si = R32(m + 0x10), bss = R32(m + 0x20);
    if (si < 0x80000000u) si += m;
    for (unsigned k = 0; k < REL_COUNT; k++) {
        const RelDesc& d = REL_DESC[k];
        if (d.nsec != n || d.bss != bss) continue;
        bool ok = true;
        for (uint32_t i = 0; i < n && ok; i++) ok = R32(si + i * 8 + 4) == d.size[i];
        if (ok) return (int)k;
    }
    return -1;
}

// Link(module, bss, fixed): after the game's own linker ran, record where each section went
void hle_wrap_OSLink_Link(Ctx* c, GuestFn orig) {
    uint32_t m = c->r[3];
    orig(c);
    if (!c->r[3]) return;
    int k = identify(m);
    if (k < 0) { fprintf(LOG, "[rel] linked unknown module at %08X\n", m); fflush(LOG); return; }
    uint32_t n = R32(m + 0xC), si = R32(m + 0x10);
    if (si < 0x80000000u) si += m;
    for (uint32_t i = 0; i < n && i < REL_MAXSEC; i++) g_relsec[k][i] = R32(si + i * 8) & ~3u;
    fprintf(LOG, "[rel] %s linked at %08X (code %08X)\n", REL_DESC[k].name, m, g_relsec[k][1]);
}

void hle_wrap_OSUnlink(Ctx* c, GuestFn orig) {
    int k = identify(c->r[3]);
    orig(c);
    if (k >= 0 && c->r[3]) {
        fprintf(LOG, "[rel] %s unlinked\n", REL_DESC[k].name);
        for (unsigned i = 0; i < REL_MAXSEC; i++) g_relsec[k][i] = 0;
    }
}

uint32_t rel_virtual(uint32_t a) {
    for (unsigned k = 0; k < REL_COUNT; k++) {
        uint32_t b = g_relsec[k][1];
        if (b && a >= b && a - b < REL_DESC[k].size[1]) return REL_DESC[k].vbase + (a - b);
    }
    return 0;
}
