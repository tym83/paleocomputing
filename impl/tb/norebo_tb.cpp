// ЗАМЫКАНИЕ КРУГА: компилятор Оберона собирает сам себя на настоящем RTL.
//
// До сих пор самораскрутка проверялась на эмуляторе RISC5, написанном на C
// (ext/norebo/Runtime/risc-cpu.c, 484 строки). Здесь тот же компилятор работает
// на ядре `RISC5.v` Никлауса Вирта, прогоняемом Verilator'ом такт за тактом.
//
// Что остаётся на C и почему это законно: мост к файловой системе хоста
// (norebo.c). Оберон обращается к нему через четыре адреса ввода-вывода —
// номер запроса и три аргумента, — и это интерфейс к ОС, а не часть машины.
// В браузерной версии он не нужен вовсе: там файлы живут в образе диска.
//
// Собирается с объектными файлами самого Norebo, чтобы использовать ЕГО
// реализацию файловых операций без изменений — иначе сравнение было бы нечестным.
#include "VRISC5.h"
#include "VRISC5___024root.h"
#include "VRISC5_RISC5.h"
#include "VRISC5_Registers.h"
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <vector>
#include <string>

// ── интерфейс к мосту Norebo (реализация — в norebo_bridge.c) ───────────────
extern "C" {
    void     nb_init(int argc, char** argv);
    uint32_t nb_io_read(uint32_t adr);
    void     nb_io_write(uint32_t adr, uint32_t val);
    int      nb_halted(void);
    uint32_t nb_ram_size(void);
    uint32_t* nb_ram(void);
    uint32_t nb_stack_org(void);
}

// ⚠ Norebo адресует устройства ОТРИЦАТЕЛЬНЫМИ числами (-4, -8, -12, -16), то есть
// 0xFFFFFFFC и т.д. в 32 битах. Но шина RISC5 — 24 бита, и оттуда приходит 0xFFFFFC.
// Проверка `(int32_t)a < 0` на 24-битном адресе не срабатывает НИКОГДА — из-за этого
// первый прогон крутился вхолостую 4 млрд инструкций.
// Устройства занимают верхние 64 байта 24-битного пространства; переводим обратно
// в отрицательный вид, который ждёт код Norebo.
static const uint32_t IO_TOP = 0x00FFFFC0;
static inline bool is_io(uint32_t a) { return a >= IO_TOP; }
static inline uint32_t to_neg(uint32_t a) { return a | 0xFF000000u; }

// ── окно замера и профиль (выпуск №2) ──────────────────────────────────────
// Программа отмечает окно записью в порт светодиодов (-60): 1 — начало, 0 —
// конец (LED(1)/LED(0) в Обероне). Внутри окна каждая завершённая инструкция
// относится к классу по своему слову, и ей приписываются все такты, которые
// она занимала, включая стойло. Окон может быть много — всё суммируется.
// Снаружи окна не считается ничего: загрузка модулей и чтение весов в число
// не входят.
enum PClass { PC_FML, PC_FAD, PC_FSB, PC_FLT, PC_FLOOR, PC_FDV, PC_MUL, PC_DIV,
              PC_LD, PC_ST, PC_BR, PC_ALU, PC_N };
static const char* pc_name[PC_N] = {"FML", "FAD", "FSB", "FLT", "FLOOR", "FDV", "MUL", "DIV",
                                    "LD", "ST", "переход", "прочее АЛУ"};
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
    uint64_t fml_b2b = 0, fml_b2b_cyc = 0;   // FML сразу за FML (надбавка счётчика)
    uint64_t fmac = 0, fmac_cyc = 0;         // FAD, читающий результат последнего FML
    int fml_dst = -1, fml_n = 0;             // куда писал последний FML и сколько стоил
    uint32_t prev_ir = 0;
    void add(uint32_t ir, int cycles) {
        int k = pclass(ir);
        n[k]++; c[k] += cycles; cyc += cycles; ins++;
        if (k == PC_FML && pclass(prev_ir) == PC_FML) { fml_b2b++; fml_b2b_cyc += cycles; }
        // Кандидат в слитную FMAC — пара «FML t,a,b … FAD d,x,t»: FAD читает
        // регистр, куда писал последний FML, и между ними его никто не
        // переписал (компилятор ставит между ними загрузку суммы из памяти).
        uint32_t a = ir >> 24 & 0xF, b = ir >> 20 & 0xF, cc = ir & 0xF;
        bool q = ir >> 30 & 1, p = ir >> 31 & 1, u = ir >> 29 & 1;
        if (k == PC_FAD && fml_dst >= 0 && (b == (uint32_t)fml_dst || (!q && cc == (uint32_t)fml_dst))) {
            fmac++; fmac_cyc += fml_n + cycles; fml_dst = -1;
        }
        if (k == PC_FML) { fml_dst = a; fml_n = cycles; }
        else {
            bool writes = !p || (p && !q && !u);            // регистровые операции и LD
            bool link = p && q && (ir >> 28 & 1);           // BL пишет R15
            if ((writes && (int)a == fml_dst) || (link && fml_dst == 15)) fml_dst = -1;
        }
        prev_ir = ir;
    }
    void report() const {
        if (!windows) return;
        printf("\n  окно замера: %llu окон, %llu инструкций, %llu тактов\n",
               (unsigned long long)windows, (unsigned long long)ins, (unsigned long long)cyc);
        printf("  профиль:  класс        команд      тактов   доля тактов  тактов/команду  стойло\n");
        uint64_t st = 0;
        for (int k = 0; k < PC_N; k++) if (n[k]) {
            printf("    %-12s %12llu %12llu %10.2f%% %10.2f %12llu\n", pc_name[k],
                   (unsigned long long)n[k], (unsigned long long)c[k],
                   100.0 * c[k] / cyc, (double)c[k] / n[k], (unsigned long long)(c[k] - n[k]));
            st += c[k] - n[k];
        }
        printf("    стойло всего (такты сверх одного на команду): %llu = %.2f%%\n",
               (unsigned long long)st, 100.0 * st / cyc);
        printf("    FML сразу за FML: %llu команд, %llu тактов\n",
               (unsigned long long)fml_b2b, (unsigned long long)fml_b2b_cyc);
        printf("    пары FML→FAD по результату (кандидаты FMAC): %llu, %llu тактов\n",
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

    // InnerCore грузит сам мост (nb_init): формат блочный — пары «размер, адрес»,
    // и разбирает его код Norebo без изменений.
    uint32_t read_mem(uint32_t a) {
        // ПЗУ в режиме Norebo не используется: InnerCore уже слинкован и лежит в ОЗУ
        // Шина RTL выставляет адрес и при записи, и стенд читает его каждый такт.
        // Чтения светодиодов у Norebo нет (он падает на нём), а метки окна пишут
        // именно туда — отвечаем нулём, как отвечает несуществующий регистр.
        if (is_io(a) && (int32_t)to_neg(a) == -60) return 0;
        if (is_io(a)) return nb_io_read(to_neg(a));
        uint32_t i = (a >> 2);
        return i < nb_ram_size() / 4 ? nb_ram()[i] : 0;
    }
    void write_mem(uint32_t a, uint32_t v, bool ben) {
        if (is_io(a) && (int32_t)to_neg(a) == -60) {      // светодиоды = метки окна
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
        // Norebo стартует с адреса 0, а не с ПЗУ: InnerCore уже слинкован
        top->rst = 0; top->irq = 0; top->stallX = 0;
        for (int i = 0; i < 4; i++) {
            top->clk = 0; top->eval();
            top->codebus = read_mem(top->adr); top->inbus = read_mem(top->adr); top->eval();
            top->clk = 1; top->eval();
        }
        top->rst = 1; top->clk = 0; top->eval();
        // Стартовое состояние — как в norebo.c: PC=0, R12=0x20 (вектор ловушек),
        // R14 = StackOrg. Сброс RISC5 ставит PC в ПЗУ, поэтому переопределяем.
        //
        // ⚠ И вместе с PC обязательно задать РЕГИСТР КОМАНД. RISC5 — машина с
        // предвыборкой: в начале такта IR держит исполняемую инструкцию, а шина
        // уже показывает следующую. Если задать только PC, в IR останется мусор
        // от сброса, первая инструкция (переход из InnerCore) не выполнится,
        // и ядро пойдёт исполнять таблицу модулей как код. Именно это и было.
        top->rootp->RISC5->PC = 0;
        top->rootp->RISC5->IR = read_mem(0);
        top->rootp->RISC5->regs->R[12] = 0x20;
        top->rootp->RISC5->regs->R[14] = nb_stack_org();
        top->codebus = read_mem(0); top->inbus = read_mem(0); top->eval();
    }
    int step() {
        int n = 0;
        uint32_t ir = top->rootp->RISC5->IR;   // исполняемая инструкция (предвыборка — см. выше)
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
        fprintf(stderr, "использование: norebo_tb ORP.Compile Файл.Mod/s ...\n");
        return 1;
    }
    nb_init(argc, argv);
    Soc s;
    s.reset_at_zero();
    printf("  ядро: RISC5.v Вирта на Verilator, старт с адреса 0\n\n");

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
        if (n < 0) { printf("\n  ЗАВИС на PC=%06X\n", s.pc() * 4); return 2; }
    }
    printf("\n  выполнено на RTL: %llu инструкций, %llu тактов\n",
           (unsigned long long)s.insns, (unsigned long long)s.cycles);
    prof.report();
    return 0;
}
