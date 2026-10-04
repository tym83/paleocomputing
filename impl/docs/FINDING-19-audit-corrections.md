[Русская версия](FINDING-19-audit-corrections.ru.md)

# Finding 19: what the acceptance audit found and what was fixed

Five auditors, two of whom had reported by this point. Both returned **NOT ACCEPTED**
and agreed on four blocking items independently of each other.

## Factual errors: fixed

| What was published | What is actually the case | Status |
|---|---|---|
| "the area delta varies **fourfold** with the flow, with identical RTL" | the RTL **was not identical**: +30.06 was taken without `CHK_SPLIT`, +123.16 with it. On one RTL the spread is **2.65×** | ✅ rewritten |
| "area cost **+0.21%** (37.7 GE)" | refers to the **rejected** encoding. The adopted one has **+46.55…+123.16 µm² = 58…154 GE**, and the lower bound is **inside the noise floor** of ±64 GE | ✅ purged from six files |
| "frequency cost **−1.81%**, the review predicted it and it was confirmed" | 🔴 **the sign is undetermined**: the default flow gives **+1.60%**, that is, CHK is **faster**. The review's prediction remains unverified | ✅ rewritten |
| "`Kernel` gives zero because it is `MODULE*` (RISC-0)" | the source says `MODULE Kernel;` **without an asterisk**. It is zero because the module is almost entirely `SYSTEM.GET/PUT` | ✅ fixed |
| `docs/decoder-map.txt` is "the raw output of the probe" | it contained **a shell error message** | ✅ regenerated |

## A security hole in the encoding: fixed

**The adopted encoding corrupted a register whose number is set by the array length.**
On the stock core a CHK word executes silently as `LSL`; field `a` holds the upper four
bits of the limit. Limit 1000 → R3 is corrupted, limit ≥ 3840 → **R15, the link register**.

The review's requirement (`.rsc` version byte = 2) had been accepted and lost. Implemented and verified.
Details in finding 18.

## Reproducibility: fixed

| Problem | Status |
|---|---|
| `measure3.sh` ran configuration **D** (the rejected one), not the adopted **E** | ✅ |
| the computational workload did not exist as a script at all; the numbers were taken by hand | ✅ `tools/measure_bench.sh` |
| `syn/sweep.py`: the `defines` parameter existed, but `main()` did not pass it, so `make syn` **physically could not** measure the delta | ✅ flag `--chk` |
| `lockstep` and `boot` were built **without** `-DWITH_CHK`: all the system-level evidence referred to the base core | ✅ targets `lockstep-chk`, `boot-chk`; verified: the same 18 654 115 cycles and the same checksum `B5DFC933` |
| the upper piece of the limit `IR[27:24]` was **not covered by tests at all** | ✅ `tests/t2_chk_hi.s`, in the regression suite |

## Refuted novelty claims

| Claim | What was found |
|---|---|
| "the cost of checks: the number is absent from the literature" | Eggert, "Runtime Checking for ISO Standard Pascal", IEEE TSE 1981 |
| "the UMUL issue was not caught earlier" | the Oberon mailing list, 4.03.2018, thread "Bug in multiplier?": Hellwig Geisse found it, Jörg Straube confirmed it and posted a fix |
| "nobody has measured the penalty" | the base latency was discussed on the mailing list in 2016; nothing was found about the mechanism itself, but the search covered only the list archive, GitHub and academic databases |

**The acceptable form for all three:** "we found no mention in such-and-such sources",
not "nobody has measured it".

## What is acknowledged and NOT fixed: remains a limitation

- **The code-generation confound is not fully eliminated.** In the final run configuration A still does not emit checks, so the difference also includes the compiler's work generating them (~0.4 of 2.74 pp). The number is an **upper estimate**.
- **"Exactly 50%" is an identity, not a measurement.** Two instructions are replaced by one; the ceiling is set by construction. The meaningful quantity here is **the share of checks covered**, not the 50%.
- **`ArrBench` was written to fit the answer.** All its arrays are declared so as to fall under the hardware check. This is an **upper bound** on the gain, not a typical case.
- **The CPI of configuration A on the computational workload = 2.43**; over 40% of cycles are the 34-cycle multiplier on address arithmetic. The "10.16%" is largely about Wirth's multiplier, not about the checks.
- **Neither U1 nor U3 is closed by the criteria of our own design**: there is no median and IQR over a population of programs, no spread across runs, and the "4.27 MHz" was measured in Node, not in a browser.
- **The path-to-silicon checklist is not done**: the register file, flags, `H` and `IR` have no reset; `Registers.v` relies on `initial`, which `dfflibmap` silently drops.
- **512 of the 993 flip-flops are the register file**, which in Wirth's design is in LUT-RAM. The 18.21 kGE baseline is a property of our rework, not the size of the original.
- **CHK inside an interrupt handler** leaves `intMd = 1` forever (interrupts are dead). This is not a CHK regression (the software check does the same thing), but it is not noted anywhere.

## The main lesson

Both auditors found **the same** errors independently, and they are all of one kind:
**a number taken under some conditions migrated into summaries as a general one**. None was a measurement
error; all were errors in carrying a result over into text.
