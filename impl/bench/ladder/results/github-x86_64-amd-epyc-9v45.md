# Лестница проверки границ — ci-linux-x86_64

ПОРОЖДЁННЫЙ ФАЙЛ — `impl/bench/ladder/ladder.py`. Как читать — `impl/docs/FINDING-61-bounds-ladder.md`.

* дата: 2026-09-27
* система: `Linux 6.17.0-1022-azure`, архитектура `x86_64`
* процессор: model name: AMD EPYC 9V45 96-Core Processor
* машина: GitHub Actions `ubuntu-latest`, общая виртуальная
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
| C (clang) | `none` | 5 | +0 | — | 0.442 | 0.443 | 2.8% | 1.000 |
| C (clang) | `auto` | 5 | +0 | **выброшена** | 0.442 | 0.442 | 0.2% | 1.001 |
| C (clang) | `forced` | 7 | +2 | осталась | 0.442 | 0.443 | 0.2% | 1.001 |
| C (gcc) | `none` | 5 | +0 | — | 0.442 | 0.443 | 2.7% | 1.000 |
| C (gcc) | `auto` | 5 | +0 | **выброшена** | 0.442 | 0.442 | 0.3% | 1.000 |
| C (gcc) | `forced` | 7 | +2 | осталась | 0.442 | 0.443 | 0.5% | 1.000 |
| Rust | `none` | 5 | +0 | — | 0.442 | 0.443 | 0.3% | 1.000 |
| Rust | `auto` | 5 | +0 | **выброшена** | 0.442 | 0.442 | 1.9% | 1.001 |
| Rust | `forced` | 7 | +2 | осталась | 0.442 | 0.442 | 0.2% | 1.000 |

*Команд в теле* — от метки обратного перехода до него самого включительно, по ассемблеру компилятора. *Разброс* — (худший − лучший) / лучший.

## Тела циклов

### C (clang) — `none` (5 команд)

```asm
.LBB0_1:
        addl	(%rdi,%rcx,4), %eax
        incl	%ecx
        andl	$63, %ecx
        decq	%rsi
        jne	.LBB0_1
```

### C (clang) — `auto` (5 команд)

```asm
.LBB0_1:
        addl	(%rdi,%rcx,4), %eax
        incl	%ecx
        andl	$63, %ecx
        decq	%rsi
        jne	.LBB0_1
```

### C (clang) — `forced` (7 команд — выход к ловушке: `jae	.LBB0_4`)

```asm
.LBB0_1:
        cmpq	%rcx, %rdx
        jae	.LBB0_4
        addl	(%rdi,%rdx,4), %eax
        incl	%edx
        andl	$63, %edx
        decq	%rsi
        jne	.LBB0_1
```

### C (gcc) — `none` (5 команд)

```asm
.L7:
        addl	(%rdi,%rax,4), %edx
        addq	$1, %rax
        andl	$63, %eax
        subq	$1, %rsi
        jne	.L7
```

### C (gcc) — `auto` (5 команд)

```asm
.L7:
        addl	(%rdi,%rax,4), %edx
        addq	$1, %rax
        andl	$63, %eax
        subq	$1, %rsi
        jne	.L7
```

### C (gcc) — `forced` (7 команд — выход к ловушке: `jnb	.L10`)

```asm
.L8:
        cmpq	%rcx, %rax
        jnb	.L10
        addl	(%rdi,%rax,4), %edx
        addq	$1, %rax
        andl	$63, %eax
        subq	$1, %rsi
        jne	.L8
```

### Rust — `none` (5 команд)

```asm
.LBB8_1:
        addl	(%rdi,%rcx,4), %eax
        incl	%ecx
        andl	$63, %ecx
        decq	%rsi
        jne	.LBB8_1
```

### Rust — `auto` (5 команд)

```asm
.LBB8_1:
        addl	(%rdi,%rcx,4), %eax
        incl	%ecx
        andl	$63, %ecx
        decq	%rsi
        jne	.LBB8_1
```

### Rust — `forced` (7 команд — выход к ловушке: `jae	.LBB8_4`)

```asm
.LBB8_1:
        cmpq	%rcx, %rdx
        jae	.LBB8_4
        addl	(%rdi,%rdx,4), %eax
        incl	%edx
        andl	$63, %edx
        decq	%rsi
        jne	.LBB8_1
```
