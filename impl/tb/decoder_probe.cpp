// Empirical map of the RISC5 decoder.
// Task 1: prove that bits IR[15:4] in format F0 are really ignored
//         (not just "do not appear to be read") by enumerating all 4096 values.
// Task 2: record a table of "what actually gets decoded" for all 256 combinations
//         {IR[31:28] × op}, to know which encodings are taken.
#include "VRISC5.h"
#include "VRISC5___024root.h"
#include "VRISC5_RISC5.h"
#include "VRISC5_Registers.h"
#include "soc_mem.h"
#include <cstdio>
#include <map>
#include <set>
#include <string>

static const uint32_t ORG = 0x00FFE000;

struct Probe {
    VRISC5* top; Mem mem;
    Probe() { top = new VRISC5; }
    ~Probe() { top->final(); delete top; }
    bool stall() const { return top->rootp->RISC5->stall; }
    uint32_t reg(int i) const { return top->rootp->RISC5->regs->R[i]; }

    void reset() {
        top->rst = 0; top->irq = 0; top->stallX = 0; top->inbus = 0; top->codebus = 0;
        for (int i = 0; i < 4; i++) { top->clk = 0; top->eval(); top->clk = 1; top->eval(); }
        top->rst = 1; top->clk = 0; top->eval();
    }
    int step() {
        int n = 0;
        for (;;) {
            top->clk = 0; top->eval();
            uint32_t a = top->adr, d = mem.read(a);
            top->inbus = d; top->codebus = d; top->eval();
            bool retiring = !stall();
            if (top->wr) mem.write(a, top->outbus, top->ben);
            top->clk = 1; top->eval();
            n++;
            if (retiring) return n;
            if (n > 300) return -1;
        }
    }
    // Result of executing one instruction: what changed.
    struct Res { uint32_t r5, flags; int cycles; };
    Res run_one(uint32_t insn) {
        mem.w.assign(Mem::WORDS, 0);
        const uint32_t prologue[] = {
            0x41001234,   // MOV R1, 0x1234
            0x42005678,   // MOV R2, 0x5678
            0x45000000,   // MOV R5, 0        (target, cleared)
        };
        mem.load_words(ORG, prologue, 3);
        mem.load_words(ORG + 12, &insn, 1);
        reset();
        for (int i = 0; i < 3; i++) step();
        int c = step();
        auto* R = top->rootp->RISC5;
        uint32_t fl = (R->N << 3) | (R->Z << 2) | (R->C << 1) | R->OV;
        return { reg(5), fl, c };
    }
};

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    Probe p;

    // ── Task 1: are IR[15:4] ignored in format F0? ──────────────────────────
    // Take ADD R5, R1, R2 in format F0: 0000 | a=5 | b=1 | op=8 | 0000...0000 | c=2
    printf("=== IR[15:4] in format F0: ignored? ===\n");
    int bad = 0;
    uint32_t base = (0x0u << 28) | (5u << 24) | (1u << 20) | (8u << 16) | 2u;
    auto ref = p.run_one(base);
    printf("  reference (IR[15:4]=0):  R5=%08X flags=%X cycles=%d\n", ref.r5, ref.flags, ref.cycles);
    for (uint32_t bits = 1; bits < 4096; bits++) {
        auto r = p.run_one(base | (bits << 4));
        if (r.r5 != ref.r5 || r.flags != ref.flags || r.cycles != ref.cycles) {
            if (bad < 5) printf("  ❌ IR[15:4]=%03X gives R5=%08X flags=%X cycles=%d\n",
                                bits, r.r5, r.flags, r.cycles);
            bad++;
        }
    }
    printf("  enumerated 4095 non-zero values, mismatches: %d  %s\n\n",
           bad, bad ? "❌" : "✅ field is FREE");

    // The same for format F1 (q=1): there imm MUST have an effect; this is the control of the method
    printf("=== control: in format F1 the same bits MUST HAVE AN EFFECT ===\n");
    uint32_t base1 = (0x4u << 28) | (5u << 24) | (1u << 20) | (8u << 16);
    auto r1a = p.run_one(base1 | 0x0000);
    auto r1b = p.run_one(base1 | 0x0AB0);
    printf("  imm=0000 -> R5=%08X ; imm=0AB0 -> R5=%08X  %s\n\n",
           r1a.r5, r1b.r5, (r1a.r5 != r1b.r5) ? "✅ has an effect, the method works" : "❌ the method is broken");

    // ── Task 2: map of 256 combinations {IR[31:28] × op} ─────────────────────
    printf("=== decoder map: what each combination does ===\n");
    printf("    (a=5, b=1, c=2; R1=00001234, R2=00005678, R5 cleared)\n\n");
    printf("     op:");
    for (int op = 0; op < 16; op++) printf(" %8d", op);
    printf("\n");
    for (int hi = 0; hi < 4; hi++) {            // only F0/F1: bits 31:30 = 00 and 01
        for (int sub = 0; sub < 4; sub++) {
            int nib = (hi << 2) | sub;
            if (nib >= 8) continue;              // F2/F3 are other formats, handled separately
            printf("  %04d:", nib);
            for (int op = 0; op < 16; op++) {
                uint32_t insn = ((uint32_t)nib << 28) | (5u << 24) | (1u << 20) | ((uint32_t)op << 16) | 2u;
                auto r = p.run_one(insn);
                printf(" %8X", r.r5);
            }
            printf("\n");
        }
    }
    printf("\n  rows: high nibble IR[31:28] (in binary), columns: op\n");
    printf("  0000/0010 = F0 (u=0/1), 0001/0011 = F0 with BIT 28 = 1\n");
    return bad ? 1 : 0;
}
