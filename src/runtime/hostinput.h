#pragma once
#include <cstdint>
// Logical host controls (gamepad layout; keyboard keys are mapped onto the same names)
enum : uint32_t {
    IN_UP = 1u << 0, IN_DOWN = 1u << 1, IN_LEFT = 1u << 2, IN_RIGHT = 1u << 3,       // d-pad / arrows
    IN_SOUTH = 1u << 4, IN_EAST = 1u << 5, IN_WEST = 1u << 6, IN_NORTH = 1u << 7,    // face buttons (Xbox A/B/X/Y)
    IN_L1 = 1u << 8, IN_R1 = 1u << 9, IN_L2 = 1u << 10, IN_R2 = 1u << 11,
    IN_START = 1u << 12, IN_BACK = 1u << 13, IN_GUIDE = 1u << 14,
    IN_KB_ARROWS = 1u << 15,     // set when the d-pad bits came from the keyboard arrows
    IN_ALT_UP = 1u << 16, IN_ALT_DOWN = 1u << 17, IN_ALT_LEFT = 1u << 18, IN_ALT_RIGHT = 1u << 19,  // keyboard I/K/J/L
    IN_TURBO = 1u << 20,         // fast-forward while held (Tab / right stick click)
};
enum : uint32_t { MOUSE_L = 1, MOUSE_R = 2, MOUSE_M = 4 };
struct HostInput {
    uint32_t buttons = 0;
    float lx = 0, ly = 0;        // left stick, -1..1, y up
    float rx = 0, ry = 0;        // right stick
    float lt = 0, rt = 0;        // analog triggers 0..1
    // pointer (Wii Remote IR / Zapper): position in the game picture, 0..1 from the top-left
    float px = 0.5f, py = 0.5f;
    bool pvalid = false;         // false = pointing off screen
    uint32_t mouse = 0;          // MOUSE_* buttons held
    bool reload = false;         // unused here (TARGET: Terror's "shoot off screen")
    // Wii Remote motion, KPAD convention: acceleration in g with gravity included, remote frame
    // x = right, y = up out of the buttons, z = forward (toward the TV). Resting, pointing at the
    // TV: (0, -1, 0). Simulated from mouse/keyboard/gamepad, or read from a real Wii Remote.
    float acc[3] = {0.f, -1.f, 0.f};
    float roll = 0.f;            // twist (radians, + = clockwise seen from behind), for KPAD horizon
    // a real Wii Remote over Bluetooth (wiimote.cpp)
    bool remote = false;
    uint32_t remote_buttons = 0; // WPAD button bits
    bool remote_ir = false;      // it sees the sensor bar: rpx/rpy is its pointer
    float rpx = 0.5f, rpy = 0.5f;
};
extern HostInput g_host_input;
