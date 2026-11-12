// Disc access: the SDK DVD library runs recompiled; /dev/di is serviced from
// the extracted file tree using the disc's FST.
#include <mutex>
#include <chrono>
#include "hle.h"
#include <vector>
#include <map>
#include <string>
#include <algorithm>

struct FstFile { uint64_t off; uint32_t size; std::string path; };
static std::vector<FstFile> g_files;          // sorted by offset
static std::string g_root;
static std::vector<uint8_t> g_boot;

static std::vector<uint8_t> slurp(const std::string& p) {
    std::vector<uint8_t> v;
    FILE* f = fopen(p.c_str(), "rb");
    if (!f) return v;
    fseek(f, 0, SEEK_END); v.resize(ftell(f)); fseek(f, 0, SEEK_SET);
    if (fread(v.data(), 1, v.size(), f) != v.size()) v.clear();
    fclose(f);
    return v;
}
static uint32_t be(const uint8_t* p) { return (p[0] << 24) | (p[1] << 16) | (p[2] << 8) | p[3]; }

// Load FST into guest memory (like the apploader) and index it on the host.
void dvd_init(const char* root) {
    g_root = root;
    g_boot = slurp(g_root + "/sys/boot.bin");
    auto fst = slurp(g_root + "/sys/fst.bin");
    if (fst.empty()) { fprintf(g_log, "[dvd] no fst.bin\n"); return; }
    uint32_t sz = (uint32_t)fst.size();
    uint32_t addr = (0x81800000u - 0x2000u - sz) & ~31u;
    memcpy(MEM + addr, fst.data(), sz);
    W32(0x80000038u, addr);
    W32(0x8000003Cu, sz);
    W32(0x80000034u, addr);          // arena hi below the FST
    W32(0x80003110u, addr);
    // index
    uint32_t n = be(&fst[8]);
    const char* names = (const char*)&fst[n * 12];
    std::vector<std::pair<uint32_t, std::string>> dirs;   // (end index, path)
    std::string cur = "";
    std::vector<uint32_t> ends{n};
    std::vector<std::string> paths{""};
    for (uint32_t i = 1; i < n; i++) {
        while (i >= ends.back()) { ends.pop_back(); paths.pop_back(); }
        const uint8_t* e = &fst[i * 12];
        bool dir = e[0] != 0;
        std::string name = names + (be(e) & 0xFFFFFF);
        std::string full = paths.back() + "/" + name;
        if (dir) { ends.push_back(be(e + 8)); paths.push_back(full); }
        else g_files.push_back({(uint64_t)be(e + 4) << 2, be(e + 8), full});
    }
    std::sort(g_files.begin(), g_files.end(), [](auto& a, auto& b) { return a.off < b.off; });
    fprintf(g_log, "[dvd] FST at %08X (%u bytes), %zu files\n", addr, sz, g_files.size());
}

uint32_t g_dvd_last_len = 0;   // bytes of the last disc read (hle_ios.cpp: completion delay)

// Read `len` bytes at partition offset `off` into guest memory.
static bool dvd_read(uint32_t dst, uint32_t len, uint64_t off) {
    g_dvd_last_len = len;
    auto diag_t0 = std::chrono::steady_clock::now();
    struct DiagDone { std::chrono::steady_clock::time_point t0; ~DiagDone() {
        g_diag_dvd++; g_diag_dvd_us += (uint64_t)std::chrono::duration_cast<std::chrono::microseconds>(std::chrono::steady_clock::now() - t0).count(); } } diag_done{diag_t0};
    auto it = std::upper_bound(g_files.begin(), g_files.end(), off, [](uint64_t o, const FstFile& f) { return o < f.off; });
    if (it == g_files.begin()) { fprintf(g_log, "[dvd] read %llX: before first file\n", (unsigned long long)off); return false; }
    --it;
    if (off >= it->off + it->size + 0x8000) { fprintf(g_log, "[dvd] read %llX: no file\n", (unsigned long long)off); return false; }
    // keep a few files open: games read in tiny pieces (Martian Panic's level loader reads 32 bytes at a
    // time), and opening a file per read is slow on Windows (virus scanner hooks on every open)
    struct Open { const FstFile* file; FILE* f; uint64_t used; };
    static Open open_files[16] = {};
    static uint64_t use_clock = 0;
    static std::mutex mx;
    std::lock_guard<std::mutex> lock(mx);
    Open* slot = nullptr;
    for (auto& o : open_files) if (o.f && o.file == &*it) { slot = &o; break; }
    if (!slot) {
        slot = &open_files[0];
        for (auto& o : open_files) if (!o.f || o.used < slot->used) { slot = &o; if (!o.f) break; }
        if (slot->f) fclose(slot->f);
        std::string p = g_root + "/files" + it->path;
        slot->f = fopen(p.c_str(), "rb");
        slot->file = &*it;
        if (!slot->f) { fprintf(g_log, "[dvd] cannot open %s\n", p.c_str()); return false; }
    }
    slot->used = ++use_clock;
    FILE* f = slot->f;
    fseek(f, (long)(off - it->off), SEEK_SET);
    std::vector<uint8_t> buf(len, 0);
    size_t got = fread(buf.data(), 1, len, f);
    memcpy(MEM + (dst & 0x9FFFFFFFu), buf.data(), len);
    static int logged = 0;
    static const int lim = getenv("DVDLOG") ? 1 << 30 : 200;
    if (logged++ < lim) fprintf(g_log, "[dvd] read %s +%llX len %X -> %08X%s\n", it->path.c_str(), (unsigned long long)(off - it->off), len, dst, got < len ? " (short)" : "");
    return true;
}

// /dev/di ioctl handler. Returns DI status (1 = OK).
int32_t di_ioctl(uint32_t cmd, uint32_t in, uint32_t inlen, uint32_t out, uint32_t outlen) {
    uint32_t op = R8(in);   // first byte of the input block is the command
    (void)inlen;
    switch (op) {
        case 0x70:   // ReadDiskID
            for (uint32_t i = 0; i < 0x20 && i < outlen; i++) W8(out + i, g_boot[i]);
            return 1;
        case 0x71: { // Read
            uint32_t len = R32(in + 4), off = R32(in + 8);
            return dvd_read(out, len, (uint64_t)off << 2) ? 1 : 2;
        }
        case 0x88:   // GetCoverStatus
            if (outlen >= 4) W32(out, 2);
            return 1;
        case 0x7A:   // GetCoverRegister
            if (outlen >= 4) W32(out, 0);
            return 1;
        case 0xE0:   // RequestError
            if (outlen >= 4) W32(out, 0);
            return 1;
        default: {
            static int n = 0;
            if (n++ < 20) fprintf(g_log, "[dvd] di cmd %02X (cmd %X) -> OK\n", op, cmd);
        }
            return 1;
    }
}
