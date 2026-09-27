/* Цикл замера цены проверки границ — тот же, что на RISC5
 * (tools/gen_bounds_bench.py): sum += a[i]; i = (i+1) & 63.
 *
 * sum_a — конфигурация A: только то, что даёт машина (на CHERI — аппаратная
 *         проверка границ капабилити при каждом чтении).
 * sum_b — конфигурация B: A плюс явная программная проверка
 *         «беззнаковое i >= lim -> ловушка». lim читается из памяти
 *         (volatile), чтобы компилятор не доказал её лишней и не выбросил.
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
