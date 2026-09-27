/*
 * Эталонная таблица для сверки плавающей точки.
 *
 * Считает ext/refemu/risc-fp.c — реализацией, уже сверенной с описанием
 * схемы, — и печатает в том виде, в каком её читает fp_diff.py:
 *
 *   X Y OP R        (шестнадцатеричные, OP: ADD SUB MUL DIV FLT FLR)
 *
 *   fp_ref <число> <число> ...
 *
 * Набор операндов сюда передаётся аргументами, а не зашит: он живёт в одном
 * месте, в fp_diff.py (VALS), и таблица не может от него отстать.
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
            /* Вычитателя в схеме нет: то же сложение с перевёрнутым знаком
             * второго слагаемого (RISC5.v:64). fp.s делает ровно так же. */
            printf("%08X %08X SUB %08X\n", x, y,
                   fp_add(x, y ^ 0x80000000u, false, false));
            printf("%08X %08X MUL %08X\n", x, y, fp_mul(x, y));
            printf("%08X %08X DIV %08X\n", x, y, fp_div(x, y));
        }
    }
    /* ⚠ У переводов второй операнд — НОЛЬ (находка 50: первая сверка подавала
     * то же число дважды и дала 24 ложных расхождения). */
    for (int i = 0; i < n; i++) {
        printf("%08X 00000000 FLT %08X\n", v[i], fp_add(v[i], 0, true, false));
        printf("%08X 00000000 FLR %08X\n", v[i], fp_add(v[i], 0, false, true));
    }
    free(v);
    return 0;
}
