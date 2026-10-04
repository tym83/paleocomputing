// Differential testbench: the real RTL against the reference emulator, instruction
// by instruction, on a REAL workload: booting the Oberon system.
//
// This is the strongest check possible here: synthetic tests cover what the author
// thought of, while booting the system executes what Wirth actually wrote.
//
// Sources of nondeterminism that had to be removed (all named by the review):
//   1. PC width: 22 bits in RTL, a 32-bit word index in the reference -> mask
//   2. Timer: each model has its own counter -> drive the reference from ours
//   3. The reference's bookkeeping write at DisplayStart ("Sizg" + screen size) ->
//      reproduce it on our side too, otherwise memory diverges at step zero
//   4. The progress heuristic in risc_run -> it resets on every call, and we
//      call it one instruction at a time
//   5. Disk: each model has its own copy of the image, otherwise writes get mixed
#include "VRISC5.h"
#include "VRISC5___024root.h"
#include "VRISC5_RISC5.h"
#include "VRISC5_Registers.h"
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <string>
#include <vector>
extern "C" {
#include "../ext/refemu/risc.h"
#include "../ext/refemu/disk.h"
}

static const uint32_t MEM_WORDS   = 1 << 18;
static const uint32_t ROM_BASE    = 0x00FFC000;
static const uint32_t IO_BASE     = 0x00FFFFC0;
static const uint32_t DISPLAY_ORG = 0x000E7F00;
static const uint32_t PC_MASK     = (1u << 22) - 1;

struct Dut {
    VRISC5* top;
    std::vector<uint32_t> ram, rom;
    const struct RISC_SPI* spi = nullptr;
    uint32_t ms = 0;
    uint64_t cycles = 0, insns = 0;
    Dut() : ram(MEM_WORDS, 0), rom(512, 0) { top = new VRISC5; }
    ~Dut() { top->final(); delete top; }
    bool stall() const { return top->rootp->RISC5->stall; }
    uint32_t pc() const { return top->rootp->RISC5->PC; }
    uint32_t reg(int i) const { return top->rootp->RISC5->regs->R[i]; }
    uint32_t H() const { return top->rootp->RISC5->H; }
    uint32_t flags() const { auto* R = top->rootp->RISC5;
        return (R->N << 3) | (R->Z << 2) | (R->C << 1) | R->OV; }

    bool load_prom(const char* p) {
        FILE* f = fopen(p, "r"); if (!f) return false;
        char l[64]; size_t i = 0;
        while (i < rom.size() && fgets(l, sizeof l, f)) rom[i++] = (uint32_t)strtoul(l, nullptr, 16);
        fclose(f); return i > 0;
    }
    uint32_t read_code(uint32_t a) {
        if ((a >> 14) == (ROM_BASE >> 14)) return rom[(a >> 2) & 511];
        return ram[(a >> 2) & (MEM_WORDS - 1)];
    }
    uint32_t read_data(uint32_t a) {
        if ((a >> 6) == (IO_BASE >> 6)) {
            switch ((a >> 2) & 15) {
                case 0: return ms;
                case 3: return 0;                              // as in the reference without serial
                case 4: return spi ? spi->read_data(spi) : 255;
                case 5: return 1;
                default: return 0;
            }
        }
        return ram[(a >> 2) & (MEM_WORDS - 1)];
    }
    void write_data(uint32_t a, uint32_t v, bool ben) {
        if ((a >> 6) == (IO_BASE >> 6)) {
            if (((a >> 2) & 15) == 4 && spi) spi->write_data(spi, v);
            return;
        }
        uint32_t i = (a >> 2) & (MEM_WORDS - 1);
        if (!ben) { ram[i] = v; return; }
        uint32_t m = 0xFFu << ((a & 3) * 8);
        ram[i] = (ram[i] & ~m) | (v & m);
    }
    void reset() {
        top->rst = 0; top->irq = 0; top->stallX = 0;
        for (int i = 0; i < 4; i++) {
            top->clk = 0; top->eval();
            top->codebus = read_code(top->adr); top->inbus = read_data(top->adr); top->eval();
            top->clk = 1; top->eval();
        }
        top->rst = 1; top->clk = 0; top->eval();
        top->codebus = read_code(top->adr); top->inbus = read_data(top->adr); top->eval();
        // ALIGNING THE INITIAL STATE.
        // In RISC5 reset does NOT block register writes: regwr = ~p & ~stall | ...
        // does not depend on rst. So the very first cycle executes whatever
        // happens to be in the instruction register (zero in simulation, i.e.
        // MOV R0,R0), and that sets Z=1. In the reference emulator the state after
        // reset is defined and equal to zero.
        // The divergence is real, but it concerns the undefined state of the hardware,
        // not instruction semantics, so we align it explicitly.
        top->rootp->RISC5->N = 0; top->rootp->RISC5->Z = 0;
        top->rootp->RISC5->C = 0; top->rootp->RISC5->OV = 0;
        for (int i = 0; i < 16; i++) top->rootp->RISC5->regs->R[i] = 0;
        top->rootp->RISC5->H = 0;
    }
    int step() {
        int n = 0;
        for (;;) {
            top->clk = 0; top->eval();
            uint32_t a = top->adr;
            top->codebus = read_code(a); top->inbus = read_data(a); top->eval();
            bool ret = !stall();
            if (top->wr) write_data(a, top->outbus, top->ben);
            top->clk = 1; top->eval();
            cycles++; n++;
            if (ret) { insns++; return n; }
            if (n > 400) return -1;
        }
    }
};

// The same address in different ROM maps: RTL keeps the ROM at 00FFE000,
// the reference at FFFFF800. Compare by the offset inside the window.
static bool ADDR_EQ(uint32_t a, uint32_t b) {
    bool ar = (a >> 14) == (ROM_BASE >> 14);
    bool br = (b >= 0xFFFFF800u);
    if (ar && br) return ((a >> 2) & 511) == ((b >> 2) & 511);
    return a == b;
}

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    uint64_t maxi = 12000000; int verbose = 0;
    // How often to compare the whole RAM. A megabyte of memory is 262144 words; every
    // comparison is an extra pass, so not on every instruction.
    const uint64_t RAM_CHECK = 250000;
    uint64_t ram_checks = 0, rom_addr_waivers = 0;
    std::string prom = "rtl/prom_sd.mem";
    for (int i = 1; i < argc; i++) {
        std::string a = argv[i];
        if (a.rfind("--max=", 0) == 0) maxi = strtoull(a.c_str() + 6, nullptr, 10);
        else if (a.rfind("--prom=", 0) == 0) prom = a.substr(7);
        else if (a == "-v") verbose = 1;
    }

    Dut d;
    if (!d.load_prom(prom.c_str())) { fprintf(stderr, "no ROM\n"); return 1; }
    d.spi = disk_new("build/disk_rtl.dsk");
    // ⚠ Here I created a divergence myself while anticipating a trap from the review.
    // The reference does put the "Sizg" signature and the screen size at
    // DisplayStart, but it does so in risc_configure_memory(), which this run
    // does NOT call. So the reference has zeros there, and writing the signature on our
    // side makes the models diverge exactly when the system reads it
    // (found at step 2 101 536: R0 = 53697A67 versus zero).
    // The right thing is to write nothing: both models see zeros.
    d.reset();

    struct RISC* r = risc_new();
    risc_set_serial(r, NULL);
    risc_set_spi(r, 1, disk_new("build/disk_ref.dsk"));

    printf("differential run: RTL against the reference, up to %llu instructions\n\n",
           (unsigned long long)maxi);

    // ── WARM-UP PHASE ────────────────────────────────────────────────────────
    // While the boot loader runs, both models live in ROM, but their memory maps
    // DIFFER: in RTL the reset address is 0xFFE000 and addresses are 24-bit, in the
    // reference the ROM is at 0xFFFFF800 and addresses are 32-bit. So the link register
    // and any address values inside the boot loader legitimately differ by a constant.
    // Strict comparison starts once BOTH models have moved to RAM.
    bool warm = false;
    uint64_t warm_at = 0;
    uint64_t k = 0;
    for (; k < maxi; k++) {
        // PC normalisation. The reset addresses DIFFER: in RTL StartAdr = 22'h3FF800
        // (byte 0xFFE000), in the reference ROMStart = 0xFFFFF800. Both land on word
        // zero of the ROM, because the 512-word ROM is aliased. So inside the ROM
        // we compare the word index, outside it the address itself.
        auto norm = [](uint32_t pcw, bool in_rom) {
            return in_rom ? (pcw & 511) : (pcw & PC_MASK);
        };
        uint32_t dpc = d.pc(), rpc = risc_get_pc(r);
        bool d_rom = ((dpc * 4) >> 14) == (ROM_BASE >> 14);
        bool r_rom = (rpc >= 0xFFFFF800u / 4);
        uint32_t pc_before = norm(dpc, d_rom);
        uint32_t ref_pc_before = norm(rpc, r_rom);
        if (!warm) {
            if (!d_rom && !r_rom) {
                warm = true; warm_at = k;
                printf("  both models reached RAM at step %llu (PC=%06X); "
                       "starting strict comparison\n\n", (unsigned long long)k, dpc * 4);
            } else {
                // during warm-up only the position in ROM and its index are compared
                if (d_rom != r_rom || (d_rom && pc_before != ref_pc_before)) {
                    printf("❌ DIVERGENCE IN THE BOOT LOADER at step %llu\n", (unsigned long long)k);
                    printf("   RTL       PC = %06X (ROM: %s, word %u)\n", dpc * 4, d_rom ? "yes" : "no", pc_before);
                    printf("   reference PC = %08X (ROM: %s, word %u)\n", rpc * 4, r_rom ? "yes" : "no", ref_pc_before);
                    return 1;
                }
                risc_set_time(r, d.ms);
                int nn = d.step();
                if (nn < 0) { printf("❌ RTL hung in the boot loader at PC=%06X\n", dpc * 4); return 1; }
                risc_run(r, 1);
                continue;
            }
        }
        if (d_rom != r_rom || pc_before != ref_pc_before) {
            printf("❌ PC DIVERGENCE at step %llu\n", (unsigned long long)k);
            printf("   RTL       PC = %06X (in ROM: %s)\n", dpc * 4, d_rom ? "yes" : "no");
            printf("   reference PC = %08X (in ROM: %s)\n", rpc * 4, r_rom ? "yes" : "no");
            return 1;
        }
        risc_set_time(r, d.ms);                 // drive the reference's timer from ours
        int n = d.step();
        if (n < 0) { printf("❌ RTL hung at PC=%06X\n", dpc * 4); return 1; }
        risc_run(r, 1);

        // compare the architectural state
        // The link register (R15) is an ADDRESS, and after leaving the boot loader it still
        // holds a return address into ROM. The models' ROM maps differ, so
        // we compare it the same way as the program counter: if both values point
        // into the ROM window, by word index, otherwise directly.
        auto addr_eq = ADDR_EQ;
        bool bad = false; std::string why;
        for (int i = 0; i < 16; i++) {
            uint32_t x = d.reg(i), y = risc_get_reg(r, i);
            if (x == y) continue;
            if (i == 15 && addr_eq(x, y)) continue;
            bad = true; why = "R" + std::to_string(i); break;
        }
        if (!bad && d.H() != risc_get_h(r)) { bad = true; why = "H"; }
        if (!bad && d.flags() != risc_get_flags(r)) { bad = true; why = "flags"; }
        if (bad) {
            printf("❌ DIVERGENCE (%s) at step %llu, PC=%06X\n",
                   why.c_str(), (unsigned long long)k, dpc * 4);
            printf("   %-6s %-10s %-10s\n", "", "RTL", "reference");
            for (int i = 0; i < 16; i++)
                printf("   R%-4d %08X   %08X %s\n", i, d.reg(i), risc_get_reg(r, i),
                       d.reg(i) != risc_get_reg(r, i) ? "<<<" : "");
            printf("   H     %08X   %08X\n", d.H(), risc_get_h(r));
            printf("   flags %X          %X   (NZCV)\n", d.flags(), risc_get_flags(r));
            return 1;
        }
        if (verbose && k < 40)
            printf("  [%6llu] PC=%06X ✓\n", (unsigned long long)k, dpc * 4);
        // ⚠ The comparison used to cover only registers, flags and H. A wrong write to
        // memory stayed invisible until the value was read back into a register,
        // i.e. the divergence could surface millions of instructions away from
        // where it arose. Periodically compare the whole RAM. The framebuffer is
        // included: both models execute the same code and must draw the same.
        if ((k % RAM_CHECK) == 0 && k) {
            uint32_t rwords = 0;
            const uint32_t* rram = risc_get_ram(r, &rwords);
            uint32_t n = rwords < (uint32_t)MEM_WORDS ? rwords : (uint32_t)MEM_WORDS;
            for (uint32_t i = 0; i < n; i++) {
                if (d.ram[i] == rram[i]) continue;
                // Return addresses into ROM legitimately differ: the models' ROM maps
                // differ (RTL 00FFE000, reference FFFFF800). Compare by the offset
                // inside the window, the same rule already applied to R15.
                if (ADDR_EQ(d.ram[i], rram[i])) { rom_addr_waivers++; continue; }
                printf("❌ MEMORY DIVERGENCE at step %llu: word %06X "
                       "RTL %08X, reference %08X\n",
                       (unsigned long long)k, i * 4, d.ram[i], rram[i]);
                return 1;
            }
            ram_checks++;
        }
        if ((k % 1000000) == 0 && k)
            printf("  %llu million instructions: match (RAM comparisons: %llu)\n",
                   (unsigned long long)k / 1000000, (unsigned long long)ram_checks);
    }
    if (!warm) printf("\n⚠ strict phase did not start: both models are still in the boot loader\n");
    printf("  full RAM comparisons: %llu, ROM address waivers: %llu\n",
           (unsigned long long)ram_checks, (unsigned long long)rom_addr_waivers);
    printf("\n✅ MATCH: %llu instructions of strict comparison "
           "(warm-up in the boot loader: %llu), %llu RTL cycles\n",
           (unsigned long long)(warm ? k - warm_at : 0), (unsigned long long)(warm ? warm_at : k),
           (unsigned long long)d.cycles);
    return 0;
}
