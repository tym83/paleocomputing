[English version](results.md)

# Ступень CHERI: результаты

Цикл один на все цели — [`loop.c`](loop.c): `sum += a[i]; i = (i+1) & 63`
по `u32[64]`, отдельный счётчик итераций. Это тот же цикл, что на RISC5
(`impl/tools/gen_bounds_bench.py`, находка 55).

* **A** — `sum_a`: никакой программной проверки. На CHERI чтение идёт через
  капабилити, и границы проверяет железо при каждом чтении.
* **B** — `sum_b`: A плюс `if (i >= lim) __builtin_trap()`, `lim` — `volatile`
  (компилятор не может доказать проверку лишней). Аналог конфигурации B RISC5,
  но **поверх** аппаратной проверки, а не вместо неё.

## 1. CHERIoT-Ibex, симулятор SAFE — такты

Потактовая Verilator-модель ядра CHERIoT-Ibex (`cheriot_ibex_safe_sim`),
плата `ibex-safe-simulator`. Счёт — `mcycle`/`minstret` вокруг вызова ядра,
прерывания запрещены, 100 000 итераций, накладные расходы замера (пустой прогон
`n = 0`) вычтены. Три повтора дали одно и то же число до такта.

| конфигурация | команд в теле | команд/итерацию | тактов/итерацию |
|---|---:|---:|---:|
| A — только аппаратная проверка | 8 | 8.000 | 9.000 |
| B — аппаратная + программная | 9 | 9.000 | 10.000 |
| цена программной проверки | +1 | +1.000 | **+1.000 (+11.1% к A)** |

Сырые числа: A — `cycles=900001 instret=800003`, B — `cycles=1000000
instret=900003` на `n=100000` ([`cheriot/out/run.log`](cheriot/out/run.log)).

Тело цикла из собранного образа ([`cheriot/out/kernels.dis`](cheriot/out/kernels.dis)):

```
A:  slli; ct.cincoffset; ct.clw; addi; addi; add; andi; bne          8 команд
B:  bgeu a5,a3,trap; slli; ct.cincoffset; ct.clw; addi; addi; add; andi; bne   9 команд
```

Трасса ядра ([`cheriot/out/trace-cut.txt`](cheriot/out/trace-cut.txt)): каждая
команда — 1 такт, включая `ct.clw` (чтение с проверкой границ капабилити);
взятый `bne` — 2 такта. Отсюда 8 + 1 = 9 и 9 + 1 = 10. Невзятый `bgeu` — 1 такт.

### Отрицательный контроль

| проба | что сделано | результат |
|---|---|---|
| C1 | тот же машинный код `sum_a`, указатель сужен до 32 слов | `CHERI BoundsViolation` в `ca5` = база + 0x80, т.е. ровно на `i = 32`; вызов вернул −1 |
| C2 | тот же код `sum_b`, `lim = 32` | `mcause 2` (недопустимая команда) на `unimp` по адресу `0x2004674c` — это `sum_b+0x32` в компартменте `probe`; вернул −1 |
| C0 | тот же `sum_a`, границы 64 слова | ловушки нет, сумма 1000 |

Обе проверки настоящие: аппаратная ловит выход за границы без единой команды
проверки в цикле, программная — своей ловушкой.

### Чем получено

```
impl/bench/cheri/cheriot/run.sh     # сборка + прогон, пишет out/
impl/bench/cheri/cheriot/trace.sh   # вариант SAFE с трассой, out/trace-cut.txt
```

| что | значение |
|---|---|
| образ | `ghcr.io/cheriot-platform/devcontainer@sha256:555261efaa1fe3c9e852252becb92c776b0400c60a67272a5517b09de4c36398` (arm64, создан 2026-08-27) |
| компилятор | `clang version 23.1.0 (CHERIoT-Platform/llvm-project ce4b09eb5084c923b6cc31a2af4aa9f6b7d4f748)` |
| сборка | xmake v3.0.9+20260519 |
| SDK | cheriot-rtos `17ae734ba98e4f084bfaa2bf07f0447ca4d7e127` |
| плата | `ibex-safe-simulator` (есть в `sdk/boards`; запуск — `scripts/msft-safe-run-sim.sh ibex`) |
| флаги ядра | `-Oz` от SDK, затем `-O2 -fno-unroll-loops -fno-vectorize -fno-slp-vectorize` (последний `-O` действует; строка — [`cheriot/out/compile-cmd.txt`](cheriot/out/compile-cmd.txt)) |

## 2. Кодогенерация: CHERI Compiler Explorer (Кембридж)

`-O2 -fno-unroll-loops -fno-vectorize -fno-slp-vectorize`, те же `sum_a`/`sum_b`.
Перегенерация: `python3 asm/gen.py` (POST JSON в `/api/compiler/<id>/compile`).
Счёт — команды между меткой цикла и обратным переходом включительно.

| цель (id в Compiler Explorer) | A, команд | B, команд | чтение элемента в A |
|---|---:|---:|---|
| AArch64 (`morello-nocheri`) | 6 | 8 | `ldr w10, [x0, x9, lsl #2]` |
| Morello hybrid (`morello-hybrid`) | 6 | 8 | `ldr w10, [x0, x9, lsl #2]` |
| **Morello purecap** (`morello-purecap`) | **6** | **8** | `ldr w10, [c0, x9, lsl #2]` |
| RISC-V 64 (`cheri-riscv64-nocheri`) | 9 | 10 | `add a4, a4, a0` + `lw a4, 0(a4)` |
| **CHERI-RISC-V 64 purecap** (`cheri-riscv64-purecap`) | **9** | **10** | `cincoffset ca4, ca0, a4` + `lw a4, 0(ca4)` |
| CHERIoT (32 бит, из п. 1, для сравнения) | 8 | 9 | `ct.cincoffset` + `ct.clw` |

* В purecap тело цикла **той же длины**, что без CHERI: проверка границ
  встроена в чтение, отдельной команды нет. Morello — тот же `ldr` с
  масштабированным индексом, только база — капабилити `c0`. CHERI-RISC-V —
  `add` заменён на `cincoffset`.
* Программная проверка стоит: AArch64/Morello — 2 команды (`cmp` + `b.hs`),
  RISC-V — 1 (`bgeu`, сравнение совмещено с переходом).
* Две лишние команды RV64 (`slli`/`srli`) — обнуление старших битов
  32-битного `unsigned i`, к CHERI отношения не имеют; на 32-битном CHERIoT
  их нет.
* Файлы: [`asm/`](asm/).

## 3. Рядом с RISC5 (находка 55)

| машина | конфигурация | команд/индексацию | тактов/индексацию |
|---|---|---:|---:|
| RISC5 | B — программная (`SUB`+`BCC`) | 10 | 11 |
| RISC5 | E — аппаратная (`CHKS`) | 9 | 10 |
| CHERIoT-Ibex | A — аппаратная (в чтении) | 8 | 9 |
| CHERIoT-Ibex | B — аппаратная + программная (`bgeu`) | 9 | 10 |

Сравнивать надо **разности**, а не абсолютные числа: ядра, системы команд и
память разные. RISC5: `CHKS` вместо `SUB`+`BCC` экономит 1 команду и 1 такт.
CHERIoT: программная проверка поверх аппаратной стоит 1 команду и 1 такт;
аппаратная — 0 команд в цикле, а в тактах её цену этим замером отделить нельзя
(см. находку 63).
