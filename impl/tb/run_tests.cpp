// Generic runner for directed ISA tests.
// Reads FILE.bin (machine code) and FILE.chk (checks from asm.py), executes on RTL
// with the retirement detector and checks the expectations after each instruction.
#include "VRISC5.h"
#include "VRISC5___024root.h"
#include "VRISC5_RISC5.h"
#include "VRISC5_Registers.h"
#include "soc_mem.h"
#include "cycle_model.h"
#include <cstdio>
#include <cstring>
#include <string>
#include <vector>

static const uint32_t ORG = 0x00FFE000;   // StartAdr = 22'h3FF800 (word address)

struct Core {
    VRISC5* top; Mem mem;
    uint64_t cycles = 0, insns = 0;
    // Interrupt request: the test writes to a service address and the testbench raises irq
    // for one cycle. The real SoC raises it from the millisecond timer;
    // here we need determinism, so the test itself is the source.
    static constexpr uint32_t IRQ_REQ = 0x00FFFFC0;
    int irq_pending = 0;
    Core() { top = new VRISC5; }
    ~Core() { top->final(); delete top; }
    bool     stall() const { return top->rootp->RISC5->stall; }
    uint32_t pc()    const { return top->rootp->RISC5->PC; }
    uint32_t ir()    const { return top->rootp->RISC5->IR; }
    uint32_t reg(int i) const { return top->rootp->RISC5->regs->R[i]; }
    void reset() {
        // ⚠ The bus must be served from memory DURING reset as well: the instruction register
        // latches every cycle (RISC5.v: IR <= stall ? IR : codebus), and during reset the
        // address bus already carries StartAdr. If zeros are supplied,
        // IR holds zero after reset, the first cycle executes MOV R0,R0, and
        // the machine never reads the first word of the program: it is lost.
        //
        // The same bug was found and fixed in tb/soc_tb.cpp but not carried over
        // here: there was no regression test for it. It could hide because
        // all 264 checks began with an instruction whose result did not matter.
        // It was found by the divider probe: `MOV R1, 100` got lost, and the division gave zero.
        // tests/t1_prime.s now guards against it.
        top->rst = 0; top->irq = 0; top->stallX = 0;
        for (int i = 0; i < 4; i++) {
            top->clk = 0; top->eval();
            uint32_t a = top->adr; uint32_t d = mem.read(a);
            top->inbus = d; top->codebus = d; top->eval();
            top->clk = 1; top->eval();
        }
        top->rst = 1; top->clk = 0; top->eval();
    }
    int step() {
        int n = 0;
        for (;;) {
            top->clk = 0; top->eval();
            uint32_t a = top->adr, d = mem.read(a);
            top->inbus = d; top->codebus = d; top->eval();
            bool retiring = !stall();
            if (top->wr) {
                if ((a & ~3u) == IRQ_REQ) irq_pending = (int)top->outbus;  // request
                else mem.write(a, top->outbus, top->ben);
            }
            top->irq = (irq_pending > 0) ? 1 : 0;
            if (irq_pending > 0) irq_pending--;
            top->clk = 1; top->eval();
            cycles++; n++;
            if (retiring) { insns++; return n; }
            if (n > 500) { printf("  HUNG at PC=%06X IR=%08X\n", pc()*4, ir()); return -1; }
        }
    }
    uint32_t value(const std::string& name) const {
        auto* R = top->rootp->RISC5;
        if (name[0] == 'R' && name.size() > 1 && isdigit(name[1])) return reg(atoi(name.c_str()+1));
        if (name == "N") return R->N;   if (name == "Z") return R->Z;
        if (name == "C") return R->C;   if (name == "V") return R->OV;
        if (name == "H") return R->H;   if (name == "PC") return R->PC * 4;
        if (name == "SPC") return R->SPC;
        if (name == "IE") return R->intEnb;
        if (name == "IMD") return R->intMd;
        printf("  ⚠ unknown name in a check: %s\n", name.c_str());
        return 0xDEADBEEF;
    }
};

struct Expect { int at; std::string name; uint32_t val; bool fired = false; };

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    if (argc < 2) { fprintf(stderr, "usage: run_tests BASE (without extension)\n"); return 1; }
    std::string base = argv[1];
    int trace = 0; long long budget = 0;
    for (int i = 2; i < argc; i++) {
        if (std::string(argv[i]).rfind("--trace=", 0) == 0) trace = atoi(argv[i] + 8);
        // Measurement mode (episode 14): exactly N instructions from reset, no expectations, then
        // cycles, instructions and the R5 iteration counter; the same setup as
        // the page's headline number (finding 55): the budget is shorter than the loop.
        if (std::string(argv[i]).rfind("--budget=", 0) == 0) budget = atoll(argv[i] + 9);
    }

    // .bin
    FILE* f = fopen((base + ".bin").c_str(), "rb");
    if (!f) { fprintf(stderr, "no %s.bin\n", base.c_str()); return 1; }
    std::vector<uint32_t> prog; uint32_t w;
    while (fread(&w, 4, 1, f) == 1) prog.push_back(w);
    fclose(f);

    // .chk
    std::vector<Expect> exps;
    f = fopen((base + ".chk").c_str(), "r");
    if (f) {
        char line[256];
        while (fgets(line, sizeof line, f)) {
            if (line[0] == '#') continue;
            int at; char nm[64]; long long v;
            if (sscanf(line, "%d %63s %lld", &at, nm, &v) == 3)
                exps.push_back({at, nm, (uint32_t)v});
        }
        fclose(f);
    }

    Core c;
    // ⚠ The program counter is 22 bits (RISC5.v: wire [21:0] PC), and the program sits at
    // ORG. So exactly 0x400000 - (ORG>>2) words fit between ORG and the end of the
    // address space. A longer program silently wrapped around to address
    // zero: instructions kept executing, but `here` never again matched
    // the word index, and all checks beyond the edge simply never fired.
    // Caught by the "an expectation that did not fire is a failure" rule on the ALU differential.
    const size_t ROOM = 0x400000 - (ORG >> 2);
    if (prog.size() > ROOM) {
        printf("  ❌ program of %zu words does not fit: %zu available from ORG "
               "(22-bit PC)\n", prog.size(), ROOM);
        return 1;
    }
    c.mem.load_words(ORG, prog.data(), prog.size());
    c.reset();
    if (budget > 0) {
        for (long long k = 0; k < budget; k++) if (c.step() < 0) return 1;
        printf("BUDGET insns %llu cycles %llu R5 %u\n", (unsigned long long)c.insns,
               (unsigned long long)c.cycles, c.reg(5));
        // All registers and PC, for comparison with QEMU (qemu/test/compare_idx.py).
        printf("REGS");
        for (int i = 0; i < 16; i++) printf(" %08X", c.reg(i));
        printf(" PC %08X\n", c.pc() * 4);
        return 0;
    }

    printf("=== %s: %zu instructions, %zu checks ===\n", base.c_str(), prog.size(), exps.size());
    int fails = 0, done = 0;
    size_t guard = prog.size() * 4 + 64;
    uint32_t last_cycles = 0;
    CycleModel model; int model_fails = 0;
    for (size_t k = 0; k < guard; k++) {
        uint32_t before_pc = c.pc();
        uint32_t insn_word = c.mem.read(before_pc * 4);
        if (trace && (int)k < trace)
            printf("    [%3zu] PC=%06X IR=%08X  N=%d Z=%d IE=%d IMD=%d\n",
                   k, before_pc * 4, insn_word,
                   c.top->rootp->RISC5->N, c.top->rootp->RISC5->Z,
                   c.top->rootp->RISC5->intEnb, c.top->rootp->RISC5->intMd);
        int predicted = model.cycles(insn_word);
        int n = c.step();
        if (n < 0) { fails++; break; }
        last_cycles = n;
        // An IDX that fires (episode 14) costs one cycle more: an idle cycle in
        // which IR is replaced by BLR MT. The model cannot know this from the instruction
        // word, since it depends on the operands. We accept +1 only together with
        // the trap indicator: R15 = address of IDX + 4.
        if ((insn_word & 0xF00F0000u) == 0x10080000u && n == predicted + 1
            && c.reg(15) == before_pc * 4 + 4)
            predicted = n;
        if (predicted != n) {
            if (model_fails < 6)
                printf("  ⚠ model: PC=%06X insn=%08X predicted %d, actual %d\n",
                       before_pc*4, insn_word, predicted, n);
            model_fails++;
        }
        // Checks are tied to the ADDRESS (word number), not to the number of executed
        // instructions: with branches the two differ. A check fires
        // when the machine reaches the instruction with that index.
        uint32_t here = c.pc() - (ORG >> 2);
        for (auto& e : exps) {
            if (e.fired || (uint32_t)e.at != here) continue;
            e.fired = true;
            uint32_t got = (e.name == "CYCLES") ? last_cycles : c.value(e.name);
            done++;
            if (got != e.val) {
                printf("  ❌ after insn #%d (PC=%06X): %s = %u, expected %u\n",
                       e.at, before_pc*4, e.name.c_str(), got, e.val);
                fails++;
            }
        }
        if (c.pc() == before_pc) break;          // HALT = B . (branch to itself)
    }
    // 🔴 Found by mutation testing: an expectation that DID NOT FIRE (the machine
    // never reached its address) used to be simply ignored, and the test stayed green.
    // The mutation `B > chkLim` instead of `>=` removed two checks out of five and passed.
    // An unchecked expectation is a failure, not a missing result.
    if (done != (int)exps.size()) {
        printf("  ❌ %d of %zu expectations fired; the rest were NOT CHECKED:\n",
               done, exps.size());
        for (auto& e : exps)
            if (!e.fired) printf("     word %d: %s = %u\n", e.at, e.name.c_str(), e.val);
        fails += (int)exps.size() - done;
    }
    printf("  cycle model: mismatches %d  %s\n", model_fails, model_fails ? "❌" : "✅");
    if (model_fails) fails += model_fails;
    printf("  cycles %llu, instructions %llu | checked %d/%zu | failures %d  %s\n",
           (unsigned long long)c.cycles, (unsigned long long)c.insns,
           done, exps.size(), fails, fails ? "❌" : "✅");
    return fails ? 1 : 0;
}
