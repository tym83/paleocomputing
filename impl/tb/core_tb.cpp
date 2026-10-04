// RISC5 core testbench. Provides step-by-step execution with a RETIREMENT DETECTOR.
//
// The key point that breaks a naive testbench: cycle != instruction.
// LD/ST = 2 cycles, FAD/FSB = 4, FML = 26, FDV = 27, MUL/DIV = 34.
// An instruction retires on the clock edge where stall == 0 (RISC5.v:173 IR <= stall ? IR : codebus).
#include "VRISC5.h"
#include "VRISC5___024root.h"
#include "VRISC5_RISC5.h"
#include "VRISC5_Registers.h"
#include "soc_mem.h"
#include <cstdio>
#include <cstdlib>

struct Core {
    VRISC5*  top;
    Mem      mem;
    uint64_t cycles = 0;
    uint64_t insns  = 0;

    Core() { top = new VRISC5; }
    ~Core() { top->final(); delete top; }

    // internal signals via --public-flat-rw
    bool     stall() const { return top->rootp->RISC5->stall; }
    uint32_t pc()    const { return top->rootp->RISC5->PC; }       // word address, 22 bits
    uint32_t ir()    const { return top->rootp->RISC5->IR; }
    uint32_t H()     const { return top->rootp->RISC5->H; }
    bool N() const { return top->rootp->RISC5->N; }
    bool Z() const { return top->rootp->RISC5->Z; }
    bool C() const { return top->rootp->RISC5->C; }
    bool V() const { return top->rootp->RISC5->OV; }
    uint32_t reg(int i) const { return top->rootp->RISC5->regs->R[i]; }

    void reset() {
        top->rst = 0; top->irq = 0; top->stallX = 0;
        top->inbus = 0; top->codebus = 0;
        for (int i = 0; i < 4; i++) { top->clk = 0; top->eval(); top->clk = 1; top->eval(); }
        top->rst = 1;                       // rst is active LOW: ~rst -> StartAdr
        top->clk = 0; top->eval();
    }

    void tick() {
        top->clk = 0; top->eval();
        uint32_t a = top->adr;              // the address has settled combinationally
        uint32_t d = mem.read(a);
        top->inbus = d; top->codebus = d;
        top->eval();
        if (top->wr) mem.write(a, top->outbus, top->ben);   // SRwe = ~wr | clk -> write on the low phase
        top->clk = 1; top->eval();
        cycles++;
    }

    // One step = the cycles up to and including retirement of the current instruction.
    // Returns the number of cycles spent.
    int step() {
        int n = 0;
        for (;;) {
            top->clk = 0; top->eval();
            uint32_t a = top->adr; uint32_t d = mem.read(a);
            top->inbus = d; top->codebus = d;
            top->eval();
            bool retiring = !stall();
            if (top->wr) mem.write(a, top->outbus, top->ben);
            top->clk = 1; top->eval();
            cycles++; n++;
            if (retiring) { insns++; return n; }
            if (n > 200) { fprintf(stderr, "HUNG: >200 cycles without retirement, PC=%06X IR=%08X\n", pc()*4, ir()); exit(2); }
        }
    }
    void dump() const {
        printf("PC=%06X IR=%08X  N=%d Z=%d C=%d V=%d  H=%08X\n", pc()*4, ir(), N(), Z(), C(), V(), H());
        for (int i = 0; i < 16; i += 4)
            printf("  R%-2d=%08X R%-2d=%08X R%-2d=%08X R%-2d=%08X\n",
                   i, reg(i), i+1, reg(i+1), i+2, reg(i+2), i+3, reg(i+3));
    }
};

// ── checks ───────────────────────────────────────────────────────────────────
static int fails = 0, checks = 0;
static void chk(const char* what, uint32_t got, uint32_t want) {
    checks++;
    if (got != want) { printf("  ❌ %-28s got %08X, expected %08X\n", what, got, want); fails++; }
}
static void chkc(const char* what, int got, int want) {
    checks++;
    if (got != want) { printf("  ❌ %-28s got %d, expected %d\n", what, got, want); fails++; }
}

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    Core c;

    // The program is loaded at the reset address: StartAdr = 22'h3FF800 (word) = 0xFFE000 (byte)
    const uint32_t ORG = 0x00FFE000;
    // For the encoding see tests/asm.py
    const uint32_t prog[] = {
        0x40000000,  // MOV R0, 0
        0x41000064,  // MOV R1, 100
        0x5200FFFF,  // MOV R2, -1
        0x04380001,  // ADD R4, R3, R1     (R3=0) -> 100
        0x061A0001,  // MUL R6, R1, R1     -> 10000, 34 cycles
        0x4A110004,  // LSL R10, R1, 4     -> 1600
        0x4B120002,  // ASR R11, R1, 2     -> 25
        0xE7FFFFFF,  // HALT (B .)
    };
    c.mem.load_words(ORG, prog, sizeof(prog)/sizeof(prog[0]));
    c.reset();

    printf("=== T0: basic core sanity ===\n");
    chk("PC after reset", c.pc() * 4, ORG);

    struct { const char* name; int want_cycles; } exp[] = {
        {"MOV R0,0",    1}, {"MOV R1,100", 1}, {"MOV R2,-1", 1},
        {"ADD R4,R3,R1",1}, {"MUL R6,R1,R1", 34}, {"LSL",1}, {"ASR",1},
    };
    for (auto& e : exp) {
        int n = c.step();
        printf("  %-14s %3d cycle%s\n", e.name, n, n==1?"":"s");
        chkc(e.name, n, e.want_cycles);
    }

    printf("\n--- state ---\n"); c.dump();
    chk("R1", c.reg(1), 100);
    chk("R2", c.reg(2), 0xFFFFFFFF);
    chk("R4 = R3+R1", c.reg(4), 100);
    chk("R6 = 100*100", c.reg(6), 10000);
    chk("H after MUL", c.H(), 0);
    chk("R10 = 100<<4", c.reg(10), 1600);
    chk("R11 = 100>>2", c.reg(11), 25);

    printf("\ntotal cycles: %llu, instructions: %llu\n",
           (unsigned long long)c.cycles, (unsigned long long)c.insns);
    printf("checks: %d, failures: %d  %s\n", checks, fails, fails ? "❌" : "✅");
    return fails ? 1 : 0;
}
