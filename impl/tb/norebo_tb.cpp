// CLOSING THE LOOP: the Oberon compiler compiles itself on the real RTL.
//
// Until now the bootstrap was checked on a RISC5 emulator written in C
// (ext/norebo/Runtime/risc-cpu.c, 484 lines). Here the same compiler runs
// on Niklaus Wirth's `RISC5.v` core, driven cycle by cycle by Verilator.
//
// What stays in C and why that is legitimate: the bridge to the host file system
// (norebo.c). Oberon reaches it through four I/O addresses (the request number
// and three arguments), and that is an interface to the OS, not part of the machine.
// The browser version does not need it at all: there files live in the disk image.
//
// Built with Norebo's own object files to use ITS implementation of the file
// operations unchanged; otherwise the comparison would be unfair.
#include "VRISC5.h"
#include "VRISC5___024root.h"
#include "VRISC5_RISC5.h"
#include "VRISC5_Registers.h"
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <vector>
#include <string>

// ── interface to the Norebo bridge (implementation in norebo_bridge.c) ───────────
extern "C" {
    void     nb_init(int argc, char** argv);
    uint32_t nb_io_read(uint32_t adr);
    void     nb_io_write(uint32_t adr, uint32_t val);
    int      nb_halted(void);
    uint32_t nb_ram_size(void);
    uint32_t* nb_ram(void);
    uint32_t nb_stack_org(void);
}

// ⚠ Norebo addresses devices with NEGATIVE numbers (-4, -8, -12, -16), i.e.
// 0xFFFFFFFC etc. in 32 bits. But the RISC5 bus is 24 bits, and 0xFFFFFC arrives from it.
// The check `(int32_t)a < 0` on a 24-bit address NEVER fires; because of that
// the first run spun idle for 4 billion instructions.
// Devices occupy the top 64 bytes of the 24-bit space; we convert back
// to the negative form that Norebo's code expects.
static const uint32_t IO_TOP = 0x00FFFFC0;
static inline bool is_io(uint32_t a) { return a >= IO_TOP; }
static inline uint32_t to_neg(uint32_t a) { return a | 0xFF000000u; }

// ── measurement window and profile (episode 2) ──────────────────────────────────
// The program marks the window by writing to the LED port (-60): 1 is the start, 0 is
// the end (LED(1)/LED(0) in Oberon). Inside the window each retired instruction
// is assigned a class by its word, and is charged with all the cycles it
// occupied, including the stall. There can be many windows; everything is summed.
// Nothing is counted outside the window: loading modules and reading the weights
// are not included.
enum PClass { PC_FML, PC_FAD, PC_FSB, PC_FLT, PC_FLOOR, PC_FDV, PC_MUL, PC_DIV,
              PC_LD, PC_ST, PC_BR, PC_ALU, PC_N };
static const char* pc_name[PC_N] = {"FML", "FAD", "FSB", "FLT", "FLOOR", "FDV", "MUL", "DIV",
                                    "LD", "ST", "branch", "other ALU"};
static int pclass(uint32_t ir) {
    uint32_t p = ir >> 31 & 1, q = ir >> 30 & 1, u = ir >> 29 & 1, v = ir >> 28 & 1;
    if (p) return q ? PC_BR : (u ? PC_ST : PC_LD);
    switch (ir >> 16 & 0xF) {
        case 10: return PC_MUL;
        case 11: return PC_DIV;
        case 12: return u ? PC_FLT : (v ? PC_FLOOR : PC_FAD);
        case 13: return PC_FSB;
        case 14: return PC_FML;
        case 15: return PC_FDV;
        default: return PC_ALU;
    }
}
struct Prof {
    bool on = false;
    uint64_t windows = 0, cyc = 0, ins = 0;
    uint64_t n[PC_N] = {0}, c[PC_N] = {0};
    uint64_t fml_b2b = 0, fml_b2b_cyc = 0;   // FML right after FML (counter penalty)
    uint64_t fmac = 0, fmac_cyc = 0;         // FAD reading the result of the last FML
    int fml_dst = -1, fml_n = 0;             // where the last FML wrote and what it cost
    uint32_t prev_ir = 0;
    void add(uint32_t ir, int cycles) {
        int k = pclass(ir);
        n[k]++; c[k] += cycles; cyc += cycles; ins++;
        if (k == PC_FML && pclass(prev_ir) == PC_FML) { fml_b2b++; fml_b2b_cyc += cycles; }
        // A candidate for a fused FMAC is the pair "FML t,a,b … FAD d,x,t": FAD reads
        // the register the last FML wrote, and nothing overwrote it in between
        // (the compiler places a load of the sum from memory between them).
        uint32_t a = ir >> 24 & 0xF, b = ir >> 20 & 0xF, cc = ir & 0xF;
        bool q = ir >> 30 & 1, p = ir >> 31 & 1, u = ir >> 29 & 1;
        if (k == PC_FAD && fml_dst >= 0 && (b == (uint32_t)fml_dst || (!q && cc == (uint32_t)fml_dst))) {
            fmac++; fmac_cyc += fml_n + cycles; fml_dst = -1;
        }
        if (k == PC_FML) { fml_dst = a; fml_n = cycles; }
        else {
            bool writes = !p || (p && !q && !u);            // register operations and LD
            bool link = p && q && (ir >> 28 & 1);           // BL writes R15
            if ((writes && (int)a == fml_dst) || (link && fml_dst == 15)) fml_dst = -1;
        }
        prev_ir = ir;
    }
    void report() const {
        if (!windows) return;
        printf("\n  measurement window: %llu windows, %llu instructions, %llu cycles\n",
               (unsigned long long)windows, (unsigned long long)ins, (unsigned long long)cyc);
        printf("  profile:  class        instrs      cycles   cycle share  cycles/instr  stall\n");
        uint64_t st = 0;
        for (int k = 0; k < PC_N; k++) if (n[k]) {
            printf("    %-12s %12llu %12llu %10.2f%% %10.2f %12llu\n", pc_name[k],
                   (unsigned long long)n[k], (unsigned long long)c[k],
                   100.0 * c[k] / cyc, (double)c[k] / n[k], (unsigned long long)(c[k] - n[k]));
            st += c[k] - n[k];
        }
        printf("    total stall (cycles beyond one per instruction): %llu = %.2f%%\n",
               (unsigned long long)st, 100.0 * st / cyc);
        printf("    FML right after FML: %llu instructions, %llu cycles\n",
               (unsigned long long)fml_b2b, (unsigned long long)fml_b2b_cyc);
        printf("    FML→FAD result pairs (FMAC candidates): %llu, %llu cycles\n",
               (unsigned long long)fmac, (unsigned long long)fmac_cyc);
    }
};
static Prof prof;

struct Soc {
    VRISC5* top;
    uint64_t cycles = 0, insns = 0;
    Soc() { top = new VRISC5; }
    ~Soc() { top->final(); delete top; }
    bool stall() const { return top->rootp->RISC5->stall; }
    uint32_t pc() const { return top->rootp->RISC5->PC; }

    // The bridge itself loads InnerCore (nb_init): the format is blocks of "size, address"
    // pairs, and Norebo's code parses it unchanged.
    uint32_t read_mem(uint32_t a) {
        // The ROM is not used in Norebo mode: InnerCore is already linked and sits in RAM
        // The RTL bus drives the address on writes too, and the testbench reads it every cycle.
        // Norebo has no LED read (it crashes on one), yet the window marks are written
        // exactly there, so answer zero, as a nonexistent register would.
        if (is_io(a) && (int32_t)to_neg(a) == -60) return 0;
        if (is_io(a)) return nb_io_read(to_neg(a));
        uint32_t i = (a >> 2);
        return i < nb_ram_size() / 4 ? nb_ram()[i] : 0;
    }
    void write_mem(uint32_t a, uint32_t v, bool ben) {
        if (is_io(a) && (int32_t)to_neg(a) == -60) {      // LEDs = window marks
            if (v == 1 && !prof.on) { prof.on = true; prof.windows++; }
            else if (v == 0) prof.on = false;
            return;
        }
        if (is_io(a)) { nb_io_write(to_neg(a), v); return; }
        uint32_t i = (a >> 2);
        if (i >= nb_ram_size() / 4) return;
        if (!ben) { nb_ram()[i] = v; return; }
        uint32_t m = 0xFFu << ((a & 3) * 8);
        nb_ram()[i] = (nb_ram()[i] & ~m) | (v & m);
    }
    void reset_at_zero() {
        // Norebo starts at address 0, not from the ROM: InnerCore is already linked
        top->rst = 0; top->irq = 0; top->stallX = 0;
        for (int i = 0; i < 4; i++) {
            top->clk = 0; top->eval();
            top->codebus = read_mem(top->adr); top->inbus = read_mem(top->adr); top->eval();
            top->clk = 1; top->eval();
        }
        top->rst = 1; top->clk = 0; top->eval();
        // Initial state as in norebo.c: PC=0, R12=0x20 (trap vector),
        // R14 = StackOrg. RISC5 reset puts PC into the ROM, so we override it.
        //
        // ⚠ Together with PC the INSTRUCTION REGISTER must be set. RISC5 is a
        // prefetching machine: at the start of a cycle IR holds the executing instruction, while
        // the bus already shows the next one. If only PC is set, IR keeps garbage
        // from reset, the first instruction (the jump out of InnerCore) is not executed,
        // and the core goes on to execute the module table as code. That is exactly what happened.
        top->rootp->RISC5->PC = 0;
        top->rootp->RISC5->IR = read_mem(0);
        top->rootp->RISC5->regs->R[12] = 0x20;
        top->rootp->RISC5->regs->R[14] = nb_stack_org();
        top->codebus = read_mem(0); top->inbus = read_mem(0); top->eval();
    }
    int step() {
        int n = 0;
        uint32_t ir = top->rootp->RISC5->IR;   // executing instruction (prefetch, see above)
        bool counted = prof.on;
        for (;;) {
            top->clk = 0; top->eval();
            uint32_t a = top->adr;
            uint32_t d = read_mem(a);
            top->codebus = d; top->inbus = d; top->eval();
            bool ret = !stall();
            if (top->wr) write_mem(a, top->outbus, top->ben);
            top->clk = 1; top->eval();
            cycles++; n++;
            if (ret) { insns++; if (counted) prof.add(ir, n); return n; }
            if (n > 400) return -1;
        }
    }
};

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    if (argc < 2) {
        fprintf(stderr, "usage: norebo_tb ORP.Compile File.Mod/s ...\n");
        return 1;
    }
    nb_init(argc, argv);
    Soc s;
    s.reset_at_zero();
    printf("  core: Wirth's RISC5.v on Verilator, starting at address 0\n\n");

    uint64_t guard = getenv("NB_MAX_INSNS") ? strtoull(getenv("NB_MAX_INSNS"), 0, 10) : 400000000ull;
    int trace = getenv("NB_TRACE_PC") ? atoi(getenv("NB_TRACE_PC")) : 0;
    for (uint64_t k = 0; k < guard; k++) {
        if (nb_halted()) break;
        if (trace && (int)k < trace) {
            auto* R = s.top->rootp->RISC5;
            printf("  [%4llu] PC=%06X IR=%08X R14=%08X R12=%08X\n",
                   (unsigned long long)k, R->PC * 4, s.read_mem(R->PC * 4),
                   R->regs->R[14], R->regs->R[12]);
        }
        int n = s.step();
        if (n < 0) { printf("\n  HUNG at PC=%06X\n", s.pc() * 4); return 2; }
    }
    printf("\n  executed on RTL: %llu instructions, %llu cycles\n",
           (unsigned long long)s.insns, (unsigned long long)s.cycles);
    prof.report();
    return 0;
}
