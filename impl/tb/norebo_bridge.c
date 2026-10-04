/* Bridge to the Norebo runtime for running the Oberon compiler on the REAL RTL.
 *
 * Technique: include norebo.c whole, replacing only its main() and the processor
 * entry point. Everything else (memory, file operations, the system request
 * table) is taken from Norebo UNCHANGED. Otherwise the "same thing, but on RTL"
 * comparison would be unfair: we would be comparing against our own implementation.
 *
 * What is hidden: main() and the risc_run() call. Verilator drives the processor instead.
 */
/* norebo.c is C code, so this file is built as C too (cc, as a separate
   object; the rule is in the Makefile), not as C++ inside the Verilator build.
   ⚠ The bridge used to be .cpp and included norebo.c inside extern "C". clang on macOS
   tolerated that, g++ on Linux did not: Norebo's main() uses designated array
   initializers (`.R[12] = 0x20`), which C++ lacks. It broke in CI.
   Norebo's code is still not modified; only how it is built changes.
   We replace main(): its body calls risc_run(), which does not exist here
   (Verilator drives the processor), and it is not needed anyway. */
/* risc-cpu.h does not include <stdint.h> itself; it expects that to be done before it. */
#include <stdint.h>
#include <stdbool.h>

/* Counters that live in risc-cpu.c in the original. We do not link it in
   (Verilator drives the processor), so they are defined here. The testbench
   counts RTL cycles itself; these exist only so that print_cycle_stats() links. */
uint64_t risc_cycles = 0, risc_insns = 0;
uint64_t risc_chk_hits[8] = {0}, risc_chk_dyn_total = 0;
/* IDX profile (episode 14, descriptors), also from risc-cpu.c. */
uint64_t risc_desc_prof[4] = {0};

/* Include the header FIRST, before the substitution: otherwise #define risc_run
   would break the function declaration in risc-cpu.h. */
#include "../ext/norebo/Runtime/risc-cpu.h"
#define main norebo_unused_main
#define risc_run(io, cpu) ((void)0)
#include "../ext/norebo/Runtime/norebo.c"
#undef risc_run
#undef main

#include <stdint.h>

/* MemBytes, StackOrg, mem[], io_read_word(), io_write_word(), load_inner_core(),
   mem_write_word(), nargc, nargv all come from norebo.c above. */

static int halted = 0;

void nb_init(int argc, char **argv) {
    nargc = argc - 1;
    nargv = argv + 1;
    load_inner_core();
    mem_write_word(12, MemBytes);   /* MemLim  - read by Kernel.Init */
    mem_write_word(24, StackOrg);   /* heapOrg - read by Kernel.Init */
}

static int trace_io = -1;
static void io_trace_init(void) {
    if (trace_io < 0) trace_io = getenv("NB_TRACE_IO") ? 1 : 0;
}

uint32_t nb_io_read(uint32_t adr) {
    io_trace_init();
    uint32_t v = io_read_word(adr);
    if (trace_io) fprintf(stderr, "  IO read   %d -> %u\n", -(int32_t)adr / 4, v);
    return v;
}

void nb_io_write(uint32_t adr, uint32_t val) {
    /* The noreboHalt request (=1) is the only way for Oberon to say "I am done".
       In the original it calls exit(); here we raise a flag so that the testbench
       prints the RTL statistics and exits on its own.
       ⚠ Both checks are required: -adr/4 == 1 means "writing the request NUMBER
       register", and val == 1 means it is actually halt. Without the second one the
       stop fired on any system call, and the run ended after 103 instructions. */
    io_trace_init();
    if (trace_io) fprintf(stderr, "  IO write  %d <- %u\n", -(int32_t)adr / 4, val);
    if (-(int32_t)adr / 4 == 1 && val == 1) { halted = 1; return; }
    io_write_word(adr, val);
}

int       nb_halted(void)   { return halted; }
uint32_t  nb_ram_size(void) { return MemBytes; }
uint32_t *nb_ram(void)      { return (uint32_t *)mem; }

uint32_t nb_stack_org(void) { return StackOrg; }
