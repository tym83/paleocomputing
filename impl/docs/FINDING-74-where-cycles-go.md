[Русская версия](FINDING-74-where-cycles-go.ru.md)

# Finding 74. Where the model's cycles go, and what the fast multiplier gives

The headline numbers of release no. 2. Everything is on Wirth's RTL (Norebo on
Verilator), only inside the measurement window: the module writes `LED(1)`
before the model step and `LED(0)` after it, and `tb/norebo_tb.cpp` counts
cycles and instruction classes only between them. Loading modules, reading
the weights and printing the text are not included in the count.

## What a character costs

32 characters, seed 1, prompt `alice was `; the text on all cores is
byte-for-byte equal to the reference.

| core | cycles/character | instructions/character | speedup | characters/s at 25 MHz |
|---|---:|---:|---:|---:|
| original `FPMultiplier` (26 cycles) | 2 804 372 | 1 150 926 | 1.000× | 8.9 |
| fast, 2 cycles (`FPMUL_FAST_REG`) | 1 790 953 | 1 150 926 | **1.566×** | 14.0 |
| fast, 1 cycle (`FPMUL_FAST`) | 1 748 727 | 1 150 926 | **1.604×** | 14.3 |

Cycles per character do not depend on the run length: 8 characters give
2 804 849, 32 give 2 804 372 (a 0.02% difference, from sampling and `exp` on
different characters). "Characters per second" is the cycle count converted
at 25 MHz, not a measurement on a board, and without video DMA (Finding 17).

## Profile: the original core

| class | instructions/character | share of cycles |
|---|---:|---:|
| `FML` | 42 226 | **39.15%** |
| `LD` | 383 349 | 27.34% |
| other ALU | 383 578 | 13.68% |
| branches | 213 184 | 7.60% |
| `ST` | 86 064 | 6.14% |
| `FAD` | 42 235 | 6.02% |
| `FDV`, `FSB`, `FLT`, `FLOOR`, `MUL` | ~290 | 0.07% |

Stalls (cycles beyond one per instruction) are 59% of all cycles, and almost
two thirds of them (64%) are waiting for `FML`. There is not a single
back-to-back `FML`: the counter surcharge (Finding 01) does not affect this
workload.

## Why `FML` is only 39%

The inner loop of the hidden layer, `s := s + x[k]*m.w1[base+k]`, as the
stock compiler built it: **27 instructions, 66 cycles** per multiply-accumulate.

| what | instructions | cycles |
|---|---:|---:|
| useful: `LD x[k]`, `LD w`, `FML`, `FAD` | 4 | 34 |
| the sum `s` from memory and back (`LD`, `ST`) | 2 | 4 |
| the counter `k`: `ST`, three `LD`, `ADD`, comparison, loop exit | 7 | 11 |
| bounds checks (two `SUB`+`BLCC`) | 4 | 4 |
| the pointer `m`: SB reload, `LD m`, NIL check | 3 | 5 |
| address: `LD base`, `LSL`, `ADD` | 6 | 7 |
| backward branch | 1 | 1 |

This is exactly what the reviewer predicted from the source
(`design/REVIEW.md`: "the Oberon code generator has no register allocator"):
the sum, the counter and the pointer live in memory and are reread on every
iteration. The reviewer counted 60 cycles for global arrays and 66 for open
ones; we have 66 because the weights sit behind a pointer (one record from
`NEW`), which adds a NIL check and a reload of the module base.

## Two hypotheses from the BACKLOG

`BACKLOG.md`, line 3b2: "the speedup comes not from FMAC (1.07×) but from a
pipelined multiplier (1.67×)". The source of both numbers is the reviewers'
arithmetic from latencies (`design/REVIEW.md`), with no workload and no
reproduction command.

**Fast multiplier: 1.566× (2 cycles) and 1.604× (1 cycle), measured.**
1.67× is unreachable on this code even with free multiplication: removing
`FML` entirely gives 2 804 372 − 42 226 × 26 = 1 706 496 cycles, a ceiling of
**1.643×**. Amdahl's prediction for the single-cycle variant (26 → 1 on every
`FML`) gave 1.604× and matched the measurement to the third digit: only the
latency changes, everything else in the profile stays put.

**FMAC: 1.015–1.064×, an estimate, not a measurement.** A fused instruction
would replace an "`FML` … `FAD`" pair where `FAD` reads the result of `FML`
(the testbench counts such pairs: 42 086 per character, almost all
multiplications). It does not remove the load of the sum from memory between
them; that is the compiler's job, not the instruction's. The saving per pair
ranges from 1 cycle (running the same two blocks back to back, 1+25+3 versus
26+4, reviewer 1) to 4 (the addition is free):

| multiplier | speedup from FMAC on top of it |
|---|---|
| original, 26 cycles | 1.015× … 1.064× |
| fast, 2 cycles | 1.024× … 1.104× |
| fast, 1 cycle | 1.025× … 1.107× |

So "1.07×" is an upper bound, not an expectation, and it is reached only by
an ideal FMAC. The stated relationship holds: what matters is the multiplier,
not the instruction. But after the multiplier is replaced, the most expensive
rows of the profile become `LD`/`ST`, 54% of cycles, and the next lever is no
longer in the hardware but in the code generator.

## How to reproduce

```
cd impl
make lm-profile          # three cores, 32 characters, the tables above; ~3 minutes
make lm-profile LM_N=8
```

The loop breakdown comes from the disassembler run on the object file:
`python3 -c "import sys; sys.path.insert(0,'tools'); import rsc, disasm; ..."`
on `build/lm/run/LM.rsc` (lines 428–454 of the `Step` procedure).
