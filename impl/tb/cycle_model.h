// RISC5 cycle model, DERIVED FROM MEASUREMENTS on the real RTL.
//
// Latencies (tests/t1_latency.s, 17/17 on the live RTL):
//   1 cycle   - MOV, shifts, logic, ADD/SUB, branches
//   2 cycles  - LD/ST (von Neumann stall: one bus for code and data)
//   4        — FAD/FSB
//   26       — FML
//   27       — FDV
//   34       — MUL/DIV
//
// Penalty for back-to-back operations on the SAME unit (tests/t1_fpb2b.s, 13/13):
// the state counter is not cleared while run is high, so the second back-to-back operation
// has to run the counter up to overflow. Cost = COUNTER PERIOD = 2^width:
//   FPAdder      2 bits -> 4    (equals the operation length, no penalty)
//   FPMultiplier 5 bits -> 32   (operation 26)
//   FPDivider    5 bits -> 32   (operation 27)
//   Multiplier   6 bits -> 64   (operation 34)
//   Divider      6 bits -> 64   (operation 34)
// Units are independent: each has its own run, so interleaving resets the counter.
#pragma once
#include <cstdint>

enum CycUnit { U_NONE = 0, U_MUL, U_DIV, U_FPADD, U_FPMUL, U_FPDIV };

struct CycleModel {
    CycUnit prev = U_NONE;

    // Returns the cycle count of instruction insn and updates the state.
    int cycles(uint32_t insn) {
        uint32_t p = (insn >> 31) & 1, q = (insn >> 30) & 1, u = (insn >> 29) & 1;
        CycUnit unit = U_NONE;
        int lat = 1, period = 1;

        if (!p) {                                   // F0/F1: register operations
            uint32_t op = (insn >> 16) & 0xF;
            switch (op) {
                case 10: unit = U_MUL;   lat = 34; period = 64; break;   // MUL
                case 11: unit = U_DIV;   lat = 34; period = 64; break;   // DIV
                case 12: case 13: unit = U_FPADD; lat = 4;  period = 4;  break; // FAD/FSB
#if defined(FPMUL_FAST_REG)
                // fast multiplier with a product register (rtl/FPMultiplierFast.v):
                // 2 cycles, and 2 back-to-back as well: the counter is one bit and resets itself
                case 14: unit = U_FPMUL; lat = 2;  period = 2;  break;   // FML
#elif defined(FPMUL_FAST)
                case 14: unit = U_NONE;  lat = 1;  period = 1;  break;   // FML, single-cycle
#else
                case 14: unit = U_FPMUL; lat = 26; period = 32; break;   // FML
#endif
                case 15: unit = U_FPDIV; lat = 27; period = 32; break;   // FDV
                default: unit = U_NONE;  lat = 1;  period = 1;  break;
            }
        } else if (!q) {                            // F2: load/store
            lat = 2; period = 2; unit = U_NONE;
            (void)u;
        } else {                                    // F3: branches
            lat = 1; period = 1; unit = U_NONE;
        }
        int c = (unit != U_NONE && unit == prev) ? period : lat;
        prev = unit;
        return c;
    }
};
