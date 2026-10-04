/*
 * Reference table for the floating point cross-check.
 *
 * Computed by ext/refemu/risc-fp.c, an implementation already checked against
 * the circuit description, and printed in the form fp_diff.py reads:
 *
 *   X Y OP R        (hexadecimal, OP: ADD SUB MUL DIV FLT FLR)
 *
 *   fp_ref <number> <number> ...
 *
 * The operand set is passed in as arguments rather than hard-coded: it lives in
 * one place, fp_diff.py (VALS), so the table cannot fall behind it.
 */
#include <stdio.h>
#include <stdlib.h>
#include "risc-fp.h"

int main(int argc, char **argv)
{
    int n = argc - 1;
    uint32_t *v = calloc(n > 0 ? n : 1, sizeof *v);

    for (int i = 0; i < n; i++)
        v[i] = (uint32_t)strtoul(argv[i + 1], NULL, 0);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            uint32_t x = v[i], y = v[j];
            printf("%08X %08X ADD %08X\n", x, y, fp_add(x, y, false, false));
            /* The circuit has no subtractor: it is the same addition with the
             * sign of the second operand flipped (RISC5.v:64). fp.s does exactly the same. */
            printf("%08X %08X SUB %08X\n", x, y,
                   fp_add(x, y ^ 0x80000000u, false, false));
            printf("%08X %08X MUL %08X\n", x, y, fp_mul(x, y));
            printf("%08X %08X DIV %08X\n", x, y, fp_div(x, y));
        }
    }
    /* ⚠ For conversions the second operand is ZERO (finding 50: the first check
     * passed the same number twice and produced 24 false mismatches). */
    for (int i = 0; i < n; i++) {
        printf("%08X 00000000 FLT %08X\n", v[i], fp_add(v[i], 0, true, false));
        printf("%08X 00000000 FLR %08X\n", v[i], fp_add(v[i], 0, false, true));
    }
    free(v);
    return 0;
}
