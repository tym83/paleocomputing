[Русская версия](linux-arm64-colima-m4.ru.md)

# Bounds-check ladder - linux-arm64-colima-m4

GENERATED FILE: `impl/bench/ladder/ladder.py`. How to read it: `impl/docs/FINDING-61-bounds-ladder.md`.

* date: 2026-09-27
* system: `Linux 6.8.0-100-generic`, architecture `aarch64`
* processor: CPU implementer: 0x61
* machine: rust:1 container (linux/arm64) in a colima virtual machine (2 vCPU) on Apple M4; clang installed with apt-get in the container
* array: 64 × u32, index `i = (i + 1) & 63`; iterations per run: 500 000 000
* runs per configuration: 5, round-robin; the best is taken

| compiler | version | flags |
|---|---|---|
| C (clang) | `Debian clang version 19.1.7 (3+b1)` | `-O2 -fno-unroll-loops -fno-vectorize -fno-slp-vectorize` |
| C (gcc) | `gcc (Debian 14.2.0-19) 14.2.0` | `-O2 -fno-unroll-loops -fno-tree-vectorize -fno-tree-slp-vectorize` |
| Rust | `rustc 1.98.1 (48a229cea 2026-09-01) (LLVM version: 22.1.8)` | `-C opt-level=2 -C codegen-units=1 -C debug-assertions=off -C overflow-checks=off -C no-vectorize-loops -C no-vectorize-slp -C llvm-args=-unroll-threshold=0 -C llvm-args=-unroll-runtime=false` |

> ⚠ Nanoseconds include frequency scaling and background load on the machine. What matters is the ratio to `none` within one compiler row, not the absolute numbers.

| compiler | configuration | instructions in body | Δ vs none | check in loop | ns/iter (best) | median | spread | vs none |
|---|---|---:|---:|---|---:|---:|---:|---:|
| C (clang) | `none` | 6 | +0 | — | 0.522 | 0.528 | 4.1% | 1.000 |
| C (clang) | `auto` | 6 | +0 | **dropped** | 0.522 | 0.529 | 2.3% | 1.001 |
| C (clang) | `forced` | 8 | +2 | kept | 0.525 | 0.531 | 1.5% | 1.007 |
| C (gcc) | `none` | 6 | +0 | — | 0.522 | 0.527 | 3.2% | 1.000 |
| C (gcc) | `auto` | 6 | +0 | **dropped** | 0.522 | 0.530 | 2.4% | 1.000 |
| C (gcc) | `forced` | 8 | +2 | kept | 0.526 | 0.531 | 2.1% | 1.006 |
| Rust | `none` | 6 | +0 | — | 0.522 | 0.528 | 3.2% | 1.000 |
| Rust | `auto` | 6 | +0 | **dropped** | 0.522 | 0.528 | 1.9% | 1.000 |
| Rust | `forced` | 8 | +2 | kept | 0.529 | 0.530 | 2.4% | 1.012 |

*Instructions in body*: from the label of the backward branch to the branch itself inclusive, from the compiler assembly. *Spread*: (worst − best) / best.

## Loop bodies

### C (clang) - `none` (6 instructions)

```asm
.LBB0_1:
        ldr	w10, [x0, x9, lsl #2]
        add	w9, w9, #1
        subs	x1, x1, #1
        and	x9, x9, #0x3f
        add	w8, w10, w8
        b.ne	.LBB0_1
```

### C (clang) - `auto` (6 instructions)

```asm
.LBB0_1:
        ldr	w10, [x0, x9, lsl #2]
        add	w9, w9, #1
        subs	x1, x1, #1
        and	x9, x9, #0x3f
        add	w8, w10, w8
        b.ne	.LBB0_1
```

### C (clang) - `forced` (8 instructions - exit to trap: `b.hs	.LBB0_4`)

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

### C (gcc) - `none` (6 instructions)

```asm
.L5:
        ldr	w4, [x0, x2, lsl 2]
        add	x2, x2, 1
        subs	x1, x1, #1
        and	x2, x2, 63
        add	w3, w3, w4
        bne	.L5
```

### C (gcc) - `auto` (6 instructions)

```asm
.L5:
        ldr	w4, [x0, x2, lsl 2]
        add	x2, x2, 1
        subs	x1, x1, #1
        and	x2, x2, 63
        add	w3, w3, w4
        bne	.L5
```

### C (gcc) - `forced` (8 instructions - exit to trap: `bcs	.L8`)

```asm
.L6:
        cmp	x2, x4
        bcs	.L8
        ldr	w3, [x5, x2, lsl 2]
        add	x2, x2, 1
        subs	x1, x1, #1
        and	x2, x2, 63
        add	w0, w0, w3
        bne	.L6
```

### Rust - `none` (6 instructions)

```asm
.LBB8_1:
        ldr	w10, [x0, x9, lsl #2]
        add	w9, w9, #1
        subs	x1, x1, #1
        and	x9, x9, #0x3f
        add	w8, w10, w8
        b.ne	.LBB8_1
```

### Rust - `auto` (6 instructions)

```asm
.LBB8_1:
        ldr	w10, [x0, x9, lsl #2]
        add	w9, w9, #1
        subs	x1, x1, #1
        and	x9, x9, #0x3f
        add	w8, w10, w8
        b.ne	.LBB8_1
```

### Rust - `forced` (8 instructions - exit to trap: `b.hs	.LBB8_4`)

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
