// A real Wii Remote (RVL-CNT-01 / -TR) connected to the PC over Bluetooth (paired in the OS, or a
// Mayflash DolphinBar in mode 4), read with SDL's HIDAPI. Buttons, accelerometer and the IR camera
// (pointer, needs a powered sensor bar) feed the game's KPADRead. Protocol: wiibrew.org/wiki/Wiimote.
//   Output reports: 0x11 LEDs, 0x12 report mode, 0x13/0x1A IR enable, 0x15 status, 0x16 write, 0x17 read.
//   Input: 0x20 status, 0x21 read data, 0x22 ack, 0x33 buttons + accel + 12 bytes of IR.
// SDL's own Wii driver is switched off (SDL_HINT_JOYSTICK_HIDAPI_WII=0) so the remote is ours alone.
#if defined(_WIN32) || defined(USE_SDL)
#include <SDL2/SDL.h>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <algorithm>
#include "hostinput.h"
#include "config.h"

extern FILE* g_log;

namespace {
SDL_hid_device* g_dev = nullptr;
bool g_inited = false;
Uint64 g_next_scan = 0;
int g_cal0[3] = {512, 512, 512}, g_cal1[3] = {616, 616, 616};   // zero / 1 g (10-bit), until read
bool g_have_cal = false;
int g_state = 0;            // 0 nothing, 1 waiting for calibration, 2 running
Uint64 g_state_t = 0;
Uint64 g_last_report = 0;
float g_last_px = 0.5f, g_last_py = 0.5f;

bool send(const uint8_t* d, int n) {
    uint8_t buf[22] = {0};             // the Microsoft stack wants full-length output reports
    memcpy(buf, d, std::min(n, 22));
    int r = SDL_hid_write(g_dev, buf, 22);
    if (r < 0) r = SDL_hid_write(g_dev, d, n);
    return r >= 0;
}
void write_reg(uint32_t addr, const uint8_t* data, int n) {
    uint8_t b[22] = {0x16, 0x04, (uint8_t)(addr >> 16), (uint8_t)(addr >> 8), (uint8_t)addr, (uint8_t)n};
    memcpy(b + 6, data, n);
    send(b, 22);
    SDL_Delay(15);
}
void set_mode() {
    uint8_t led[2] = {0x11, 0x10};                           // LED 1
    send(led, 2);
    uint8_t ir1[2] = {0x13, 0x04}, ir2[2] = {0x1A, 0x04};   // IR camera on
    send(ir1, 2); SDL_Delay(15);
    send(ir2, 2); SDL_Delay(15);
    uint8_t one = 0x08; write_reg(0xB00030, &one, 1);
    const uint8_t sens1[9] = {0x02, 0x00, 0x00, 0x71, 0x01, 0x00, 0xAA, 0x00, 0x64};   // "level 3"
    const uint8_t sens2[2] = {0x63, 0x03};
    write_reg(0xB00000, sens1, 9);
    write_reg(0xB0001A, sens2, 2);
    uint8_t mode = 0x03; write_reg(0xB00033, &mode, 1);     // extended IR (3 bytes per dot)
    write_reg(0xB00030, &one, 1);
    uint8_t rep[3] = {0x12, 0x04, 0x33};                     // continuous: buttons + accel + IR
    send(rep, 3);
}
void close_dev(const char* why) {
    if (g_dev) { SDL_hid_close(g_dev); g_dev = nullptr; fprintf(g_log, "[wiimote] disconnected (%s)\n", why); }
    g_state = 0;
    g_host_input.remote = false; g_host_input.remote_ir = false; g_host_input.remote_buttons = 0;
}
void try_open() {
    SDL_hid_device_info* list = SDL_hid_enumerate(0x057E, 0);
    for (SDL_hid_device_info* d = list; d && !g_dev; d = d->next) {
        if (d->product_id != 0x0306 && d->product_id != 0x0330) continue;
        g_dev = SDL_hid_open_path(d->path, 0);
        if (g_dev) {
            SDL_hid_set_nonblocking(g_dev, 1);
            fprintf(g_log, "[wiimote] found %s (%04X)\n", d->product_id == 0x0330 ? "RVL-CNT-01-TR" : "RVL-CNT-01", d->product_id);
        }
    }
    SDL_hid_free_enumeration(list);
    if (!g_dev) return;
    // read the accelerometer calibration (EEPROM 0x16, 10 bytes), then switch on IR and the report mode
    uint8_t rd[7] = {0x17, 0x00, 0x00, 0x00, 0x16, 0x00, 0x0A};
    if (!send(rd, 7)) { close_dev("write failed"); return; }
    g_state = 1; g_state_t = SDL_GetTicks64(); g_last_report = g_state_t;
}

void parse_core(const uint8_t* r) {   // r[0], r[1]: buttons; r[2..4] accel (report 0x33 layout)
    uint32_t b = ((uint32_t)r[0] | ((uint32_t)r[1] << 8)) & 0x9F1F;
    g_host_input.remote_buttons = b;
    int ax = (r[2] << 2) | ((r[0] >> 5) & 3);
    int ay = (r[3] << 2) | ((r[1] >> 4) & 2);
    int az = (r[4] << 2) | ((r[1] >> 5) & 2);
    float gx = (float)(ax - g_cal0[0]) / std::max(1, g_cal1[0] - g_cal0[0]);
    float gy = (float)(ay - g_cal0[1]) / std::max(1, g_cal1[1] - g_cal0[1]);
    float gz = (float)(az - g_cal0[2]) / std::max(1, g_cal1[2] - g_cal0[2]);
    // raw: x toward the left, y forward, z up (reaction to gravity). KPAD: x right, y up, z forward,
    // gravity sense (resting = (0, -1, 0)).
    g_host_input.acc[0] = gx; g_host_input.acc[1] = -gz; g_host_input.acc[2] = -gy;
    g_host_input.roll = std::atan2(gx, gz);
}
void parse_ir(const uint8_t* ir) {    // 4 dots x 3 bytes (extended mode)
    float xs[4], ys[4]; int sz[4], n = 0;
    for (int i = 0; i < 4; i++) {
        const uint8_t* d = ir + 3 * i;
        if (d[0] == 0xFF && d[1] == 0xFF && d[2] == 0xFF) continue;
        int x = d[0] | ((d[2] >> 4) & 3) << 8, y = d[1] | ((d[2] >> 6) & 3) << 8;
        if (x >= 1023 || y >= 767) continue;
        xs[n] = (float)x; ys[n] = (float)y; sz[n] = d[2] & 15; n++;
    }
    if (n < 2) {
        // one dot or none: keep the last pointer for a moment (the bar's other end left the view)
        g_host_input.remote_ir = n == 1 && g_host_input.remote_ir;
        return;
    }
    // the two biggest dots are the sensor bar's ends
    int a = 0, b = 1;
    for (int i = 0; i < n; i++) if (sz[i] > sz[a]) a = i;
    b = a == 0 ? 1 : 0;
    for (int i = 0; i < n; i++) if (i != a && sz[i] > sz[b]) b = i;
    float mx = (xs[a] + xs[b]) / 2, my = (ys[a] + ys[b]) / 2;
    // undo the twist so pointing stays put while the remote rolls
    float ang = std::atan2(ys[b] - ys[a], xs[b] - xs[a]);
    if (ang > (float)M_PI / 2) ang -= (float)M_PI; else if (ang < -(float)M_PI / 2) ang += (float)M_PI;
    float cx = mx - 512, cy = my - 384, c = std::cos(-ang), s = std::sin(-ang);
    float rx = cx * c - cy * s, ry = cx * s + cy * c;
    // the camera sees the bar move opposite to the remote: right/down on screen = left/up in the image
    const float span = g_cfg.ir_span > 0 ? g_cfg.ir_span : 0.55f;   // fraction of the camera view that covers the screen
    float px = 0.5f - rx / (1024.f * span), py = 0.5f - ry / (768.f * span);
    g_last_px = px; g_last_py = py;
    g_host_input.rpx = px; g_host_input.rpy = py;
    g_host_input.remote_ir = true;
}
}  // namespace

void wiimote_poll() {
    if (!g_cfg.wiimote) { if (g_dev) close_dev("turned off"); return; }
    Uint64 now = SDL_GetTicks64();
    if (!g_inited) {
        if (SDL_hid_init() != 0) { fprintf(g_log, "[wiimote] HID not available\n"); g_cfg.wiimote = false; return; }
        g_inited = true;
    }
    if (!g_dev) {
        // enumerating takes a while on Windows: only when a HID device came or went (or every 30 s)
        static Uint32 last_cc = ~0u;
        Uint32 cc = SDL_hid_device_change_count();
        if (cc != last_cc || now >= g_next_scan) { last_cc = cc; g_next_scan = now + 30000; try_open(); }
        return;
    }
    uint8_t r[32];
    for (int k = 0; k < 64; k++) {
        int n = SDL_hid_read(g_dev, r, sizeof r);
        if (n < 0) { close_dev("read failed"); return; }
        if (n == 0) break;
        g_last_report = now;
        switch (r[0]) {
        case 0x21:   // memory read reply: BB BB SE AA AA data[16]
            if (g_state == 1 && n >= 16 && r[4] == 0x00 && r[5] == 0x16) {
                const uint8_t* d = r + 6;
                for (int i = 0; i < 3; i++) {
                    g_cal0[i] = (d[i] << 2) | ((d[3] >> (4 - 2 * i)) & 3);
                    g_cal1[i] = (d[4 + i] << 2) | ((d[7] >> (4 - 2 * i)) & 3);
                }
                if (g_cal1[0] <= g_cal0[0] || g_cal1[1] <= g_cal0[1] || g_cal1[2] <= g_cal0[2]) {   // nonsense: defaults
                    for (int i = 0; i < 3; i++) { g_cal0[i] = 512; g_cal1[i] = 616; }
                }
                g_have_cal = true;
                fprintf(g_log, "[wiimote] calibration zero %d %d %d, 1g %d %d %d\n", g_cal0[0], g_cal0[1], g_cal0[2], g_cal1[0], g_cal1[1], g_cal1[2]);
                set_mode();
                g_state = 2;
                g_host_input.remote = true;
            }
            break;
        case 0x20:   // status (e.g. extension plugged/unplugged): the report mode must be set again
            if (g_state == 2) { uint8_t rep[3] = {0x12, 0x04, 0x33}; send(rep, 3); }
            if (n >= 3) g_host_input.remote_buttons = ((uint32_t)r[1] | ((uint32_t)r[2] << 8)) & 0x9F1F;
            break;
        case 0x33:
            if (n >= 18) { parse_core(r + 1); parse_ir(r + 6); }
            break;
        case 0x30: case 0x31:
            if (n >= 3) { g_host_input.remote_buttons = ((uint32_t)r[1] | ((uint32_t)r[2] << 8)) & 0x9F1F; }
            break;
        default: break;
        }
    }
    if (g_state == 1 && now - g_state_t > 1500) {   // no calibration reply: carry on with defaults
        fprintf(g_log, "[wiimote] no calibration reply, using defaults\n");
        set_mode(); g_state = 2; g_host_input.remote = true;
    }
    if (g_state == 2 && now - g_last_report > 3000) close_dev("no reports for 3 s");
}
#else
void wiimote_poll() {}
#endif
