[Русская версия](FINDING-75-stock-workloads.ru.md)

# Finding 75. On the stock system the fast multiplier gains nothing

A check of the flip side of finding 74: what the fast FP multiplier does to
what the system runs without the language model. The answer is nothing, and
that is a number too.

| workload | original core, cycles | single-cycle | two-cycle | speedup |
|---|---:|---:|---:|---:|
| the compiler builds itself (`ORS ORB ORG ORP`), whole run | 66 700 249 | 66 699 474 | 66 699 505 | **1.0000×** |
| system boot, 12 million instructions | 18 654 115 | 18 654 115 | — | **1.0000×** |

* Over 40.8 million instructions the compiler executes **31 floating-point
  multiplications**: the difference is exactly 31 × 25 = 775 cycles (two-cycle:
  31 × 24 = 744). The instruction count is the same on all three cores, and the
  object files are byte-identical.
* System boot: **not a single** `FML` in the first 12 million instructions; the
  cycle counts on both cores match to the last unit. The screen checksum is the
  same, `B5DFC933`; the cycle model with the variant accounted for matched the
  RTL instruction by instruction.

In total: the 1.6× speedup exists only where a program multiplies fractional
numbers, and Wirth's system has no such programs. A 26-cycle multiplier was a
reasonable choice for a machine on which one builds a compiler and edits text;
the language model is the first workload for which it became the bottleneck.

## How to reproduce

```
cd impl
make lm-stock      # the compiler on three cores, ~2 minutes
make boot boot-fast
```
