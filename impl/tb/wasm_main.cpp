// Browser entry point: the RISC5 core on the real RTL, compiled
// Verilator -> C++ -> Emscripten -> WASM. Peripherals are register stubs,
// the disk is in memory (the image comes from JS).
#include "VRISC5.h"
#include "VRISC5___024root.h"
#include "VRISC5_RISC5.h"
#include "VRISC5_Registers.h"
#include "memdisk.h"
#include "memradio.h"
#include <emscripten.h>
#include <cstdint>
#include <cstdlib>
#include <cstring>
#include <vector>

static const uint32_t MEM_WORDS   = 1 << 18;
static const uint32_t ROM_BASE    = 0x00FFC000;
static const uint32_t IO_BASE     = 0x00FFFFC0;
static const uint32_t DISPLAY_ORG = 0x000E7F00;
static const uint32_t FB_WORDS    = 1024 * 768 / 32;

static VRISC5* top = nullptr;
static std::vector<uint32_t> ram;
static uint32_t rom[512];
static MemDisk disk;
static MemRadio radio;
static uint32_t spi_ctrl = 0;             // port 5: bit 1 selects the radio instead of the disk
// RS232 receive: the machine's commands, which Boot.Mod reads and runs at start
static std::vector<uint8_t> serial_in; static size_t serial_pos = 0;
static uint32_t ms = 0;
// Cycles per millisecond of the machine's clock: 25000 is the board's 25 MHz.
// The cluster page sets fewer: the model runs well below 25 MHz in a browser,
// and protocols timed in machine seconds would crawl.
static uint64_t cycles_per_ms = 25000;
static uint64_t g_cycles = 0, g_insns = 0;
// Input
static uint32_t mouse_reg = 0;            // X | Y<<12 | buttons in 26/25/24
static uint8_t  kbd_buf[64]; static int kbd_head = 0, kbd_tail = 0;

static inline uint32_t read_code(uint32_t a) {
    if ((a >> 14) == (ROM_BASE >> 14)) return rom[(a >> 2) & 511];
    return ram[(a >> 2) & (MEM_WORDS - 1)];
}
static inline uint32_t read_data(uint32_t a) {
    if ((a >> 6) == (IO_BASE >> 6)) {
        switch ((a >> 2) & 15) {
            case 0: return ms;
            case 2: return serial_pos < serial_in.size() ? serial_in[serial_pos++] : 0;
            case 3: return 2u | (serial_pos < serial_in.size() ? 1u : 0u);
            case 4: return (spi_ctrl & 2) ? radio.read() : disk.read();
            case 5: return 1;
            case 6: return mouse_reg | (kbd_head != kbd_tail ? 0x10000000u : 0u);
            case 7: {
                if (kbd_head == kbd_tail) return 0;
                uint8_t c = kbd_buf[kbd_tail]; kbd_tail = (kbd_tail + 1) & 63; return c;
            }
            default: return 0;
        }
    }
    return ram[(a >> 2) & (MEM_WORDS - 1)];
}
static inline void write_data(uint32_t a, uint32_t v, bool ben) {
    if ((a >> 6) == (IO_BASE >> 6)) {
        switch ((a >> 2) & 15) {
            case 4: if (spi_ctrl & 2) radio.write(v, spi_ctrl & 4); else disk.write(v); break;
            case 5: spi_ctrl = v & 0xF; radio.ctrl(spi_ctrl); break;
        }
        return;
    }
    uint32_t i = (a >> 2) & (MEM_WORDS - 1);
    if (!ben) { ram[i] = v; return; }
    uint32_t m = 0xFFu << ((a & 3) * 8);
    ram[i] = (ram[i] & ~m) | (v & m);
}

extern "C" {

static void power_on();

EMSCRIPTEN_KEEPALIVE
void soc_init(const uint8_t* prom_words, int prom_n, const uint8_t* img, int img_len) {
    if (!top) top = new VRISC5;
    memset(rom, 0, sizeof rom);
    const uint32_t* pw = (const uint32_t*)prom_words;
    for (int i = 0; i < prom_n && i < 512; i++) rom[i] = pw[i];
    disk.init(img, (size_t)img_len);
    power_on();
}

// Power off and on: memory, processor, radio and serial line start afresh, the
// disk keeps what was written to it, as a real machine's SD card does. Kube's
// store survives this; a lab switches a machine off and on with it.
EMSCRIPTEN_KEEPALIVE
void soc_reboot() { power_on(); }

static void power_on() {
    ram.assign(MEM_WORDS, 0);
    radio.init(); spi_ctrl = 0; serial_pos = 0;
    ms = 0; g_cycles = g_insns = 0;
    kbd_head = kbd_tail = 0; mouse_reg = 0;

    // ⚠ A direct consequence of finding 19: RISC5.v has NO reset for the register file,
    // flags, H and IR. When the model is first created Verilator clears them itself, but on
    // a restart (the "Roll back" button in a lab) leftovers from the previous run
    // remain there, and the system does not boot: the screen stays blank.
    // Here the state is cleared explicitly. A real FPGA will not have this reset.
    {
        auto* R = top->rootp->RISC5;
        for (int i = 0; i < 16; i++) R->regs->R[i] = 0;
        R->N = R->Z = R->C = R->OV = 0;
        R->H = 0; R->IR = 0; R->SPC = 0;
        R->intEnb = 0; R->intMd = 0;
    }
    top->rst = 0; top->irq = 0; top->stallX = 0;
    for (int i = 0; i < 4; i++) {
        top->clk = 0; top->eval();
        top->codebus = read_code(top->adr); top->inbus = read_data(top->adr); top->eval();
        top->clk = 1; top->eval();
    }
    top->rst = 1; top->clk = 0; top->eval();
    top->codebus = read_code(top->adr); top->inbus = read_data(top->adr); top->eval();
}

// Run at most n instructions. Returns how many were executed.
EMSCRIPTEN_KEEPALIVE
int soc_run(int n) {
    int done = 0;
    for (int k = 0; k < n; k++) {
        int guard = 0;
        for (;;) {
            top->clk = 0; top->eval();
            uint32_t a = top->adr;
            top->codebus = read_code(a); top->inbus = read_data(a); top->eval();
            bool ret = !top->rootp->RISC5->stall;
            if (top->wr) write_data(a, top->outbus, top->ben);
            top->clk = 1; top->eval();
            g_cycles++;
            if ((g_cycles % cycles_per_ms) == 0) ms++;
            if (ret) { g_insns++; done++; break; }
            if (++guard > 400) return done;
        }
    }
    return done;
}

EMSCRIPTEN_KEEPALIVE uint32_t* soc_framebuffer() { return &ram[DISPLAY_ORG >> 2]; }
EMSCRIPTEN_KEEPALIVE int soc_fb_words() { return (int)FB_WORDS; }
EMSCRIPTEN_KEEPALIVE double soc_cycles() { return (double)g_cycles; }
EMSCRIPTEN_KEEPALIVE double soc_insns()  { return (double)g_insns; }
EMSCRIPTEN_KEEPALIVE uint32_t soc_pc()   { return top->rootp->RISC5->PC * 4; }

/* ── machine state access for the labs ───────────────────────────────────────
   A lab without a check is a demonstration, not an assignment. For the check
   to be real it must see what a debugger sees: registers, flags,
   memory and disk contents. All read-only. */
EMSCRIPTEN_KEEPALIVE uint32_t soc_reg(int i) {
    return top->rootp->RISC5->regs->R[i & 15];
}
EMSCRIPTEN_KEEPALIVE uint32_t soc_flags() {
    auto* R = top->rootp->RISC5;
    return ((uint32_t)R->N << 3) | ((uint32_t)R->Z << 2)
         | ((uint32_t)R->C << 1) | (uint32_t)R->OV;
}
EMSCRIPTEN_KEEPALIVE uint32_t soc_h() { return top->rootp->RISC5->H; }

EMSCRIPTEN_KEEPALIVE uint32_t soc_ram(uint32_t adr) {
    return ram[(adr >> 2) & (MEM_WORDS - 1)];
}

/* Framebuffer checksum: the same polynomial as in the native testbench,
   so that the numbers in the lab and in make boot agree. */
EMSCRIPTEN_KEEPALIVE uint32_t soc_fb_crc() {
    uint32_t c = 0;
    for (uint32_t i = 0; i < FB_WORDS; i++) c = c * 31 + ram[(DISPLAY_ORG >> 2) + i];
    return c;
}

/* The disk is in memory (memdisk), so a lab can check that a file
   in the image really changed, rather than trust what the screen says. */
EMSCRIPTEN_KEEPALIVE uint32_t soc_disk_word(uint32_t byteoff) {
    return disk.word(byteoff);
}
EMSCRIPTEN_KEEPALIVE uint32_t soc_disk_size() { return disk.size(); }

/* Writing to RAM from outside. Needed by the "break it" level: this machine has neither
   memory protection nor privilege separation, and the most honest way to show that
   is to let any word be corrupted and see what happens to the system. */
EMSCRIPTEN_KEEPALIVE void soc_poke(uint32_t adr, uint32_t val) {
    ram[(adr >> 2) & (MEM_WORDS - 1)] = val;
}

EMSCRIPTEN_KEEPALIVE void soc_key(int scancode) {
    int n = (kbd_head + 1) & 63;
    if (n != kbd_tail) { kbd_buf[kbd_head] = (uint8_t)scancode; kbd_head = n; }
}
// Mouse buttons -- bits 26/25/24 (left/middle/right), coordinates in the low fields
EMSCRIPTEN_KEEPALIVE void soc_mouse(int x, int y, int buttons) {
    if (x < 0) x = 0; if (x > 1023) x = 1023;
    if (y < 0) y = 0; if (y > 767) y = 767;
    mouse_reg = ((uint32_t)buttons & 7) << 24 | ((uint32_t)y & 0xFFF) << 12 | ((uint32_t)x & 0xFFF);
}

// The air, for the page: the next frame this machine sent (channel + 32
// bytes) into out, 1 if there was one; and a frame of another machine in.
EMSCRIPTEN_KEEPALIVE int soc_radio_take(uint8_t* out) { return radio.take(out) ? 1 : 0; }
EMSCRIPTEN_KEEPALIVE void soc_radio_give(const uint8_t* in) { radio.give(in); }

EMSCRIPTEN_KEEPALIVE void soc_timescale(int c) { cycles_per_ms = c > 0 ? (uint64_t)c : 25000; }

// What arrives on RS232 receive from now on: the commands Boot.Mod runs.
EMSCRIPTEN_KEEPALIVE void soc_serial(const uint8_t* text, int len) {
    serial_in.assign(text, text + len); serial_pos = 0;
}

}  // extern "C"
