/* Мост к рантайму Norebo для запуска компилятора Оберона на НАСТОЯЩЕМ RTL.
 *
 * Приём: включаем norebo.c целиком, подменив только его main() и точку запуска
 * процессора. Всё остальное — память, файловые операции, таблица системных
 * запросов — берётся у Norebo БЕЗ ИЗМЕНЕНИЙ. Иначе сравнение «то же самое,
 * но на RTL» было бы нечестным: мы бы сравнивали с собственной реализацией.
 *
 * Что скрыто: main() и вызов risc_run(). Вместо них процессор крутит Verilator.
 */
/* norebo.c — код на C, и собирается этот файл тоже как C (cc, отдельным
   объектом — правило в Makefile), а не как C++ в составе Verilator.
   ⚠ Раньше мост был .cpp и включал norebo.c внутрь extern "C". clang на macOS
   это прощал, а g++ на Linux — нет: в main() у Norebo стоят назначенные
   инициализаторы массива (`.R[12] = 0x20`), которых в C++ нет. Упало в CI.
   Код Norebo при этом не правим — меняется только то, чем его собирают.
   Подменяем main(): его тело зовёт risc_run(), которого здесь нет
   (процессор крутит Verilator), и он всё равно не нужен. */
/* risc-cpu.h не включает <stdint.h> сам — рассчитывает, что это сделали до него. */
#include <stdint.h>
#include <stdbool.h>

/* Счётчики, которые в оригинале живут в risc-cpu.c. Мы его не подключаем —
   процессор крутит Verilator, — поэтому определяем здесь. Такты на RTL считает
   сам стенд, эти нужны лишь для того, чтобы слинковался print_cycle_stats(). */
uint64_t risc_cycles = 0, risc_insns = 0;
uint64_t risc_chk_hits[8] = {0}, risc_chk_dyn_total = 0;
/* Профиль IDX (выпуск 14, дескрипторы) — тоже из risc-cpu.c. */
uint64_t risc_desc_prof[4] = {0};

/* Заголовок включаем ПЕРВЫМ, до подмены: иначе #define risc_run испортит
   объявление функции в risc-cpu.h. */
#include "../ext/norebo/Runtime/risc-cpu.h"
#define main norebo_unused_main
#define risc_run(io, cpu) ((void)0)
#include "../ext/norebo/Runtime/norebo.c"
#undef risc_run
#undef main

#include <stdint.h>

/* MemBytes, StackOrg, mem[], io_read_word(), io_write_word(), load_inner_core(),
   mem_write_word(), nargc, nargv — всё это пришло из norebo.c выше. */

static int halted = 0;

void nb_init(int argc, char **argv) {
    nargc = argc - 1;
    nargv = argv + 1;
    load_inner_core();
    mem_write_word(12, MemBytes);   /* MemLim  — читает Kernel.Init */
    mem_write_word(24, StackOrg);   /* heapOrg — читает Kernel.Init */
}

static int trace_io = -1;
static void io_trace_init(void) {
    if (trace_io < 0) trace_io = getenv("NB_TRACE_IO") ? 1 : 0;
}

uint32_t nb_io_read(uint32_t adr) {
    io_trace_init();
    uint32_t v = io_read_word(adr);
    if (trace_io) fprintf(stderr, "  IO чтение  %d -> %u\n", -(int32_t)adr / 4, v);
    return v;
}

void nb_io_write(uint32_t adr, uint32_t val) {
    /* Запрос noreboHalt (=1) — единственный способ для Оберона сказать «я закончил».
       В оригинале он вызывает exit(); здесь поднимаем флаг, чтобы стенд напечатал
       статистику по RTL и вышел сам.
       ⚠ Обе проверки обязательны: -adr/4 == 1 означает «пишут в регистр НОМЕРА
       запроса», а val == 1 — что это именно halt. Без второй останов срабатывал
       на любом системном вызове, и прогон заканчивался через 103 инструкции. */
    io_trace_init();
    if (trace_io) fprintf(stderr, "  IO запись  %d <- %u\n", -(int32_t)adr / 4, val);
    if (-(int32_t)adr / 4 == 1 && val == 1) { halted = 1; return; }
    io_write_word(adr, val);
}

int       nb_halted(void)   { return halted; }
uint32_t  nb_ram_size(void) { return MemBytes; }
uint32_t *nb_ram(void)      { return (uint32_t *)mem; }

uint32_t nb_stack_org(void) { return StackOrg; }
