// Windowed platform layer (Windows, or Linux with -DUSE_SDL): SDL2 window with an
// OpenGL 3.3 core context, audio output and keyboard/gamepad input.
#if defined(_WIN32) || defined(USE_SDL)
#include "game.h"
#ifdef _WIN32
#include "glad.h"
#else
#define GL_GLEXT_PROTOTYPES
#include <GL/gl.h>
#include <GL/glext.h>
#endif
#include <SDL2/SDL.h>
#include <cstdio>
#include <cstdlib>
#include <cstdint>
#include <cmath>
#include <algorithm>
#include "gx_render.h"
#include "config.h"
#include "hostinput.h"
#include "overlay.h"
#include "audio_ring.h"
#include <atomic>
#include <thread>
#include <mutex>
#include <condition_variable>

static SDL_Window* g_win = nullptr;
static SDL_GLContext g_glc = nullptr;
static SDL_AudioDeviceID g_audio = 0;
static SDL_GameController* g_pad = nullptr;
static GLuint g_present_fbo = 0;
// Presentation runs on its own thread with a second (shared) GL context, so waiting for
// vsync never blocks the emulated CPU (which must keep servicing 3 ms audio interrupts).
static SDL_GLContext g_present_ctx = nullptr;
struct Slot { GLuint tex = 0; int w = 0, h = 0; GLsync fence = nullptr; };
static Slot g_slots[3];
static int g_ready = -1, g_showing = -1;
static std::mutex g_pm;
static std::condition_variable g_pcv;
static void present_thread();
static thread_local bool t_current = false;

// The window lives on its own UI thread, which pumps window messages all the time (Windows
// delivers them only to the thread that created the window). The renderer's GL context is
// made current by whichever emulation thread does GX work and released when that thread
// hands the emulated CPU to another one.
static std::atomic<int> g_ui_state{0};            // 0 starting, 1 ready, -1 failed
std::atomic<unsigned long> g_ui_polls{0};         // UI thread heartbeat (status line)
static bool ui_create() {
    SDL_SetHint("SDL_JOYSTICK_HIDAPI_WII", "0");   // the Wii Remote is read directly (wiimote.cpp)
    if (SDL_Init(SDL_INIT_VIDEO | SDL_INIT_AUDIO | SDL_INIT_GAMECONTROLLER | SDL_INIT_EVENTS) != 0) {
        fprintf(stderr, "[sdl] init failed: %s\n", SDL_GetError());
        return false;
    }
    SDL_GL_SetAttribute(SDL_GL_CONTEXT_MAJOR_VERSION, 3);
    SDL_GL_SetAttribute(SDL_GL_CONTEXT_MINOR_VERSION, 3);
    SDL_GL_SetAttribute(SDL_GL_CONTEXT_PROFILE_MASK, SDL_GL_CONTEXT_PROFILE_CORE);
    SDL_GL_SetAttribute(SDL_GL_DOUBLEBUFFER, 1);
    int scale = g_cfg.window_scale;
    int ww = (g_cfg.widescreen ? 854 : 640) * scale, wh = 480 * scale;
    Uint32 flags = SDL_WINDOW_OPENGL | SDL_WINDOW_RESIZABLE | SDL_WINDOW_ALLOW_HIGHDPI;
    if (g_cfg.fullscreen) flags |= SDL_WINDOW_FULLSCREEN_DESKTOP;
    g_win = SDL_CreateWindow(GAME_NAME " (native)", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED,
                             ww, wh, flags);
    if (!g_win) { fprintf(stderr, "[sdl] window failed: %s\n", SDL_GetError()); return false; }
    g_present_ctx = SDL_GL_CreateContext(g_win);              // presenter
    if (!g_present_ctx) { fprintf(stderr, "[sdl] GL context failed: %s\n", SDL_GetError()); return false; }
    SDL_GL_SetAttribute(SDL_GL_SHARE_WITH_CURRENT_CONTEXT, 1);
    g_glc = SDL_GL_CreateContext(g_win);                      // renderer (shares textures/syncs)
    if (!g_glc) { fprintf(stderr, "[sdl] GL context failed: %s\n", SDL_GetError()); return false; }
    SDL_GL_MakeCurrent(g_win, g_glc);
#ifdef _WIN32
    if (!gl_load(SDL_GL_GetProcAddress)) return false;
#endif
    SDL_GL_SetSwapInterval(0);
    fprintf(stderr, "[gl] %s | %s\n", glGetString(GL_RENDERER), glGetString(GL_VERSION));
    SDL_GL_MakeCurrent(g_win, nullptr);                       // free for the emulation threads
    // audio: 32 kHz stereo s16, fed from the AX output
    SDL_AudioSpec want = {}, have = {};
    want.freq = 32000; want.format = AUDIO_S16SYS; want.channels = 2; want.samples = 256;
    want.callback = [](void*, Uint8* stream, int len) { audio_ring_pull((int16_t*)stream, len / 4); };
    g_audio = SDL_OpenAudioDevice(nullptr, 0, &want, &have, 0);
    if (g_audio) SDL_PauseAudioDevice(g_audio, 0);
    for (int i = 0; i < SDL_NumJoysticks(); i++)
        if (SDL_IsGameController(i)) { g_pad = SDL_GameControllerOpen(i); break; }
    if (g_pad) fprintf(stderr, "[input] controller: %s\n", SDL_GameControllerName(g_pad));
    else fprintf(stderr, "[input] no controller found (keyboard active; controllers can be plugged in any time)\n");
    return true;
}
static bool ui_poll();
static void ui_thread() {
    if (!ui_create()) { g_ui_state = -1; return; }
    std::thread(present_thread).detach();
    g_ui_state = 1;
    for (;;) {
        Uint64 t0 = SDL_GetTicks64();
        ui_poll();
        Uint64 dt = SDL_GetTicks64() - t0;
        g_ui_polls++;
        if (dt > 500) fprintf(stderr, "[ui] event pump took %llu ms\n", (unsigned long long)dt);
        SDL_Delay(2);
    }
}

bool gl_platform_init(int w, int h) {
    std::thread(ui_thread).detach();
    while (g_ui_state.load() == 0) SDL_Delay(1);
    if (g_ui_state.load() < 0) return false;
    gl_platform_make_current();
    (void)w; (void)h;
    return true;
}

void gl_platform_release() {
    if (!t_current) return;
    SDL_GL_MakeCurrent(g_win, nullptr);
    t_current = false;
}

void gl_owner_prepare();
void gl_platform_make_current() {
    if (t_current) return;
    gl_owner_prepare();   // the holder (another guest thread) releases it first
    if (SDL_GL_MakeCurrent(g_win, g_glc) != 0) {
        static int n = 0;
        if (n++ < 5) fprintf(stderr, "[gl] MakeCurrent failed: %s\n", SDL_GetError());
        return;
    }
    t_current = true;
}

void platform_audio_push(const int16_t* lr, int frames) {
    if (g_audio) audio_ring_push(lr, frames);
}

// Pointer (light gun): the mouse inside the game picture, or a cursor moved with a gamepad
// stick. Whichever moved last wins. Leaving the picture = pointing off screen.
static void picture_rect(int ww, int wh, float& dx, float& dy, float& dw, float& dh) {
    const int an = g_cfg.widescreen ? 16 : 4, ad = g_cfg.widescreen ? 9 : 3;
    dw = (float)ww; dh = (float)ww * ad / an;
    if (dh > wh) { dh = (float)wh; dw = (float)wh * an / ad; }
    dx = (ww - dw) / 2; dy = (wh - dh) / 2;
}
// Simulated Wii Remote motion (Zack & Wiki turns levers, keys and saws with the remote).
//   Mouse: hold the middle button (or Ctrl) and move the mouse: left/right twists the remote,
//          up/down tilts its tip; quick moves are swings (the accelerometer feels them).
//          Wheel up/down = thrust the remote toward the screen / pull it back toward you.
//   Keys:  Q/E twist left/right, R/F tilt up/down, hold Shift to shake.
//   Pad:   right stick twists (left/right) and tilts (up/down); hold LT (or LB) to shake.
// Output: g_host_input.acc (KPAD convention, gravity sense) and .roll. A real Wii Remote, when
// connected, supplies these itself (wiimote.cpp).
void wiimote_poll();
static int g_wheel = 0;
static float g_impulse_t = 0, g_impulse_dir = 0;
static bool update_motion(float dt, bool focus, Uint32 mb, float srx, float sry) {
    static bool mode = false;
    static float roll = 0, pitch = 0;           // degrees
    static float vx = 0, vy = 0, ax = 0, ay = 0; // smoothed mouse velocity (px/s) and acceleration
    static float t = 0;
    t += dt;
    const Uint8* k = SDL_GetKeyboardState(nullptr);
#if defined(G_RELOAD_OFFSCREEN) || defined(G_RELOAD_BUTTON)
    const bool mid_motion = false;   // the middle button reloads in this game; Ctrl still turns the remote
#else
    const bool mid_motion = true;
#endif
    bool want = focus && !overlay_open() && ((mid_motion && (mb & SDL_BUTTON(SDL_BUTTON_MIDDLE))) || k[SDL_SCANCODE_LCTRL] || k[SDL_SCANCODE_RCTRL]);
    if (want != mode) {
        mode = want;
        SDL_SetRelativeMouseMode(want ? SDL_TRUE : SDL_FALSE);
        SDL_GetRelativeMouseState(nullptr, nullptr);
        vx = vy = ax = ay = 0;
    }
    float mdx = 0, mdy = 0;
    if (mode) { int a, b; SDL_GetRelativeMouseState(&a, &b); mdx = (float)a; mdy = (float)b; }
    const float sens = g_cfg.motion_sensitivity;
    // orientation
    float rt = 0, pt = 0; bool held = false;
    if (k[SDL_SCANCODE_Q]) { rt -= 75; held = true; }
    if (k[SDL_SCANCODE_E]) { rt += 75; held = true; }
    if (k[SDL_SCANCODE_R]) { pt += 70; held = true; }
    if (k[SDL_SCANCODE_F]) { pt -= 70; held = true; }
    if (srx || sry) { rt += srx * 85; pt += sry * 75; held = true; }
    if (mode) {
        roll += mdx * 0.35f * sens;
        pitch -= mdy * 0.35f * sens;
    } else {
        float tgt_r = held ? rt : 0, tgt_p = held ? pt : 0;   // keys/stick: go there; nothing: back to level
        float f = std::min(1.f, dt * 10.f);
        roll += (tgt_r - roll) * f; pitch += (tgt_p - pitch) * f;
    }
    roll = std::max(-120.f, std::min(120.f, roll));
    pitch = std::max(-85.f, std::min(85.f, pitch));
    // swings: the mouse's acceleration while turning (screen right = remote right, screen down = remote down)
    if (dt > 0) {
        float f = std::min(1.f, dt / 0.03f);
        float nvx = vx + (mdx / dt - vx) * f, nvy = vy + (mdy / dt - vy) * f;
        ax += ((nvx - vx) / dt - ax) * f; ay += ((nvy - vy) / dt - ay) * f;
        vx = nvx; vy = nvy;
    }
    const float kacc = 2.5e-5f * sens;   // g per px/s^2
    float lin[3] = {ax * kacc, -ay * kacc, 0.f};
    // wheel: thrust toward the screen / pull back (an impulse: speed up, then stop)
    if (g_wheel) { g_impulse_dir = g_wheel > 0 ? 1.f : -1.f; g_impulse_t = 0.14f; g_wheel = 0; }
    if (g_impulse_t > 0) { lin[2] += g_impulse_dir * (g_impulse_t > 0.07f ? 3.f : -2.f); g_impulse_t -= dt; }
    // shake
    bool shake = k[SDL_SCANCODE_LSHIFT] || k[SDL_SCANCODE_RSHIFT] ||
                 (g_pad && (SDL_GameControllerGetAxis(g_pad, SDL_CONTROLLER_AXIS_TRIGGERLEFT) > 16000 ||
                            SDL_GameControllerGetButton(g_pad, SDL_CONTROLLER_BUTTON_LEFTSHOULDER)));
    if (shake && !overlay_open()) { lin[0] += 3.f * std::sin(t * 2 * 3.14159f * 7.f); lin[1] += 2.5f * std::sin(t * 2 * 3.14159f * 7.f + 1.3f); }
    for (float& v : lin) v = std::max(-3.5f, std::min(3.5f, v));
    if (!g_host_input.remote) {
        float r = roll * 3.14159265f / 180.f, p = pitch * 3.14159265f / 180.f;
        g_host_input.acc[0] = std::sin(r) * std::cos(p) - lin[0];
        g_host_input.acc[1] = -std::cos(r) * std::cos(p) - lin[1];
        g_host_input.acc[2] = -std::sin(p) - lin[2];
        g_host_input.roll = r;
    }
    return mode;
}

static void update_pointer(float lx, float ly, float rx, float ry) {
    static int last_mx = -1, last_my = -1;
    static bool use_pad = false;
    static float cx = 0.5f, cy = 0.5f;
    static Uint64 t_prev = SDL_GetTicks64();
    Uint64 now = SDL_GetTicks64();
    float dt = std::min(0.05f, (now - t_prev) / 1000.f);
    t_prev = now;
    int mx, my, ww, wh;
    Uint32 mb = SDL_GetMouseState(&mx, &my);
    SDL_GetWindowSize(g_win, &ww, &wh);
    bool focus = (SDL_GetWindowFlags(g_win) & SDL_WINDOW_MOUSE_FOCUS) != 0;
    uint32_t m = 0;
    if (focus) {
        if (mb & SDL_BUTTON(SDL_BUTTON_LEFT)) m |= MOUSE_L;
        if (mb & SDL_BUTTON(SDL_BUTTON_RIGHT)) m |= MOUSE_R;
        if (mb & SDL_BUTTON(SDL_BUTTON_MIDDLE)) m |= MOUSE_M;
    }
    {   // "Capture mouse": confine the cursor to the window while the game has the keyboard focus
        static int grabbed = -1;
        bool kfocus = (SDL_GetWindowFlags(g_win) & SDL_WINDOW_INPUT_FOCUS) != 0;
        int want = g_cfg.capture_mouse && kfocus && !overlay_open();
        if (want != grabbed) { SDL_SetWindowGrab(g_win, want ? SDL_TRUE : SDL_FALSE); grabbed = want; }
    }
    bool motion = update_motion(dt, focus, mb, rx, ry);   // simulated Wii Remote motion (right stick, keys, mouse)
    if (motion) { mx = last_mx; my = last_my; }            // the pointer stays put while the mouse turns the remote
    if (mx != last_mx || my != last_my) { use_pad = false; last_mx = mx; last_my = my; }
    float sx = lx, sy = ly;   // the right stick turns the remote instead
    if (sx || sy) {
        if (!use_pad) { cx = g_host_input.pvalid ? g_host_input.px : 0.5f; cy = g_host_input.pvalid ? g_host_input.py : 0.5f; }
        use_pad = true;
        const float speed = 0.9f;   // picture widths per second at full tilt
        cx = std::max(0.f, std::min(1.f, cx + sx * std::fabs(sx) * speed * dt));
        cy = std::max(0.f, std::min(1.f, cy - sy * std::fabs(sy) * speed * dt * (g_cfg.widescreen ? 16.f / 9 : 4.f / 3)));
    }
    if (use_pad) {
        g_host_input.px = cx; g_host_input.py = cy; g_host_input.pvalid = true;
    } else {
        float dx, dy, dw, dh;
        picture_rect(ww, wh, dx, dy, dw, dh);
        float u = (mx + 0.5f - dx) / dw, v = (my + 0.5f - dy) / dh;
        g_host_input.px = u; g_host_input.py = v;
        g_host_input.pvalid = focus && u >= 0 && u <= 1 && v >= 0 && v <= 1;
    }
    g_host_input.mouse = m;
    if (motion) g_host_input.mouse &= ~MOUSE_M;
    // the game draws its own crosshair: hide the system cursor over the picture
    bool show = (overlay_open() || !g_host_input.pvalid) && !use_pad && !motion;
    static int shown = -1;
    if (shown != (int)show) { SDL_ShowCursor(show ? SDL_ENABLE : SDL_DISABLE); shown = show; }
}

static void update_input() {
    const Uint8* k = SDL_GetKeyboardState(nullptr);
    uint32_t b = 0;
    float lx = 0, ly = 0;
    if (k[SDL_SCANCODE_UP] || k[SDL_SCANCODE_DOWN] || k[SDL_SCANCODE_LEFT] || k[SDL_SCANCODE_RIGHT]) b |= IN_KB_ARROWS;
    if (k[SDL_SCANCODE_UP]) b |= IN_UP;
    if (k[SDL_SCANCODE_DOWN]) b |= IN_DOWN;
    if (k[SDL_SCANCODE_LEFT]) b |= IN_LEFT;
    if (k[SDL_SCANCODE_RIGHT]) b |= IN_RIGHT;
    if (k[SDL_SCANCODE_I]) b |= IN_ALT_UP;
    if (k[SDL_SCANCODE_K]) b |= IN_ALT_DOWN;
    if (k[SDL_SCANCODE_J]) b |= IN_ALT_LEFT;
    if (k[SDL_SCANCODE_L]) b |= IN_ALT_RIGHT;
    if (k[SDL_SCANCODE_X]) b |= IN_SOUTH;
    if (k[SDL_SCANCODE_Z]) b |= IN_EAST;
#ifdef G_NUNCHUK
    // Nunchuk games: WASD is the Nunchuk stick, Space = A, 1/2 = the remote's 1/2
    if (k[SDL_SCANCODE_A]) lx -= 1;
    if (k[SDL_SCANCODE_D]) lx += 1;
    if (k[SDL_SCANCODE_W]) ly += 1;
    if (k[SDL_SCANCODE_S]) ly -= 1;
    if (k[SDL_SCANCODE_SPACE]) b |= IN_SOUTH;
    if (k[SDL_SCANCODE_1]) b |= IN_WEST;
    if (k[SDL_SCANCODE_2]) b |= IN_NORTH;
#else
    if (k[SDL_SCANCODE_A]) b |= IN_WEST;
    if (k[SDL_SCANCODE_S]) b |= IN_NORTH;
#endif
    if (k[SDL_SCANCODE_LSHIFT] || k[SDL_SCANCODE_RSHIFT]) b |= IN_L2;
    if (k[SDL_SCANCODE_C]) b |= IN_R1;
    if (k[SDL_SCANCODE_RETURN]) b |= IN_START;
    if (k[SDL_SCANCODE_BACKSPACE]) b |= IN_BACK;
    if (k[SDL_SCANCODE_H]) b |= IN_GUIDE;
#ifndef G_NUNCHUK
    if (k[SDL_SCANCODE_Q]) b |= IN_L1;
    if (k[SDL_SCANCODE_W]) b |= IN_R1;
    if (k[SDL_SCANCODE_1]) b |= IN_L2;
    if (k[SDL_SCANCODE_2]) b |= IN_R2;
    if (k[SDL_SCANCODE_SPACE]) b |= IN_R2;
#endif
    if (k[SDL_SCANCODE_TAB]) b |= IN_TURBO;
    float rx = 0, ry = 0, lt = 0, rt = 0;
    if (k[SDL_SCANCODE_J]) rx = -1; if (k[SDL_SCANCODE_L]) rx = 1;
    if (k[SDL_SCANCODE_I]) ry = 1; if (k[SDL_SCANCODE_K]) ry = -1;
    if (g_pad) {
        auto btn = [&](SDL_GameControllerButton x) { return SDL_GameControllerGetButton(g_pad, x) != 0; };
        if (btn(SDL_CONTROLLER_BUTTON_DPAD_UP)) b |= IN_UP;
        if (btn(SDL_CONTROLLER_BUTTON_DPAD_DOWN)) b |= IN_DOWN;
        if (btn(SDL_CONTROLLER_BUTTON_DPAD_LEFT)) b |= IN_LEFT;
        if (btn(SDL_CONTROLLER_BUTTON_DPAD_RIGHT)) b |= IN_RIGHT;
        const bool sw = g_cfg.swap_ab_xy;
        if (btn(SDL_CONTROLLER_BUTTON_A)) b |= sw ? IN_EAST : IN_SOUTH;
        if (btn(SDL_CONTROLLER_BUTTON_B)) b |= sw ? IN_SOUTH : IN_EAST;
        if (btn(SDL_CONTROLLER_BUTTON_X)) b |= sw ? IN_NORTH : IN_WEST;
        if (btn(SDL_CONTROLLER_BUTTON_Y)) b |= sw ? IN_WEST : IN_NORTH;
        if (btn(SDL_CONTROLLER_BUTTON_LEFTSHOULDER)) b |= IN_L1;
        if (btn(SDL_CONTROLLER_BUTTON_RIGHTSHOULDER)) b |= IN_R1;
        if (SDL_GameControllerGetAxis(g_pad, SDL_CONTROLLER_AXIS_TRIGGERLEFT) > 16000) b |= IN_L2;
        if (SDL_GameControllerGetAxis(g_pad, SDL_CONTROLLER_AXIS_TRIGGERRIGHT) > 16000) b |= IN_R2;
        if (btn(SDL_CONTROLLER_BUTTON_START)) b |= IN_START;
        if (btn(SDL_CONTROLLER_BUTTON_BACK)) b |= IN_BACK;
        if (btn(SDL_CONTROLLER_BUTTON_GUIDE)) b |= IN_GUIDE;
        if (btn(SDL_CONTROLLER_BUTTON_RIGHTSTICK)) b |= IN_TURBO;
        auto axis = [&](SDL_GameControllerAxis a) {
            float v = SDL_GameControllerGetAxis(g_pad, a) / 32767.f;
            const float dz = 0.2f;   // dead zone
            if (std::fabs(v) < dz) return 0.f;
            return (v > 0 ? v - dz : v + dz) / (1 - dz);
        };
        if (float v = axis(SDL_CONTROLLER_AXIS_LEFTX)) lx = v;
        if (float v = -axis(SDL_CONTROLLER_AXIS_LEFTY)) ly = v;
        float px = axis(SDL_CONTROLLER_AXIS_RIGHTX), py = -axis(SDL_CONTROLLER_AXIS_RIGHTY);
        if (px || py) { rx = px; ry = py; }
        lt = std::max(lt, SDL_GameControllerGetAxis(g_pad, SDL_CONTROLLER_AXIS_TRIGGERLEFT) / 32767.f);
        rt = std::max(rt, SDL_GameControllerGetAxis(g_pad, SDL_CONTROLLER_AXIS_TRIGGERRIGHT) / 32767.f);
    }
    if (b & IN_L2) lt = 1;
    if (b & IN_R2) rt = 1;
#ifdef G_NUNCHUK
    update_pointer(rx, ry, 0, 0);   // left stick = Nunchuk stick, right stick = pointer
#else
    update_pointer(lx, ly, rx, ry);
#endif
#if defined(G_RELOAD_OFFSCREEN) || defined(G_RELOAD_BUTTON)
    // reload by pointing away from the screen: middle mouse button, V, or LB / LT on a gamepad
    g_host_input.reload = (g_host_input.mouse & MOUSE_M) || k[SDL_SCANCODE_V] ||
        (g_pad && (SDL_GameControllerGetButton(g_pad, SDL_CONTROLLER_BUTTON_LEFTSHOULDER) ||
                   SDL_GameControllerGetAxis(g_pad, SDL_CONTROLLER_AXIS_TRIGGERLEFT) > 16000));
#endif
    if (overlay_open()) { b = 0; lx = ly = rx = ry = lt = rt = 0; g_host_input.mouse = 0; g_host_input.reload = false; }   // the menu owns the controls while open
    g_host_input.rx = std::max(-1.f, std::min(1.f, rx));
    g_host_input.ry = std::max(-1.f, std::min(1.f, ry));
    g_host_input.lt = std::max(0.f, std::min(1.f, lt));
    g_host_input.rt = std::max(0.f, std::min(1.f, rt));
    g_host_input.buttons = b;
    g_host_input.lx = std::max(-1.f, std::min(1.f, lx));
    g_host_input.ly = std::max(-1.f, std::min(1.f, ly));
}

static std::atomic<bool> g_vsync_dirty{false};

static void apply_action(int a) {
    if (a == OV_FULLSCREEN) SDL_SetWindowFullscreen(g_win, g_cfg.fullscreen ? SDL_WINDOW_FULLSCREEN_DESKTOP : 0);
    else if (a == OV_VSYNC) g_vsync_dirty = true;
    else if (a == OV_QUIT) exit(0);
}

// Window/input pump (UI thread only).
bool gl_platform_poll() { return true; }
static bool ui_poll() {
    SDL_Event e;
    while (SDL_PollEvent(&e)) {
        if (e.type == SDL_QUIT) exit(0);
        if (e.type == SDL_KEYDOWN) {
            SDL_Keycode k = e.key.keysym.sym;
            if (k == SDLK_F1 || k == SDLK_ESCAPE) {
                if (overlay_open() && k == SDLK_ESCAPE) overlay_input(OV_KEY_BACK);
                else overlay_toggle();
            } else if (k == SDLK_F11 || (k == SDLK_RETURN && (e.key.keysym.mod & KMOD_ALT))) {
                g_cfg.fullscreen = !g_cfg.fullscreen;
                config_save();
                apply_action(OV_FULLSCREEN);
            } else if (overlay_open()) {
                int key = -1;
                if (k == SDLK_UP) key = OV_KEY_UP;
                else if (k == SDLK_DOWN) key = OV_KEY_DOWN;
                else if (k == SDLK_LEFT) key = OV_KEY_LEFT;
                else if (k == SDLK_RIGHT) key = OV_KEY_RIGHT;
                else if (k == SDLK_RETURN || k == SDLK_SPACE || k == SDLK_x) key = OV_KEY_OK;
                else if (k == SDLK_BACKSPACE || k == SDLK_z) key = OV_KEY_BACK;
                if (key >= 0) apply_action(overlay_input(key));
            }
        }
        if (e.type == SDL_CONTROLLERBUTTONDOWN && g_pad) {
            int btn = e.cbutton.button;
            bool start = SDL_GameControllerGetButton(g_pad, SDL_CONTROLLER_BUTTON_START);
            bool back = SDL_GameControllerGetButton(g_pad, SDL_CONTROLLER_BUTTON_BACK);
            if ((btn == SDL_CONTROLLER_BUTTON_START && back) || (btn == SDL_CONTROLLER_BUTTON_BACK && start)) overlay_toggle();
            else if (overlay_open()) {
                int key = -1;
                if (btn == SDL_CONTROLLER_BUTTON_DPAD_UP) key = OV_KEY_UP;
                else if (btn == SDL_CONTROLLER_BUTTON_DPAD_DOWN) key = OV_KEY_DOWN;
                else if (btn == SDL_CONTROLLER_BUTTON_DPAD_LEFT) key = OV_KEY_LEFT;
                else if (btn == SDL_CONTROLLER_BUTTON_DPAD_RIGHT) key = OV_KEY_RIGHT;
                else if (btn == SDL_CONTROLLER_BUTTON_A) key = g_cfg.swap_ab_xy ? OV_KEY_BACK : OV_KEY_OK;
                else if (btn == SDL_CONTROLLER_BUTTON_B) key = g_cfg.swap_ab_xy ? OV_KEY_OK : OV_KEY_BACK;
                if (key >= 0) apply_action(overlay_input(key));
            }
        }
        if (e.type == SDL_MOUSEWHEEL && !overlay_open()) g_wheel += e.wheel.y;
        if (e.type == SDL_CONTROLLERDEVICEADDED && !g_pad) {
            g_pad = SDL_GameControllerOpen(e.cdevice.which);
            if (g_pad) fprintf(stderr, "[input] controller: %s\n", SDL_GameControllerName(g_pad));
        }
        if (e.type == SDL_CONTROLLERDEVICEREMOVED && g_pad &&
            e.cdevice.which == SDL_JoystickInstanceID(SDL_GameControllerGetJoystick(g_pad))) {
            SDL_GameControllerClose(g_pad); g_pad = nullptr;
        }
    }
    wiimote_poll();
    update_input();
    return true;
}

// Called on the emulation thread with the finished frame (top-down texture rows).
void gl_platform_present(unsigned tex, int w, int h) {
    if (!g_present_fbo) glGenFramebuffers(1, &g_present_fbo);
    static GLuint dst_fbo = 0;
    if (!dst_fbo) glGenFramebuffers(1, &dst_fbo);
    int s;
    {
        std::lock_guard<std::mutex> g(g_pm);
        for (s = 0; s < 3; s++) if (s != g_ready && s != g_showing) break;
    }
    Slot& sl = g_slots[s];
    if (!sl.tex || sl.w != w || sl.h != h) {
        if (!sl.tex) glGenTextures(1, &sl.tex);
        glBindTexture(GL_TEXTURE_2D, sl.tex);
        glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA8, w, h, 0, GL_RGBA, GL_UNSIGNED_BYTE, nullptr);
        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
        sl.w = w; sl.h = h;
    }
    glBindFramebuffer(GL_READ_FRAMEBUFFER, g_present_fbo);
    glFramebufferTexture2D(GL_READ_FRAMEBUFFER, GL_COLOR_ATTACHMENT0, GL_TEXTURE_2D, tex, 0);
    glBindFramebuffer(GL_DRAW_FRAMEBUFFER, dst_fbo);
    glFramebufferTexture2D(GL_DRAW_FRAMEBUFFER, GL_COLOR_ATTACHMENT0, GL_TEXTURE_2D, sl.tex, 0);
    glDisable(GL_SCISSOR_TEST);
    glBlitFramebuffer(0, 0, w, h, 0, 0, w, h, GL_COLOR_BUFFER_BIT, GL_NEAREST);
    GLsync f = glFenceSync(GL_SYNC_GPU_COMMANDS_COMPLETE, 0);
    glFlush();
    {
        std::lock_guard<std::mutex> g(g_pm);
        if (g_ready >= 0 && g_slots[g_ready].fence) { glDeleteSync(g_slots[g_ready].fence); g_slots[g_ready].fence = nullptr; }
        sl.fence = f;
        g_ready = s;
    }
    g_pcv.notify_one();
    gl_platform_poll();
}

// Final scaling of the frame to the window. Downscaling (internal resolution above the
// window size) averages a grid of bilinear taps across each window pixel's footprint
// so the extra resolution becomes anti-aliasing instead of shimmer; upscaling is bilinear.
static GLuint g_scale_prog = 0, g_scale_vao = 0;
static GLint g_u_src = -1, g_u_scale = -1, g_u_rect = -1;
static void init_scaler() {
    const char* vs = "#version 330 core\nuniform vec4 u_rect; out vec2 uv;\n"
        "void main(){ vec2 p = vec2(gl_VertexID & 1, gl_VertexID >> 1); uv = vec2(p.x, p.y);\n"
        " vec2 q = u_rect.xy + p * u_rect.zw; gl_Position = vec4(q.x * 2.0 - 1.0, 1.0 - q.y * 2.0, 0.0, 1.0); }\n";
    const char* fs = "#version 330 core\nin vec2 uv; uniform sampler2D u_src; uniform vec2 u_scale; out vec4 o;\n"
        "void main(){\n"
        " vec2 ts = vec2(textureSize(u_src, 0));\n"
        " vec2 n = clamp(ceil(u_scale), vec2(1.0), vec2(4.0));\n"   // taps per axis
        " vec2 fp = u_scale / ts;\n"                                  // footprint in uv
        " vec4 acc = vec4(0.0);\n"
        " for (int j = 0; j < 4; j++) for (int i = 0; i < 4; i++) {\n"
        "  if (float(i) >= n.x || float(j) >= n.y) continue;\n"
        "  vec2 off = (vec2(i, j) + 0.5) / n - 0.5;\n"
        "  acc += texture(u_src, uv + off * fp);\n"
        " }\n"
        " o = vec4(acc.rgb / (n.x * n.y), 1.0); }\n";
    auto sh = [](GLenum t, const char* src) { GLuint s = glCreateShader(t); glShaderSource(s, 1, &src, nullptr); glCompileShader(s); return s; };
    g_scale_prog = glCreateProgram();
    glAttachShader(g_scale_prog, sh(GL_VERTEX_SHADER, vs));
    glAttachShader(g_scale_prog, sh(GL_FRAGMENT_SHADER, fs));
    glLinkProgram(g_scale_prog);
    g_u_src = glGetUniformLocation(g_scale_prog, "u_src");
    g_u_scale = glGetUniformLocation(g_scale_prog, "u_scale");
    g_u_rect = glGetUniformLocation(g_scale_prog, "u_rect");
    glGenVertexArrays(1, &g_scale_vao);
}

static void present_thread() {
    SDL_GL_MakeCurrent(g_win, g_present_ctx);
    if (g_cfg.vsync) { if (SDL_GL_SetSwapInterval(-1) != 0) SDL_GL_SetSwapInterval(1); }
    else SDL_GL_SetSwapInterval(0);
    GLuint fbo = 0;
    glGenFramebuffers(1, &fbo);
    for (;;) {
        int s;
        GLsync f;
        {
            std::unique_lock<std::mutex> lk(g_pm);
            g_pcv.wait(lk, [] { return g_ready >= 0; });
            s = g_ready; g_ready = -1; g_showing = s;
            f = g_slots[s].fence; g_slots[s].fence = nullptr;
        }
        if (f) { glWaitSync(f, 0, GL_TIMEOUT_IGNORED); glDeleteSync(f); }
        Slot& sl = g_slots[s];
        int ww, wh;
        SDL_GL_GetDrawableSize(g_win, &ww, &wh);
        const int an = g_cfg.widescreen ? 16 : 4, ad = g_cfg.widescreen ? 9 : 3;
        int dw = ww, dh = ww * ad / an;
        if (dh > wh) { dh = wh; dw = wh * an / ad; }
        int dx = (ww - dw) / 2, dy = (wh - dh) / 2;
        glBindFramebuffer(GL_READ_FRAMEBUFFER, fbo);
        glFramebufferTexture2D(GL_READ_FRAMEBUFFER, GL_COLOR_ATTACHMENT0, GL_TEXTURE_2D, sl.tex, 0);
        glBindFramebuffer(GL_DRAW_FRAMEBUFFER, 0);
        glViewport(0, 0, ww, wh);
        glDisable(GL_SCISSOR_TEST);
        glClearColor(0, 0, 0, 1);
        glClear(GL_COLOR_BUFFER_BIT);
        glBindFramebuffer(GL_FRAMEBUFFER, 0);
        if (!g_scale_prog) init_scaler();
        glDisable(GL_BLEND); glDisable(GL_DEPTH_TEST); glDisable(GL_CULL_FACE);
        glUseProgram(g_scale_prog);
        glActiveTexture(GL_TEXTURE0);
        glBindTexture(GL_TEXTURE_2D, sl.tex);
        glUniform1i(g_u_src, 0);
        glUniform2f(g_u_scale, (float)sl.w / dw, (float)sl.h / dh);
        glUniform4f(g_u_rect, (float)dx / ww, (float)dy / wh, (float)dw / ww, (float)dh / wh);
        glBindVertexArray(g_scale_vao);
        glDrawArrays(GL_TRIANGLE_STRIP, 0, 4);
        overlay_draw(ww, wh);
        if (g_vsync_dirty.exchange(false)) {
            if (g_cfg.vsync) { if (SDL_GL_SetSwapInterval(-1) != 0) SDL_GL_SetSwapInterval(1); }
            else SDL_GL_SetSwapInterval(0);
        }
        SDL_GL_SwapWindow(g_win);
        { std::lock_guard<std::mutex> g(g_pm); g_showing = -1; }
    }
}
#endif
