[Русская версия](why-macos-arm64-apple-m4.ru.md)

# Why the check is free - macos-arm64-apple-m4

GENERATED FILE: `impl/bench/ladder/why.py`. How to read it: `impl/docs/FINDING-61-bounds-ladder.md`, the "why" experiment section.

* date: 2026-09-28
* system: `Darwin 25.4.0`, architecture `aarch64`
* processor: Apple M4
* loop: `sum += a[i]; i = i + 1; [k × add #64]; i &= 63` over 64 × u32; iterations per measurement: 64 000 000
* rounds: 5, round-robin; each measurement has 64 chunks in which calibration with 32 dependent additions (1 addition = 1 cycle) alternates with the kernel in one process; cycles of a measurement = best kernel chunk (ns/iter) ÷ best calibration chunk (ns/add); the tables show the median over rounds

| compiler | version | flags |
|---|---|---|
| C (clang) | `Apple clang version 21.0.0 (clang-2100.1.1.101)` | `-O2 -fno-unroll-loops -fno-vectorize -fno-slp-vectorize` |

## C (clang): cycles per iteration

Frequency from calibration (median): **2.49 GHz**.

Cycles per iteration (median over rounds); in parentheses, the cost of the checks Δ = cycles(c, k) − cycles(0, k):

| index chain | c = 0 | c = 1 | c = 2 | c = 4 |
|---|---:|---:|---:|---:|
| k = 0 (2 + 0 = 2 cycles) | 2.24 | 2.44 (+0.20) | 2.44 (+0.21) | 2.81 (+0.57) |
| k = 1 (2 + 1 = 3 cycles) | 3.24 | 3.47 (+0.24) | 3.43 (+0.20) | 3.58 (+0.35) |
| k = 2 (2 + 2 = 4 cycles) | 4.25 | 4.52 (+0.28) | 4.52 (+0.28) | 4.56 (+0.31) |
| k = 4 (2 + 4 = 6 cycles) | 6.20 | 6.40 (+0.21) | 6.47 (+0.27) | 6.56 (+0.36) |

Position of a single check (k = 0):

| variant | what | instructions in body | cycles | Δ vs c = 0 |
|---|---|---:|---:|---:|
| `why_c0_k0` | no check | 6 | 2.24 | +0.00 |
| `why_c1_k0` | pre: cmp + branch, index before the addition | 8 | 2.44 | +0.20 |
| `why_post` | post: cmp + branch, index after the mask | 9 | 2.34 | +0.10 |
| `why_mask` | mask: cmp + csel/cmov on the load index, outside the chain | 8 | 2.60 | +0.36 |
| `why_chain` | chain: cmp + csel/cmov in the index chain | 8 | 4.23 | +1.99 |

Full table (all rounds):

| compiler | kernel | c | k | position | instructions | cycles: median | min | max | ns/iter (best) |
|---|---|---:|---:|---|---:|---:|---:|---:|---:|
| C (clang) | `why_c0_k0` | 0 | 0 | pre | 6 | 2.239 | 2.231 | 2.244 | 0.897 |
| C (clang) | `why_c1_k0` | 1 | 0 | pre | 8 | 2.440 | 2.406 | 2.444 | 0.967 |
| C (clang) | `why_c2_k0` | 2 | 0 | pre | 10 | 2.445 | 2.397 | 2.455 | 0.961 |
| C (clang) | `why_c4_k0` | 4 | 0 | pre | 14 | 2.808 | 2.801 | 2.818 | 1.123 |
| C (clang) | `why_c0_k1` | 0 | 1 | pre | 7 | 3.237 | 3.223 | 3.254 | 1.298 |
| C (clang) | `why_c1_k1` | 1 | 1 | pre | 9 | 3.473 | 3.471 | 3.498 | 1.392 |
| C (clang) | `why_c2_k1` | 2 | 1 | pre | 11 | 3.434 | 3.297 | 3.449 | 1.322 |
| C (clang) | `why_c4_k1` | 4 | 1 | pre | 15 | 3.584 | 3.574 | 3.590 | 1.433 |
| C (clang) | `why_c0_k2` | 0 | 2 | pre | 8 | 4.247 | 4.241 | 4.847 | 1.703 |
| C (clang) | `why_c1_k2` | 1 | 2 | pre | 10 | 4.524 | 4.518 | 4.565 | 1.815 |
| C (clang) | `why_c2_k2` | 2 | 2 | pre | 12 | 4.523 | 4.519 | 4.529 | 1.812 |
| C (clang) | `why_c4_k2` | 4 | 2 | pre | 16 | 4.559 | 4.527 | 4.591 | 1.828 |
| C (clang) | `why_c0_k4` | 0 | 4 | pre | 10 | 6.195 | 6.182 | 6.202 | 2.479 |
| C (clang) | `why_c1_k4` | 1 | 4 | pre | 12 | 6.401 | 6.395 | 6.441 | 2.573 |
| C (clang) | `why_c2_k4` | 2 | 4 | pre | 14 | 6.465 | 6.419 | 6.596 | 2.574 |
| C (clang) | `why_c4_k4` | 4 | 4 | pre | 18 | 6.559 | 6.543 | 6.579 | 2.631 |
| C (clang) | `why_post` | 1 | 0 | post | 9 | 2.344 | 2.341 | 2.346 | 0.939 |
| C (clang) | `why_mask` | 1 | 0 | mask | 8 | 2.597 | 2.411 | 2.606 | 0.969 |
| C (clang) | `why_chain` | 1 | 0 | chain | 8 | 4.227 | 4.209 | 4.235 | 1.692 |

## Loop bodies

### C (clang) - `why_c0_k0` (6 instructions)

```asm
LBB1_1:
        ldr	w10, [x0, x9, lsl #2]
        add	w8, w10, w8
        add	w9, w9, #1
        and	x9, x9, #0x3f
        subs	x1, x1, #1
        b.ne	LBB1_1
```

### C (clang) - `why_c1_k0` (8 instructions)

```asm
LBB2_1:
        cmp	x10, x9
        b.hs	LBB2_4
        ldr	w11, [x8, x10, lsl #2]
        add	w0, w11, w0
        add	w10, w10, #1
        and	x10, x10, #0x3f
        subs	x1, x1, #1
        b.ne	LBB2_1
```

### C (clang) - `why_c2_k0` (10 instructions)

```asm
LBB3_1:
        cmp	x10, x9
        b.hs	LBB3_6
        cmp	x10, x11
        b.hs	LBB3_5
        ldr	w12, [x8, x10, lsl #2]
        add	w0, w12, w0
        add	w10, w10, #1
        and	x10, x10, #0x3f
        subs	x1, x1, #1
        b.ne	LBB3_1
```

### C (clang) - `why_c4_k0` (14 instructions)

```asm
LBB4_1:
        cmp	x10, x9
        b.hs	LBB4_10
        cmp	x10, x11
        b.hs	LBB4_9
        cmp	x10, x12
        b.hs	LBB4_8
        cmp	x10, x13
        b.hs	LBB4_7
        ldr	w14, [x8, x10, lsl #2]
        add	w0, w14, w0
        add	w10, w10, #1
        and	x10, x10, #0x3f
        subs	x1, x1, #1
        b.ne	LBB4_1
```

### C (clang) - `why_c0_k1` (7 instructions)

```asm
LBB5_1:
        ldr	w10, [x0, x9, lsl #2]
        add	w8, w10, w8
        add	x9, x9, #1
        add	x9, x9, #64
        and	x9, x9, #0x3f
        subs	x1, x1, #1
        b.ne	LBB5_1
```

### C (clang) - `why_c1_k1` (9 instructions)

```asm
LBB6_1:
        cmp	x10, x9
        b.hs	LBB6_4
        ldr	w11, [x8, x10, lsl #2]
        add	w0, w11, w0
        add	x10, x10, #1
        add	x10, x10, #64
        and	x10, x10, #0x3f
        subs	x1, x1, #1
        b.ne	LBB6_1
```

### C (clang) - `why_c2_k1` (11 instructions)

```asm
LBB7_1:
        cmp	x10, x9
        b.hs	LBB7_6
        cmp	x10, x11
        b.hs	LBB7_5
        ldr	w12, [x8, x10, lsl #2]
        add	w0, w12, w0
        add	x10, x10, #1
        add	x10, x10, #64
        and	x10, x10, #0x3f
        subs	x1, x1, #1
        b.ne	LBB7_1
```

### C (clang) - `why_c4_k1` (15 instructions)

```asm
LBB8_1:
        cmp	x10, x9
        b.hs	LBB8_10
        cmp	x10, x11
        b.hs	LBB8_9
        cmp	x10, x12
        b.hs	LBB8_8
        cmp	x10, x13
        b.hs	LBB8_7
        ldr	w14, [x8, x10, lsl #2]
        add	w0, w14, w0
        add	x10, x10, #1
        add	x10, x10, #64
        and	x10, x10, #0x3f
        subs	x1, x1, #1
        b.ne	LBB8_1
```

### C (clang) - `why_c0_k2` (8 instructions)

```asm
LBB9_1:
        ldr	w10, [x0, x9, lsl #2]
        add	w8, w10, w8
        add	x9, x9, #1
        add	x9, x9, #64
        add	x9, x9, #64
        and	x9, x9, #0x3f
        subs	x1, x1, #1
        b.ne	LBB9_1
```

### C (clang) - `why_c1_k2` (10 instructions)

```asm
LBB10_1:
        cmp	x10, x9
        b.hs	LBB10_4
        ldr	w11, [x8, x10, lsl #2]
        add	w0, w11, w0
        add	x10, x10, #1
        add	x10, x10, #64
        add	x10, x10, #64
        and	x10, x10, #0x3f
        subs	x1, x1, #1
        b.ne	LBB10_1
```

### C (clang) - `why_c2_k2` (12 instructions)

```asm
LBB11_1:
        cmp	x10, x9
        b.hs	LBB11_6
        cmp	x10, x11
        b.hs	LBB11_5
        ldr	w12, [x8, x10, lsl #2]
        add	w0, w12, w0
        add	x10, x10, #1
        add	x10, x10, #64
        add	x10, x10, #64
        and	x10, x10, #0x3f
        subs	x1, x1, #1
        b.ne	LBB11_1
```

### C (clang) - `why_c4_k2` (16 instructions)

```asm
LBB12_1:
        cmp	x10, x9
        b.hs	LBB12_10
        cmp	x10, x11
        b.hs	LBB12_9
        cmp	x10, x12
        b.hs	LBB12_8
        cmp	x10, x13
        b.hs	LBB12_7
        ldr	w14, [x8, x10, lsl #2]
        add	w0, w14, w0
        add	x10, x10, #1
        add	x10, x10, #64
        add	x10, x10, #64
        and	x10, x10, #0x3f
        subs	x1, x1, #1
        b.ne	LBB12_1
```

### C (clang) - `why_c0_k4` (10 instructions)

```asm
LBB13_1:
        ldr	w10, [x0, x9, lsl #2]
        add	w8, w10, w8
        add	x9, x9, #1
        add	x9, x9, #64
        add	x9, x9, #64
        add	x9, x9, #64
        add	x9, x9, #64
        and	x9, x9, #0x3f
        subs	x1, x1, #1
        b.ne	LBB13_1
```

### C (clang) - `why_c1_k4` (12 instructions)

```asm
LBB14_1:
        cmp	x10, x9
        b.hs	LBB14_4
        ldr	w11, [x8, x10, lsl #2]
        add	w0, w11, w0
        add	x10, x10, #1
        add	x10, x10, #64
        add	x10, x10, #64
        add	x10, x10, #64
        add	x10, x10, #64
        and	x10, x10, #0x3f
        subs	x1, x1, #1
        b.ne	LBB14_1
```

### C (clang) - `why_c2_k4` (14 instructions)

```asm
LBB15_1:
        cmp	x10, x9
        b.hs	LBB15_6
        cmp	x10, x11
        b.hs	LBB15_5
        ldr	w12, [x8, x10, lsl #2]
        add	w0, w12, w0
        add	x10, x10, #1
        add	x10, x10, #64
        add	x10, x10, #64
        add	x10, x10, #64
        add	x10, x10, #64
        and	x10, x10, #0x3f
        subs	x1, x1, #1
        b.ne	LBB15_1
```

### C (clang) - `why_c4_k4` (18 instructions)

```asm
LBB16_1:
        cmp	x10, x9
        b.hs	LBB16_10
        cmp	x10, x11
        b.hs	LBB16_9
        cmp	x10, x12
        b.hs	LBB16_8
        cmp	x10, x13
        b.hs	LBB16_7
        ldr	w14, [x8, x10, lsl #2]
        add	w0, w14, w0
        add	x10, x10, #1
        add	x10, x10, #64
        add	x10, x10, #64
        add	x10, x10, #64
        add	x10, x10, #64
        and	x10, x10, #0x3f
        subs	x1, x1, #1
        b.ne	LBB16_1
```

### C (clang) - `why_post` (9 instructions)

```asm
LBB17_1:
        add	w11, w10, #1
        and	x11, x11, #0x3f
        cmp	x11, x9
        b.hs	LBB17_4
        ldr	w10, [x8, x10, lsl #2]
        add	w0, w10, w0
        mov	x10, x11
        subs	x1, x1, #1
        b.ne	LBB17_1
```

### C (clang) - `why_mask` (8 instructions)

```asm
LBB18_1:
        add	w12, w10, #1
        cmp	x10, x9
        csel	x10, x10, x11, lo
        ldr	w10, [x0, x10, lsl #2]
        add	w8, w10, w8
        and	x10, x12, #0x3f
        subs	x1, x1, #1
        b.ne	LBB18_1
```

### C (clang) - `why_chain` (8 instructions)

```asm
LBB19_1:
        cmp	x10, x9
        csel	x10, x10, x11, lo
        ldr	w12, [x0, x10, lsl #2]
        add	w8, w12, w8
        add	w10, w10, #1
        and	x10, x10, #0x3f
        subs	x1, x1, #1
        b.ne	LBB19_1
```
