// Decoder equivalence check: the base core against the core with the ISA extension.
//
// Review requirement: for ALL combinations {IR[31:28] × op} with random operands
// the old and the new core must match bit for bit, except for the new encodings.
// This catches a whole class of bugs: RISC5 has NO trap on an unknown instruction,
// so taking over someone else's encoding would show up not as a diagnostic but as a
// silent change in the behaviour of existing code.
//
// The program prints a machine-readable table; tools/cmp_decoder.py does the comparison.
#include "VRISC5.h"
#include "VRISC5___024root.h"
#include "VRISC5_RISC5.h"
#include "VRISC5_Registers.h"
#include "soc_mem.h"
#include <cstdio>
#include <cstdint>

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
            bool ret = !stall();
            if (top->wr) mem.write(a, top->outbus, top->ben);
            top->clk = 1; top->eval();
            n++;
            if (ret) return n;
            if (n > 200) return -1;
        }
    }
};

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    // Several operand sets: zeros, ones, signed values, "floating-point" patterns
    const uint32_t opnd[][2] = {
        {0x00000000, 0x00000000}, {0x00001234, 0x00005678},
        {0xFFFFFFFF, 0x00000001}, {0x80000000, 0x7FFFFFFF},
        {0x3F800000, 0x40000000},                      // 1.0 and 2.0 in floating point
    };
    // ⚠ The old signature consisted of R5, R6, flags, cycles and memory, and field a
    // was hardwired to 5. That left two holes: corruption by BL was invisible (neither R15
    // nor PC was in the signature), and of the 16 branch conditions exactly one was checked,
    // since field a in format F3 is the condition. Now the signature covers ALL
    // registers, flags, PC and H, and field a is enumerated completely.
    printf("# nib op a.set  regcrc flags pc H cycles memcrc\n");
    for (int nib = 0; nib < 16; nib++)
      for (int op = 0; op < 16; op++)
       for (int af = 0; af < 16; af++)
        for (int si = 0; si < 5; si++) {
            Probe p;
            p.mem.w.assign(Mem::WORDS, 0);
            // prologue: R1, R2 = operands; R5, R6 = 0 (targets)
            uint32_t prog[8];
            int k = 0;
            // MHI = F1 with u=1 (nibble 0110) and REPLACES the register with imm<<16,
            // so the low half is supplied by a separate IOR, as the Oberon
            // compiler itself does (ORG.Put1a).
            prog[k++] = 0x61000000 | ((opnd[si][0] >> 16) & 0xFFFF);   // MHI R1, high
            prog[k++] = 0x41160000 | (opnd[si][0] & 0xFFFF);           // IOR R1, R1, low
            prog[k++] = 0x62000000 | ((opnd[si][1] >> 16) & 0xFFFF);   // MHI R2, high
            prog[k++] = 0x42260000 | (opnd[si][1] & 0xFFFF);           // IOR R2, R2, low
            prog[k++] = 0x45000000;                                     // MOV R5, 0
            prog[k++] = 0x46000000;                                     // MOV R6, 0
            p.mem.load_words(ORG, prog, k);
            // instruction under test: a=5, b=1, c=2
            uint32_t insn = ((uint32_t)nib << 28) | ((uint32_t)af << 24) | (1u << 20)
                          | ((uint32_t)op << 16) | 2u;
            p.mem.load_words(ORG + k * 4, &insn, 1);
            p.reset();
            for (int i = 0; i < k; i++) p.step();
            int cyc = p.step();
            auto* R = p.top->rootp->RISC5;
            uint32_t fl = (R->N << 3) | (R->Z << 2) | (R->C << 1) | R->OV;
            // all 16 registers, including R15: BL writes the return address there
            uint32_t rcrc = 0;
            for (int r = 0; r < 16; r++) rcrc = rcrc * 31 + p.reg(r);
            // checksum of modified memory (catches stores)
            uint32_t crc = 0;
            for (uint32_t i = 0; i < 4096; i++) crc = crc * 31 + p.mem.w[i];
            printf("%X %X %X.%d  %08X %X %06X %08X %d %08X\n",
                   nib, op, af, si, rcrc, fl, R->PC * 4, R->H, cyc, crc);
        }
    return 0;
}
