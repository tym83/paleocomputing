[Русская версия](FINDING-63-cheri-rung.ru.md)

# Finding 63. The CHERI rung: a bounds check hidden inside the load

On RISC5, an array bounds check costs 1 cycle per indexing operation out of 11: the
software check (`SUB` + `BCC`) takes 11 cycles, the hardware `CHKS` instruction 10
(Finding 55). The question for this rung: what does a machine where **every pointer**
has bounds, CHERI, do with the same check? How much does the check cost there, and
can it be measured at all the same way as on RISC5?

```
CHERIoT-Ibex, SAFE, 100 000 iterations        instr/iter.    cycles/iter.
A — hardware only (in the load)               8.000          9.000
B — hardware + software (bgeu)                9.000         10.000
cost of the software check                   +1.000         +1.000  (+11.1%)
```

The full table, raw numbers and versions are in [`impl/bench/cheri/results.md`](../bench/cheri/results.md).

## Why CHERIoT-Ibex

It is the closest relative of RISC5 among CHERI machines: a simple 32-bit in-order
core, one instruction per cycle, no data cache. On such a core cycles add up from
instructions almost arithmetically, as on Wirth's machine, and the difference between
two programs is the cost of what distinguishes them. Morello (Neoverse N1,
out-of-order) is not suitable for this kind of measurement: there an extra instruction
can cost zero cycles or ten.

The measurement is not on hardware but on SAFE, the Verilator model of the
CHERIoT-Ibex core from the public CHERIoT container (`cheriot_ibex_safe_sim`). It is a
model derived from RTL, so its cycles are core cycles, not an estimate.

## Method

**One loop for all targets.** [`loop.c`](../bench/cheri/loop.c) is the same loop as on
RISC5: `sum += a[i]; i = (i+1) & 63` over `u32[64]`. The same file is built into a
CHERIoT compartment and sent to Compiler Explorer; two copies of the loop would drift
apart, as has already happened in this repository.

* **A**: no software check. The array capability has bounds of exactly 64 words
  (visible in the output: `0x20047d38-0x20047e38 l:0x100`), and every `ct.clw` load is
  checked by the hardware.
* **B**: A plus `if (i >= lim) __builtin_trap()`, where `lim` is `volatile`.
  Otherwise the compiler is entitled to prove that `(i & 63) < 64` and drop the check.

Counting uses `mcycle` and `minstret` around the kernel call, with interrupts
disabled, 100 000 iterations, and an empty run (`n = 0`) subtracted. Three repetitions
matched to the cycle. The core trace (the simulator variant with tracing) shows where
the cycles come from: each instruction of the body takes 1 cycle, including the
bounds-checked load; the taken backward branch takes 2. 8 + 1 = 9, 9 + 1 = 10.

**Negative control.** The same `sum_a` machine code with a pointer narrowed to 32
words fails with `CHERI BoundsViolation` exactly at `i = 32` (the address in the
register is base + 0x80). The same `sum_b` with `lim = 32` fails on its own trap
(`unimp`, an illegal instruction). With 64-word bounds there is no trap. So both
checks are real, and A is not "no check".

**Code generation on other CHERI targets.** The same `loop.c` through the API of the
Cambridge CHERI Compiler Explorer, `-O2` without unrolling and vectorization:

| target | A | B |
|---|---:|---:|
| AArch64 / Morello hybrid | 6 | 8 |
| Morello purecap | 6 | 8 |
| RISC-V 64 | 9 | 10 |
| CHERI-RISC-V 64 purecap | 9 | 10 |

In purecap the loop body is **the same length** as without CHERI. Morello has the same
`ldr w10, [c0, x9, lsl #2]`, only the base is a capability. On CHERI-RISC-V, `add` is
replaced by `cincoffset`. Bounds are set once, outside the loop: they are carried by
the pointer, not by the code.

## What this shows

1. **The CHERI hardware check takes not a single instruction in the loop.** On RISC5,
   `CHKS` is a separate instruction, even if it is one instead of two. On CHERI the
   check is a property of the load itself. On Morello and CHERI-RISC-V the purecap
   body has the same instruction count as the body without CHERI; on CHERIoT, body A
   has no check instruction at all.
2. **A software check on top of it costs as much as it does anywhere.** On CHERIoT it
   is 1 instruction and 1 cycle per indexing operation (+11.1% relative to A), on
   AArch64/Morello 2 instructions. This is exactly the check that a safe-language
   compiler inserts; on CHERI it is redundant if the capability bounds coincide with
   the array bounds.
3. **The RISC5 and CHERIoT differences are of the same order.** RISC5: `CHKS` saves 1
   cycle out of 11. CHERIoT: dropping the software check saves 1 cycle out of 10. This
   is a match in order of magnitude, not equality: the cores, instructions and memory
   differ.

## What this does not show

* **There is no "no check at all" configuration.** On CHERIoT every load goes through
  a capability, and the check cannot be turned off. So the cost of the hardware check
  itself in cycles is not isolated by this measurement. It adds no instructions, and in
  the trace the load takes 1 cycle, but how much logic and critical-path length it
  costs inside the core cannot be seen from the cycle count.
* **The simulator's memory model.** In SAFE a load responds within a cycle (internal
  SRAM). On a real board with different memory, load cycles will differ, equally for A
  and B, but the share of the check will change.
* **There are no numbers for large out-of-order cores.** For Morello and CHERI-RISC-V
  64 there are only instruction counts here, not cycles. Zero extra instructions does
  not mean zero extra cycles: the main cost of CHERI on large cores is not the check
  but the pointer width (see below).
* **One loop.** This is a microbenchmark of a single indexing operation, not an
  assessment of programs.

## What others have measured

* **Cambridge, UCAM-CL-TR-986** (Watson et al., September 2023),
  <https://www.cl.cam.ac.uk/techreports/UCAM-CL-TR-986.pdf>. SPECint 2006 (`train`
  workload), purecap versus AArch64, on the FPGA implementation of Morello: a 28.01%
  geometric mean on the unmodified core; 14.97% with the Benchmark ABI (working around
  unpredictable PCC bounds); 7.40% with a fix for the data-dependent exception check;
  5.70% with enlarged store queues as well; the estimate for an optimized future core
  is 1.8–3.0%. The main irreducible cost, by their conclusion, is widening pointers to
  128 bits, not the checks.
* **Sun, Singer, Wang, IISWC 2025**, "Sweet or Sour CHERI: Performance
  Characterization of the Arm Morello Platform",
  <https://eprints.whiterose.ac.uk/id/eprint/231424/>. Real Morello, 20 programs, three
  ABIs: overheads from negligible to 1.65× (the abstract's wording), largest in
  pointer-heavy and memory-sensitive programs, due to traffic and pressure on the L1/L2
  caches from 128-bit capabilities. 519.lbm in purecap is **faster** by 7.89% (by 7.73%
  in purecap-benchmark), LLaMA.cpp inference is +1.29%.

Both sources say the same thing the assembly shows: the bounds check itself is almost
free in CHERI; the cost is in the pointer size.

## Conclusions for the ladder

* The CHERI rung is "a check without an instruction": the next step after `CHKS`, where
  the check is no longer one instruction but zero. On a simple core its cost inside the
  load is not visible in cycles; only the cost of the software check it makes redundant
  is visible: 1 cycle out of 10.
* Compare with RISC5 by differences, not absolute cycles.
* What is missing for the full picture: cycles on Morello (requires hardware) and a
  CHERIoT measurement with the check "turned off", which is possible only with a
  modified core RTL, not in software.

## How to reproduce

```
impl/bench/cheri/cheriot/run.sh    # clones cheriot-rtos, builds, runs SAFE
impl/bench/cheri/cheriot/trace.sh  # cycles per instruction
python3 impl/bench/cheri/asm/gen.py
```

Image `ghcr.io/cheriot-platform/devcontainer@sha256:555261efaa1fe3c9e852252becb92c776b0400c60a67272a5517b09de4c36398`,
cheriot-rtos `17ae734ba98e4f084bfaa2bf07f0447ca4d7e127`, board
`ibex-safe-simulator`.

## Addendum: what can and cannot be obtained next

The cost of the hardware check on CHERI separately from the load will never be
available: this is not a flaw of the measurement but how the architecture works, since
there is nothing that turns off the check on a capability load. On RISC5, however, such
a separation now exists: lab 12 builds the same loop with three compilers and gives all
three configurations: the software check costs 2.00 cycles per indexing operation, the
hardware CHK instruction 1.08, no check zero (Finding 68). CHERI takes the same line to
its end: the check has moved inside the load itself and is no longer visible in the
cycle count.

Cycles on a large out-of-order CHERI core require hardware: Morello boards are issued
to organizations on application to the CHERI Alliance (an external step, not done); the
nearest available path to cycle counts with real memory is the lowRISC Sonata board
(CHERIoT-Ibex on an FPGA). Both are decisions for the project owner, not code.
