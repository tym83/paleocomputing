[English version](github-arm64.md)

# Лестница проверки границ — ci-linux-arm64

ПОРОЖДЁННЫЙ ФАЙЛ — `impl/bench/ladder/ladder.py`. Как читать — `impl/docs/FINDING-61-bounds-ladder.md`.

* дата: 2026-09-27
* система: `Linux 6.17.0-1022-azure`, архитектура `aarch64`
* процессор: CPU implementer: 0x41
* машина: GitHub Actions `ubuntu-24.04-arm`, общая виртуальная
* массив: 64 × u32, индекс `i = (i + 1) & 63`; итераций на прогон: 500 000 000
* прогонов на конфигурацию: 5, по кругу; берётся лучший

| компилятор | версия | флаги |
|---|---|---|
| C (clang) | `Ubuntu clang version 18.1.3 (1ubuntu1)` | `-O2 -fno-unroll-loops -fno-vectorize -fno-slp-vectorize` |
| C (gcc) | `gcc (Ubuntu 13.3.0-6ubuntu2~24.04.1) 13.3.0` | `-O2 -fno-unroll-loops -fno-tree-vectorize -fno-tree-slp-vectorize` |
| Rust | `rustc 1.98.1 (48a229cea 2026-09-01) (LLVM version: 22.1.8)` | `-C opt-level=2 -C codegen-units=1 -C debug-assertions=off -C overflow-checks=off -C no-vectorize-loops -C no-vectorize-slp -C llvm-args=-unroll-threshold=0 -C llvm-args=-unroll-runtime=false` |

> ⚠ Наносекунды включают частотное масштабирование и фон машины. Значат отношения к `none` внутри одной строки компилятора, а не абсолютные числа.

| компилятор | конфигурация | команд в теле | Δ к none | проверка в цикле | нс/итер (лучшее) | медиана | разброс | к none |
|---|---|---:|---:|---|---:|---:|---:|---:|
| C (clang) | `none` | 6 | +0 | — | 0.618 | 0.618 | 0.1% | 1.000 |
| C (clang) | `auto` | 6 | +0 | **выброшена** | 0.618 | 0.618 | 0.0% | 1.000 |
| C (clang) | `forced` | 8 | +2 | осталась | 0.651 | 0.651 | 0.1% | 1.053 |
| C (gcc) | `none` | 6 | +0 | — | 0.638 | 0.638 | 0.1% | 1.000 |
| C (gcc) | `auto` | 6 | +0 | **выброшена** | 0.637 | 0.638 | 0.2% | 0.999 |
| C (gcc) | `forced` | 8 | +2 | осталась | 0.651 | 0.651 | 0.1% | 1.020 |
| Rust | `none` | 6 | +0 | — | 0.613 | 0.617 | 0.7% | 1.000 |
| Rust | `auto` | 6 | +0 | **выброшена** | 0.616 | 0.617 | 0.1% | 1.005 |
| Rust | `forced` | 8 | +2 | осталась | 0.651 | 0.652 | 0.1% | 1.062 |

*Команд в теле* — от метки обратного перехода до него самого включительно, по ассемблеру компилятора. *Разброс* — (худший − лучший) / лучший.

## Тела циклов

### C (clang) — `none` (6 команд)

```asm
.LBB0_1:
        ldr	w10, [x0, x9, lsl #2]
        add	w9, w9, #1
        subs	x1, x1, #1
        and	x9, x9, #0x3f
        add	w8, w10, w8
        b.ne	.LBB0_1
```

### C (clang) — `auto` (6 команд)

```asm
.LBB0_1:
        ldr	w10, [x0, x9, lsl #2]
        add	w9, w9, #1
        subs	x1, x1, #1
        and	x9, x9, #0x3f
        add	w8, w10, w8
        b.ne	.LBB0_1
```

### C (clang) — `forced` (8 команд — выход к ловушке: `b.hs	.LBB0_4`)

```asm
.LBB0_1:
        cmp	x10, x9
        b.hs	.LBB0_4
        ldr	w11, [x8, x10, lsl #2]
        add	w10, w10, #1
        subs	x1, x1, #1
        and	x10, x10, #0x3f
        add	w0, w11, w0
        b.ne	.LBB0_1
```

### C (gcc) — `none` (6 команд)

```asm
.L7:
        ldr	w3, [x4, x2, lsl 2]
        add	x2, x2, 1
        subs	x1, x1, #1
        and	x2, x2, 63
        add	w0, w0, w3
        bne	.L7
```

### C (gcc) — `auto` (6 команд)

```asm
.L7:
        ldr	w3, [x4, x2, lsl 2]
        add	x2, x2, 1
        subs	x1, x1, #1
        and	x2, x2, 63
        add	w0, w0, w3
        bne	.L7
```

### C (gcc) — `forced` (8 команд — выход к ловушке: `bcs	.L10`)

```asm
.L8:
        cmp	x2, x4
        bcs	.L10
        ldr	w3, [x5, x2, lsl 2]
        add	x2, x2, 1
        subs	x1, x1, #1
        and	x2, x2, 63
        add	w0, w0, w3
        bne	.L8
```

### Rust — `none` (6 команд)

```asm
.LBB8_1:
        ldr	w10, [x0, x9, lsl #2]
        add	w9, w9, #1
        subs	x1, x1, #1
        and	x9, x9, #0x3f
        add	w8, w10, w8
        b.ne	.LBB8_1
```

### Rust — `auto` (6 команд)

```asm
.LBB8_1:
        ldr	w10, [x0, x9, lsl #2]
        add	w9, w9, #1
        subs	x1, x1, #1
        and	x9, x9, #0x3f
        add	w8, w10, w8
        b.ne	.LBB8_1
```

### Rust — `forced` (8 команд — выход к ловушке: `b.hs	.LBB8_4`)

```asm
.LBB8_1:
        cmp	x9, x10
        b.hs	.LBB8_4
        ldr	w11, [x0, x9, lsl #2]
        add	w9, w9, #1
        subs	x1, x1, #1
        and	x9, x9, #0x3f
        add	w8, w11, w8
        b.ne	.LBB8_1
```
