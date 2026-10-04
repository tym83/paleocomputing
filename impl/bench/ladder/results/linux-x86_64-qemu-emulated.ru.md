[English version](linux-x86_64-qemu-emulated.md)

# Лестница проверки границ — linux-x86_64-qemu-emulated

ПОРОЖДЁННЫЙ ФАЙЛ — `impl/bench/ladder/ladder.py`. Как читать — `impl/docs/FINDING-61-bounds-ladder.md`.

* дата: 2026-09-27
* система: `Linux 6.8.0-100-generic`, архитектура `x86_64`
* процессор: эмулируется; /proc/cpuinfo принадлежит хосту
* машина: контейнер rust:1 (linux/amd64) под эмуляцией QEMU в colima на Apple M4; clang поставлен apt-get в контейнер
* массив: 64 × u32, индекс `i = (i + 1) & 63`; итераций на прогон: 2 000 000
* прогонов на конфигурацию: 1, по кругу; берётся лучший

| компилятор | версия | флаги |
|---|---|---|
| C (clang) | `Debian clang version 19.1.7 (3+b1)` | `-O2 -fno-unroll-loops -fno-vectorize -fno-slp-vectorize` |
| C (gcc) | `gcc (Debian 14.2.0-19) 14.2.0` | `-O2 -fno-unroll-loops -fno-tree-vectorize -fno-tree-slp-vectorize` |
| Rust | `rustc 1.98.1 (48a229cea 2026-09-01) (LLVM version: 22.1.8)` | `-C opt-level=2 -C codegen-units=1 -C debug-assertions=off -C overflow-checks=off -C no-vectorize-loops -C no-vectorize-slp -C llvm-args=-unroll-threshold=0 -C llvm-args=-unroll-runtime=false` |

> ⚠ **Машина эмулируется (QEMU).** Время ниже не значит ничего и приведено только для полноты. Верны число команд в теле цикла и сумма (проверена).

| компилятор | конфигурация | команд в теле | Δ к none | проверка в цикле | нс/итер (лучшее) | медиана | разброс | к none |
|---|---|---:|---:|---|---:|---:|---:|---:|
| C (clang) | `none` | 5 | +0 | — | 0.935 | 0.935 | 0.0% | 1.000 |
| C (clang) | `auto` | 5 | +0 | **выброшена** | 0.939 | 0.939 | 0.0% | 1.004 |
| C (clang) | `forced` | 7 | +2 | осталась | 1.578 | 1.578 | 0.0% | 1.687 |
| C (gcc) | `none` | 5 | +0 | — | 0.939 | 0.939 | 0.0% | 1.000 |
| C (gcc) | `auto` | 5 | +0 | **выброшена** | 0.929 | 0.929 | 0.0% | 0.990 |
| C (gcc) | `forced` | 7 | +2 | осталась | 1.338 | 1.338 | 0.0% | 1.425 |
| Rust | `none` | 5 | +0 | — | 0.929 | 0.929 | 0.0% | 1.000 |
| Rust | `auto` | 5 | +0 | **выброшена** | 0.934 | 0.934 | 0.0% | 1.005 |
| Rust | `forced` | 7 | +2 | осталась | 1.355 | 1.355 | 0.0% | 1.459 |

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
.L5:
        addl	(%rdi,%rax,4), %edx
        addq	$1, %rax
        andl	$63, %eax
        subq	$1, %rsi
        jne	.L5
```

### C (gcc) — `auto` (5 команд)

```asm
.L5:
        addl	(%rdi,%rax,4), %edx
        addq	$1, %rax
        andl	$63, %eax
        subq	$1, %rsi
        jne	.L5
```

### C (gcc) — `forced` (7 команд — выход к ловушке: `jnb	.L8`)

```asm
.L6:
        cmpq	%rcx, %rax
        jnb	.L8
        addl	(%rdi,%rax,4), %edx
        addq	$1, %rax
        andl	$63, %eax
        subq	$1, %rsi
        jne	.L6
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
