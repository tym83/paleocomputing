[Русская версия](FINDING-83-descriptor-workloads.ru.md)

# Finding 83. Descriptors on three workloads: −26% on open arrays, zero on ordinary ones, +0.53% on the compiler

Four code generator configurations, each in a **homogeneous** Norebo environment
(everything built by its own code generator, finding 82): A, no checks; B,
software checks (stock); E, `CHK`; F, E + descriptors for open arrays. Cycles come
from the Norebo emulator's cycle model, validated against the RTL (finding 17);
`IDX` costs one cycle in it, as in the RTL (finding 80).

Reproduce with `make desc-measure` (≈10 minutes), then `make desc-cross` and
`make desc-profile`. Tables: `build/md/summary.txt`, `build/mdx/raw.txt`.

## Result

| workload | A | B | E | F | F vs E |
|---|---:|---:|---:|---:|---:|
| **compilation** of 5 modules, cycles | 28 556 351 | 29 919 963 | 29 801 133 | 29 959 035 | **+0.53%** |
| instructions | 16 876 774 | 18 090 546 | 17 980 335 | 18 076 776 | +0.54% |
| generated code, words | 5 775 | 6 348 | 6 290 | 6 317 | +0.43% |
| **ArrBench** (arrays of known length), cycles | 54 270 887 | 59 894 995 | 57 123 411 | 57 124 801 | +0.002% |
| **OpenBench** (the same kernels on open arrays), cycles | 32 440 211 | 41 696 996 | 41 684 979 | 30 650 231 | **−26.47%** |
| its code, words | 255 | 295 | 293 | 261 | −10.9% |

Correctness: the compilation output of each configuration **matched byte for
byte** the output of the same configuration's compiler running as stock code
(stage 1); the benchmarks check themselves with `ASSERT` (sortedness, sum,
character count) and passed in all configurations.

B on compilation is exactly 29 919 963 cycles, as in finding 21: the stock
environment here matches `build2` byte for byte. A is lower here than in
finding 21 (28.56 versus 29.12 million) because the environment, not just the
compiler, is built without checks; B−A is therefore 4.78%, not 2.74%.

## What this means

**Open arrays are the only place where a descriptor buys anything.** `CHK` does
not cover them at all: on OpenBench, E removes 0.13% of the cost of checks (two
`CHK` instructions on a global array in the `Run` verification loop; all 12
open-array indexings stay in software), while F removes 119%: it not only
removes the check but also fuses the address arithmetic and replaces the address
load with a descriptor load, so it runs 5.5% faster than A (like the loop in
finding 81).

**On arrays of known length F = E**, in both code and cycles (the 1 390-cycle
difference is the loading of the environment, whose modules have a different
size in F).

**On the compiler F is 0.53% more expensive than E and 0.13% more expensive than
stock B.** Descriptors lose here, and this is the episode's main honest number.

## Decomposition: where +0.53% comes from

A 2×2 cross build, as in finding 21 (`tools/measure_desc_cross.sh`): XY is a
compiler running as X code and generating Y code.

| | cycles | generates words |
|---|---:|---:|
| EE | 29 801 133 | 6 290 |
| EF | 29 873 701 | 6 317 |
| FE | 29 885 465 | 6 290 |
| FF | 29 959 035 | 6 317 |

Setup control: EF and FF generate identical code (6 317), as do FE and EE
(6 290); the outputs of EF and FF, and of FE and EE, are byte-identical.

| component | estimate 1 | estimate 2 |
|---|---:|---:|
| **executing F code** | FF−EF = +85 334 (+0.286%) | FE−EE = +84 332 (+0.283%) |
| **generating F code** (ORG-F does more work) | EF−EE = +72 568 (+0.244%) | FF−FE = +73 570 (+0.247%) |

Half the cost is not the descriptors but the compiler's work to generate them.

### Execution: profile

A dynamic profile of compilation (`make desc-profile`, counters in the emulator):

| | B | E | F |
|---|---:|---:|---:|
| software checks with the bound in a register (open arrays) | 6 142 | 6 142 | 0 |
| `IDX` executed | 0 | 0 | 6 142 |
| descriptor assemblies (`MHI`+`IOR`) | 0 | 0 | 3 459 |
| clearings (`LSL 12`+`ROR 12`) above background | — | background 3 329 | +206 |

`IDX` replaced exactly those 6 142 checks. Counting by instruction cycles (this
is **an estimate from the latency table**, not a measurement): indexing −4…−5
cycles × 6 142 ≈ −27 thousand; assemblies +2 × 3 459 ≈ +7 thousand; clearings
+2 × 206 ≈ +0.4 thousand. The sum is negative, yet +85 thousand was measured.

The missing part was found with a histogram of instruction addresses (a debug
build of the emulator, not included in the repository): in FE the loop that
reads a code word during module loading (`Files.ReadInt` + a store to memory)
executes **608** more iterations, and there are 1 824 more procedure calls,
exactly three per iteration. 608 is the sum of the code growth of the loaded
modules in F: `ORP` +314, `ORB` +120, `ORS` +96, `ORG` +64, `Texts` +12, `Fonts`
+8, `RS232` −6. **The main execution cost is loading longer code**, and it is
longer because of descriptor assembly at every call with a string constant
(finding 82).

So on this workload the descriptor loses not in indexing but in **code size**.
This is the same shape as with CHERI (finding 63: the main cost is pointer width,
not the check), except that on RISC5 the width is paid not by the pointer but by
the call site.

## What this does not show

* An F system on the RTL: cycles come from the emulator model validated against
  the RTL; an F system was not booted on the core with IDX (finding 82).
* Workloads where open arrays are hot and there are also many calls with strings
  (the editor, `Texts`). The compiler is one data point; OpenBench is synthetic.
* An optimization of descriptor assembly (ready-made string descriptors in the
  constant area): it would remove most of the code growth, but was not done.
