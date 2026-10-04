// The fast FP multiplier against Wirth's original FPMultiplier, bit for bit.
//
// The reference is the original module itself, run cycle by cycle, not a formula:
// this checks exactly what sits in the processor. The third vote is
// fp_mul from risc-fp.c (checked against RTL in finding 50), in case both
// Verilog modules are wrong in the same way.
//
// Sets:
//   1. all 256×256 exponent pairs, random mantissas and signs;
//   2. edge-case mantissas (0, 1, all ones, half, half−1) × exponents
//      0, 1, 126, 127, 128, 253, 254, 255;
//   3. N random 32-bit pairs (10 million by default);
//   4. chains of back-to-back multiplications without dropping run: checks the stall and
//      the original's counter penalty (32 cycles instead of 26).
// Besides the value, the duration is checked: the original takes 26 (32 back-to-back),
// the fast one 1 cycle (or 2 with FPMUL_FAST_REG).
#include "Vfpmul_diff_top.h"
#include <cstdio>
#include <cstdlib>
#include <cstdint>
extern "C" {
#include "../ext/refemu/risc-fp.h"
}

static Vfpmul_diff_top* t;
static uint64_t n_ops = 0, n_bad = 0, n_badref = 0, n_badlat = 0;
#ifdef FPMUL_FAST_REG
static const int FAST_LAT = 2;
#else
static const int FAST_LAT = 1;
#endif

static void tick_a() { t->clk_a = 1; t->eval(); t->clk_a = 0; t->eval(); }
static void tick_b() { t->clk_b = 1; t->eval(); t->clk_b = 0; t->eval(); }

// One operation; b2b means run was not dropped since the previous operation.
static void op(uint32_t x, uint32_t y, bool b2b) {
    // As in the processor: an operation lasts while the unit holds stall; the cycle
    // in which stall is released is the last cycle of the operation, and the edge at its end
    // arrives too (the original's counter moves to 26, hence the back-to-back penalty).
    t->x = x; t->y = y; t->run_a = 1; t->run_b = 1; t->eval();
    int ca = 0, cb = 0; uint32_t za = 0, zb = 0;
    for (int c = 1; c <= 40; c++) {
        bool done = !t->stall_a; if (done) { ca = c; za = t->za; }
        tick_a(); if (done) break;
    }
    for (int c = 1; c <= 40; c++) {
        bool done = !t->stall_b; if (done) { cb = c; zb = t->zb; }
        tick_b(); if (done) break;
    }
    uint32_t r = fp_mul(x, y);
    n_ops++;
    if (za != zb) {
        if (n_bad < 10) printf("  ❌ x=%08X y=%08X  original %08X  fast %08X\n", x, y, za, zb);
        n_bad++;
    }
    if (za != r) {
        if (n_badref < 10) printf("  ❌ x=%08X y=%08X  original %08X  risc-fp.c %08X\n", x, y, za, r);
        n_badref++;
    }
    int want_a = b2b ? 32 : 26;
    if (ca != want_a || cb != FAST_LAT) {
        if (n_badlat < 10) printf("  ❌ cycles: original %d (expected %d), fast %d (expected %d)\n",
                                  ca, want_a, cb, FAST_LAT);
        n_badlat++;
    }
}

// Between independent operations run is dropped for one cycle, as in the processor
// when there is another instruction between two FMLs.
static void idle() { t->run_a = 0; t->run_b = 0; t->eval(); tick_a(); tick_b(); }

static uint64_t rs = 0x9E3779B97F4A7C15ull;
static uint32_t rnd() { rs ^= rs << 13; rs ^= rs >> 7; rs ^= rs << 17; return (uint32_t)(rs >> 16); }

int main(int argc, char** argv) {
    uint64_t N = argc > 1 ? strtoull(argv[1], 0, 10) : 10000000ull;
    t = new Vfpmul_diff_top;
    t->clk_a = t->clk_b = 0; t->run_a = t->run_b = 0; t->eval(); idle(); idle();

    for (uint32_t ex = 0; ex < 256; ex++)
        for (uint32_t ey = 0; ey < 256; ey++) {
            uint32_t x = (rnd() & 0x807FFFFF) | ex << 23, y = (rnd() & 0x807FFFFF) | ey << 23;
            op(x, y, false); idle();
        }
    printf("  set 1, all exponent pairs:    %llu operations, mismatches %llu\n",
           (unsigned long long)n_ops, (unsigned long long)n_bad);

    const uint32_t mant[] = {0, 1, 0x7FFFFF, 0x400000, 0x3FFFFF, 0x7FFFFE, 0x000800, 0x555555, 0x2AAAAA};
    const uint32_t expo[] = {0, 1, 2, 63, 64, 126, 127, 128, 129, 190, 191, 192, 253, 254, 255};
    uint64_t before = n_ops;
    for (uint32_t mx : mant) for (uint32_t my : mant) for (uint32_t ex : expo) for (uint32_t ey : expo)
        for (uint32_t sg = 0; sg < 4; sg++) {
            uint32_t x = (sg & 1) << 31 | ex << 23 | mx, y = (sg >> 1) << 31 | ey << 23 | my;
            op(x, y, false); idle();
        }
    printf("  set 2, edge-case mantissas:  %llu operations, mismatches %llu\n",
           (unsigned long long)(n_ops - before), (unsigned long long)n_bad);

    before = n_ops;
    for (uint64_t i = 0; i < N; i++) { op(rnd(), rnd(), false); idle(); }
    printf("  set 3, random pairs:         %llu operations, mismatches %llu\n",
           (unsigned long long)(n_ops - before), (unsigned long long)n_bad);

    before = n_ops;
    for (int k = 0; k < 20000; k++) {
        int len = 2 + rnd() % 6;
        for (int j = 0; j < len; j++) op(rnd(), rnd(), j > 0);
        idle();
    }
    printf("  set 4, back-to-back chains:  %llu operations, mismatches %llu\n",
           (unsigned long long)(n_ops - before), (unsigned long long)n_bad);

    printf("\n  total %llu operations: fast ≠ original: %llu; original ≠ risc-fp.c: %llu; "
           "wrong cycle count: %llu\n", (unsigned long long)n_ops, (unsigned long long)n_bad,
           (unsigned long long)n_badref, (unsigned long long)n_badlat);
    bool ok = !n_bad && !n_badref && !n_badlat;
    printf("  %s\n", ok ? "✅ the fast multiplier is bit-identical to the original" : "❌ MISMATCHES FOUND");
    t->final(); delete t;
    return ok ? 0 : 1;
}
