/* Loop that measures the cost of a bounds check, the same one as on RISC5
 * (tools/gen_bounds_bench.py): sum += a[i]; i = (i+1) & 63.
 *
 * sum_a - configuration A: only what the machine provides (on CHERI, the hardware
 *         capability bounds check on every load).
 * sum_b - configuration B: A plus an explicit software check
 *         "unsigned i >= lim -> trap". lim is read from memory
 *         (volatile) so the compiler cannot prove the check redundant and drop it.
 */
extern volatile unsigned lim;

unsigned sum_a(const unsigned *a, unsigned n)
{
    unsigned sum = 0, i = 0;
    for (unsigned k = 0; k < n; k++) {
        sum += a[i];
        i = (i + 1) & 63;
    }
    return sum;
}

unsigned sum_b(const unsigned *a, unsigned n)
{
    unsigned sum = 0, i = 0;
    unsigned l = lim;
    for (unsigned k = 0; k < n; k++) {
        if (i >= l)
            __builtin_trap();
        sum += a[i];
        i = (i + 1) & 63;
    }
    return sum;
}
