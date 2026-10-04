// SoC testbench: the real RISC5 core in RTL plus memory, ROM and devices in C++.
//
// Why this and not the full design from RISC5Top.v: the RTL has wire-level interfaces
// (VGA pixel stream, bit-level PS/2, bit-level SPI with the SD card state machine), and
// emulating them is several days of work with waveforms that add nothing
// to the subject of the study. The core is here, and it is the real one; the peripherals
// are replaced by stubs with the SAME register interface to the bus (same addresses).
// The SD card logic is taken from the reference emulator (tb/disk/disk.c): it works on words,
// not bits, and maps onto the registers directly.
#include "VRISC5.h"
#include "VRISC5___024root.h"
#include "VRISC5_RISC5.h"
#include "VRISC5_Registers.h"
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <vector>
#include <string>
// Verilator builds disk.c as C++, so extern "C" is not needed;
// otherwise the declarations and definitions would disagree on name mangling.
#include "disk/risc-io.h"
#include "disk/disk.h"
#include "memdisk.h"
#include "scenario.h"
#include "cycle_model.h"

static const uint32_t MEM_WORDS   = 1 << 18;        // 1 MB
static const uint32_t ROM_BASE    = 0x00FFC000;     // ROM window on the CODE bus
static const uint32_t IO_BASE     = 0x00FFFFC0;     // top 64 bytes
static const uint32_t DISPLAY_ORG = 0x000E7F00;     // framebuffer

struct SoC {
    VRISC5* top;
    std::vector<uint32_t> ram;
    std::vector<uint32_t> rom;
    const struct RISC_SPI* spi = nullptr;
    MemDisk* mdisk = nullptr;          // alternative in-memory disk
    uint32_t spi_selected = 0;
    uint64_t cycles = 0, insns = 0;
    uint64_t model_cycles = 0, model_fails = 0;   // cycle model check against RTL
    CycleModel model;
    uint32_t ms = 0;                // millisecond counter
    uint32_t leds = 0;
    // ── input ───────────────────────────────────────────────────────────
    // The mouse register format is taken from Input.Mod:
    //   keys = w DIV 1000000H MOD 8   -> bits 24..26
    //   x = w MOD 1000H, y = (w DIV 1000H) MOD 1000H
    // In the keys set: element 2 (bit 26) is left, 1 (bit 25) is middle,
    // 0 (bit 24) is right. Keyboard ready is bit 28 of the same word.
    uint32_t mouse_reg = 0;
    uint8_t  kbd[1024]; int kbd_head = 0, kbd_tail = 0;   // long command lines

    void set_mouse(int x, int y, int keys) {
        if (x < 0) x = 0; if (x > 1023) x = 1023;
        if (y < 0) y = 0; if (y > 767) y = 767;
        mouse_reg = ((uint32_t)keys & 7) << 24
                  | ((uint32_t)y & 0xFFF) << 12 | ((uint32_t)x & 0xFFF);
    }
    void push_key(uint8_t code) {
        int n = (kbd_head + 1) & 1023;
        if (n != kbd_tail) { kbd[kbd_head] = code; kbd_head = n; }
    }

    SoC() : ram(MEM_WORDS, 0), rom(512, 0) { top = new VRISC5; }
    ~SoC() { top->final(); delete top; }

    bool     stall() const { return top->rootp->RISC5->stall; }
    uint32_t pc()    const { return top->rootp->RISC5->PC; }
    uint32_t ir()    const { return top->rootp->RISC5->IR; }
    uint32_t reg(int i) const { return top->rootp->RISC5->regs->R[i]; }

    bool load_prom(const char* path) {
        FILE* f = fopen(path, "r");
        if (!f) return false;
        char line[64]; size_t i = 0;
        while (i < rom.size() && fgets(line, sizeof line, f))
            rom[i++] = (uint32_t)strtoul(line, nullptr, 16);
        fclose(f);
        printf("  ROM: %zu words from %s\n", i, path);
        return i > 0;
    }

    // CODE bus: ROM window or RAM (RISC5Top.v:84)
    uint32_t read_code(uint32_t a) {
        if ((a >> 14) == (ROM_BASE >> 14)) return rom[(a >> 2) & 511];
        return ram[(a >> 2) & (MEM_WORDS - 1)];
    }
    // DATA bus: RAM or device registers. The ROM is NOT ACCESSIBLE on the data bus.
    uint32_t read_data(uint32_t a) {
        if ((a & 0xFFFFC0u) == (IO_BASE & 0xFFFFC0u) && (a >> 6) == (IO_BASE >> 6))
            return read_io((a >> 2) & 15);
        return ram[(a >> 2) & (MEM_WORDS - 1)];
    }
    void write_data(uint32_t a, uint32_t v, bool ben) {
        if ((a >> 6) == (IO_BASE >> 6)) { write_io((a >> 2) & 15, v); return; }
        uint32_t i = (a >> 2) & (MEM_WORDS - 1);
        if (!ben) { ram[i] = v; return; }
        uint32_t mask = 0xFFu << ((a & 3) * 8);
        ram[i] = (ram[i] & ~mask) | (v & mask);
    }
    uint32_t read_io(uint32_t w) {
        switch (w) {
            case 0: return ms;                       // milliseconds
            case 1: return 0;                        // buttons and switches
            case 2: return 0;                        // RS-232 data
            case 3: return 2;                        // RS-232: transmitter ready
            case 4: return mdisk ? mdisk->read() : (spi ? spi->read_data(spi) : 0xFFFFFFFFu);
            case 5: return 1;                        // SPI always ready
            case 6: return mouse_reg | (kbd_head != kbd_tail ? 0x10000000u : 0u);
            case 7: {
                if (kbd_head == kbd_tail) return 0;
                uint8_t c = kbd[kbd_tail]; kbd_tail = (kbd_tail + 1) & 1023; return c;
            }
            default: return 0;
        }
    }
    void write_io(uint32_t w, uint32_t v) {
        switch (w) {
            case 1: leds = v & 0xFF; break;
            case 4: if (mdisk) mdisk->write(v); else if (spi) spi->write_data(spi, v); break;
            case 5: spi_selected = v & 3; break;
            default: break;
        }
    }
    void reset() {
        // The bus must be served from memory during reset too: the instruction register
        // latches every cycle (RISC5.v:173 IR <= stall ? IR : codebus),
        // and if zeros are supplied, the very first instruction executes as MOV R0,R0
        // instead of the jump out of the boot loader. This is exactly what tripped me up.
        top->rst = 0; top->irq = 0; top->stallX = 0;
        for (int i = 0; i < 4; i++) {
            top->clk = 0; top->eval();
            top->codebus = read_code(top->adr); top->inbus = read_data(top->adr);
            top->eval();
            top->clk = 1; top->eval();
        }
        top->rst = 1;
        top->clk = 0; top->eval();
        top->codebus = read_code(top->adr); top->inbus = read_data(top->adr);
        top->eval();
    }
    // Step until the instruction retires. Returns the number of cycles.
    int step() {
        int n = 0;
        // The cycle model (tb/cycle_model.h) used to be checked only on 61 instructions
        // of synthetic tests. Here it is checked against RTL on a REAL workload:
        // booting the system, i.e. on code that Wirth wrote.
        // ⚠ Reading via top->adr HERE is wrong: the bus settles only after
        // clk=0 + eval(). Until then it holds the previous cycle's address. Take PC directly,
        // as tb/run_tests.cpp does, where the model agreed with zero mismatches.
        uint32_t insn_for_model = read_code(top->rootp->RISC5->PC * 4);
        int predicted = model.cycles(insn_for_model);
        for (;;) {
            top->clk = 0; top->eval();
            uint32_t a = top->adr;
            // One address bus: during stallL0 it carries data, otherwise the next PC.
            top->codebus = read_code(a);
            top->inbus   = read_data(a);
            top->eval();
            bool ret = !stall();
            if (top->wr) write_data(a, top->outbus, top->ben);
            top->clk = 1; top->eval();
            cycles++; n++;
            if ((cycles % 25000) == 0) ms++;          // 25 MHz -> 1 kHz
            if (ret) {
                insns++;
                model_cycles += predicted;
                if (predicted != n) model_fails++;
                return n;
            }
            if (n > 400) return -1;
        }
    }
    // Framebuffer checksum: a sign that the system is drawing
    uint32_t fb_crc() const {
        uint32_t c = 0;
        for (uint32_t i = 0; i < 1024 * 768 / 32; i++)
            c = c * 31 + ram[(DISPLAY_ORG >> 2) + i];
        return c;
    }
};

// Input script: lines of the form "<instruction> <action> <arguments>".
//   M x y keys   - set the mouse (keys: 4 left, 2 middle, 1 right, 0 released)
//   K code       - send a PS/2 scan code
//   S file       - dump the screen to a file
// This machine's screen for the portable skeleton (tb/scenario.h).
// The only machine-specific parts: where the framebuffer is, how large it is,
// and that lines are stored BOTTOM UP (VID.v: vidadr = Org +
// {3'b0, ~vcnt, hword}); a naive dump gives an upside-down screen.
static harness::Screen soc_screen(SoC& s) {
    return { &s.ram[DISPLAY_ORG >> 2], 1024, 768, /*bottom_up=*/true };
}

static void dump_screen(SoC& s, const char* path) {
    if (harness::dump_pbm(soc_screen(s), path))
        printf("  screen dumped: %s\n", path);
}

// Machine adapter: three actions; the portable skeleton needs nothing more.
struct SoCHost : harness::Host {
    SoC& s;
    explicit SoCHost(SoC& m) : s(m) {}
    void set_mouse(int x, int y, int keys) override { s.set_mouse(x, y, keys); }
    void push_key(uint8_t code) override { s.push_key(code); }
    harness::Screen screen() override { return soc_screen(s); }
};

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    SoC s;
    std::string prom = "rtl/prom.mem", dsk = "ext/disk/Oberon-2016-08-02.dsk";
    uint64_t maxi = 50000000; int trace = 0;
    uint32_t expect_crc = 0;      // if set, compare and return an error code
    std::string script_path;
    // ⚠ Found while working on the bootstrap: the disk emulator opens the image
    // as "rb+" and writes real sectors into it. The testbench used to take the
    // REFERENCE image from ext/ by default, so every system boot silently
    // modified the source of truth. Now it works on a copy in build/ by default,
    // and only an explicit --persist allows writing to the given file.
    bool persist = false;
    for (int i = 1; i < argc; i++) {
        std::string a = argv[i];
        if (a.rfind("--prom=", 0) == 0) prom = a.substr(7);
        else if (a.rfind("--disk=", 0) == 0) dsk = a.substr(7);
        else if (a.rfind("--max=", 0) == 0) maxi = strtoull(a.c_str() + 6, nullptr, 10);
        else if (a.rfind("--trace=", 0) == 0) trace = atoi(a.c_str() + 8);
        else if (a.rfind("--expect-crc=", 0) == 0)
            expect_crc = (uint32_t)strtoul(a.c_str() + 13, nullptr, 16);
        else if (a.rfind("--script=", 0) == 0) script_path = a.substr(9);
        else if (a == "--persist") persist = true;
        else if (a == "--memdisk") { /* see below */ }
    }
    if (!s.load_prom(prom.c_str())) { fprintf(stderr, "no ROM %s\n", prom.c_str()); return 1; }
    bool use_mem = false;
    for (int i = 1; i < argc; i++) if (std::string(argv[i]) == "--memdisk") use_mem = true;
    if (use_mem) {
        FILE* f = fopen(dsk.c_str(), "rb");
        if (!f) { fprintf(stderr, "no image %s\n", dsk.c_str()); return 1; }
        fseek(f, 0, SEEK_END); long n = ftell(f); fseek(f, 0, SEEK_SET);
        std::vector<uint8_t> buf(n); fread(buf.data(), 1, n, f); fclose(f);
        s.mdisk = new MemDisk(); s.mdisk->init(buf.data(), buf.size());
        printf("  in-memory disk: %ld bytes\n", n);
    } else {
        if (!persist) {
            std::string base = dsk.substr(dsk.find_last_of('/') + 1);
            std::string work = "build/" + base + ".work";
            FILE* in = fopen(dsk.c_str(), "rb");
            if (!in) { fprintf(stderr, "no image %s\n", dsk.c_str()); return 1; }
            FILE* out = fopen(work.c_str(), "wb");
            if (!out) { fprintf(stderr, "cannot create %s\n", work.c_str()); return 1; }
            char buf[65536]; size_t n;
            while ((n = fread(buf, 1, sizeof buf, in)) > 0) fwrite(buf, 1, n, out);
            fclose(in); fclose(out);
            dsk = work;
        }
        s.spi = disk_new(dsk.c_str());
        if (!s.spi) { fprintf(stderr, "no disk image %s\n", dsk.c_str()); return 1; }
    }
    printf("  disk: %s\n", dsk.c_str());

    s.reset();
    printf("  PC after reset: %06X (expected FFE000)\n\n", s.pc() * 4);

    harness::Player player;
    SoCHost host(s);
    player.load(script_path);

    uint32_t last_crc = 0; uint64_t first_draw = 0;
    for (uint64_t k = 0; k < maxi; k++) {
        player.advance(k, host);
        uint32_t before = s.pc();
        if (trace && (int)k < trace)
            printf("    [%6llu] PC=%06X IR=%08X\n", (unsigned long long)k, before * 4, s.read_code(before * 4));
        int n = s.step();
        if (n < 0) { printf("  HUNG at PC=%06X IR=%08X\n", before * 4, s.ir()); break; }
        if (!first_draw && (k & 0xFFFF) == 0) {
            uint32_t c = s.fb_crc();
            if (c != last_crc && k > 0) { first_draw = k; }
            last_crc = c;
        }
        if (s.pc() == before && n == 1) { printf("  HALT (branch to itself) at PC=%06X\n", before * 4); break; }
    }
    printf("\n  instructions %llu, cycles %llu\n",
           (unsigned long long)s.insns, (unsigned long long)s.cycles);
    printf("  cycle model: predicted %llu, mismatches %llu (%.4f%%)  %s\n",
           (unsigned long long)s.model_cycles, (unsigned long long)s.model_fails,
           s.insns ? 100.0 * s.model_fails / s.insns : 0.0,
           s.model_fails ? "❌" : "✅");
    if (s.model_cycles != s.cycles)
        printf("  ⚠ model total %llu vs RTL %llu: off by %+lld cycles (%+.4f%%)\n",
               (unsigned long long)s.model_cycles, (unsigned long long)s.cycles,
               (long long)s.model_cycles - (long long)s.cycles,
               100.0 * ((double)s.model_cycles - (double)s.cycles) / (double)s.cycles);
    printf("  PC=%06X  framebuffer checksum %08X\n", s.pc() * 4, s.fb_crc());
    // Dump the framebuffer to PBM. IMPORTANT: lines are stored BOTTOM UP
    // (VID.v: vidadr = Org + {3'b0, ~vcnt, hword}); a naive dump gives an
    // upside-down screen.
    dump_screen(s, "build/screen.pbm");
    if (first_draw) printf("  first framebuffer write near instruction %llu\n",
                           (unsigned long long)first_draw);

    // ⚠ Found by the audit: the checksum used to be printed and compared with
    // nothing, and the program always returned 0. A machine stuck in ROM
    // with a blank screen reported success.
    if (expect_crc) {
        uint32_t got = s.fb_crc();
        if (got != expect_crc) {
            printf("\n  ❌ SCREEN MISMATCH: %08X, expected %08X\n", got, expect_crc);
            return 1;
        }
        printf("  ✅ screen matches the reference (%08X)\n", got);
        if (s.model_fails) { printf("  ❌ cycle model diverged\n"); return 1; }
    }
    return 0;
}
