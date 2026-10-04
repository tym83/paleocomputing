[Русская версия](results.ru.md)

# The CHERI rung: results

There is one loop for all targets, [`loop.c`](loop.c): `sum += a[i]; i = (i+1) & 63`
over `u32[64]`, with a separate iteration counter. It is the same loop as on RISC5
(`impl/tools/gen_bounds_bench.py`, finding 55).

* **A**: `sum_a`, no software check at all. On CHERI the load goes through a
  capability, and the hardware checks the bounds on every load.
* **B**: `sum_b`, A plus `if (i >= lim) __builtin_trap()`, where `lim` is `volatile`
  (the compiler cannot prove the check redundant). This is the analogue of RISC5
  configuration B, but **on top of** the hardware check rather than instead of it.

## 1. CHERIoT-Ibex, SAFE simulator: cycles

A cycle-accurate Verilator model of the CHERIoT-Ibex core (`cheriot_ibex_safe_sim`),
board `ibex-safe-simulator`. Counting uses `mcycle`/`minstret` around the kernel call,
with interrupts disabled, 100 000 iterations, and the measurement overhead (an empty run
with `n = 0`) subtracted. Three repetitions gave the same number to the cycle.

| configuration | instructions in body | instructions/iteration | cycles/iteration |
|---|---:|---:|---:|
| A: hardware check only | 8 | 8.000 | 9.000 |
| B: hardware + software | 9 | 9.000 | 10.000 |
| cost of the software check | +1 | +1.000 | **+1.000 (+11.1% over A)** |

Raw numbers: A is `cycles=900001 instret=800003`, B is `cycles=1000000
instret=900003` at `n=100000` ([`cheriot/out/run.log`](cheriot/out/run.log)).

The loop body from the built image ([`cheriot/out/kernels.dis`](cheriot/out/kernels.dis)):

```
A:  slli; ct.cincoffset; ct.clw; addi; addi; add; andi; bne          8 instructions
B:  bgeu a5,a3,trap; slli; ct.cincoffset; ct.clw; addi; addi; add; andi; bne   9 instructions
```

The core trace ([`cheriot/out/trace-cut.txt`](cheriot/out/trace-cut.txt)): every
instruction takes 1 cycle, including `ct.clw` (a load with a capability bounds check);
a taken `bne` takes 2 cycles. Hence 8 + 1 = 9 and 9 + 1 = 10. A not-taken `bgeu` takes 1 cycle.

### Negative control

| probe | what was done | result |
|---|---|---|
| C1 | the same machine code as `sum_a`, pointer narrowed to 32 words | `CHERI BoundsViolation` in `ca5` = base + 0x80, i.e. exactly at `i = 32`; the call returned −1 |
| C2 | the same code as `sum_b`, `lim = 32` | `mcause 2` (illegal instruction) on `unimp` at address `0x2004674c`, which is `sum_b+0x32` in the `probe` compartment; returned −1 |
| C0 | the same `sum_a`, bounds of 64 words | no trap, sum 1000 |

Both checks are real: the hardware one catches an out-of-bounds access without a single
check instruction in the loop, and the software one with its own trap.

### How it was obtained

```
impl/bench/cheri/cheriot/run.sh     # build + run, writes out/
impl/bench/cheri/cheriot/trace.sh   # SAFE variant with a trace, out/trace-cut.txt
```

| item | value |
|---|---|
| image | `ghcr.io/cheriot-platform/devcontainer@sha256:555261efaa1fe3c9e852252becb92c776b0400c60a67272a5517b09de4c36398` (arm64, created 2026-08-27) |
| compiler | `clang version 23.1.0 (CHERIoT-Platform/llvm-project ce4b09eb5084c923b6cc31a2af4aa9f6b7d4f748)` |
| build | xmake v3.0.9+20260519 |
| SDK | cheriot-rtos `17ae734ba98e4f084bfaa2bf07f0447ca4d7e127` |
| board | `ibex-safe-simulator` (present in `sdk/boards`; run with `scripts/msft-safe-run-sim.sh ibex`) |
| kernel flags | `-Oz` from the SDK, then `-O2 -fno-unroll-loops -fno-vectorize -fno-slp-vectorize` (the last `-O` wins; the command line is in [`cheriot/out/compile-cmd.txt`](cheriot/out/compile-cmd.txt)) |

## 2. Code generation: CHERI Compiler Explorer (Cambridge)

`-O2 -fno-unroll-loops -fno-vectorize -fno-slp-vectorize`, the same `sum_a`/`sum_b`.
Regeneration: `python3 asm/gen.py` (POST JSON to `/api/compiler/<id>/compile`).
The count is the instructions from the loop label to the backward branch, inclusive.

| target (id in Compiler Explorer) | A, instructions | B, instructions | element load in A |
|---|---:|---:|---|
| AArch64 (`morello-nocheri`) | 6 | 8 | `ldr w10, [x0, x9, lsl #2]` |
| Morello hybrid (`morello-hybrid`) | 6 | 8 | `ldr w10, [x0, x9, lsl #2]` |
| **Morello purecap** (`morello-purecap`) | **6** | **8** | `ldr w10, [c0, x9, lsl #2]` |
| RISC-V 64 (`cheri-riscv64-nocheri`) | 9 | 10 | `add a4, a4, a0` + `lw a4, 0(a4)` |
| **CHERI-RISC-V 64 purecap** (`cheri-riscv64-purecap`) | **9** | **10** | `cincoffset ca4, ca0, a4` + `lw a4, 0(ca4)` |
| CHERIoT (32-bit, from section 1, for comparison) | 8 | 9 | `ct.cincoffset` + `ct.clw` |

* In purecap the loop body is **the same length** as without CHERI: the bounds check
  is built into the load, and there is no separate instruction. On Morello it is the same
  `ldr` with a scaled index, only the base is the capability `c0`. On CHERI-RISC-V
  `add` is replaced by `cincoffset`.
* The software check costs 2 instructions on AArch64/Morello (`cmp` + `b.hs`)
  and 1 on RISC-V (`bgeu`, the compare is fused with the branch).
* The two extra RV64 instructions (`slli`/`srli`) clear the upper bits of the
  32-bit `unsigned i` and have nothing to do with CHERI; on 32-bit CHERIoT
  they are absent.
* Files: [`asm/`](asm/).

## 3. Next to RISC5 (finding 55)

| machine | configuration | instructions/indexing | cycles/indexing |
|---|---|---:|---:|
| RISC5 | B: software (`SUB`+`BCC`) | 10 | 11 |
| RISC5 | E: hardware (`CHKS`) | 9 | 10 |
| CHERIoT-Ibex | A: hardware (in the load) | 8 | 9 |
| CHERIoT-Ibex | B: hardware + software (`bgeu`) | 9 | 10 |

Compare the **differences**, not the absolute numbers: the cores, instruction sets and
memory differ. On RISC5, `CHKS` instead of `SUB`+`BCC` saves 1 instruction and 1 cycle.
On CHERIoT, a software check on top of the hardware one costs 1 instruction and 1 cycle;
the hardware check costs 0 instructions in the loop, and its cost in cycles cannot be
separated by this measurement (see finding 63).
