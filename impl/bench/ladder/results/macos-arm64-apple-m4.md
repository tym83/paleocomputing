[Русская версия](macos-arm64-apple-m4.ru.md)

# Bounds-check ladder - macos-arm64-apple-m4

GENERATED FILE: `impl/bench/ladder/ladder.py`. How to read it: `impl/docs/FINDING-61-bounds-ladder.md`.

* date: 2026-09-27
* system: `Darwin 25.4.0`, architecture `aarch64`
* processor: Apple M4
* machine: MacBook with Apple M4, native
* array: 64 × u32, index `i = (i + 1) & 63`; iterations per run: 500 000 000
* runs per configuration: 5, round-robin; the best is taken

| compiler | version | flags |
|---|---|---|
| C (clang) | `Apple clang version 21.0.0 (clang-2100.1.1.101)` | `-O2 -fno-unroll-loops -fno-vectorize -fno-slp-vectorize` |

> ⚠ Nanoseconds include frequency scaling and background load on the machine. What matters is the ratio to `none` within one compiler row, not the absolute numbers.

| compiler | configuration | instructions in body | Δ vs none | check in loop | ns/iter (best) | median | spread | vs none |
|---|---|---:|---:|---|---:|---:|---:|---:|
| C (clang) | `none` | 6 | +0 | — | 0.505 | 0.506 | 0.4% | 1.000 |
| C (clang) | `auto` | 6 | +0 | **dropped** | 0.505 | 0.506 | 0.6% | 1.000 |
| C (clang) | `forced` | 8 | +2 | kept | 0.507 | 0.508 | 0.9% | 1.004 |

*Instructions in body*: from the label of the backward branch to the branch itself inclusive, from the compiler assembly. *Spread*: (worst − best) / best.

## Loop bodies

### C (clang) - `none` (6 instructions)

```asm
LBB0_1:
        ldr	w10, [x0, x9, lsl #2]
        add	w8, w10, w8
        add	w9, w9, #1
        and	x9, x9, #0x3f
        subs	x1, x1, #1
        b.ne	LBB0_1
```

### C (clang) - `auto` (6 instructions)

```asm
LBB0_1:
        ldr	w10, [x0, x9, lsl #2]
        add	w8, w10, w8
        add	w9, w9, #1
        and	x9, x9, #0x3f
        subs	x1, x1, #1
        b.ne	LBB0_1
```

### C (clang) - `forced` (8 instructions - exit to trap: `b.hs	LBB0_4`)

```asm
LBB0_1:
        cmp	x10, x9
        b.hs	LBB0_4
        ldr	w11, [x8, x10, lsl #2]
        add	w0, w11, w0
        add	w10, w10, #1
        and	x10, x10, #0x3f
        subs	x1, x1, #1
        b.ne	LBB0_1
```
