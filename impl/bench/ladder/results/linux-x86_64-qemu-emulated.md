[Русская версия](linux-x86_64-qemu-emulated.ru.md)

# Bounds-check ladder - linux-x86_64-qemu-emulated

GENERATED FILE: `impl/bench/ladder/ladder.py`. How to read it: `impl/docs/FINDING-61-bounds-ladder.md`.

* date: 2026-09-27
* system: `Linux 6.8.0-100-generic`, architecture `x86_64`
* processor: emulated; /proc/cpuinfo belongs to the host
* machine: rust:1 container (linux/amd64) under QEMU emulation in colima on Apple M4; clang installed with apt-get in the container
* array: 64 × u32, index `i = (i + 1) & 63`; iterations per run: 2 000 000
* runs per configuration: 1, round-robin; the best is taken

| compiler | version | flags |
|---|---|---|
| C (clang) | `Debian clang version 19.1.7 (3+b1)` | `-O2 -fno-unroll-loops -fno-vectorize -fno-slp-vectorize` |
| C (gcc) | `gcc (Debian 14.2.0-19) 14.2.0` | `-O2 -fno-unroll-loops -fno-tree-vectorize -fno-tree-slp-vectorize` |
| Rust | `rustc 1.98.1 (48a229cea 2026-09-01) (LLVM version: 22.1.8)` | `-C opt-level=2 -C codegen-units=1 -C debug-assertions=off -C overflow-checks=off -C no-vectorize-loops -C no-vectorize-slp -C llvm-args=-unroll-threshold=0 -C llvm-args=-unroll-runtime=false` |

> ⚠ **The machine is emulated (QEMU).** The timings below mean nothing and are given only for completeness. The instruction count in the loop body and the sum (checked) are valid.

| compiler | configuration | instructions in body | Δ vs none | check in loop | ns/iter (best) | median | spread | vs none |
|---|---|---:|---:|---|---:|---:|---:|---:|
| C (clang) | `none` | 5 | +0 | — | 0.935 | 0.935 | 0.0% | 1.000 |
| C (clang) | `auto` | 5 | +0 | **dropped** | 0.939 | 0.939 | 0.0% | 1.004 |
| C (clang) | `forced` | 7 | +2 | kept | 1.578 | 1.578 | 0.0% | 1.687 |
| C (gcc) | `none` | 5 | +0 | — | 0.939 | 0.939 | 0.0% | 1.000 |
| C (gcc) | `auto` | 5 | +0 | **dropped** | 0.929 | 0.929 | 0.0% | 0.990 |
| C (gcc) | `forced` | 7 | +2 | kept | 1.338 | 1.338 | 0.0% | 1.425 |
| Rust | `none` | 5 | +0 | — | 0.929 | 0.929 | 0.0% | 1.000 |
| Rust | `auto` | 5 | +0 | **dropped** | 0.934 | 0.934 | 0.0% | 1.005 |
| Rust | `forced` | 7 | +2 | kept | 1.355 | 1.355 | 0.0% | 1.459 |

*Instructions in body*: from the label of the backward branch to the branch itself inclusive, from the compiler assembly. *Spread*: (worst − best) / best.

## Loop bodies

### C (clang) - `none` (5 instructions)

```asm
.LBB0_1:
        addl	(%rdi,%rcx,4), %eax
        incl	%ecx
        andl	$63, %ecx
        decq	%rsi
        jne	.LBB0_1
```

### C (clang) - `auto` (5 instructions)

```asm
.LBB0_1:
        addl	(%rdi,%rcx,4), %eax
        incl	%ecx
        andl	$63, %ecx
        decq	%rsi
        jne	.LBB0_1
```

### C (clang) - `forced` (7 instructions - exit to trap: `jae	.LBB0_4`)

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

### C (gcc) - `none` (5 instructions)

```asm
.L5:
        addl	(%rdi,%rax,4), %edx
        addq	$1, %rax
        andl	$63, %eax
        subq	$1, %rsi
        jne	.L5
```

### C (gcc) - `auto` (5 instructions)

```asm
.L5:
        addl	(%rdi,%rax,4), %edx
        addq	$1, %rax
        andl	$63, %eax
        subq	$1, %rsi
        jne	.L5
```

### C (gcc) - `forced` (7 instructions - exit to trap: `jnb	.L8`)

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

### Rust - `none` (5 instructions)

```asm
.LBB8_1:
        addl	(%rdi,%rcx,4), %eax
        incl	%ecx
        andl	$63, %ecx
        decq	%rsi
        jne	.LBB8_1
```

### Rust - `auto` (5 instructions)

```asm
.LBB8_1:
        addl	(%rdi,%rcx,4), %eax
        incl	%ecx
        andl	$63, %ecx
        decq	%rsi
        jne	.LBB8_1
```

### Rust - `forced` (7 instructions - exit to trap: `jae	.LBB8_4`)

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
