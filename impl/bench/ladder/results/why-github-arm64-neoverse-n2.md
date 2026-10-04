[Русская версия](why-github-arm64-neoverse-n2.ru.md)

# Why the check is free - ci-linux-arm64

GENERATED FILE: `impl/bench/ladder/why.py`. How to read it: `impl/docs/FINDING-61-bounds-ladder.md`, the "why" experiment section.

* date: 2026-09-28
* system: `Linux 6.17.0-1022-azure`, architecture `aarch64`
* processor: core: **Neoverse N2** (MIDR: implementer 0x41, architecture 8, variant 0x0, part 0xd49, revision 0; names from Linux `arch/arm64/include/asm/cputype.h`)
* processor: lscpu: Vendor ID = ARM; Model name = Neoverse-N2
* machine: GitHub Actions `ubuntu-24.04-arm`, shared virtual
* loop: `sum += a[i]; i = i + 1; [k × add #64]; i &= 63` over 64 × u32; iterations per measurement: 64 000 000
* rounds: 5, round-robin; each measurement has 64 chunks in which calibration with 32 dependent additions (1 addition = 1 cycle) alternates with the kernel in one process; cycles of a measurement = best kernel chunk (ns/iter) ÷ best calibration chunk (ns/add); the tables show the median over rounds

| compiler | version | flags |
|---|---|---|
| C (clang) | `Ubuntu clang version 18.1.3 (1ubuntu1)` | `-O2 -fno-unroll-loops -fno-vectorize -fno-slp-vectorize` |
| C (gcc) | `gcc (Ubuntu 13.3.0-6ubuntu2~24.04.1) 13.3.0` | `-O2 -fno-unroll-loops -fno-tree-vectorize -fno-tree-slp-vectorize` |

## C (clang): cycles per iteration

Frequency from calibration (median): **3.40 GHz**.

Cycles per iteration (median over rounds); in parentheses, the cost of the checks Δ = cycles(c, k) − cycles(0, k):

| index chain | c = 0 | c = 1 | c = 2 | c = 4 |
|---|---:|---:|---:|---:|
| k = 0 (2 + 0 = 2 cycles) | 2.10 | 2.21 (+0.11) | 2.33 (+0.24) | 2.68 (+0.58) |
| k = 1 (2 + 1 = 3 cycles) | 3.40 | 3.38 (-0.02) | 3.36 (-0.04) | 3.41 (+0.01) |
| k = 2 (2 + 2 = 4 cycles) | 4.16 | 4.13 (-0.03) | 4.23 (+0.07) | 4.13 (-0.02) |
| k = 4 (2 + 4 = 6 cycles) | 6.01 | 6.00 (-0.00) | 6.01 (-0.00) | 6.01 (-0.00) |

Position of a single check (k = 0):

| variant | what | instructions in body | cycles | Δ vs c = 0 |
|---|---|---:|---:|---:|
| `why_c0_k0` | no check | 6 | 2.10 | +0.00 |
| `why_c1_k0` | pre: cmp + branch, index before the addition | 8 | 2.21 | +0.11 |
| `why_post` | post: cmp + branch, index after the mask | 9 | 2.25 | +0.16 |
| `why_mask` | mask: cmp + csel/cmov on the load index, outside the chain | 9 | 2.32 | +0.23 |
| `why_chain` | chain: cmp + csel/cmov in the index chain | 8 | 4.19 | +2.09 |

## C (gcc): cycles per iteration

Frequency from calibration (median): **3.40 GHz**.

Cycles per iteration (median over rounds); in parentheses, the cost of the checks Δ = cycles(c, k) − cycles(0, k):

| index chain | c = 0 | c = 1 | c = 2 | c = 4 |
|---|---:|---:|---:|---:|
| k = 0 (2 + 0 = 2 cycles) | 2.10 | 2.21 (+0.11) | 2.33 (+0.23) | 2.50 (+0.40) |
| k = 1 (2 + 1 = 3 cycles) | 3.36 | 3.36 (-0.01) | 3.36 (-0.01) | 3.40 (+0.04) |
| k = 2 (2 + 2 = 4 cycles) | 4.16 | 4.20 (+0.04) | 4.14 (-0.02) | 4.24 (+0.08) |
| k = 4 (2 + 4 = 6 cycles) | 6.19 | 6.14 (-0.05) | 6.23 (+0.04) | 6.20 (+0.01) |

Position of a single check (k = 0):

| variant | what | instructions in body | cycles | Δ vs c = 0 |
|---|---|---:|---:|---:|
| `why_c0_k0` | no check | 6 | 2.10 | +0.00 |
| `why_c1_k0` | pre: cmp + branch, index before the addition | 8 | 2.21 | +0.11 |
| `why_post` | post: cmp + branch, index after the mask | 8 | 2.48 | +0.38 |
| `why_mask` | mask: cmp + csel/cmov on the load index, outside the chain | 10 | 2.42 | +0.32 |
| `why_chain` | chain: cmp + csel/cmov in the index chain | 10 | 4.38 | +2.28 |

Full table (all rounds):

| compiler | kernel | c | k | position | instructions | cycles: median | min | max | ns/iter (best) |
|---|---|---:|---:|---|---:|---:|---:|---:|---:|
| C (clang) | `why_c0_k0` | 0 | 0 | pre | 6 | 2.096 | 2.095 | 2.097 | 0.616 |
| C (clang) | `why_c1_k0` | 1 | 0 | pre | 8 | 2.207 | 2.133 | 2.207 | 0.627 |
| C (clang) | `why_c2_k0` | 2 | 0 | pre | 10 | 2.331 | 2.330 | 2.332 | 0.685 |
| C (clang) | `why_c4_k0` | 4 | 0 | pre | 14 | 2.676 | 2.561 | 2.724 | 0.753 |
| C (clang) | `why_c0_k1` | 0 | 1 | pre | 7 | 3.401 | 3.400 | 3.402 | 1.000 |
| C (clang) | `why_c1_k1` | 1 | 1 | pre | 9 | 3.385 | 3.382 | 3.385 | 0.995 |
| C (clang) | `why_c2_k1` | 2 | 1 | pre | 11 | 3.358 | 3.356 | 3.361 | 0.987 |
| C (clang) | `why_c4_k1` | 4 | 1 | pre | 15 | 3.411 | 3.392 | 3.439 | 0.998 |
| C (clang) | `why_c0_k2` | 0 | 2 | pre | 8 | 4.158 | 4.148 | 4.158 | 1.220 |
| C (clang) | `why_c1_k2` | 1 | 2 | pre | 10 | 4.132 | 4.108 | 4.143 | 1.208 |
| C (clang) | `why_c2_k2` | 2 | 2 | pre | 12 | 4.230 | 4.220 | 4.255 | 1.241 |
| C (clang) | `why_c4_k2` | 4 | 2 | pre | 16 | 4.133 | 4.132 | 4.133 | 1.215 |
| C (clang) | `why_c0_k4` | 0 | 4 | pre | 10 | 6.005 | 6.005 | 6.005 | 1.766 |
| C (clang) | `why_c1_k4` | 1 | 4 | pre | 12 | 6.005 | 6.005 | 6.005 | 1.766 |
| C (clang) | `why_c2_k4` | 2 | 4 | pre | 14 | 6.005 | 6.005 | 6.005 | 1.766 |
| C (clang) | `why_c4_k4` | 4 | 4 | pre | 18 | 6.005 | 6.005 | 6.005 | 1.766 |
| C (clang) | `why_post` | 1 | 0 | post | 9 | 2.254 | 2.248 | 2.256 | 0.661 |
| C (clang) | `why_mask` | 1 | 0 | mask | 9 | 2.324 | 2.324 | 2.324 | 0.683 |
| C (clang) | `why_chain` | 1 | 0 | chain | 8 | 4.188 | 4.187 | 4.202 | 1.231 |
| C (gcc) | `why_c0_k0` | 0 | 0 | pre | 6 | 2.096 | 2.095 | 2.096 | 0.616 |
| C (gcc) | `why_c1_k0` | 1 | 0 | pre | 8 | 2.207 | 2.206 | 2.210 | 0.649 |
| C (gcc) | `why_c2_k0` | 2 | 0 | pre | 10 | 2.331 | 2.330 | 2.333 | 0.685 |
| C (gcc) | `why_c4_k0` | 4 | 0 | pre | 14 | 2.501 | 2.500 | 2.501 | 0.735 |
| C (gcc) | `why_c0_k1` | 0 | 1 | pre | 9 | 3.363 | 3.362 | 3.367 | 0.989 |
| C (gcc) | `why_c1_k1` | 1 | 1 | pre | 11 | 3.356 | 3.352 | 3.357 | 0.986 |
| C (gcc) | `why_c2_k1` | 2 | 1 | pre | 13 | 3.356 | 3.351 | 3.363 | 0.986 |
| C (gcc) | `why_c4_k1` | 4 | 1 | pre | 17 | 3.404 | 3.391 | 3.456 | 0.997 |
| C (gcc) | `why_c0_k2` | 0 | 2 | pre | 10 | 4.157 | 4.152 | 4.159 | 1.221 |
| C (gcc) | `why_c1_k2` | 1 | 2 | pre | 12 | 4.202 | 4.195 | 4.213 | 1.234 |
| C (gcc) | `why_c2_k2` | 2 | 2 | pre | 14 | 4.138 | 4.126 | 4.202 | 1.213 |
| C (gcc) | `why_c4_k2` | 4 | 2 | pre | 18 | 4.238 | 4.236 | 4.239 | 1.246 |
| C (gcc) | `why_c0_k4` | 0 | 4 | pre | 12 | 6.189 | 6.163 | 6.219 | 1.813 |
| C (gcc) | `why_c1_k4` | 1 | 4 | pre | 14 | 6.140 | 6.132 | 6.142 | 1.803 |
| C (gcc) | `why_c2_k4` | 2 | 4 | pre | 16 | 6.233 | 6.231 | 6.236 | 1.832 |
| C (gcc) | `why_c4_k4` | 4 | 4 | pre | 20 | 6.196 | 6.071 | 6.210 | 1.786 |
| C (gcc) | `why_post` | 1 | 0 | post | 8 | 2.477 | 2.458 | 2.488 | 0.723 |
| C (gcc) | `why_mask` | 1 | 0 | mask | 10 | 2.419 | 2.300 | 2.449 | 0.676 |
| C (gcc) | `why_chain` | 1 | 0 | chain | 10 | 4.381 | 4.379 | 4.410 | 1.288 |

## Loop bodies

### C (clang) - `why_c0_k0` (6 instructions)

```asm
.LBB1_1:
        ldr	w10, [x0, x9, lsl #2]
        add	w9, w9, #1
        subs	x1, x1, #1
        and	x9, x9, #0x3f
        add	w8, w10, w8
        b.ne	.LBB1_1
```

### C (clang) - `why_c1_k0` (8 instructions)

```asm
.LBB2_1:
        cmp	x10, x9
        b.hs	.LBB2_4
        ldr	w11, [x8, x10, lsl #2]
        add	w10, w10, #1
        subs	x1, x1, #1
        and	x10, x10, #0x3f
        add	w0, w11, w0
        b.ne	.LBB2_1
```

### C (clang) - `why_c2_k0` (10 instructions)

```asm
.LBB3_1:
        cmp	x11, x9
        b.hs	.LBB3_6
        cmp	x11, x10
        b.hs	.LBB3_5
        ldr	w12, [x8, x11, lsl #2]
        add	w11, w11, #1
        subs	x1, x1, #1
        and	x11, x11, #0x3f
        add	w0, w12, w0
        b.ne	.LBB3_1
```

### C (clang) - `why_c4_k0` (14 instructions)

```asm
.LBB4_1:
        cmp	x11, x9
        b.hs	.LBB4_10
        cmp	x11, x10
        b.hs	.LBB4_9
        cmp	x11, x12
        b.hs	.LBB4_8
        cmp	x11, x13
        b.hs	.LBB4_7
        ldr	w14, [x8, x11, lsl #2]
        add	w11, w11, #1
        subs	x1, x1, #1
        and	x11, x11, #0x3f
        add	w0, w14, w0
        b.ne	.LBB4_1
```

### C (clang) - `why_c0_k1` (7 instructions)

```asm
.LBB5_1:
        add	x10, x9, #1
        ldr	w9, [x0, x9, lsl #2]
        add	x10, x10, #64
        subs	x1, x1, #1
        add	w8, w9, w8
        and	x9, x10, #0x3f
        b.ne	.LBB5_1
```

### C (clang) - `why_c1_k1` (9 instructions)

```asm
.LBB6_1:
        cmp	x10, x9
        b.hs	.LBB6_4
        add	x11, x10, #1
        ldr	w10, [x8, x10, lsl #2]
        add	x11, x11, #64
        subs	x1, x1, #1
        add	w0, w10, w0
        and	x10, x11, #0x3f
        b.ne	.LBB6_1
```

### C (clang) - `why_c2_k1` (11 instructions)

```asm
.LBB7_1:
        cmp	x11, x9
        b.hs	.LBB7_6
        cmp	x11, x10
        b.hs	.LBB7_5
        add	x12, x11, #1
        ldr	w11, [x8, x11, lsl #2]
        add	x12, x12, #64
        subs	x1, x1, #1
        add	w0, w11, w0
        and	x11, x12, #0x3f
        b.ne	.LBB7_1
```

### C (clang) - `why_c4_k1` (15 instructions)

```asm
.LBB8_1:
        cmp	x13, x9
        b.hs	.LBB8_10
        cmp	x13, x10
        b.hs	.LBB8_9
        cmp	x13, x11
        b.hs	.LBB8_8
        cmp	x13, x12
        b.hs	.LBB8_7
        add	x14, x13, #1
        ldr	w13, [x8, x13, lsl #2]
        add	x14, x14, #64
        subs	x1, x1, #1
        add	w0, w13, w0
        and	x13, x14, #0x3f
        b.ne	.LBB8_1
```

### C (clang) - `why_c0_k2` (8 instructions)

```asm
.LBB9_1:
        add	x10, x9, #1
        ldr	w9, [x0, x9, lsl #2]
        add	x10, x10, #64
        add	x10, x10, #64
        subs	x1, x1, #1
        add	w8, w9, w8
        and	x9, x10, #0x3f
        b.ne	.LBB9_1
```

### C (clang) - `why_c1_k2` (10 instructions)

```asm
.LBB10_1:
        cmp	x10, x9
        b.hs	.LBB10_4
        add	x11, x10, #1
        ldr	w10, [x8, x10, lsl #2]
        add	x11, x11, #64
        add	x11, x11, #64
        subs	x1, x1, #1
        add	w0, w10, w0
        and	x10, x11, #0x3f
        b.ne	.LBB10_1
```

### C (clang) - `why_c2_k2` (12 instructions)

```asm
.LBB11_1:
        cmp	x11, x9
        b.hs	.LBB11_6
        cmp	x11, x10
        b.hs	.LBB11_5
        add	x12, x11, #1
        ldr	w11, [x8, x11, lsl #2]
        add	x12, x12, #64
        add	x12, x12, #64
        subs	x1, x1, #1
        add	w0, w11, w0
        and	x11, x12, #0x3f
        b.ne	.LBB11_1
```

### C (clang) - `why_c4_k2` (16 instructions)

```asm
.LBB12_1:
        cmp	x13, x9
        b.hs	.LBB12_10
        cmp	x13, x10
        b.hs	.LBB12_9
        cmp	x13, x11
        b.hs	.LBB12_8
        cmp	x13, x12
        b.hs	.LBB12_7
        add	x14, x13, #1
        ldr	w13, [x8, x13, lsl #2]
        add	x14, x14, #64
        add	x14, x14, #64
        subs	x1, x1, #1
        add	w0, w13, w0
        and	x13, x14, #0x3f
        b.ne	.LBB12_1
```

### C (clang) - `why_c0_k4` (10 instructions)

```asm
.LBB13_1:
        add	x10, x9, #1
        ldr	w9, [x0, x9, lsl #2]
        add	x10, x10, #64
        add	x10, x10, #64
        add	x10, x10, #64
        add	x10, x10, #64
        subs	x1, x1, #1
        add	w8, w9, w8
        and	x9, x10, #0x3f
        b.ne	.LBB13_1
```

### C (clang) - `why_c1_k4` (12 instructions)

```asm
.LBB14_1:
        cmp	x10, x9
        b.hs	.LBB14_4
        add	x11, x10, #1
        ldr	w10, [x8, x10, lsl #2]
        add	x11, x11, #64
        add	x11, x11, #64
        add	x11, x11, #64
        add	x11, x11, #64
        subs	x1, x1, #1
        add	w0, w10, w0
        and	x10, x11, #0x3f
        b.ne	.LBB14_1
```

### C (clang) - `why_c2_k4` (14 instructions)

```asm
.LBB15_1:
        cmp	x11, x9
        b.hs	.LBB15_6
        cmp	x11, x10
        b.hs	.LBB15_5
        add	x12, x11, #1
        ldr	w11, [x8, x11, lsl #2]
        add	x12, x12, #64
        add	x12, x12, #64
        add	x12, x12, #64
        add	x12, x12, #64
        subs	x1, x1, #1
        add	w0, w11, w0
        and	x11, x12, #0x3f
        b.ne	.LBB15_1
```

### C (clang) - `why_c4_k4` (18 instructions)

```asm
.LBB16_1:
        cmp	x13, x9
        b.hs	.LBB16_10
        cmp	x13, x10
        b.hs	.LBB16_9
        cmp	x13, x11
        b.hs	.LBB16_8
        cmp	x13, x12
        b.hs	.LBB16_7
        add	x14, x13, #1
        ldr	w13, [x8, x13, lsl #2]
        add	x14, x14, #64
        add	x14, x14, #64
        add	x14, x14, #64
        add	x14, x14, #64
        subs	x1, x1, #1
        add	w0, w13, w0
        and	x13, x14, #0x3f
        b.ne	.LBB16_1
```

### C (clang) - `why_post` (9 instructions)

```asm
.LBB17_1:
        add	w11, w10, #1
        and	x11, x11, #0x3f
        cmp	x11, x9
        b.hs	.LBB17_4
        ldr	w10, [x8, x10, lsl #2]
        subs	x1, x1, #1
        add	w0, w10, w0
        mov	x10, x11
        b.ne	.LBB17_1
```

### C (clang) - `why_mask` (9 instructions)

```asm
.LBB18_1:
        mov	x12, x10
        add	w10, w10, #1
        cmp	x12, x9
        csel	x12, x12, x11, lo
        and	x10, x10, #0x3f
        ldr	w12, [x0, x12, lsl #2]
        subs	x1, x1, #1
        add	w8, w12, w8
        b.ne	.LBB18_1
```

### C (clang) - `why_chain` (8 instructions)

```asm
.LBB19_1:
        cmp	x10, x9
        csel	x10, x10, x11, lo
        ldr	w12, [x0, x10, lsl #2]
        add	w10, w10, #1
        subs	x1, x1, #1
        add	w8, w12, w8
        and	x10, x10, #0x3f
        b.ne	.LBB19_1
```

### C (gcc) - `why_c0_k0` (6 instructions)

```asm
.L2:
        ldr	w3, [x4, x2, lsl 2]
        add	x2, x2, 1
        subs	x1, x1, #1
        and	x2, x2, 63
        add	w0, w0, w3
        bne	.L2
```

### C (gcc) - `why_c1_k0` (8 instructions)

```asm
.L24:
        cmp	x2, x4
        bcs	.L29
        ldr	w3, [x5, x2, lsl 2]
        add	x2, x2, 1
        subs	x1, x1, #1
        and	x2, x2, 63
        add	w0, w0, w3
        bne	.L24
```

### C (gcc) - `why_c2_k0` (10 instructions)

```asm
.L33:
        cmp	x2, x4
        bcs	.L36
        cmp	x2, x6
        bcs	.L37
        ldr	w3, [x5, x2, lsl 2]
        add	x2, x2, 1
        subs	x1, x1, #1
        and	x2, x2, 63
        add	w0, w0, w3
        bne	.L33
```

### C (gcc) - `why_c4_k0` (14 instructions)

```asm
.L43:
        cmp	x2, x3
        bcs	.L46
        cmp	x2, x6
        bcs	.L47
        cmp	x2, x7
        bcs	.L48
        cmp	x2, x8
        bcs	.L49
        ldr	w4, [x5, x2, lsl 2]
        add	x2, x2, 1
        subs	x1, x1, #1
        and	x2, x2, 63
        add	w0, w0, w4
        bne	.L43
```

### C (gcc) - `why_c0_k1` (9 instructions)

```asm
.L6:
        ldr	w3, [x4, x2, lsl 2]
        add	x2, x2, 1
        add	w0, w0, w3
        #APP
        add x2, x2, #64
        #NO_APP
        and	x2, x2, 63
        subs	x1, x1, #1
        bne	.L6
```

### C (gcc) - `why_c1_k1` (11 instructions)

```asm
.L52:
        cmp	x2, x4
        bcs	.L57
        ldr	w3, [x5, x2, lsl 2]
        add	x2, x2, 1
        add	w0, w0, w3
        #APP
        add x2, x2, #64
        #NO_APP
        and	x2, x2, 63
        subs	x1, x1, #1
        bne	.L52
```

### C (gcc) - `why_c2_k1` (13 instructions)

```asm
.L61:
        cmp	x2, x4
        bcs	.L64
        cmp	x2, x6
        bcs	.L65
        ldr	w3, [x5, x2, lsl 2]
        add	x2, x2, 1
        add	w0, w0, w3
        #APP
        add x2, x2, #64
        #NO_APP
        and	x2, x2, 63
        subs	x1, x1, #1
        bne	.L61
```

### C (gcc) - `why_c4_k1` (17 instructions)

```asm
.L71:
        cmp	x2, x3
        bcs	.L74
        cmp	x2, x6
        bcs	.L75
        cmp	x2, x7
        bcs	.L76
        cmp	x2, x8
        bcs	.L77
        ldr	w4, [x5, x2, lsl 2]
        add	x2, x2, 1
        add	w0, w0, w4
        #APP
        add x2, x2, #64
        #NO_APP
        and	x2, x2, 63
        subs	x1, x1, #1
        bne	.L71
```

### C (gcc) - `why_c0_k2` (10 instructions)

```asm
.L9:
        ldr	w3, [x4, x2, lsl 2]
        add	x2, x2, 1
        add	w0, w0, w3
        #APP
        add x2, x2, #64
        add x2, x2, #64
        #NO_APP
        and	x2, x2, 63
        subs	x1, x1, #1
        bne	.L9
```

### C (gcc) - `why_c1_k2` (12 instructions)

```asm
.L80:
        cmp	x2, x4
        bcs	.L85
        ldr	w3, [x5, x2, lsl 2]
        add	x2, x2, 1
        add	w0, w0, w3
        #APP
        add x2, x2, #64
        add x2, x2, #64
        #NO_APP
        and	x2, x2, 63
        subs	x1, x1, #1
        bne	.L80
```

### C (gcc) - `why_c2_k2` (14 instructions)

```asm
.L89:
        cmp	x2, x4
        bcs	.L92
        cmp	x2, x6
        bcs	.L93
        ldr	w3, [x5, x2, lsl 2]
        add	x2, x2, 1
        add	w0, w0, w3
        #APP
        add x2, x2, #64
        add x2, x2, #64
        #NO_APP
        and	x2, x2, 63
        subs	x1, x1, #1
        bne	.L89
```

### C (gcc) - `why_c4_k2` (18 instructions)

```asm
.L99:
        cmp	x2, x3
        bcs	.L102
        cmp	x2, x6
        bcs	.L103
        cmp	x2, x7
        bcs	.L104
        cmp	x2, x8
        bcs	.L105
        ldr	w4, [x5, x2, lsl 2]
        add	x2, x2, 1
        add	w0, w0, w4
        #APP
        add x2, x2, #64
        add x2, x2, #64
        #NO_APP
        and	x2, x2, 63
        subs	x1, x1, #1
        bne	.L99
```

### C (gcc) - `why_c0_k4` (12 instructions)

```asm
.L12:
        ldr	w3, [x4, x2, lsl 2]
        add	x2, x2, 1
        add	w0, w0, w3
        #APP
        add x2, x2, #64
        add x2, x2, #64
        add x2, x2, #64
        add x2, x2, #64
        #NO_APP
        and	x2, x2, 63
        subs	x1, x1, #1
        bne	.L12
```

### C (gcc) - `why_c1_k4` (14 instructions)

```asm
.L108:
        cmp	x2, x4
        bcs	.L113
        ldr	w3, [x5, x2, lsl 2]
        add	x2, x2, 1
        add	w0, w0, w3
        #APP
        add x2, x2, #64
        add x2, x2, #64
        add x2, x2, #64
        add x2, x2, #64
        #NO_APP
        and	x2, x2, 63
        subs	x1, x1, #1
        bne	.L108
```

### C (gcc) - `why_c2_k4` (16 instructions)

```asm
.L117:
        cmp	x2, x4
        bcs	.L120
        cmp	x2, x6
        bcs	.L121
        ldr	w3, [x5, x2, lsl 2]
        add	x2, x2, 1
        add	w0, w0, w3
        #APP
        add x2, x2, #64
        add x2, x2, #64
        add x2, x2, #64
        add x2, x2, #64
        #NO_APP
        and	x2, x2, 63
        subs	x1, x1, #1
        bne	.L117
```

### C (gcc) - `why_c4_k4` (20 instructions)

```asm
.L127:
        cmp	x2, x3
        bcs	.L130
        cmp	x2, x6
        bcs	.L131
        cmp	x2, x7
        bcs	.L132
        cmp	x2, x8
        bcs	.L133
        ldr	w4, [x5, x2, lsl 2]
        add	x2, x2, 1
        add	w0, w0, w4
        #APP
        add x2, x2, #64
        add x2, x2, #64
        add x2, x2, #64
        add x2, x2, #64
        #NO_APP
        and	x2, x2, 63
        subs	x1, x1, #1
        bne	.L127
```

### C (gcc) - `why_post` (8 instructions)

```asm
.L136:
        ldr	w3, [x5, x2, lsl 2]
        add	x2, x2, 1
        and	x2, x2, 63
        add	w0, w0, w3
        cmp	x4, x2
        bls	.L141
        subs	x1, x1, #1
        bne	.L136
```

### C (gcc) - `why_mask` (10 instructions)

```asm
.L15:
        add	x4, x2, 1
        #APP
        cmp x2, x6
        csel x2, x2, x5, lo
        #NO_APP
        ldr	w3, [x7, x2, lsl 2]
        subs	x1, x1, #1
        and	x2, x4, 63
        add	w0, w0, w3
        bne	.L15
```

### C (gcc) - `why_chain` (10 instructions)

```asm
.L18:
        #APP
        cmp x2, x5
        csel x2, x2, x4, lo
        #NO_APP
        ldr	w3, [x6, x2, lsl 2]
        add	x2, x2, 1
        subs	x1, x1, #1
        and	x2, x2, 63
        add	w0, w0, w3
        bne	.L18
```
