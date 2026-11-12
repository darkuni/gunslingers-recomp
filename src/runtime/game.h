// Per-game constants for Gunslingers (Wii disc, NTSC-U, SW7EVN, Rev 1).
// Addresses come from config/symbols.txt: tools/funcfind.py (function boundaries), SDK names matched against
// the other recomps' generated code by tools/cmatch.py (Lost in Shadow has the same Dec 11 2009 SDK build).
// r13 offsets were read from the instruction that loads the variable in the named SDK function.
#pragma once
#define GAME_NAME        "Gunslingers"
#define GAME_EXE         "gunslingers"
#define GAME_INI         "gunslingers.ini"

#define G_AX_RESUME_CB          0x801C5D20u   // __AXDSPResumeCallback
#define G_DECREMENTER_CB        0x80244130u   // DecrementerExceptionCallback
#define G_IOS_FREE              0x80232A90u   // iosFree(heap, ptr)
#define G_OS_EXIT_THREAD        0x8024D670u   // OSExitThread
#define G_SDA_INTERRUPT_TABLE   0x61E0u       // __OSGetInterruptHandler: lwz r4,-0x61E0(r13)
#define G_SDA_IOS_HEAP          0x6FDCu       // __ios_Ipc2: lwz r3,-0x6FDC(r13) before iosFree
#define G_FN_OS_EXIT_THREAD     f_8024D670
#define G_FN_IOS_FREE           f_80232A90
#define G_KPAD_STATUS_SIZE      0xF0u         // KPADStatus (Dec 2009 KPAD, MotionPlus fields)
#define G_FN_OS_DISABLE_SCHEDULER f_8024CE40  // interrupt handlers run with the scheduler off (hle_thread.cpp irq_check)
#define G_FN_OS_ENABLE_SCHEDULER  f_8024CE80
#define G_FN_OS_RESCHEDULE        f_8024D3A0  // __OSReschedule after the handlers
#define G_IOS_ASYNC_DELAY_US    2000u         // async IOS requests (disc reads) complete 2 ms later (hle_ios.cpp)
#define G_RELOAD_BUTTON         W_A           // reload = A ("Press A to reload"): middle mouse / V / LB / LT also press it
#define G_MOUSE_SWAP_DEFAULT    1             // mouse: left button = B (the trigger), right = A
#define G_DISC_BYTES_PER_SEC    8000000u      // async disc reads complete after len / 8 MB/s (hle_ios.cpp)
#define G_KPAD_Y_RANGE          0.66f         // pos y spans about -0.66..0.66 over the picture here, not -1..1 (measured)
