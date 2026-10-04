[Русская версия](FINDING-70-why-free.ru.md)

# Finding 70. Why the check is sometimes free and sometimes not: spare width

The ladder (Finding 61) gave three answers to one question: on Apple M4 and
AMD EPYC the bounds check is invisible, on an Arm server core it costs 2–6%,
and on RISC5 it costs two cycles out of eleven. The explanation was a
hypothesis: on a wide core the loop is bound by the latency of the index
chain `add → and`, and the check hides beneath it. Here the hypothesis is
tested by measurement, without performance counters, which are not available
on shared CI machines.

## How cycles were measured without counters

Within one process, chunks alternate: a calibration chunk, a chain of 32
dependent additions (one addition is one cycle on all of these cores), and
the loop itself. Loop cycles = best loop chunk (ns) ÷ best calibration chunk
(ns per addition); the median over five rounds. The frequency, which there is
no way to know, cancels out.

The core of GitHub's Arm machine is now known exactly: **Neoverse N2** (MIDR
part 0xd49; names from `arch/arm64/include/asm/cputype.h` in the Linux
kernel). The x86 machine in this run turned out to be an AMD EPYC 7763
(Zen 3); the machines are shared, and the model varies.

## Experiment

The same loop, two levers:

* `k`, the length of the index chain: k extra dependent additions
  (`add #64` with mask 63 changes nothing), so the chain is 2+k cycles;
* `c`, how many compare+branch checks per iteration (on opaque limits, so the
  compiler cannot eliminate them).

Plus a check on the critical chain itself (`chain`), ⚠ **without a branch**:
`cmp + csel/cmov` zeroes the index when it is out of bounds (like
`array_index_nospec` in Linux), and the next iteration's index is computed
from the zeroed one, so the comparison and the select become part of the
dependency chain (`why.py`, variant `chain`). A check with a conditional
branch cannot be placed this way: a correctly predicted branch is not part of
the data chain.

Cycles per iteration, clang, median:

| | c=0 | c=1 | c=2 | c=4 |
|---|---:|---:|---:|---:|
| **EPYC 7763**, k=0 | 2.00 | 2.00 | 2.00 | 2.50 |
| k=1 | 3.14 | 3.00 | 3.28 | 3.00 |
| k=4 | 6.03 | 6.03 | 6.03 | 6.03 |
| **Neoverse N2**, k=0 | 2.10 | 2.21 | 2.33 | 2.68 |
| k=1 | 3.40 | 3.39 | 3.36 | 3.41 |
| k=4 | 6.01 | 6.01 | 6.01 | 6.01 |
| check on the critical chain | | EPYC 4.36 · N2 4.19 | | |

## What this means

* **The hypothesis is confirmed.** The loop runs at the speed of the index
  chain (2 cycles), and the checks execute in the shadow of that latency as
  long as the core has enough width.
* **EPYC** hides one and two checks completely; four hit the throughput limit
  (2.5 cycles).
* **Neoverse N2** has no spare width with a two-cycle chain: each check adds
  about +0.11 cycles, which is exactly the 5% from Finding 61. But as soon as
  the chain becomes one cycle longer, even four checks are free. The
  difference is not "an expensive check on Arm" but that this loop hits N2's
  width limit sooner.
* **A branchless check placed in the index chain costs about two cycles on
  both cores** (EPYC +2.4, N2 +2.1): this is the `cmp → csel` latency, and
  there is nothing to hide it under. This is not the same as RISC5's
  `SUB+BCC` check: on a wide core a branching check cannot be put into the
  chain at all; the predictor hides it. The general conclusion stands: a
  modern core does not make the check cheap; it hides it in spare width and
  behind the predictor, when those are available. RISC5 has neither: every
  instruction is a cycle on the path.

  *Corrected 2026-09-29 after review: the previous version described `chain`
  as "a branch on the path" and equated the two cycles with the cost of
  `SUB+BCC` on RISC5.*

## What this does not show

* **Apple M4 was not measured convincingly by this method.** There the check
  adds about 0.2 cycles at any chain length, including k=4, where on N2 and
  EPYC it is already zero. This contradicts the direct measurement in
  nanoseconds (Finding 61: the difference is within noise). Most likely the
  calibration on macOS is skewed: a floating frequency, possible migration to
  efficiency cores; there are no counters without sudo. The result is kept in
  `results/why-macos-arm64-apple-m4.md` as is, and no conclusion is drawn
  from it.
* One loop and one core family per platform; width and ports are inferred
  from behavior, not taken from vendor documentation.
