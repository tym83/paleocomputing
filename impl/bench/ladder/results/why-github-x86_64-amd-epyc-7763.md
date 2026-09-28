# Почему проверка бесплатна — ci-linux-x86_64

ПОРОЖДЁННЫЙ ФАЙЛ — `impl/bench/ladder/why.py`. Как читать — `impl/docs/FINDING-61-bounds-ladder.md`, раздел «Почему так: эксперимент».

* дата: 2026-09-28
* система: `Linux 6.17.0-1022-azure`, архитектура `x86_64`
* процессор: AMD EPYC 7763 64-Core Processor
* процессор: vendor_id AuthenticAMD, cpu family 25, model 1, stepping 1
* процессор: lscpu: Vendor ID = AuthenticAMD; Model name = AMD EPYC 7763 64-Core Processor; Hypervisor vendor = Microsoft
* машина: GitHub Actions `ubuntu-latest`, общая виртуальная
* цикл: `sum += a[i]; i = i + 1; [k × add #64]; i &= 63` над 64 × u32; итераций на замер: 64 000 000
* кругов: 5, по кругу; в каждом замере 64 кусков, где калибровка 32 зависимыми сложениями (1 сложение = 1 такт) чередуется с ядром в одном процессе; такты замера = лучший кусок ядра (нс/итер) ÷ лучший кусок калибровки (нс/сложение); в таблицах — медиана по кругам

| компилятор | версия | флаги |
|---|---|---|
| C (clang) | `Ubuntu clang version 18.1.3 (1ubuntu1)` | `-O2 -fno-unroll-loops -fno-vectorize -fno-slp-vectorize` |
| C (gcc) | `gcc (Ubuntu 13.3.0-6ubuntu2~24.04.1) 13.3.0` | `-O2 -fno-unroll-loops -fno-tree-vectorize -fno-tree-slp-vectorize` |

## C (clang): такты на итерацию

Частота по калибровке (медиана): **3.24 ГГц**.

Такты на итерацию (медиана по кругам), в скобках — добавка от проверок Δ = такты(c, k) − такты(0, k):

| цепочка индекса | c = 0 | c = 1 | c = 2 | c = 4 |
|---|---:|---:|---:|---:|
| k = 0 (2 + 0 = 2 такта) | 2.00 | 2.00 (+0.00) | 2.00 (+0.00) | 2.50 (+0.50) |
| k = 1 (2 + 1 = 3 такта) | 3.14 | 3.00 (-0.14) | 3.27 (+0.14) | 3.00 (-0.14) |
| k = 2 (2 + 2 = 4 такта) | 4.02 | 4.02 (-0.00) | 4.02 (-0.00) | 4.02 (+0.00) |
| k = 4 (2 + 4 = 6 такта) | 6.03 | 6.03 (-0.00) | 6.03 (-0.00) | 6.03 (-0.00) |

Положение одной проверки (k = 0):

| вариант | что | команд в теле | такты | Δ к c = 0 |
|---|---|---:|---:|---:|
| `why_c0_k0` | без проверки | 5 | 2.00 | +0.00 |
| `why_c1_k0` | pre: cmp + переход, индекс до сложения | 7 | 2.00 | +0.00 |
| `why_post` | post: cmp + переход, индекс после маски | 8 | 2.00 | +0.00 |
| `why_mask` | mask: cmp + csel/cmov на индексе чтения, вне цепочки | 8 | 2.00 | +0.00 |
| `why_chain` | chain: cmp + csel/cmov в цепочке индекса | 7 | 4.36 | +2.36 |

## C (gcc): такты на итерацию

Частота по калибровке (медиана): **3.24 ГГц**.

Такты на итерацию (медиана по кругам), в скобках — добавка от проверок Δ = такты(c, k) − такты(0, k):

| цепочка индекса | c = 0 | c = 1 | c = 2 | c = 4 |
|---|---:|---:|---:|---:|
| k = 0 (2 + 0 = 2 такта) | 2.00 | 2.24 (+0.24) | 2.00 (+0.00) | 2.50 (+0.50) |
| k = 1 (2 + 1 = 3 такта) | 3.14 | 3.00 (-0.14) | 3.20 (+0.07) | 3.55 (+0.42) |
| k = 2 (2 + 2 = 4 такта) | 4.15 | 4.02 (-0.13) | 4.03 (-0.13) | 4.03 (-0.13) |
| k = 4 (2 + 4 = 6 такта) | 6.03 | 6.50 (+0.47) | 6.03 (+0.00) | 6.03 (+0.00) |

Положение одной проверки (k = 0):

| вариант | что | команд в теле | такты | Δ к c = 0 |
|---|---|---:|---:|---:|
| `why_c0_k0` | без проверки | 5 | 2.00 | +0.00 |
| `why_c1_k0` | pre: cmp + переход, индекс до сложения | 7 | 2.24 | +0.24 |
| `why_post` | post: cmp + переход, индекс после маски | 7 | 2.00 | +0.00 |
| `why_mask` | mask: cmp + csel/cmov на индексе чтения, вне цепочки | 8 | 2.00 | +0.00 |
| `why_chain` | chain: cmp + csel/cmov в цепочке индекса | 7 | 4.28 | +2.28 |

Полная таблица (все круги):

| компилятор | ядро | c | k | положение | команд | такты: медиана | мин | макс | нс/итер (лучшее) |
|---|---|---:|---:|---|---:|---:|---:|---:|---:|
| C (clang) | `why_c0_k0` | 0 | 0 | pre | 5 | 2.000 | 2.000 | 2.000 | 0.617 |
| C (clang) | `why_c1_k0` | 1 | 0 | pre | 7 | 2.000 | 2.000 | 2.000 | 0.617 |
| C (clang) | `why_c2_k0` | 2 | 0 | pre | 9 | 2.000 | 2.000 | 2.000 | 0.617 |
| C (clang) | `why_c4_k0` | 4 | 0 | pre | 13 | 2.500 | 2.500 | 2.500 | 0.771 |
| C (clang) | `why_c0_k1` | 0 | 1 | pre | 6 | 3.139 | 3.134 | 3.149 | 0.966 |
| C (clang) | `why_c1_k1` | 1 | 1 | pre | 8 | 3.000 | 3.000 | 3.003 | 0.925 |
| C (clang) | `why_c2_k1` | 2 | 1 | pre | 10 | 3.275 | 3.275 | 3.275 | 1.010 |
| C (clang) | `why_c4_k1` | 4 | 1 | pre | 14 | 3.000 | 3.000 | 3.003 | 0.925 |
| C (clang) | `why_c0_k2` | 0 | 2 | pre | 7 | 4.025 | 4.025 | 4.025 | 1.241 |
| C (clang) | `why_c1_k2` | 1 | 2 | pre | 9 | 4.025 | 4.025 | 4.025 | 1.241 |
| C (clang) | `why_c2_k2` | 2 | 2 | pre | 11 | 4.025 | 4.025 | 4.025 | 1.241 |
| C (clang) | `why_c4_k2` | 4 | 2 | pre | 15 | 4.025 | 4.025 | 4.025 | 1.241 |
| C (clang) | `why_c0_k4` | 0 | 4 | pre | 9 | 6.027 | 6.025 | 6.030 | 1.857 |
| C (clang) | `why_c1_k4` | 1 | 4 | pre | 11 | 6.026 | 6.025 | 6.027 | 1.857 |
| C (clang) | `why_c2_k4` | 2 | 4 | pre | 13 | 6.025 | 6.025 | 6.027 | 1.857 |
| C (clang) | `why_c4_k4` | 4 | 4 | pre | 17 | 6.026 | 6.025 | 6.027 | 1.857 |
| C (clang) | `why_post` | 1 | 0 | post | 8 | 2.000 | 2.000 | 2.000 | 0.617 |
| C (clang) | `why_mask` | 1 | 0 | mask | 8 | 2.000 | 2.000 | 2.000 | 0.617 |
| C (clang) | `why_chain` | 1 | 0 | chain | 7 | 4.357 | 4.357 | 4.359 | 1.343 |
| C (gcc) | `why_c0_k0` | 0 | 0 | pre | 5 | 2.000 | 2.000 | 2.000 | 0.617 |
| C (gcc) | `why_c1_k0` | 1 | 0 | pre | 7 | 2.236 | 2.234 | 2.244 | 0.689 |
| C (gcc) | `why_c2_k0` | 2 | 0 | pre | 9 | 2.000 | 2.000 | 2.000 | 0.617 |
| C (gcc) | `why_c4_k0` | 4 | 0 | pre | 13 | 2.500 | 2.500 | 2.500 | 0.771 |
| C (gcc) | `why_c0_k1` | 0 | 1 | pre | 6 | 3.137 | 3.133 | 3.144 | 0.966 |
| C (gcc) | `why_c1_k1` | 1 | 1 | pre | 8 | 3.000 | 3.000 | 3.025 | 0.925 |
| C (gcc) | `why_c2_k1` | 2 | 1 | pre | 10 | 3.204 | 3.193 | 3.262 | 0.984 |
| C (gcc) | `why_c4_k1` | 4 | 1 | pre | 14 | 3.555 | 3.477 | 3.627 | 1.072 |
| C (gcc) | `why_c0_k2` | 0 | 2 | pre | 7 | 4.152 | 4.150 | 4.155 | 1.279 |
| C (gcc) | `why_c1_k2` | 1 | 2 | pre | 9 | 4.025 | 4.025 | 4.026 | 1.241 |
| C (gcc) | `why_c2_k2` | 2 | 2 | pre | 11 | 4.025 | 4.025 | 4.044 | 1.241 |
| C (gcc) | `why_c4_k2` | 4 | 2 | pre | 15 | 4.025 | 4.025 | 4.047 | 1.241 |
| C (gcc) | `why_c0_k4` | 0 | 4 | pre | 9 | 6.025 | 6.025 | 6.029 | 1.857 |
| C (gcc) | `why_c1_k4` | 1 | 4 | pre | 11 | 6.500 | 6.336 | 6.501 | 1.953 |
| C (gcc) | `why_c2_k4` | 2 | 4 | pre | 13 | 6.026 | 6.025 | 6.028 | 1.857 |
| C (gcc) | `why_c4_k4` | 4 | 4 | pre | 17 | 6.026 | 6.025 | 6.028 | 1.857 |
| C (gcc) | `why_post` | 1 | 0 | post | 7 | 2.000 | 2.000 | 2.000 | 0.617 |
| C (gcc) | `why_mask` | 1 | 0 | mask | 8 | 2.000 | 2.000 | 2.000 | 0.617 |
| C (gcc) | `why_chain` | 1 | 0 | chain | 7 | 4.283 | 4.268 | 4.292 | 1.316 |

## Тела циклов

### C (clang) — `why_c0_k0` (5 команд)

```asm
.LBB1_1:
        addl	(%rdi,%rcx,4), %eax
        incl	%ecx
        andl	$63, %ecx
        decq	%rsi
        jne	.LBB1_1
```

### C (clang) — `why_c1_k0` (7 команд)

```asm
.LBB2_1:
        cmpq	%rcx, %rdx
        jae	.LBB2_4
        addl	(%rdi,%rdx,4), %eax
        incl	%edx
        andl	$63, %edx
        decq	%rsi
        jne	.LBB2_1
```

### C (clang) — `why_c2_k0` (9 команд)

```asm
.LBB3_1:
        cmpq	%rcx, %r8
        jae	.LBB3_5
        cmpq	%rdx, %r8
        jae	.LBB3_6
        addl	(%rdi,%r8,4), %eax
        incl	%r8d
        andl	$63, %r8d
        decq	%rsi
        jne	.LBB3_1
```

### C (clang) — `why_c4_k0` (13 команд)

```asm
.LBB4_1:
        cmpq	%rcx, %r10
        jae	.LBB4_7
        cmpq	%rdx, %r10
        jae	.LBB4_8
        cmpq	%r8, %r10
        jae	.LBB4_9
        cmpq	%r9, %r10
        jae	.LBB4_10
        addl	(%rdi,%r10,4), %eax
        incl	%r10d
        andl	$63, %r10d
        decq	%rsi
        jne	.LBB4_1
```

### C (clang) — `why_c0_k1` (6 команд)

```asm
.LBB5_1:
        addl	(%rdi,%rcx,4), %eax
        incq	%rcx
        addq	$64, %rcx
        andl	$63, %ecx
        decq	%rsi
        jne	.LBB5_1
```

### C (clang) — `why_c1_k1` (8 команд)

```asm
.LBB6_1:
        cmpq	%rcx, %rdx
        jae	.LBB6_4
        addl	(%rdi,%rdx,4), %eax
        incq	%rdx
        addq	$64, %rdx
        andl	$63, %edx
        decq	%rsi
        jne	.LBB6_1
```

### C (clang) — `why_c2_k1` (10 команд)

```asm
.LBB7_1:
        cmpq	%rcx, %r8
        jae	.LBB7_5
        cmpq	%rdx, %r8
        jae	.LBB7_6
        addl	(%rdi,%r8,4), %eax
        incq	%r8
        addq	$64, %r8
        andl	$63, %r8d
        decq	%rsi
        jne	.LBB7_1
```

### C (clang) — `why_c4_k1` (14 команд)

```asm
.LBB8_1:
        cmpq	%rcx, %r10
        jae	.LBB8_7
        cmpq	%rdx, %r10
        jae	.LBB8_8
        cmpq	%r8, %r10
        jae	.LBB8_9
        cmpq	%r9, %r10
        jae	.LBB8_10
        addl	(%rdi,%r10,4), %eax
        incq	%r10
        addq	$64, %r10
        andl	$63, %r10d
        decq	%rsi
        jne	.LBB8_1
```

### C (clang) — `why_c0_k2` (7 команд)

```asm
.LBB9_1:
        addl	(%rdi,%rcx,4), %eax
        incq	%rcx
        addq	$64, %rcx
        addq	$64, %rcx
        andl	$63, %ecx
        decq	%rsi
        jne	.LBB9_1
```

### C (clang) — `why_c1_k2` (9 команд)

```asm
.LBB10_1:
        cmpq	%rcx, %rdx
        jae	.LBB10_4
        addl	(%rdi,%rdx,4), %eax
        incq	%rdx
        addq	$64, %rdx
        addq	$64, %rdx
        andl	$63, %edx
        decq	%rsi
        jne	.LBB10_1
```

### C (clang) — `why_c2_k2` (11 команд)

```asm
.LBB11_1:
        cmpq	%rcx, %r8
        jae	.LBB11_5
        cmpq	%rdx, %r8
        jae	.LBB11_6
        addl	(%rdi,%r8,4), %eax
        incq	%r8
        addq	$64, %r8
        addq	$64, %r8
        andl	$63, %r8d
        decq	%rsi
        jne	.LBB11_1
```

### C (clang) — `why_c4_k2` (15 команд)

```asm
.LBB12_1:
        cmpq	%rcx, %r10
        jae	.LBB12_7
        cmpq	%rdx, %r10
        jae	.LBB12_8
        cmpq	%r8, %r10
        jae	.LBB12_9
        cmpq	%r9, %r10
        jae	.LBB12_10
        addl	(%rdi,%r10,4), %eax
        incq	%r10
        addq	$64, %r10
        addq	$64, %r10
        andl	$63, %r10d
        decq	%rsi
        jne	.LBB12_1
```

### C (clang) — `why_c0_k4` (9 команд)

```asm
.LBB13_1:
        addl	(%rdi,%rcx,4), %eax
        incq	%rcx
        addq	$64, %rcx
        addq	$64, %rcx
        addq	$64, %rcx
        addq	$64, %rcx
        andl	$63, %ecx
        decq	%rsi
        jne	.LBB13_1
```

### C (clang) — `why_c1_k4` (11 команд)

```asm
.LBB14_1:
        cmpq	%rcx, %rdx
        jae	.LBB14_4
        addl	(%rdi,%rdx,4), %eax
        incq	%rdx
        addq	$64, %rdx
        addq	$64, %rdx
        addq	$64, %rdx
        addq	$64, %rdx
        andl	$63, %edx
        decq	%rsi
        jne	.LBB14_1
```

### C (clang) — `why_c2_k4` (13 команд)

```asm
.LBB15_1:
        cmpq	%rcx, %r8
        jae	.LBB15_5
        cmpq	%rdx, %r8
        jae	.LBB15_6
        addl	(%rdi,%r8,4), %eax
        incq	%r8
        addq	$64, %r8
        addq	$64, %r8
        addq	$64, %r8
        addq	$64, %r8
        andl	$63, %r8d
        decq	%rsi
        jne	.LBB15_1
```

### C (clang) — `why_c4_k4` (17 команд)

```asm
.LBB16_1:
        cmpq	%rcx, %r10
        jae	.LBB16_7
        cmpq	%rdx, %r10
        jae	.LBB16_8
        cmpq	%r8, %r10
        jae	.LBB16_9
        cmpq	%r9, %r10
        jae	.LBB16_10
        addl	(%rdi,%r10,4), %eax
        incq	%r10
        addq	$64, %r10
        addq	$64, %r10
        addq	$64, %r10
        addq	$64, %r10
        andl	$63, %r10d
        decq	%rsi
        jne	.LBB16_1
```

### C (clang) — `why_post` (8 команд)

```asm
.LBB17_1:
        leal	1(%rdx), %r8d
        andl	$63, %r8d
        cmpq	%rcx, %r8
        jae	.LBB17_4
        addl	(%rdi,%rdx,4), %eax
        movq	%r8, %rdx
        decq	%rsi
        jne	.LBB17_1
```

### C (clang) — `why_mask` (8 команд)

```asm
.LBB18_1:
        movq	%r8, %r9
        cmpq	%rcx, %r9
        cmovaeq	%rdx, %r9
        addl	(%rdi,%r9,4), %eax
        incl	%r8d
        andl	$63, %r8d
        decq	%rsi
        jne	.LBB18_1
```

### C (clang) — `why_chain` (7 команд)

```asm
.LBB19_1:
        cmpq	%rcx, %r8
        cmovaeq	%rdx, %r8
        addl	(%rdi,%r8,4), %eax
        incl	%r8d
        andl	$63, %r8d
        decq	%rsi
        jne	.LBB19_1
```

### C (gcc) — `why_c0_k0` (5 команд)

```asm
.L2:
        addl	(%rdi,%rax,4), %edx
        addq	$1, %rax
        andl	$63, %eax
        subq	$1, %rsi
        jne	.L2
```

### C (gcc) — `why_c1_k0` (7 команд)

```asm
.L24:
        cmpq	%rcx, %rax
        jnb	.L26
        addl	(%rdi,%rax,4), %edx
        addq	$1, %rax
        andl	$63, %eax
        subq	$1, %rsi
        jne	.L24
```

### C (gcc) — `why_c2_k0` (9 команд)

```asm
.L32:
        cmpq	%rcx, %rax
        jnb	.L34
        cmpq	%r8, %rax
        jnb	.L35
        addl	(%rdi,%rax,4), %edx
        addq	$1, %rax
        andl	$63, %eax
        subq	$1, %rsi
        jne	.L32
```

### C (gcc) — `why_c4_k0` (13 команд)

```asm
.L42:
        cmpq	%rdx, %rax
        jnb	.L44
        cmpq	%r8, %rax
        jnb	.L45
        cmpq	%r9, %rax
        jnb	.L46
        cmpq	%r10, %rax
        jnb	.L47
        addl	(%rdi,%rax,4), %ecx
        addq	$1, %rax
        andl	$63, %eax
        subq	$1, %rsi
        jne	.L42
```

### C (gcc) — `why_c0_k1` (6 команд)

```asm
.L6:
        addl	(%rdi,%rax,4), %edx
        addq	$1, %rax
        addq $64, %rax
        andl	$63, %eax
        subq	$1, %rsi
        jne	.L6
```

### C (gcc) — `why_c1_k1` (8 команд)

```asm
.L51:
        cmpq	%rcx, %rax
        jnb	.L53
        addl	(%rdi,%rax,4), %edx
        addq	$1, %rax
        addq $64, %rax
        andl	$63, %eax
        subq	$1, %rsi
        jne	.L51
```

### C (gcc) — `why_c2_k1` (10 команд)

```asm
.L59:
        cmpq	%rcx, %rax
        jnb	.L61
        cmpq	%r8, %rax
        jnb	.L62
        addl	(%rdi,%rax,4), %edx
        addq	$1, %rax
        addq $64, %rax
        andl	$63, %eax
        subq	$1, %rsi
        jne	.L59
```

### C (gcc) — `why_c4_k1` (14 команд)

```asm
.L69:
        cmpq	%rdx, %rax
        jnb	.L71
        cmpq	%r8, %rax
        jnb	.L72
        cmpq	%r9, %rax
        jnb	.L73
        cmpq	%r10, %rax
        jnb	.L74
        addl	(%rdi,%rax,4), %ecx
        addq	$1, %rax
        addq $64, %rax
        andl	$63, %eax
        subq	$1, %rsi
        jne	.L69
```

### C (gcc) — `why_c0_k2` (7 команд)

```asm
.L9:
        addl	(%rdi,%rax,4), %edx
        addq	$1, %rax
        addq $64, %rax
        addq $64, %rax
        andl	$63, %eax
        subq	$1, %rsi
        jne	.L9
```

### C (gcc) — `why_c1_k2` (9 команд)

```asm
.L78:
        cmpq	%rcx, %rax
        jnb	.L80
        addl	(%rdi,%rax,4), %edx
        addq	$1, %rax
        addq $64, %rax
        addq $64, %rax
        andl	$63, %eax
        subq	$1, %rsi
        jne	.L78
```

### C (gcc) — `why_c2_k2` (11 команд)

```asm
.L86:
        cmpq	%rcx, %rax
        jnb	.L88
        cmpq	%r8, %rax
        jnb	.L89
        addl	(%rdi,%rax,4), %edx
        addq	$1, %rax
        addq $64, %rax
        addq $64, %rax
        andl	$63, %eax
        subq	$1, %rsi
        jne	.L86
```

### C (gcc) — `why_c4_k2` (15 команд)

```asm
.L96:
        cmpq	%rdx, %rax
        jnb	.L98
        cmpq	%r8, %rax
        jnb	.L99
        cmpq	%r9, %rax
        jnb	.L100
        cmpq	%r10, %rax
        jnb	.L101
        addl	(%rdi,%rax,4), %ecx
        addq	$1, %rax
        addq $64, %rax
        addq $64, %rax
        andl	$63, %eax
        subq	$1, %rsi
        jne	.L96
```

### C (gcc) — `why_c0_k4` (9 команд)

```asm
.L12:
        addl	(%rdi,%rax,4), %edx
        addq	$1, %rax
        addq $64, %rax
        addq $64, %rax
        addq $64, %rax
        addq $64, %rax
        andl	$63, %eax
        subq	$1, %rsi
        jne	.L12
```

### C (gcc) — `why_c1_k4` (11 команд)

```asm
.L105:
        cmpq	%rcx, %rax
        jnb	.L107
        addl	(%rdi,%rax,4), %edx
        addq	$1, %rax
        addq $64, %rax
        addq $64, %rax
        addq $64, %rax
        addq $64, %rax
        andl	$63, %eax
        subq	$1, %rsi
        jne	.L105
```

### C (gcc) — `why_c2_k4` (13 команд)

```asm
.L113:
        cmpq	%rcx, %rax
        jnb	.L115
        cmpq	%r8, %rax
        jnb	.L116
        addl	(%rdi,%rax,4), %edx
        addq	$1, %rax
        addq $64, %rax
        addq $64, %rax
        addq $64, %rax
        addq $64, %rax
        andl	$63, %eax
        subq	$1, %rsi
        jne	.L113
```

### C (gcc) — `why_c4_k4` (17 команд)

```asm
.L123:
        cmpq	%rdx, %rax
        jnb	.L125
        cmpq	%r8, %rax
        jnb	.L126
        cmpq	%r9, %rax
        jnb	.L127
        cmpq	%r10, %rax
        jnb	.L128
        addl	(%rdi,%rax,4), %ecx
        addq	$1, %rax
        addq $64, %rax
        addq $64, %rax
        addq $64, %rax
        addq $64, %rax
        andl	$63, %eax
        subq	$1, %rsi
        jne	.L123
```

### C (gcc) — `why_post` (7 команд)

```asm
.L132:
        addl	(%rdi,%rax,4), %edx
        addq	$1, %rax
        andl	$63, %eax
        cmpq	%rcx, %rax
        jnb	.L134
        subq	$1, %rsi
        jne	.L132
```

### C (gcc) — `why_mask` (8 команд)

```asm
.L15:
        movq	%rax, %rdx
        addq	$1, %rax
        cmpq %r9, %rdx
        cmovaeq %r8, %rdx
        andl	$63, %eax
        addl	(%rdi,%rdx,4), %ecx
        subq	$1, %rsi
        jne	.L15
```

### C (gcc) — `why_chain` (7 команд)

```asm
.L18:
        cmpq %r8, %rax
        cmovaeq %rcx, %rax
        addl	(%rdi,%rax,4), %edx
        addq	$1, %rax
        andl	$63, %eax
        subq	$1, %rsi
        jne	.L18
```
