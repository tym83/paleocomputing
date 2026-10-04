[Русская версия](FINDING-61-bounds-ladder.ru.md)

# Finding 61. The bounds-check ladder: the same loop on modern processors

The central number (Finding 55) measures the cost of bounds checking on RISC5
precisely: 10 instructions versus 9, 11 cycles versus 10, a saving of 1 cycle, 9.1%.
The Oberon page notes that this number does not carry over to a modern processor.
Until now that was a claim. Here it is a measurement: the same loop, the same check,
on an Apple M4, on Linux arm64 and (by instruction count) on x86-64.

## Setup

**One generator** (`impl/bench/ladder/ladder.py`) produces the same loop in C and in
Rust:

```
sum += a[i];  i = (i + 1) & 63;      — 64 cells of 32 bits, do-while with a down-counter
```

The limit `LIM` is taken from `tools/gen_bounds_bench.py`, the same place the RISC5
programs take it from. The three configurations differ only in the check:

| | C | Rust | meaning |
|---|---|---|---|
| `none` | `a[i]` | `get_unchecked(i)` | no check, the analogue of A |
| `auto` | `if (i >= 64) __builtin_trap();` | `a[i]` on `[u32; 64]` | the check as the language writes it; the limit is a constant |
| `forced` | the same, with the limit passed through an empty `asm volatile` | an explicit `if` + `process::abort()`, the limit through `black_box` | a check the optimizer must keep, the analogue of B |

The trap is cold and non-returning everywhere: `brk`/`ud2` in C, a panic or `abort`
in Rust.

**The loop shape is the same as on RISC5.** Unrolling and vectorization are disabled
by flags (`-fno-unroll-loops -fno-vectorize -fno-slp-vectorize` for clang,
`-fno-tree-vectorize` for gcc, `-C no-vectorize-loops -C no-vectorize-slp` and a zero
LLVM unroll threshold for rustc). The flags are insurance: on the compilers tested,
the body is the same without them. The main point is that the shape is **checked**,
not assumed: the parser requires exactly one memory read in the body, otherwise the
run fails.

**Two metrics.**

* *Instructions in the loop body*, from the compiler's own assembly (`clang -S`,
  `gcc -S`, `rustc --emit asm`): find the backward conditional branch and its label,
  and count from the label to the branch inclusive. Every body is printed in full to
  the results file, so the number can be checked by eye.
* *Nanoseconds per iteration*: 5·10⁸ iterations, best of five runs, with
  configurations rotated in a round-robin so that frequency drift falls on all of them
  equally. Every run checks the sum against a precomputed value.

## The ladder

| rung | check | instructions in body | Δ | time | relative to "no check" |
|---|---|---:|---:|---:|---:|
| RISC5, A (no check) | — | 8 | | 9 cycles | 1.000 |
| RISC5, B (software) | `SUB` + `BCC` | 10 | +2 | 11 cycles | 1.222 |
| RISC5, E (hardware) | `CHKS` | 9 | +1 | 10 cycles | 1.111 |
| Apple M4, macOS, clang | `cmp` + `b.hs` | 8 | +2 | 0.507 ns | 1.004 |
| M4, Linux arm64 (VM), clang | `cmp` + `b.hs` | 8 | +2 | 0.525 ns | 1.007 |
| M4, Linux arm64 (VM), gcc | `cmp` + `bcs` | 8 | +2 | 0.526 ns | 1.006 |
| M4, Linux arm64 (VM), Rust | `cmp` + `b.hs` | 8 | +2 | 0.529 ns | 1.012 |
| x86-64 (QEMU), clang / gcc / Rust | `cmp` + `jae`/`jnb` | 7 | +2 | — | — |
| AMD EPYC 9V45 (GitHub, x86-64), clang / gcc / Rust | `cmp` + `jae`/`jnb` | 7 | +2 | 0.442 ns | 1.000…1.001 |
| Arm (GitHub `ubuntu-24.04-arm`, implementer 0x41), clang | `cmp` + `b.hs` | 8 | +2 | 0.651 ns | 1.053 |
| same, gcc | `cmp` + `bcs` | 8 | +2 | 0.651 ns | 1.020 |
| same, Rust | `cmp` + `b.hs` | 8 | +2 | 0.651 ns | 1.062 |
| CHERIoT-Ibex (SAFE), A: hardware only | inside `clw` itself | 8 | 0 | 9 cycles | — |
| CHERIoT-Ibex (SAFE), B: + software | `bgeu` | 9 | +1 | 10 cycles | 1.111 relative to A |

⚠ The **RISC5 A row is derived, not measured** by this bench: it is B without the two
check instructions (both take one cycle, which is exactly how E − B = 1 cycle comes
out). B and E come from Finding 55. The modern rows are the `none` and `forced`
configurations; the timings are in the `impl/bench/ladder/results/*.md` files together
with the loop bodies, compiler versions and flags.

## What the numbers say

**In forty years the check has not changed shape.** On all three machines and with all
three compilers it costs exactly two instructions: a comparison and a conditional
branch out, the same `SUB` + `BCC` that Oberon emits. As a share of the body it has
even grown: RISC5 computes the address with two instructions (`LSL`, `ADD`), while
AArch64 and x86-64 fold it into the addressing mode of the load, and the body is
shorter, 6 and 5 instructions instead of 8. Statically, the check is +25% of the body
on RISC5, +33% on AArch64 and +40% on x86-64.

**In time, these two instructions cost nothing measurable on the M4.** The ratio of
`forced` to `none` is 1.004…1.012, within the noise (see below). On RISC5 the same two
instructions are +22% of loop time.

Why is an explanation, not a measurement: a wide out-of-order core executes the
comparison and the always correctly predicted branch in free slots, and the loop is
bound not by instruction count but by the index dependency chain `add → and`, two
cycles per iteration. 0.505 ns at a frequency of about 4.4 GHz is roughly 2.2 cycles,
which agrees with this. Frequency and cycles were **not measured**: there are no cycle
counters on macOS without root, nor in the container.

**`auto` is eliminated everywhere.** clang, gcc and rustc on both architectures proved
from `& 63` that the index is less than 64 and left not a single instruction of the
check: the `auto` body matches `none` instruction for instruction. This is a finding
about the compiler, not the processor: a modern compiler removes the check through
range analysis where Wirth's ORG always emits it. That is why the direct analogue of
configuration B is `forced`, not `auto`.

## What the numbers do NOT say

* **Not "checks are free on modern processors".** The workload is deliberately the
  best case for the check: the array is in L1, the branch is always predicted, and the
  loop is bound by a dependency chain rather than throughput. Where a loop is bound by
  instruction count, or there are many checks per iteration, the extra instructions
  compete for the same slots.
* **Vectorization is disabled on purpose, and that hides the main cost channel.** In
  real code, bounds checking is expensive mainly because it prevents the compiler from
  vectorizing and unrolling the loop. Here that channel is closed to keep the loop
  shape identical to RISC5, and its cost is not part of the ladder.
* **Not the cost on a whole system.** The 2.2% on the Oberon page is compiling five
  system modules. Here it is one synthetic loop.
* **Not a comparison of E with B.** On RISC5, 9.1% is the hardware check against the
  software one. The modern rows have no hardware check; `forced − none` is the ceiling
  of what any hardware check could save on this loop. On the M4 that ceiling is within
  the noise.
* **Nanoseconds are not comparable across machines.** Only the ratios to `none` within
  one run mean anything.

## Noise

The best simple noise measurement came from the bench itself: by its assembly, the
`auto` body is the same as `none`, so any deviation of their ratio from 1.000 is noise.

| run (best of 5) | `auto` / `none` | `forced` / `none` |
|---|---:|---:|
| M4 macOS, in the repository | 1.000 | 1.004 |
| M4 macOS, repeat 1 | 0.996 | 1.018 |
| M4 macOS, repeat 2 | 0.999 | 1.007 |
| M4 macOS, repeat 3 | 1.043 | 1.064 |
| Linux arm64 VM, first session (clang / gcc / Rust) | 1.007 / 1.012 / 1.035 | 1.000 / 1.022 / 1.035 |
| Linux arm64 VM, in the repository (clang / gcc / Rust) | 1.001 / 1.000 / 1.000 | 1.007 / 1.006 / 1.012 |

Identical code diverges by up to 4%. So `forced` within a few percent of `none` is
indistinguishable from it, and the systematic upward shift of `forced` (`forced` is
above `auto` in eight comparisons out of ten, by 0.4–2%) is good at most as an upper
bound. Nothing more can be claimed with these tools. Absolute time in the colima
virtual machine drifted by 20% between sessions (0.62 → 0.52 ns).

**Time under emulation means nothing.** Under QEMU x86-64, `forced` is 1.4–1.7 times
slower than `none`: the emulator pays for every branch, the processor does not. Time
from emulation is written to the results file with a marker; only the instruction
count and the sum are valid there.

## What is not there yet

* **x86-64 on a real machine.** Locally, x86-64 is only emulated. Real x86-64 and arm64
  are measured by `.github/workflows/ladder.yml` on GitHub machines; the tables will
  come from the first run in a pull request. The machines are shared and virtual, so
  the noise there is higher than on the M4.
* **CHERI is in Finding 63.** There the check is built into the capability load itself
  and adds not a single instruction to the loop; a software check on top of it costs
  +1 instruction and +1 cycle (9 → 10) on the simple CHERIoT-Ibex core. There is no
  "no check" row for CHERI: the check cannot be disabled by software.
* **Cycles.** Without performance counters, time is only in nanoseconds.
* **A throughput-bound loop** and several checks per iteration were not done.

## How to reproduce

```
python3 impl/bench/ladder/ladder.py --label macos-arm64-apple-m4

docker run --rm --platform linux/arm64 -v "$PWD":/w -w /w rust:1 sh -c \
  'apt-get update -qq && apt-get install -y -qq clang >/dev/null;
   python3 impl/bench/ladder/ladder.py --label linux-arm64-colima-m4 --build-dir /tmp/b'

# x86-64 under emulation: instruction count only
docker run --rm --platform linux/amd64 -v "$PWD":/w -w /w rust:1 sh -c \
  'ulimit -c 0; python3 impl/bench/ladder/ladder.py --label linux-x86_64-qemu-emulated \
     --emulated --iter 2000000 --reps 1 --build-dir /tmp/b'
```

Under emulation `cc1` occasionally crashes on its own (SIGSEGV inside `qemu-x86_64`,
verified); with `--emulated` the build is retried up to five times, and `ulimit -c 0`
keeps core dumps out of the working directory.

## Addendum: real machines from CI

The first `ladder.yml` run on pull request #28 produced two real rungs
(`results/github-*.md`, numbers are best of five, spread in parentheses):

* **AMD EPYC 9V45, x86-64.** Two extra instructions and not a single extra fraction of
  a nanosecond: `forced`/`none` = 1.000…1.001 for all three compilers with a spread of
  0.2–0.5%. Same as on the M4.
* **The Arm core of the GitHub machine** (implementer 0x41, Arm's own core; `/proc/cpuinfo`
  does not report the model, and we did not guess it). Here the check is **visible**:
  +2.0% (gcc), +5.3% (clang), +6.2% (Rust) with a spread of 0.1%. This is not noise:
  `auto`, which matches `none` instruction for instruction, stays at 0.999–1.005.

So "the check is free on a modern processor" is not true for every modern processor.
The wide Apple and Zen cores hide it, the Arm server core does not, although it is far
from RISC5's 22%. Why this is so is a hypothesis, not a measurement: there are no cycle
counters in GitHub's shared virtual machine.
