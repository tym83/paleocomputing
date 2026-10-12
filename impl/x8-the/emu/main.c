/*
 * x8emu: the Electrologica X8 with CHARON.
 *
 *   x8emu [options] program.tape
 *
 * The program is a paper tape in the format of the "prille begin" (EWD 149,
 * 10.1), read through the IP reader after LS and IP, exactly as the machine
 * was started. Options:
 *
 *   -core N        core size in words (default 32768, the THE configuration)
 *   -reader F      tape for reader 0          -reader2 F  data after the IP tape
 *   -punch F       punch 18 output            -printer F  line printer 11 output
 *   -telex F       console teleprinter 1 (default: standard output)
 *   -keys F        what the operator types on keyboard 2: lines "ms text"
 *   -max S         stop after S seconds of machine time
 *   -trace         every instruction to standard error
 *   -stats         cycles, drum transfers and the final registers to standard error
 */
#include <stdlib.h>
#include <string.h>
#include "x8.h"
#include "charon.h"

static const char *errtext(int e)
{
    switch (e) {
    case 1: return "dynamic stop and nothing can wake the machine";
    case 2: return "time limit";
    default: return "error";
    }
}

int main(int argc, char **argv)
{
    charon_cfg cfg = {0};
    uint32_t core = 32768;
    double max_s = 0;
    int trace = 0, stats = 0;
    const char *tape = NULL;
    for (int i = 1; i < argc; i++) {
        const char *a = argv[i];
#define ARG (i + 1 < argc ? argv[++i] : (fprintf(stderr, "%s needs a value\n", a), exit(2), ""))
        if (!strcmp(a, "-core")) core = (uint32_t)atoi(ARG);
        else if (!strcmp(a, "-reader")) cfg.reader = ARG;
        else if (!strcmp(a, "-reader2")) cfg.reader2 = ARG;
        else if (!strcmp(a, "-punch")) cfg.punch = ARG;
        else if (!strcmp(a, "-printer")) cfg.printer = ARG;
        else if (!strcmp(a, "-telex")) cfg.telex = ARG;
        else if (!strcmp(a, "-keys")) cfg.keys = ARG;
        else if (!strcmp(a, "-max")) max_s = atof(ARG);
        else if (!strcmp(a, "-trace")) trace = 1;
        else if (!strcmp(a, "-stats")) stats = 1;
        else if (!strcmp(a, "-echo")) cfg.echo_keys = 1;
        else if (a[0] == '-') { fprintf(stderr, "unknown option %s\n", a); return 2; }
        else tape = a;
    }
    if (!tape) { fprintf(stderr, "usage: x8emu [options] program.tape\n"); return 2; }

    static x8 m;
    x8_init(&m, core);
    m.trace = trace;
    if (max_s > 0) m.max_cycles = (uint64_t)(max_s * 1000 * CYCLES_PER_MS);
    cfg.ip = tape;
    /* the IP reader reads the program tape first, then the data tape */
    charon_cfg c2 = cfg;
    c2.reader2 = tape;
    charon_setup(&m, &c2);
    x8_ip(&m);
    if (cfg.reader2) {
        /* after the prille begin the same reader goes on with the data tape */
        charon_reopen_ip(&m, cfg.reader2);
    }
    x8_run(&m, 0);
    charon_finish(&m);
    if (stats || (m.errnum != 1)) {
        fprintf(stderr, "x8emu: static stop, %s %d at interrupt address %u, ot %06o, after %.3f s"
                " (%llu cycles)\n", errtext(m.errnum), m.errnum, m.erraddr, m.ot & TP18M1,
                (double)m.ccs / (1000.0 * CYCLES_PER_MS), (unsigned long long)m.ccs);
        if (stats)
            fprintf(stderr, "x8emu: A=%09o S=%09o B=%09o drum transfers %llu\n", m.a, m.s, m.b,
                    (unsigned long long)charon_drum_transfers(&m));
    }
    return m.errnum == 1 ? 0 : 1;
}
