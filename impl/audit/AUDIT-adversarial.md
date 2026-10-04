[Русская версия](AUDIT-adversarial.ru.md)

# Audit: hostile reader. VERDICT: NOT ACCEPTED

The full report is in the correspondence. Below are the blocking items and their fix status.

## Factual errors (cannot be published, must be fixed)

| # | What is wrong | Status |
|---|---|---|
| F1 | **FINDING-16: "the delta depends on the flow by a factor of four with identical RTL": the RTL is NOT identical.** +30.06 was taken without `CHK_SPLIT` (limit in `IR[15:4]`), +123.16 with `CHK_SPLIT` (limit from two parts). Two different circuits | 🔴 |
| F2 | **"Kernel is `MODULE*` (RISC-0)"**: the source says `MODULE Kernel;` with no asterisk. The zero there has a different cause. The error sits in the validation of the measurement | 🔴 |
| F3 | **UMUL: "not caught before"**: it was caught on the Oberon mailing list on 4.03.2018 (Hellwig Geisse, confirmed by Jörg Straube, with a fix). Our contribution is the mechanism and the measurement, not the discovery | 🔴 |
| F4 | **`docs/decoder-map.txt` contains a shell error message**, not the probe output. The main evidence for finding 2 is attached as an error | 🔴 |
| F5 | **The adopted encoding E clobbers a register whose number is set by the array length.** On the stock core the CHK word executes as `LSL` with field `a` = the high bits of the limit. Limit 1000 → R3 is clobbered. Previously R0 was clobbered | 🔴 |
| F6 | **The reference models implement UMUL as honestly unsigned** (`(uint64_t)a * b`), i.e. they diverge from the RTL in semantics. Lockstep did not cover this: it simply never came up | 🔴 |

## Methodological blockers

| # | Problem | Status |
|---|---|---|
| M1 | **The code generation confound is not removed.** In the final run A still emits no checks → the difference = execution + generation. ~0.4 of 2.74 p.p. | 🔴 |
| M2 | **Cycle counts were taken from the model, not from the RTL.** The CHK core has never booted the system; `make boot`/`lockstep` are built without `-DWITH_CHK` | 🟠 partly closed by finding 17 |
| M3 | **FINDING-04 contradicts itself:** it proves that the noise is non-additive and then proposes subtracting a constant offset | 🔴 |
| M4 | **`+0.21%` refers to the REJECTED encoding** and travels through every summary. The adopted E has not been measured in the defensible flow | 🔴 |
| M5 | **"Exactly 50%" is an identity, not a measurement.** 2 instructions → 1; the ceiling is set by construction | 🔴 |
| M6 | **ArrBench is written to fit the answer:** the limits are declared < 4096, the profile "discovers" 68.3% in 256…1023, and the encoding is fitted to that. At N=5000 the conclusion flips | 🔴 |
| M7 | **The CPI of configuration A = 2.43**, >40% of cycles are the 34-cycle multiplier on address arithmetic. "10.16%" is about the multiplier, not about the checks | 🔴 |
| M8 | **2.67 versus 2.74: a change of denominator without explanation.** The same with 14 / 13.9 / 13.7 / 15.8 / 0.37 | 🔴 |
| M9 | **Fmax: at a 5000 ps target the delta is −6.5%, while −1.81% from a tight target is published.** The point must be justified, or both shown | 🔴 |
| M10 | **Comparison with Morello/MTE/MPX**: different security properties, different microarchitectures, a straw-man baseline (a code generator without BCE) | 🔴 |
| M11 | **Neither U1 nor U3 is closed by the design's own criteria:** no median and IQR over a population of programs, no spread across runs, "4.27 MHz" was measured in Node, not in a browser | 🔴 |

## Reproducibility

- `measure_checks.sh` reproduces the **refuted** number (the first stage), not the published one
- `measure3.sh` hard-codes `A B D`, the rejected variant; the adopted E is not in the script
- The compute workload does not exist as a script; the FINDING-07 numbers were taken by hand
- The logs of the E runs are not in the tree
- No Makefile target has a browser build

## Unresolved caveats

VID is thrown out (~7% of cycles), SPI/SD is word-level (disk transfer = 0 cycles), PS/2 is done with registers,
the register file is rewritten into flip-flops (512 of 993: the baseline is not Wirth's core),
open arrays are excluded from both coverage samples, 6.2% are 10 modules without a window part,
there is no `.rsc versionkey = 2X` protection, no CHK × interrupt test, no Verilator coverage.

## Refuted novelty claims

| Claim | What was found |
|---|---|
| "the cost of checks: the number is not in the literature" | Eggert, "Runtime Checking for ISO Standard Pascal", IEEE TSE 1981 |
| "UMUL was not caught before" | Oberon mailing list, 4.03.2018, thread "Bug in multiplier?" |
| "nobody has measured the surcharge" | the base latency: mailing list, 2016; nothing found about the mechanism, but the search is incomplete |
| "nobody has measured buildworld" | the CHERI corpus is behind a paywall, not checked |
