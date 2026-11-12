// REL modules (the game's DLLs in files/dll) recompiled at fixed virtual addresses; see src/relgen.py.
#pragma once
#include <cstdint>
#define REL_MAXSEC 24
struct RelDesc { const char* name; uint32_t vbase; uint32_t nsec; uint32_t size[REL_MAXSEC]; uint32_t bss; };
extern const RelDesc REL_DESC[];
extern const unsigned REL_COUNT;
extern uint32_t g_relsec[][REL_MAXSEC];   // runtime address of each section of each linked module (0 = not linked)
uint32_t rel_virtual(uint32_t addr);      // runtime address inside a linked module's code -> virtual address, 0 if none
