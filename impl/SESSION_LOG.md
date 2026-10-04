[Русская версия](SESSION_LOG.ru.md)

# Session log — oberon-lab (started 2026-09-22)

## Goal
Implement episode 1 per `design/DESIGN.md` v0.3: RISC5 under Verilator + a differential
bench + three bounds-checking configurations, with measurements.

## Current state
- **Infra:** Verilator 5.052 ✅, emcc ✅, node v26.9 ✅, clang ✅. **yosys ❌: needed for C3 (area)**
- **Sources:** `impl/rtl/`: Wirth's set, `RISC5.v` dated 31.8.2018 (**with interrupts and FP**),
  `RISC5Top.v` 14.6.2018, `Registers.v` 1.2.2018. The other modules are older; that is normal.
  ⚠ The reviewer's scratchpad held the 25.9.2015 version **without interrupts**; do not use it.
- **Oberon sources:** `impl/ext/oberon-src/`: ORS/ORB/ORG/ORP/ORTool, Kernel/Files/Modules/Oberon/System
- Works: nothing built yet
- Does not work: —


Stage 0, measurement #3: confirm from the `RISC5.v` decoder that bits `IR[15:4]` really
are not read for F0.

## Journal
### 00:55 — project set up
`impl/{rtl,tb,tests,tools,ext,build,docs}`. Copied the sources from the reviewers' scratchpad
(saves downloading). Checked the RTL version: critical, see above.

### 01:05 — ✅ Stage 0, measurement #3: free encoding space CONFIRMED
`RISC5.v:100`: `assign C1 = q ? {{16{v}}, imm} : C0;`: with `q=0` (format F0) the field
`imm = IR[15:0]` **is not used at all**. The only other mention (line 112) is
inside the `q=1` branch. `IR[3:0]` = irc.
→ **`IR[15:4]` are 12 free bits for F0**; existing code has zeros there.
The precedent is confirmed: `RTI = BR & ~u & ~v & IR[4]`, STI/CLI on `IR[5]`/`IR[0]`.

### 01:10 — ✅ the core builds under Verilator, the bench with a retire detector works
- `Registers.v` replaced with a behavioral 3R1W (original → `Registers.xilinx.v.orig`).
  Debt: `.INIT(16'h0000)` zeroed the file via the bitstream; silicon needs a reset, and there is no port for it.
- Access to internal signals: `--public-flat-rw`, the path `top->rootp->RISC5->stall` and
  `top->rootp->RISC5->regs->R[i]` (not `__DOT__`, as I first wrote).
- `rst` is **active low** (`~rst ? StartAdr : PC`).
- Bench: one flat memory serves both codebus and inbus: a von Neumann stall.
- **T0 passed: 15/15.** MUL measured = **34 cycles**, matching the reviewer's report.

### 01:35 — ✅ directed tests: latencies, flags, the surcharge for back-to-back arithmetic
- `tests/t1_latency.s`: **17/17**. All latencies from the reviewers' reports confirmed
  on the live RTL: ADD/SUB/AND/LSL=1, LD/ST=2, FAD/FSB=4, FML=26, FDV=27, MUL/DIV=34.
- `tests/t1_flags.s`: **13/13**. The review finding is confirmed: **a taken BL clobbers N and Z**
  (the third term of `regwr`). A store does not touch the flags.
- `tests/t1_fpb2b.s`: **13/13**. Confirmed and **generalized**: the surcharge for a back-to-back
  operation equals **the counter period 2^width**, not the operation length.
  Back-to-back integer MUL = **64 cycles instead of 34 (+88%)**. See `docs/FINDING-01-counter-period.md`.
  My original hypothesis (34) was wrong; the rule was derived from the miss.
- Tools: `tools/asm.py` (assembler + `.bin`/`.chk` generation),
  `tb/run_tests.cpp` (a universal runner with a retire detector).

### 01:50 — ✅ Stage 0 closed on encoding: the free field PROVEN by enumeration
`tb/decoder_probe.cpp`: all 4095 non-zero values of `IR[15:4]` in format F0 →
**0 differences** in result, flags and cycles. A control on F1 shows that the method
sees a difference. Took an 8×16 decoder map (`docs/decoder-map.txt`).
The refutation of the v0.1 hypothesis is confirmed: bit 28 with op=12/13 is FLT/FLOOR,
and `0011`+op=0 = `MOV a,NZCV` with INFO=**0x53**. See `docs/FINDING-02-encoding.md`.

## Current state (rewrite)
- **Built and working:** the RISC5 (2018) core under Verilator, the bench with a retire detector,
  a universal test runner, the assembler, the decoder probe.
- **Tests:** 43 checks, all green (latencies 17, flags 13, FP surcharge 13).
- **Findings:** 2 documented in `docs/`.
- **Not done:** yosys not installed (needed for area/C3); the SoC wrapper;
  the differential bench against the reference ISS; bounds-checking configurations A/B/C.

## Next step
Install yosys (`brew install yosys`) and take the base area of the core: this is the second
half of the stage 0 measurement and a direct entry into C3.

### 03:30 — ✅ base area taken, two flow traps measured
Installed yosys 0.69, downloaded Nangate45 typical (6.7 MB).
**Baseline: 14,532.11 µm² = 18.21 kGE, 993 flip-flops, 30.9% sequential logic,
10,938 cells.** Falls in the 10–20 kGE range predicted by the review.

Two traps, both measured (`docs/FINDING-03-synthesis-traps.md`):
1. `stat -tech cmos` loses **758 of 993 flip-flops silently** (76%): confirms the review
2. **`-D` without `-constr` is ignored completely**: the area is identical to the last digit
   with -D 200 and -D 50000. The review did not foresee this
The area-vs-period curve turned out flat (two points, 0.5% apart) → there is nothing to build
a chart from, but the delta from the ISA extension will be clean. **Fmax cannot be obtained without OpenSTA.**

### 04:10 — ✅ CHK implemented in the RTL, area delta measured
Encoding: F0, v=1, op=1 (an alias of LSL; the compiler does not emit it), **the index in field b**
(via field a there would be a combinational loop ira0↔chkFail), the limit in `IR[15:4]` (12 bits),
register c=12 → the hardware jump takes the trap vector from MT without an extra read.
Semantics when it fires: exactly like BLR: `R15 := PC+4; PC := R[12]`. When it does not fire,
it writes neither a register nor the flags (CHK is excluded from the common `regwr` term).

**Δ area = +30.06 µm² = 37.7 GE.** ⚠ CORRECTED LATER: this applies to the rejected
encoding; the adopted one costs +46.55…+123.16 µm² (58…154 GE) depending on the script.

🔴 But the main result is methodological: **logically neutral rewrites of the source
move the area by ±51 µm², and non-monotonically** (two of them separately −51 each, together +88).
So **the measured effect is half the size of the noise from syntax**. Only a comparison of
two builds from a single file via `ifdef` is defensible. See `docs/FINDING-04-noise-floor.md`.

### 04:35 — ✅ CHK verified functionally, regression green, build via make
- `tools/asm.py`: added CHK; **fixed a bug**: with `v=0` the immediate is
  zero-extended, so it has to be checked as unsigned (caught on `IOR R12,R12,0xE05C`).
- `tb/run_tests.cpp`: **fixed how checks are anchored**: they were tied to the number of executed
  instructions, now to the address (word number). On straight-line code these coincide; at the first
  branch they diverge. Plus checks were made one-shot.
- `tests/t2_chk.s`: a CHK that does not fire takes 1 cycle, flags untouched; one that fires
  transferred control to MT, and the skipped instruction did not execute. **5/5.**
- 🟢 **The core with CHK passes all base tests with an identical number of cycles** (203, 21, 453):
  the "old code on the new RTL" test required by the review.
- `make test`: the whole regression with one command.

## Current state (rewrite)
- **Working:** the RISC5 (2018) core under Verilator in two configurations (base and with CHK),
  the bench with a retire detector, a test runner anchored to the PC, the assembler, the decoder probe,
  a synthesis flow with Nangate45, `make test` / `make syn`.
- **Tests:** 61 checks on two cores, all green.
- **Measured:** base area 14,532.11 µm² = 18.21 kGE, 993 flip-flops;
  Δ CHK of the adopted encoding = 58…154 GE (the lower bound within the ±64 GE noise).
- **Findings:** 4 documented in `docs/`.
- **Not done:** Fmax (needs OpenSTA); the SoC wrapper; the differential bench against the ISS;
  configurations A/B/C on a real system (needs the Oberon compiler).

## Next step
Configuration A: a `check := FALSE` patch in `ORG.Mod` and measuring the cost of bounds checks on a
real workload. This needs a working Oberon: either Norebo (cross-building from the host)
or the reference emulator with a disk image.

### 05:10 — 🎯 MAIN RESULT: the cost of run-time checks measured
Brought up **Norebo**, a command-line Oberon compiler (a macOS trap: the file system
is case-insensitive, `make` treats the `Norebo/` directory as the finished target `norebo` and
builds nothing; I built directly into `norebo.bin`).

**The three-stage bootstrap passed: "Stage 2 and Stage 3 are identical"**: T-BOOT-3 ✅.

Created a configuration that did not exist: `check := FALSE` in `ORG.Open`, rebuilt the compiler.
**Result: the checks take 6.2% of the system's code (1490 words of 23,954).**
The spread across modules is 0% (Kernel, which is RISC-0) … 11% (Fonts).

Cross-checked three ways: for ORP Δwords = Δtraps = 390 exactly (almost all of them there are
one-word NIL checks); where there is indexing, Δwords > Δtraps (a bounds check =
2 instructions); Kernel gives 0 in both configurations. What remains in A is `NEW` and `ASSERT`,
which are outside the `check` guard and must stay.

🟢 A refinement to the experiment's setup: **NIL checks dominate, not array bounds
checks** (in ORP 390 of 402 are NIL). The "cost of memory safety" in Oberon is first and foremost
the cost of dereferencing pointers. See `docs/FINDING-05-cost-of-checks.md`.

⚠ This is CODE size, not cycles. They must not be mixed.

### 06:00 — 🎯 the dynamic cost of checks: 2.67% of cycles
Instrumented the Norebo emulator with a cycle counter following the model in `tb/cycle_model.h`.
**The model was first checked against the real RTL cycle by cycle: 61 instructions,
0 mismatches**, including all multi-cycle ones and the back-to-back surcharge.

🔴 **I nearly published a wrong number.** The first measurement gave 0.43%, but it reflected only
the fact that a compiler without checks does less work when generating code, not the cost of
executing the checks. A **second bootstrap stage** was needed: use compiler A to
build the compiler again (binary code without checks inside), the same way through B
with checks, and only then run the same workload with both.
The difference between the wrong and the right measurement is **sixfold**.

**Bottom line: statically 6.2% of code, dynamically 2.67% of cycles (3.78% of instructions).**
The checks take twice as much space as time: they are scattered throughout the code, but
hot loops execute them less often, and each is cheaper than the average instruction (1 cycle versus
an average of 1.642). Oberon is at the cheap end of the range in the literature (Morello 5.7, Toooba 9,
MTE 4–12).

⚠ A Norebo trap: if a source is not found via `NOREBO_PATH`, it **goes into an infinite loop**
instead of an error. The path order in `tools/measure_checks.sh` has been checked; do not touch it.
⚠ A macOS trap: there is no `timeout`; I wrote `tools/run_timeout.py`.

### 06:40 — 🎯 MAIN EXPERIMENT CLOSED: three configurations measured
CHK added to the Norebo emulator (regression clean: old code gives the same 94,149,309
cycles) and to the code generator (`PutCHK` in `ORG.Mod`, configuration C).
The accounting matched exactly: in `Texts` 21 bounds checks → 2 + **19 CHK**, the code is exactly 19 words
shorter; in `Fonts` 22 → 22 CHK, minus 22 words. One word per check.

⚠ An incidental setup error: configuration C's path starts with `cfgC`, which holds
the patched `ORG.Mod`, so different sources were being compared. Removed ORG from the workload.

**RESULT (tools/measure3.sh):**
| configuration | cycles | instr. | code |
|---|---|---|---|
| A — no checks | 29,121,384 | 17,407,595 | 5,775 |
| B — software | 29,919,963 (+2.74%) | +3.92% | +9.92% |
| C — hardware | 29,808,859 (+2.36%) | +3.32% | +8.92% |

🎯 **Hardware bounds checking removes only 14% of the cost of checks** (0.38 of 2.74 pp)
at the price of 0.32…0.85% of the core's area. The reason is measured: NIL checks dominate (390 of 402 in ORP),
and CHK does not touch them; plus the 12-bit limit and open arrays on the old path.
A negative result, and it is stronger than a positive one. See `docs/FINDING-06-three-configs.md`.

## Next step
A second workload: a compute one, with dense array indexing. Currently the only workload
is the compiler (many pointers, little indexing), and this is a recorded limitation. A compute
workload will show the upper bound of CHK's contribution.

### 07:20 — ✅ second workload: the hardware's contribution varies 3.5×
`bench/ArrBench.Mod`: sorting + matrix multiplication, not a single pointer,
all limits < 4096. Result: the checks cost **+10.16% of cycles**, hardware support
removes **exactly 50.0%** (two one-cycle instructions are replaced by one).

🎯 **Versus 14% on the compiler workload: a 3.5× spread.**
"How much does hardware bounds checking give" without naming the workload is a meaningless question.

Two bugs along the way:
1. 🔴 My own benchmark had a real out-of-bounds access (`b[i*M+j]` up to 3599 with an array
   of 1000). **Configuration A swallowed it silently**, corrupting 2600 words; B caught it. An accidental
   but perfect demonstration of why checks matter.
2. 🔴 **CHK breaks diagnostics: `unknown trap 8`.** The limit in `IR[15:4]` overlaps
   both the trap number (bits 7:4) and the position (23:8). The review predicted the loss of the position,
   but not that the error number itself would be corrupted.

An open fork: a 4095 limit with broken diagnostics / a 255 limit with the right number /
a two-word CHK. Decide by data: how many arrays are shorter than 256. Not measured.

## Next step
Measure the distribution of array lengths in the system to close the CHK encoding fork.

### 07:50 — the full set of PO2013 sources and an array length analyzer
Downloaded **the full set of Project Oberon 2013: 46 modules**, including all the windowing ones
(`Display`, `Viewers`, `TextFrames`, `MenuViewers`, `Graphics`, `GraphicFrames`, `Curves`,
`Rectangles`, `Draw`, `GraphTool`, `System`, `Edit`, `Net`, `SCC`, `Math`, `Tools` and others)
into `ext/po2013-src/`. Two zip archives with additional utilities did not download.
Without the windowing modules the sample would be biased: that is exactly where dense indexing lives.

`tools/array_limits.py`: a static analysis that extracts array limits straight from the
compiled code by the pair "`SUB` with an immediate limit + trap #1".
No compiler patch is needed. **Checked on a known case**: on `ArrBench`
it extracted exactly the 60, 1000 and 3600 declared in the source.

`tools/build_po2013.py`: a build in dependency order, computed by a topological
sort over the IMPORT sections (not given by hand).

⚠ **A trap: `Input.Mod` hangs Norebo dead.** Verified that this is NOT my changes:
it hangs with the reference emulator binary, with the stock boot compiler, and with
the `build2` compiler. The file is intact (the hex literal of the keyboard table is closed).
The cause was not found; the module is tiny and does not affect the array length statistics.
The build was made robust: a timeout per module, hung ones are marked and skipped.

### 08:40 — ✅ the CHK encoding fork closed by data
Three independent measurements (`docs/FINDING-08-encoding-decision.md`):
1. On compiled code, 154 check sites: **median limit 32**,
   8 bits cover 70.0%, 12 bits 86.9%
2. On declarations in all 46 sources (99 dimensions, including the windowing modules,
   which are not in the Norebo set): **the median is again 32**, 8 bits 84.8%, 12 bits 99.0%
3. A run on a real error, and here is the main thing:
   - B (software): `array index out of range` ✅
   - C (12 bits): 🔴 **`access via NIL pointer`**: the system confidently reports the WRONG error
   - D (8 bits): ✅ `array index out of range`, only the position is lost
4. By area the variants are **indistinguishable** (3.46 µm² with a noise floor of ±51)

**Variant D (8 bits) adopted.** Trading 14–17 pp of coverage for false error messages
is a bad deal for a system whose value is that errors are found and named.
Moved the emulator, the RTL (`CHK_NARROW`), the assembler (`CHKN`) and the code generator (cfgD) over.

⚠ Incidentally: the downloaded PO2013 set is **the 2019 version, while the Norebo compiler is from 2016**.
They are incompatible, and this shows up as a hang, not an error. For the analysis of
compiled code the matching Norebo set was used.

### 09:20 — 🔴 correction: the data does NOT close the fork
Measuring the adopted (8-bit) variant on the SECOND workload refuted the rationale of finding 8.

| variant | compilation | compute |
|---|---|---|
| 12 bits (diagnostics broken) | 13.9% | **50.0%** |
| 8 bits (diagnostics intact) | 13.0% | **15.8%** |

**The error in the rationale:** the decision was made on the distribution of check SITES (median 32),
while the hot loops of compute code run LARGE arrays (1000 and 3600 in the benchmark).
Only 6 of 15 checks fell under 8 bits, and not the ones executed millions of times.
The static number dropped by 17 pp, the dynamic one **threefold**.

The lesson: encoding decisions need a **dynamic profile**, not a count of sites.

A two-word variant is no way out either: the processor has to skip the second word, that is a cycle,
and the gain disappears. The architecturally correct answer is a limit in a register hoisted out of the loop,
but **the Oberon code generator cannot hoist invariants** and will not learn to without rewriting ORG.

**Bottom line: a real fork is shown with the measured cost of each branch**; for the article this is
better than a single decision. See `docs/FINDING-09-fork-unresolved.md`.

## Next step
A dynamic indexing profile: a counter per check, grouped by limit.
It will close the fork for good and is cheap.

### 10:10 — 🎯 FORK CLOSED: a limit made of two pieces
The dynamic profile (a counter of check executions by length class) showed that
on the compute workload **68.3% of executions are arrays of 256…1023**, which 8 bits do not cover.
And it gave a predictive model: the ratio of dynamic coverage predicts the ratio of the
gain **exactly** (31.6% versus a measured 31.6%).

This prompted me to look for bits where I had not looked. **Field `a` (IR[27:24]) of the CHK instruction
is not needed** (when it fires ira0 = 15; when it does not, no register is written), and it lies
OUTSIDE the position field (23:8) and OUTSIDE the trap number field (7:4).
→ the limit is assembled from two pieces `{IR[27:24], IR[15:8]}` = 12 bits, and the trap number is intact.

| variant | compilation | compute | diagnostics |
|---|---|---|---|
| 12 bits in IR[15:4] | 13.9% | 50.0% | 🔴 the WRONG error |
| 8 bits | 13.0% | 15.8% | ✅ |
| **two pieces (adopted)** | **13.7%** | **50.0%** | ✅ |

Checked on an array of 1000 elements: E gives 19 words, CHK is used,
the message `array index out of range` is correct. On the compute workload the result **matches bit
for bit** the maximum-coverage variant (57,133,094 cycles).
Moved the RTL (`CHK_SPLIT`), the assembler (`CHKS`), the emulator, the code generator (cfgE) and the Makefile over.
RTL regression green, 61 checks. See `docs/FINDING-10-split-encoding.md`.

## Current state (rewrite)
- **Measurements complete:** the cost of checks 2.74% (compilation) / 10.16% (compute);
  hardware support removes 13.7% / 50.0% with diagnostics intact;
  area 58…154 GE (the lower bound within noise); base 18.21 kGE, 993 flip-flops
- **Findings documented:** 10
- **Remaining:** Fmax (needs OpenSTA); the full set of ISA tests (4 of 12 done);
  the differential bench against the reference ISS; claim C1 as a whole (SoC, browser)

### 10:40 — ✅ finding 11: UMUL in RISC5 is a mixed multiplication, not an unsigned one
`Multiplier.v`: the addend `{w0[31], w0}` is ALWAYS sign-extended; flag u controls
only the last step. Consequence: `UMUL` treats the first operand as unsigned
and **the second as signed**.
Measured: `UMUL R, 2, 0xFFFFFFFF` gives H = 0xFFFFFFFF, whereas a truly unsigned one
would give H = 1. Test `tests/t1_umul.s`, 6/6. See `docs/FINDING-11-umul-is-mixed.md`.
Found by accident: my expectation in `t1_arith.s` was based on the "correct" semantics.
Important for the differential bench: the reference must reproduce exactly this quirk.

### 11:30 — ✅ decoder equivalence check, finding 12
`tb/decoder_equiv.cpp`: all 256 combinations of {IR[31:28] × op} × 5 operand sets = 1280
runs on two cores, comparing registers, flags, cycles and a memory checksum.

**It caught a real bug:** my decode `~p & ~q & v & (op==1)` did not check bit `u`,
so CHK decoded in TWO encodings (`0001` and `0011`), taking two slots
instead of one. Existing code did not break, but the code space was used up twice as fast.
Fixed by inserting `~u &` in the RTL and the emulator; now exactly one encoding differs.

Hooked into `make test` via the `equiv` target. See `docs/FINDING-12-decoder-equivalence.md`.

**ISA tests overall: 12 of the 12 planned are done.**
Full regression: 11 suites × 2 configurations + decoder equivalence, all green.

### 12:40 — 🎯 MILESTONE: real Verilog boots real Oberon
The SoC bench: the `RISC5.v` core on RTL + RAM + ROM + devices as stubs with the same
register interface (as the review recommended, we do not emulate the wired interfaces).
The SD card logic is taken from the reference emulator; it is word-based and maps onto registers.

**Boot: 12 million instructions, 18.65 million cycles, 4.27 s on the host = 4.37 MHz-equivalent.
The framebuffer is non-empty, the Oberon interface is on the screen** (`docs/oberon-boot-screen.png`).
The reference draws the first frame after ~8 million instructions, our RTL after ~7.1 million.

Three bugs along the way:
1. 🔴 `prom.mem` from Wirth's set is a loader over the SERIAL LINE; it does not read
   from the disk. The one from the reference emulator (`risc-boot.inc`) is needed. They start the same.
2. 🔴 During reset the bus must be served from memory: IR is latched every cycle,
   and with zeros the first instruction executes as `MOV R0,R0` instead of a jump.
3. The framebuffer is bottom-up: predicted by the review, it saved a day.
See `docs/FINDING-13-boot-on-rtl.md`.

### 13:20 — 🎯 DIFFERENTIAL BENCH: 15 million instructions of agreement
`tb/lockstep.cpp`: RTL against the reference emulator; after EVERY instruction it compares
the program counter, all 16 registers, H and the four flags. The workload is booting the Oberon system.

**Result: 14,600,503 instructions of strict comparison, 23.2 million RTL cycles,
5.8 s on the host, 0 mismatches.** Warm-up in the loader: 399,497 instructions.

Five sources of nondeterminism eliminated (four predicted by the review):
PC width, the link register after leaving the ROM, the timer, the progress heuristic, the disk image.

The bench caught two of my bugs:
1. the bus during reset (found immediately: in the reference the first instruction branched away)
2. 🔴 **a housekeeping write that I had added myself**, anticipating a trap from the review: the reference
   puts "Sizg" at DisplayStart in `risc_configure_memory()`, which our launch does not
   call. Diverged at step 2,101,536.

Targets `make lockstep` and `make boot`. See `docs/FINDING-14-lockstep.md`.

### 14:10 — 🎯 C1 CLOSED: Oberon runs in the browser on real RTL
`web/`: the RISC5 core → Verilator → Emscripten → WASM, Project Oberon in an ordinary tab.
Checked in Chrome: a full desktop, the banner `Oberon V5 NW 14.4.2013`,
the System.Tool panel with all the commands. Screenshot `docs/oberon-in-browser.png`.

**Delivery is 326 KB gzipped** (model 75 KB, image 249 KB): matches the review's prediction.
**Speed in WASM is 4.27 MHz versus 4.37 native: a 2.3% loss** (the review expected 5–8%).
The screen checksum `B5DFC933` **is the same in all three builds**.

Solved: stubs for thread affinity (predicted by the review), excluding the DPI file,
`verilated_threads.cpp`, linking via `em++`, the disk in memory instead of a file.
**SharedArrayBuffer is deliberately not used**: the page can be embedded anywhere.

🔴 Caught a real bug: **if the tab starts hidden, rAF is never called and the loop
never starts**, even after the tab is opened. Fixed by subscribing to
`visibilitychange`. It showed up precisely in automation with a hidden tab.
See `docs/FINDING-15-browser.md`.

### 14:40 — ✅ Fmax closed, finding 16
`syn/fmax.py`: a sweep of the delay target with an explicit delay-driven abc script and `stime -p`.

**⚠ CORRECTED LATER BY THE AUDIT: the sign of the frequency delta is NOT DETERMINED.**
The delay-driven flow: 2096.0 → 2134.6 ps = −1.81%. Default abc: 2215.3 → 2180.5 ps
= **+1.60%, that is, CHK is FASTER**. The sign is opposite between flows on the same RTL.
The review's prediction ("the comparators will land on the critical path") remains unconfirmed:
the tool's resolution is not enough to test it.

🔴 **CORRECTED LATER: DIFFERENT RTL configurations were compared.** +30.06 was taken without
`CHK_SPLIT`, +123.16 with it. On identical RTL the spread is **2.65×** (+46.55 versus +123.16),
not fourfold. The qualitative conclusion ("the flow moves the effect more than the effect itself")
survives; the number does not.

⚠ Caveats: `WireLoad = "none"` (wire delays not counted); the critical path of the
real system goes through external memory, which is not in the core's netlist.
OpenSTA is not installed and is not packaged in Homebrew; a full static analysis
remains open. See `docs/FINDING-16-fmax.md`.

## Current state (rewrite)
**All design items are closed.**
- C1 (the whole stack in the browser) ✅: `web/`, 326 KB gzip, 4.27 MHz, checked in Chrome
- C3 (the cost of checks in three configurations) ✅: on two workloads, with area and frequency
- ISA tests: 12 of 12 + decoder equivalence, ~360 checks, all green
- Differential bench: 15 million instructions agreeing with the reference
- Findings documented: **16**
Not closed: OpenSTA (full static analysis).

### 15:10 — ✅ finding 17: the cycle model verified on a real workload
A tip from an auditor: the cycle model had never been checked against the RTL on a real workload,
only on 61 synthetic instructions, even though ALL the episode's numbers are built on it.

The comparison is built into the SoC bench. **12,000,000 instructions of the Oberon boot,
0 mismatches (0.0000%), in total 18,654,115 versus 18,654,115: exact to the cycle.**

🔴 A trap in the check itself: the first run gave "a 15.8% mismatch". It was a BUG
IN THE COMPARISON CODE: the instruction was read via `top->adr` before the bus was set (it held the previous
cycle's address). The right thing is to take the PC directly. Had I published it, it would have been a false finding devaluing
all the cycle numbers. **A negative result must be checked as carefully as a positive one.**
See `docs/FINDING-17-cycle-model-validated.md`.

### 16:30 — 🔴 mutation audit: the harness caught a third of the breakages
An auditor introduced **31 mutations into the RTL; 10 of 30 were caught (33%)**. Three mechanisms turned
a failure into "green": an expectation that never fired was not counted, `|| true` swallowed a build error,
`make boot` always returned 0.

Fixed:
- **B1** an expectation that did not fire = a failure (verified: the mutation `>` instead of `>=` is now caught)
- **B2** the build must produce a binary, the run is judged by its exit code, `mkdir -p build`
- **B3** wrote `tests/t1_fp.s`: **17 checks of numerical FP results**, which
  did not exist at all. Rounding-sensitive cases were found by enumeration.
  Three of three FPU mutations are now caught
- **S1** the branch test had **V=0 in all states** → five of the eight conditions
  were indistinguishable. Added states with overflow: **112 checks instead of 64**.
  Three of three branch mutations are caught
- the code generator patches were rescued from `build/` into `patches/` (`make clean` used to wipe them)

The honest count: **250 unique expectations** (not "~360": that was the same set on two builds).
See `docs/FINDING-20-mutation-audit.md`.

### 17:40 — all five auditors reported, ALL five: I DO NOT ACCEPT
| Auditor | The main thing found |
|---|---|
| hostile reader | a comparison of different RTL presented as "fourfold"; area from a rejected encoding; novelty claims refuted by primary sources |
| RTL | **the sign of the frequency delta is not determined** (+1.60% versus −1.81% depending on the flow) |
| toolchain | the patches lived only in `build/`, which `make clean` wipes; configuration C does not run |
| verification | **a mutation score of 33%**: 31 RTL breakages, 10 caught; three mechanisms turned failure into "green" |
| methodology | **broke down the main number: 2.74% = 2.20% execution + 0.54% code generation** |

Fixed: the breakdown via a 2×2 cross-build (`tools/measure_cross.sh`, reproduced,
two independent estimates agree within 0.4%); **the clean number is 2.20%, the hardware removes 17.1%**;
area and frequency reformulated as "below the resolution of the flow";
the range "14–50%" refuted by a 10.4% counterexample and replaced by three points;
the median of 32 recognized as an artifact of the modal value `ARRAY 32 OF CHAR`;
the comparison with the literature **withdrawn**: three of four numbers distorted the meaning;
the counter rule refined (a block, not a mnemonic; `LD` also resets it; MUL→UMUL = 64).
See `docs/FINDING-19`, `FINDING-20`, `FINDING-21`.

### 19:30 — 🎯 THE LOOP IS CLOSED: the Oberon compiler on real RTL
`make selfhost`. All four compiler modules (ORS/ORB/ORG/ORP) were built on Wirth's
`RISC5.v` core under Verilator: **40,770,748 instructions, 66,700,249 cycles,
the result matched the emulator byte for byte for all four.**

The only C in the loop is the bridge to the host file system (included from `norebo.c`
unchanged; only `main()` and the processor start were replaced). It is not needed in the browser.

Three bugs along the way: device addresses are negative while the bus is 24-bit (a run of 4 billion
idle instructions); the stop condition fired on any system call (103
instructions); **the instruction register was not set at start**: RISC5 prefetches, and the core went
on to execute the module table as code.

⚠ And a separate trap: the wait loop `pgrep -f norebo_tb` **found itself** and spent an hour and a half
waiting for its own completion. See `docs/FINDING-22-selfhost-on-rtl.md`.

### 05:47 — bootstrapping inside the system itself, without the host bridge
- The `soc_tb` bench got input: mouse and keyboard registers in the format from `Input.Mod`
  (buttons in bits 24..26, keyboard ready is bit 28) and a scripted mode
  `--script=` (move the mouse, send a scan code, take a frame).
- `tools/keymap.py` builds the keymap by parsing the `kbdTab` table straight from the driver
  source: nothing is made up. `tools/mkscript.py` assembles a script from the commands
  `click` / `type` / `enter` / `shot`; the `y` coordinate is written as in the picture.
- Check: a middle click on `System.ShowModules` opened a viewer with the list of modules.
  Then `ORP.Compile ORS.Mod/s ~` was typed and executed: the compiler built its scanner.
- **Fixed point reached.** Four modules were built by the compiler from disk,
  `System.Free` unloaded all four, and the same sources were built again by the new
  compiler. Code size, data size and key matched for all four:
  ORS 1756/992/76547166, ORB 2325/408/2F03B698, ORG 6650/34980/8F476858,
  ORP 6188/144/E6FCC519. 715 million instructions, 1.1 billion cycles, 0 model mismatches.
- **Trap 4 turned out not to be a compiler bug.** Building all four modules with one
  command failed on ORP. `NilCheck` in `ORG.Mod` is number 4, that is NIL, that is
  heap exhaustion: inside a command `Oberon.Loop` does not run and the garbage collector does not
  work. With four separate commands it passes.
- **Found a reproducibility bug in my own harness.** `disk.c` opens the image as
  `rb+`, and the `boot` target ran without `--disk`, that is, directly on the reference image in `ext/`.
  Every system boot silently modified the source of truth; the image had already diverged from
  upstream. The screen checksum `B5DFC933` matched even on the corrupted image:
  the boot check is insensitive to this. Fixed: without `--persist` the bench
  works on a copy in `build/`, `ext/disk/SHA256SUMS` pins the reference, and the
  `pristine` target checks it and is part of `make check`. The image was restored from upstream.
- `tools/check_bootstrap.py` compares two blocks of the log as a raster, without text
  recognition. Checked for misses: it fails on a frame with only the first generation, on a frame
  with a trap, and on a frame of a single ORP build.
- The finding is recorded in `docs/FINDING-23-bootstrap-in-system.md`. The `pristine` and
  `bootstrap` targets were added to `make check`.

### 06:40 — auditing our own assembler: three Wirths who disagree
- The question was "how correct is our assembler". Coverage: all 16 conditional
  branches are in the tests; of the operations only `ANN` and `XOR` are not checked by anything.
- Comparison with an independent instance, Wirth's own disassembler `ORTool.Mod`,
  gave two differences, both real.
- **The condition table in ORTool is wrong and incomplete**: 11 of 16 indexes are filled,
  and `mnemo1[2]="LS"`, `mnemo1[10]="HI"` versus our CS and CC. The hardware is right:
  `RISC5.v` gives `(cc==2)&C` and `(cc==4)&(C|Z)`. Proven by mutation: with the ORTool
  layout **4 of 112 branch checks fail on the RTL**, with ours 112 of 112 pass.
- **Branch offset width: three different numbers in one system.** ORG.Mod
  (the code generator): `off MOD 1000000H`, 24 bits. RISC5.v (the hardware):
  `disp = IR[21:0]`, 22 bits. ORTool.Mod (the disassembler): `w MOD 100000H`,
  20 bits. Invisible in practice: a 1 MB address space = 18 bits in words.
- That the hardware ignores bits 23:22 was checked by execution, not by reading:
  a new `tests/t1_branch_width.s`, two branches that differ only in them
  arrive at the same point.
- **Found a latent bug of my own**: the assembler checked the range against 24 bits
  and silently accepted unreachable branches. Fixed by separating roles:
  we encode like ORG.Mod (24 bits, compatible with the real compiler),
  and check the range against the hardware (22 bits, an explicit error). The behavior of existing
  tests did not change: the bug was unreachable within 1 MB.
- The assembler self-test got mandatory refusals (`must_fail`) and was included in
  `make test`. The first attempt to hook it in was green on a breakage: the exit code
  was swallowed by the `| tail -1` pipeline, the same class as `|| true` from the audit.
  Rewritten via a file and an explicit check of the code; both paths verified.
- The finding is recorded in `docs/FINDING-24-assembler-correctness.md`.

### 08:20 — three open assembler items closed, a round trip on real code
- **ANN and XOR covered**: `tests/t1_logic.s`, 10 checks on the hardware, semantics from
  `aluRes`. A mutation (swapping AND/ANN) brings down all 10.
- **A byte-for-byte comparison with ORG.Mod's output is done.** `tools/rsc.py` parses .rsc
  following the layout from `ORTool.DecObj` (agrees with the log: 1756/2325/6650/6188 words,
  key E6FCC519). `tools/disasm.py` is taken from RISC5.v. `tools/roundtrip.py` runs
  the round trip word→disassembler→assembler→word. **33,838 words of the real compiler
  reproduced bit for bit.**
- The first run closed on 15,628 of 16,919 and exposed FOUR gaps:
  (1) the trap payload in bits 23:4 of BLR: `Put3(BLR, cond, Pos()*100H +
  num*10H + MT)`, 7.6% of the compiler's code, and there was no way to express it;
  (2) the F1 immediate range: the hardware gives `{{16{v}}, imm}`, that is,
  −65536…−1 with v=1, while we checked it as a 16-bit signed value (a real word
  `50090000` = `SUB R0,R0,-65536`);
  (3) `MOV a,H` / `MOV a,NZCV`: the old `TODO(verify)` was resolved by reading aluRes;
  (4) `FLT` / `FLOOR`: special forms of op=12 that differ in u/v, visible in FPAdder.v.
- **A systematic enumeration** `tools/sweep_encoding.py`: 129,760 forms from the assembler's
  side, all pass the round trip. Enumerating from the WORD side does not work: with op=0
  the hardware does not read field b (the MOV branch in aluRes does not touch B), and a word with a non-empty b
  is not reproduced literally. Added to the hardware test.
- **Found a real encoding collision**: `RTI = BR & ~u & ~v & IR[4]`, that is,
  a branch to a register without link and with an odd payload executes as RTI.
  Confirmed by execution: `tests/t1_irq.s` runs exactly this combination.
  The assembler now rejects this form; it does not affect Oberon traps (those are BLR).
- A mutation probe showed that the two checks do NOT replace each other: the round trip does not catch
  swapping ADC/SBC at all (they do not occur in the compiler's code), and catches swapping a/b
  weakly (122 cases: in accumulator style a and b often coincide). The enumeration catches both.
- **Found another reproducibility bug**: the Python bytecode cache. With one-second
  time granularity on macOS, a disassembler restored from a backup kept
  producing the mutated parse because the `.pyc` was considered fresh. Added
  `PYTHONDONTWRITEBYTECODE` to the Makefile and `__pycache__` to .gitignore.
  What remains is to remove the existing directory: `rm -rf tools/__pycache__` (to be run by hand).
- The `roundtrip` targets and the enumeration are built into `make test` / `make check`; both paths
  (green and red) verified. The tests are now 264 checks in 16 files.
- Finding 24 extended.

### 09:40 — 🔴 the first word of the program was not executed in any of the 264 checks
- Took up an open item: 34% of the encoding space without a mnemonic. It turned out
  this is not garbage: it is `u=1`/`v=1` on operations where `aluRes` does not read these bits.
  Verified by execution (`tools/gen_dontcare_test.py`): 27 of 32 comparisons gave zero.
- **Five forms are significant**: `DIV` with u=1 is unsigned division (the divider gets `~u`,
  inside `sign = x[31] & u`); `FSB` with u/v is the adder in conversion mode.
  For DIV the arithmetic matched exactly: 0xF0F0F0F0 DIV 5 = 0xFCFCFCFC signed,
  0x30303030 unsigned, the difference exactly the measured 0xCCCCCCCC.
- Introduced the suffixes `.u`/`.v`/`.uv` and `UDIV`; FLT/FLOOR/ADC/SBC/UMUL were reduced to one
  alias mechanism. The enumeration grew to 375,776 forms, **word coverage 66.1% → 100%**.
  The round trip on real code stayed complete (33,838 words).
- **THE MAIN THING.** The divider probe gave 0 instead of 14, and the cause was not the divider. RISC5 is a machine
  with prefetch: the address bus holds PC+1, while the contents of IR are executed. During
  reset the bus already holds StartAdr, and the hardware latches the first word into IR.
  `tb/run_tests.cpp` fed ZEROS to the bus during reset: IR kept a zero, the first
  cycle executed MOV R0,R0, and the program's first word was never read at all.
  **In all 264 directed checks the first instruction was not executed.**
- It hid because every test started with an irrelevant instruction. And those
  "strange" numbers from the first measurements (0x30300000 instead of 0x30303030) are explained by the same thing.
- **The most unpleasant part**: the bug HAD ALREADY been found and fixed in `tb/soc_tb.cpp`
  ("this is exactly what I tripped over"), but it was not carried over to `run_tests.cpp`: there was no
  regression test. An audit of all five benches: the other four are fine.
  Now there is `tests/t1_prime.s`, and reset was brought to a single form.
- After the fix all 264 previous checks pass WITHOUT a single change to the expectations, so
  not a single expectation had been tuned to the broken start.
- Finding 25. Checks are now 298 in 18 files.
- The draft probe `tests/t9_probe.s` is not part of the build and can be deleted:
  `rm tests/t9_probe.s tests/t9_probe.bin tests/t9_probe.chk` (to be run by hand).

### 11:20 — a semantic differential and curing four old ailments
- **The last hole is closed.** `tools/alu_model.py` is a model of the integer core per
  RISC5.v, written separately from the assembler. `tools/gen_alu_diff.py` builds
  random programs and checks two things: (1) the model's prediction matches the
  hardware in the result, all four flags and H; (2) the model, having parsed a word from the
  assembler, names the same operation. There is no shared layout in the chain.
  900 cases, **4650 checks**, all green. Seven mutations of the model, all caught.
- **The program did not fit in the address space.** The first large differential
  gave 1720 "failures", and all of them were expectations that NEVER FIRED. The PC is 22-bit, the program sits
  at ORG=0xFFE000, exactly 2048 words to the edge; anything longer silently wraps around to zero.
  It was caught by the rule "an expectation that does not fire is a failure" from the mutation audit.
  Fixed: the harness refuses to load a long program, the generator splits it into files.
- **`measure_clean.sh`: three silencers in a row.** (1) the path: the binary modules live in
  `build/s2X` but were looked for in `build/cfgX`; the copy with `|| true` swallowed
  their absence, and all three configurations ended up being one compiler → a difference of +0.00%;
  (2) hence a ZeroDivisionError at the end, the only external symptom;
  (3) configuration E sets version 2, while the loader checks `versionkey = 1X` and does
  NOT LOAD such modules: our own deliberate lock. Stage 2 built the compiler with
  compiler E, got version 2, the run produced an empty log, and `set -e` aborted right
  after "workload:"; hence the symptom "the script prints nothing".
  Fixed: a hard check, a guard on the denominator, `tools/rsc_setversion.py`.
  **The honest measurement**: A 29,277,745 cycles, B +2.19%, E +1.85%; the hardware removes 15.5%.
  The +2.19% figure agrees with 2.20% from the 2×2 breakdown: two independent methods.
- **Decoder equivalence**: the signature was narrow (R5, R6, flags, cycles, memory),
  and field `a` was hard-wired to 5, while in format F3 that is the condition, i.e. of 16 conditions
  only one was checked, and a corruption of BL was invisible (no R15 and PC). Now the signature is all 16
  registers, the flags, PC, H; field `a` is enumerated: **20,480 combinations instead of 1280**.
  As before, exactly CHK differs.
- **Lockstep did not compare memory.** Added a periodic full RAM comparison: 58
  passes over 14.6 million instructions. The very first mismatch is explainable: `00FFE27C`
  versus `FFFFFA7C`, one return address in different ROM maps; the R15 rule
  was extended to memory, there are 99 allowances per run, and they are counted. A single-bit corruption
  is caught.
- A small thing: `ADC`/`SBC` with a negative immediate are unreachable (the alias
  pins v=0); write `ADD.uv` / `SUB.uv`; the assembler explains this in its error.
- Finding 26.

### 13:10 — 🎯 THE SYSTEM REBUILDS ITSELF COMPLETELY
- 42 modules, from Kernel and Display to Edit and Draw, were built by the Oberon compiler
  inside the system itself on the RISC5.v core. The only input is the mouse and keyboard.
- **37 object files were rebuilt byte-for-byte identical.** The system is a fixed
  point of its compiler. The rebuilt image boots, the screen checksum is still B5DFC933.
- Wrote `tools/oberonfs.py`: reading the Oberon file system straight from the image
  (the layout from Kernel.Mod/FileDir.Mod/Files.Mod). Cross-checked: the extracted
  ORP.rsc gives key E6FCC519 and 6188 words, the same as on the screen and in the bootstrap.
- The build order was derived by a topological sort over IMPORT from the sources
  FROM THE IMAGE ITSELF, not from our 2019 copy.
- **The Project Oberon 2016 image is not fully consistent.** Three modules do not compile
  with the compiler from the same image: `RISC` (pos 926 bad divisor: 80000000H as a divisor
  is negative for a signed INTEGER), `ORC` (imports V24, which is not on the image),
  `Net` (nine incompatible parameters: the SCC signatures have diverged). Plus `Math.rsc`
  is stale (449 words on the image versus 447 when rebuilt, the same key), and `PIO.rsc`
  and `PIO.smb` were missing altogether.
- Trap 4 again: batches of three brought down the third module. The same cause as in finding 23:
  there is no garbage collection inside a command. The compiler has to be called one module per command.
- **The System.Log journal does not scroll** (18 lines), and the first run hid six
  commands of eleven. The script now clears the log after every command and takes
  a frame; `tools/stitch_log.py` stitches the regions into one picture.
- **The check nearly turned out green on a breakage**: the byte-wise comparison passed on an
  UNTOUCHED image, because it does not distinguish "rebuilt and matched" from "not touched".
  Dates do not help: on the image they are all zero, there is no clock. Fixed with mandatory
  positive signs (PIO.rsc must appear, Math.rsc must differ).
- The `make rebuild` target (3 sessions, ~8 minutes) is part of `make check`. Finding 27.

### 15:40 — the lab framework and the first three labs (L2, L3)
- `web/machine.js`: a reusable machine wrapper (rendering, mouse, keyboard,
  typing text as scan codes, clicks at coordinates, rollback). Extracted from index.html.
- `web/oberonfs.js`: reading the Oberon file system from the image in the machine's memory.
- `web/labs.js` + `web/lab.html` + `web/labs-test.mjs`: the labs and the shell.
- The browser build got access to the state: soc_reg/flags/h/ram/fb_crc/disk_word
  and soc_poke (the only write access; without it there is no "break" level).
- **Lab 1 "look"**: boot, screen checksum B5DFC933; open the module list,
  the check counts text pixels in the viewer's strip.
- **Lab 4 "break"**: corrupt the framebuffer (the system is alive), then write
  E7FFFFFF at the current PC (a jump to itself): the machine stops. A stop CANNOT
  be detected by the instruction counter: a jump to itself also executes. The check
  takes five samples of the PC: before the corruption it wanders, after it freezes.
- **Lab 7 "build"**: rebuild Math inside the system and see
  finding 27 with your own hands: 1877 bytes before, 1869 after. The check reads the length FROM THE DISK.
- **Rollback exposed a consequence of finding 19**: after a repeated soc_init the system did not
  boot: RISC5.v has no reset for the register file, the flags, H and IR, and on the second
  start there is garbage there. Fixed by explicit zeroing in soc_init; on an FPGA this will not happen,
  so the silicon checklist item stays open.
- `make labs` requires a check to go from "not done" to "done" and statically
  verifies the shell's markup. The red path is verified. The target is part of `make check`.
- I could not open the page in a browser: Chrome in this environment could not reach the
  local server (an error even on the listing, while curl returned 200). The markup was checked
  statically, the behavior headlessly.
- Finding 28.

### 16:30 — a portable harness framework (P1)
- `tb/scenario.h`: the scenario language, its parsing and playback, dumping a frame to PBM,
  and the `harness::Host` interface (set the pointer / send a key / hand over the screen).
  What is left to the machine is the framebuffer address and size, the row order and the format of the input
  registers: for RISC5 that is twenty lines in soc_tb.cpp.
- **The separation is clean**: after the extraction the boot gives the same checksum B5DFC933,
  and the two-generation bootstrap gives THE SAME 715,000,000 instructions and 1,101,436,669
  cycles, the generations match bit for bit. The numbers agree to the instruction.
- Portability is NOT proven by this: the second machine will prove it (Lilith, step 2 of the plan).
- Finding 29.

### 18:20 — an Oberon handbook, 8 chapters
- `docs/book/*.md` (source) -> `web/book/*.html` (the builder `tools/mkbook.py` on the
  ready-made `markdown` library; we did not write our own converter). About 5000 words.
- Chapters: why, and what is real / the RISC5 machine / the language in one chapter / the system:
  text instead of buttons / modules and symbol files / the compiler from the inside /
  bootstrapping and the fixed point / what we measured.
- **Written from the sources**: 33 keywords from `EnterKW` in ORS.Mod, 42 built-in
  names from `enter` in ORB.Mod, register conventions from ORG.Mod's constants, the example
  module is the real Blink.Mod from the image, the path of `a[i]` follows the Index procedure,
  the trap encoding follows Trap. Numbers from findings 8, 16, 24, 26, 27.
- Labs are linked to chapters; the labs page links to the handbook.
- `make book` fails on a link to a nonexistent chapter or a nonexistent lab;
  `make labs` checks the links from labs to chapters. Three mutations, all caught.
- What is missing: exercises (they are in the labs, 3 of 12), the windowing subsystem, the garbage
  collector, a second machine.
- Finding 30. Next, as agreed: the nine remaining labs.

### 21:10 — nine labs
- Six were added to the previous three: #2 your first module, #3 the interface key,
  #5 how many cycles per instruction (the "measure" level), #6 the heap runs out inside
  a command, #8 the fixed point in two generations, #9 inside the code generator.
  The course syllabus is closed from 1 to 9.
- Added to the framework: state between steps, answer fields (without them there is no "measure"),
  parsing .rsc in the browser (code size, key, version, imports with their keys), reading
  Oberon text (the editor's files are not plain ASCII: a tag, an offset, runs with
  fonts, line ends are carriage returns), a "file rebuilt" sign from the directory's
  housekeeping record.
- **Experiment rejected three hypotheses.** (1) The batch ORS+ORB+ORG+PIO does NOT exhaust the heap:
  it is not about the number of modules but about their weight; ORP is what brings it down. (2) The asterisk after MODULE does not
  shrink the code but GROWS it: 34 words with checks, 38 without: `version := 0` turns on
  RISC-0 mode as a whole, and it reserves eight words at the start of the module. Two effects
  at once; this became the content of a lab rather than being hidden. (3) **The scan-code typist
  did not type the closing parenthesis**: the digit table started from the wrong character,
  `INC(i END` went into the file, and the file was still created without complaint.
- Protection against the last one: the test types text through the real editor, saves it,
  reads the file back from disk and compares it character by character.
- The list of lab numbers in the handbook builder is now read from web/labs.js instead of being hard-coded.
- Labs 10–12 are not done and are impossible in the browser: #10 needs a large amount of compiler
  edits, #11 rebuilding Verilog on the host, #12 waits for the second machine.
- Finding 31.

### 22:40 — labs with tooling as a batch job
- The user's idea: some labs could run in Cozystack. Right: the ones that
  edit the processor and the compiler are not interactive; they are a batch workload, "submit an edit,
  get a verdict".
- `deploy/Containerfile` (debian:trixie-slim + Verilator, g++, python3, node, 863 MB),
  `deploy/lab.sh` (the edit is submitted as the /work directory and overlaid on the tree),
  `deploy/k8s/lab-job.yaml` (the edit via a ConfigMap, an initContainer lays the keys
  back out into paths, backoffLimit: 0).
- **A side effect: independent confirmation of reproducibility**: the image has Verilator 5.032
  versus our 5.052, and all 298 checks, the 375,776 enumerated forms and the 20,480 decoder
  equivalence combinations pass identically. Until now all the numbers came from one
  simulator of one version.
- `make image-check` requires TWO outcomes: the clean tree passes, a broken edit
  (AND and ANN swapped in aluRes) fails, caught by the logic test and the
  semantic differential (118 and 68 failures). It is not part of `make check`: it needs Docker.
- Pitfalls: (1) Docker on macOS does not see directories outside the shared paths: silently
  "no edits", even though the file is there; I moved the working directory inside the project tree.
  (2) `find` without parentheses: `-o` binds more loosely than it reads.
- This is NOT a Cozystack package but an ordinary Kubernetes job. The image was not published,
  was not run in a cluster, and the manifest deliberately says `ghcr.io/REPLACE-ME/`.
- Finding 32.

### 23:50 — a pluggable catalog for Cozystack
- The user's idea: a separate marketplace for emulators of never-released
  architectures, unimplemented OSes and languages, as deployable environments.
- **The mechanism already exists.** Roadmap: a community marketplace in 2027 Q1,
  the proposals in `cozystack/community` are open and not merged; the console relies on dynamic
  discovery via ApplicationDefinition; the precedent is `ccp`. In the tree: PackageSource,
  ApplicationDefinition, `cozypkg tap/untap` (connecting a third-party source;
  the official ones cannot be disabled, there is a protective label), `cozypkg validate` for an EXTERNAL
  repository, the internal/marketplace package.
- The chart reference name: `<source>-<variant>-<component>`, dots turned into dashes
  (internal/marketplace/naming).
- Created `~/projects/forgotten-systems/marketplace`: sources/ + packages/apps/oberon-lab
  + packages/system/oberon-lab-rd. `cozypkg validate .`: 0 errors, 0 warnings.
- **Checked for misses**: replaced a reference name with a nonexistent one, and the validator caught
  the dangling reference. So it really does read our objects.
- **A side finding for the platform**: `helm lint` version 4 complains `invalid icon URL`
  about ALL Cozystack charts (nats, redis, kafka, mongodb: each has exactly one such
  error). This is a divergence of helm 4 from their own convention (/logos/... is resolved inside the
  chart in hack/update-crd.sh). Consequence: `cozypkg validate --helm-lint` on helm 4
  is currently unusable for both their own catalog and a third-party one.
- Images were not published, nothing was pushed to OCI, nothing was run in a cluster:
  REPLACE-ME everywhere on purpose.
- Finding 33.

## Next step
`make check` as a whole (about 8 minutes), then L1/P1 from BACKLOG.md.

### 24.09 — the catalog rebuilt following the cozymarketplace project

Read both projects in `cozystack/community` (`cozymarketplace` by @kvaps and
`cozymarketplace-supplementary` by @IvanHunters); both are already in `main`. Checked them not against
the text but against the code: the `PackageSource`/`ApplicationDefinition` types, `cozypkg`
(`index.go`, `tap.go`, `validate.go`, `push.go`), the reconcilers, the console.

**The catalog is split into three repositories** in `~/projects/forgotten-systems/marketplace`:
`repos/machines` (emulators, labs, the handbook), `repos/languages`
(environments for languages), `repos/images` (boot images for KubeVirt).
The unit of installation is a repository, as the project requires; each has its own
OCI artifact and its own entry in the `index/` meta-index.

**The discovery chain was verified with the real cozypkg:** `search` shows three
entries, `tap forgotten-systems-machines` resolves the short name to
`oci://…:v0.1.0` with the version from the entry. It fails only because `flux` is not in PATH.

**New parts:**
- `handbook`: documentation installed next to the application; works even without
  building an image (pages right in the values, stock nginx);
- `workbench`: a meta-application: a parent chart renders `HelmRelease` objects for
  components of the same repository (the `harbor` idiom);
- `langpack`: an environment for a language: a one-off run or a persistent environment;
- `machine-images`: publishing images to `cozy-public` with collision protection;
- `tools/gen-appdefs.py`: the catalog descriptions are generated from the charts'
  `values.schema.json`; schemas are not written by hand;
- `tools/check.py`: 35 checks, 9 of them mutations.

**Key findings (all in `docs/FINDING-34-marketplace-architecture.md`):**
- the meta-index entry schema is closed (`UnmarshalStrict`) → entry types can be expressed
  only with tags; this is not a choice but a constraint;
- the KubeVirt architecture list is closed (`architectureConfiguration`: exactly
  amd64/arm64/ppc64le/s390x) → a new architecture cannot be added by a package;
- **six golden-image annotations are written and read by nobody** (zero
  matches across the whole tree outside the template that writes them; both consumers
  take only the PVC name); worth filing an issue upstream;
- golden image names are a flat cluster-wide namespace, so a third-party package
  can silently overwrite a platform image; there is no protection upstream, we built our own;
- a component without an `install` block is not installed as a release: that is the
  application template;
- all 100 platform sources have exactly one variant; a second one would send the catalog's
  references into the void;
- `ApplicationDefinitionDashboard` has no field for documentation.

The old top level of the catalog (`sources/`, `packages/`) was removed: it is fully
duplicated in `repos/machines`; a copy is in the scratchpad.

Nothing was published, I did not go into a cluster (the context is a tenant one,
cluster-scoped objects cannot be created there anyway). Registry, images and signatures are
`REPLACE-ME`. Findings: 34.

## Current state (rewrite)
- **Catalog:** `~/projects/forgotten-systems/marketplace`: three repositories,
  a meta-index, a description generator, a set of checks. `make check`: 35/35 green,
  `make validate`: zero errors for each repository (the images one has one
  deliberate warning: the component is privileged).
- **Tools:** `cozypkg` built into `/tmp/cozypkg` (from `~/projects/cozystack`),
  helm 4.2.3; `flux` and `cosign` **are not installed**, and without them publication
  and signing cannot be checked.
- **Not done:** nothing pushed to OCI; container images not built;
  machine boot images not built; not tested on a cluster.

## Next step
File an upstream issue about the unread golden-image annotations
(`vm-default-images.cozystack.io/*`): of all the findings this is the only one that affects
the platform's users themselves, not just third-party catalogs.

### 24.09 — publication, the cluster and the start of the QEMU target

**Published.** The repository was renamed to `paleocomputing` (English subtitle
*experimental computer archaeology*: retrocomputing is about collecting, ours is
about experiments). The series site is on GitHub Pages: `tym83.github.io/paleocomputing`, deployed
via Actions (the classic Pages source can only serve the root or /docs).

Images and the catalog are in `ghcr.io/tym83/paleocomputing/*`, signed with cosign **keylessly**:
the identity is the build process itself. Everything is public, verified by an anonymous download.

**Before publication the Nangate45 cell library was excluded**: its header explicitly
forbids publication. The replacement is Sky130 (Apache-2.0), two lines; not done.

**Three bugs found ONLY on a live cluster**, all following the pattern "the release succeeded,
the application is dead":
1. the source manifest lay outside `packages/` and did not make it into the OCI artifact;
2. the schemas closed the root, while `cozystack-engine` mixes in `_cluster`/`_namespace`
   → Helm rejected the values entirely;
3. nginx with `worker_processes auto` started a worker for every core of the NODE (96 of them),
   did not fit in 64Mi → OOM in a loop. The stock autotune does not help: it edits the config in
   place, and the root is read-only.

Each is closed by a check with a mutation. Catalog checks: **50**.

**State on the cluster (tenant-paleo, context admin@workshop):** the machine works,
`/lab.html` is served (200, 12019 bytes). The handbook waits for a re-tap to v0.1.3.

**The QEMU target is started** (`qemu/`, our own build: QEMU and libvirt reject AI-assisted contributions,
naming Claude explicitly). Written: the decoder, the processor state, translation of 16
operations, division, interrupts, the board, the ports. `qemu-system-risc5` builds with one
command in a container.

**Checked against the hardware:** 16 registers, 4 flags and H agreed with the ALU model taken from
RISC5.v. The check `make -C qemu diff` can go red.

Bugs in the target: a clean build failed where an incremental one passed (no prototype
for the generated decoder); the ROM was at the wrong address and four times larger (the hardware has
512 words); the processor was created but **did not execute**: without `realize` its thread is not
started; **the address bus is 24 bits**, the hardware drops the upper bits, and without truncation
the ports are unreachable.

**A fork of KubeVirt is NOT NEEDED.** Found a standard hook point: the `OnDefineDomain` hook
rewrites the machine description, and `SharedComputePath` on its PVC mounts the volume
**inside compute**, where libvirt runs. One question is open: will libvirt accept
an unfamiliar architecture (`virArchFromString` does not fail on it, it returns NONE).

## Current state (rewrite)
- **Site:** `tym83.github.io/paleocomputing`: live, the lab and the handbook.
- **Catalog:** three repositories, tags v0.1.0…v0.1.3, the latest is clean.
**THE CHAIN IS CLOSED.** A tenant installs `OberonVM` from the marketplace, and Wirth's
machine runs; the screen matched the hardware byte for byte.

- **The `workshop` cluster** (157.180.61.253, 87 tenants, ~50 VMs).
  Two cluster-level settings applied:
  * `virt-launcher` replaced with `ghcr.io/tym83/paleocomputing/virt-launcher:v1.8.4-risc5`
    (`customizeComponents` on KubeVirt in `cozy-kubevirt`);
  * the `Sidecar` feature gate added to the seven existing ones.
  ⚠ The rollback for both is in `/tmp/ROLLBACK.txt`. Ordinary machines checked: Ubuntu
  comes up, the 50 machines are intact.
- **Catalog:** `v0.1.7`, connected by a repeated `cozypkg tap` (switching the tag
  is NOT enough: finding 46). Five components, the `oberon-vm` application.
- **Sandbox:** tenant `tenant-sandbox`. Alive: the `build` bench (8 cores, 16 Gi,
  77.42.12.137, `ssh -F <scratchpad>/sandbox/config stand`), `check2`, the
  proof that ordinary machines are intact, and `wirth`, Wirth's machine.
- **QEMU:** the target is complete except for the FPU. VNC, button chords, an on-screen hint.
- **Language:** English by default, everything translated.
- **Git:** PRs #1–#4 merged. PR #5 open (findings 47, 48).

## Next step
Install yosys (`brew install yosys`) and take the base area of the core: this is the second
half of the stage 0 measurement and a direct entry into C3.

### 03:30 — ✅ base area taken, two flow traps measured
Installed yosys 0.69, downloaded Nangate45 typical (6.7 MB).
**Baseline: 14,532.11 µm² = 18.21 kGE, 993 flip-flops, 30.9% sequential logic,
10,938 cells.** Falls in the 10–20 kGE range predicted by the review.

Two traps, both measured (`docs/FINDING-03-synthesis-traps.md`):
1. `stat -tech cmos` loses **758 of 993 flip-flops silently** (76%): confirms the review
2. **`-D` without `-constr` is ignored completely**: the area is identical to the last digit
   with -D 200 and -D 50000. The review did not foresee this
The area-vs-period curve turned out flat (two points, 0.5% apart) → there is nothing to build
a chart from, but the delta from the ISA extension will be clean. **Fmax cannot be obtained without OpenSTA.**

### 04:10 — ✅ CHK implemented in the RTL, area delta measured
Encoding: F0, v=1, op=1 (an alias of LSL; the compiler does not emit it), **the index in field b**
(via field a there would be a combinational loop ira0↔chkFail), the limit in `IR[15:4]` (12 bits),
register c=12 → the hardware jump takes the trap vector from MT without an extra read.
Semantics when it fires: exactly like BLR: `R15 := PC+4; PC := R[12]`. When it does not fire,
it writes neither a register nor the flags (CHK is excluded from the common `regwr` term).

**Δ area = +30.06 µm² = 37.7 GE.** ⚠ CORRECTED LATER: this applies to the rejected
encoding; the adopted one costs +46.55…+123.16 µm² (58…154 GE) depending on the script.

🔴 But the main result is methodological: **logically neutral rewrites of the source
move the area by ±51 µm², and non-monotonically** (two of them separately −51 each, together +88).
So **the measured effect is half the size of the noise from syntax**. Only a comparison of
two builds from a single file via `ifdef` is defensible. See `docs/FINDING-04-noise-floor.md`.

### 04:35 — ✅ CHK verified functionally, regression green, build via make
- `tools/asm.py`: added CHK; **fixed a bug**: with `v=0` the immediate is
  zero-extended, so it has to be checked as unsigned (caught on `IOR R12,R12,0xE05C`).
- `tb/run_tests.cpp`: **fixed how checks are anchored**: they were tied to the number of executed
  instructions, now to the address (word number). On straight-line code these coincide; at the first
  branch they diverge. Plus checks were made one-shot.
- `tests/t2_chk.s`: a CHK that does not fire takes 1 cycle, flags untouched; one that fires
  transferred control to MT, and the skipped instruction did not execute. **5/5.**
- 🟢 **The core with CHK passes all base tests with an identical number of cycles** (203, 21, 453):
  the "old code on the new RTL" test required by the review.
- `make test`: the whole regression with one command.

## Current state (rewrite)
- **Working:** the RISC5 (2018) core under Verilator in two configurations (base and with CHK),
  the bench with a retire detector, a test runner anchored to the PC, the assembler, the decoder probe,
  a synthesis flow with Nangate45, `make test` / `make syn`.
- **Tests:** 61 checks on two cores, all green.
- **Measured:** base area 14,532.11 µm² = 18.21 kGE, 993 flip-flops;
  Δ CHK of the adopted encoding = 58…154 GE (the lower bound within the ±64 GE noise).
- **Findings:** 4 documented in `docs/`.
- **Not done:** Fmax (needs OpenSTA); the SoC wrapper; the differential bench against the ISS;
  configurations A/B/C on a real system (needs the Oberon compiler).

## Next step
Configuration A: a `check := FALSE` patch in `ORG.Mod` and measuring the cost of bounds checks on a
real workload. This needs a working Oberon: either Norebo (cross-building from the host)
or the reference emulator with a disk image.

### 05:10 — 🎯 MAIN RESULT: the cost of run-time checks measured
Brought up **Norebo**, a command-line Oberon compiler (a macOS trap: the file system
is case-insensitive, `make` treats the `Norebo/` directory as the finished target `norebo` and
builds nothing; I built directly into `norebo.bin`).

**The three-stage bootstrap passed: "Stage 2 and Stage 3 are identical"**: T-BOOT-3 ✅.

Created a configuration that did not exist: `check := FALSE` in `ORG.Open`, rebuilt the compiler.
**Result: the checks take 6.2% of the system's code (1490 words of 23,954).**
The spread across modules is 0% (Kernel, which is RISC-0) … 11% (Fonts).

Cross-checked three ways: for ORP Δwords = Δtraps = 390 exactly (almost all of them there are
one-word NIL checks); where there is indexing, Δwords > Δtraps (a bounds check =
2 instructions); Kernel gives 0 in both configurations. What remains in A is `NEW` and `ASSERT`,
which are outside the `check` guard and must stay.

🟢 A refinement to the experiment's setup: **NIL checks dominate, not array bounds
checks** (in ORP 390 of 402 are NIL). The "cost of memory safety" in Oberon is first and foremost
the cost of dereferencing pointers. See `docs/FINDING-05-cost-of-checks.md`.

⚠ This is CODE size, not cycles. They must not be mixed.

### 06:00 — 🎯 the dynamic cost of checks: 2.67% of cycles
Instrumented the Norebo emulator with a cycle counter following the model in `tb/cycle_model.h`.
**The model was first checked against the real RTL cycle by cycle: 61 instructions,
0 mismatches**, including all multi-cycle ones and the back-to-back surcharge.

🔴 **I nearly published a wrong number.** The first measurement gave 0.43%, but it reflected only
the fact that a compiler without checks does less work when generating code, not the cost of
executing the checks. A **second bootstrap stage** was needed: use compiler A to
build the compiler again (binary code without checks inside), the same way through B
with checks, and only then run the same workload with both.
The difference between the wrong and the right measurement is **sixfold**.

**Bottom line: statically 6.2% of code, dynamically 2.67% of cycles (3.78% of instructions).**
The checks take twice as much space as time: they are scattered throughout the code, but
hot loops execute them less often, and each is cheaper than the average instruction (1 cycle versus
an average of 1.642). Oberon is at the cheap end of the range in the literature (Morello 5.7, Toooba 9,
MTE 4–12).

⚠ A Norebo trap: if a source is not found via `NOREBO_PATH`, it **goes into an infinite loop**
instead of an error. The path order in `tools/measure_checks.sh` has been checked; do not touch it.
⚠ A macOS trap: there is no `timeout`; I wrote `tools/run_timeout.py`.

### 06:40 — 🎯 MAIN EXPERIMENT CLOSED: three configurations measured
CHK added to the Norebo emulator (regression clean: old code gives the same 94,149,309
cycles) and to the code generator (`PutCHK` in `ORG.Mod`, configuration C).
The accounting matched exactly: in `Texts` 21 bounds checks → 2 + **19 CHK**, the code is exactly 19 words
shorter; in `Fonts` 22 → 22 CHK, minus 22 words. One word per check.

⚠ An incidental setup error: configuration C's path starts with `cfgC`, which holds
the patched `ORG.Mod`, so different sources were being compared. Removed ORG from the workload.

**RESULT (tools/measure3.sh):**
| configuration | cycles | instr. | code |
|---|---|---|---|
| A — no checks | 29,121,384 | 17,407,595 | 5,775 |
| B — software | 29,919,963 (+2.74%) | +3.92% | +9.92% |
| C — hardware | 29,808,859 (+2.36%) | +3.32% | +8.92% |

🎯 **Hardware bounds checking removes only 14% of the cost of checks** (0.38 of 2.74 pp)
at the price of 0.32…0.85% of the core's area. The reason is measured: NIL checks dominate (390 of 402 in ORP),
and CHK does not touch them; plus the 12-bit limit and open arrays on the old path.
A negative result, and it is stronger than a positive one. See `docs/FINDING-06-three-configs.md`.

## Next step
A second workload: a compute one, with dense array indexing. Currently the only workload
is the compiler (many pointers, little indexing), and this is a recorded limitation. A compute
workload will show the upper bound of CHK's contribution.

### 07:20 — ✅ second workload: the hardware's contribution varies 3.5×
`bench/ArrBench.Mod`: sorting + matrix multiplication, not a single pointer,
all limits < 4096. Result: the checks cost **+10.16% of cycles**, hardware support
removes **exactly 50.0%** (two one-cycle instructions are replaced by one).

🎯 **Versus 14% on the compiler workload: a 3.5× spread.**
"How much does hardware bounds checking give" without naming the workload is a meaningless question.

Two bugs along the way:
1. 🔴 My own benchmark had a real out-of-bounds access (`b[i*M+j]` up to 3599 with an array
   of 1000). **Configuration A swallowed it silently**, corrupting 2600 words; B caught it. An accidental
   but perfect demonstration of why checks matter.
2. 🔴 **CHK breaks diagnostics: `unknown trap 8`.** The limit in `IR[15:4]` overlaps
   both the trap number (bits 7:4) and the position (23:8). The review predicted the loss of the position,
   but not that the error number itself would be corrupted.

An open fork: a 4095 limit with broken diagnostics / a 255 limit with the right number /
a two-word CHK. Decide by data: how many arrays are shorter than 256. Not measured.

## Next step
Measure the distribution of array lengths in the system to close the CHK encoding fork.

### 07:50 — the full set of PO2013 sources and an array length analyzer
Downloaded **the full set of Project Oberon 2013: 46 modules**, including all the windowing ones
(`Display`, `Viewers`, `TextFrames`, `MenuViewers`, `Graphics`, `GraphicFrames`, `Curves`,
`Rectangles`, `Draw`, `GraphTool`, `System`, `Edit`, `Net`, `SCC`, `Math`, `Tools` and others)
into `ext/po2013-src/`. Two zip archives with additional utilities did not download.
Without the windowing modules the sample would be biased: that is exactly where dense indexing lives.

`tools/array_limits.py`: a static analysis that extracts array limits straight from the
compiled code by the pair "`SUB` with an immediate limit + trap #1".
No compiler patch is needed. **Checked on a known case**: on `ArrBench`
it extracted exactly the 60, 1000 and 3600 declared in the source.

`tools/build_po2013.py`: a build in dependency order, computed by a topological
sort over the IMPORT sections (not given by hand).

⚠ **A trap: `Input.Mod` hangs Norebo dead.** Verified that this is NOT my changes:
it hangs with the reference emulator binary, with the stock boot compiler, and with
the `build2` compiler. The file is intact (the hex literal of the keyboard table is closed).
The cause was not found; the module is tiny and does not affect the array length statistics.
The build was made robust: a timeout per module, hung ones are marked and skipped.

### 08:40 — ✅ the CHK encoding fork closed by data
Three independent measurements (`docs/FINDING-08-encoding-decision.md`):
1. On compiled code, 154 check sites: **median limit 32**,
   8 bits cover 70.0%, 12 bits 86.9%
2. On declarations in all 46 sources (99 dimensions, including the windowing modules,
   which are not in the Norebo set): **the median is again 32**, 8 bits 84.8%, 12 bits 99.0%
3. A run on a real error, and here is the main thing:
   - B (software): `array index out of range` ✅
   - C (12 bits): 🔴 **`access via NIL pointer`**: the system confidently reports the WRONG error
   - D (8 bits): ✅ `array index out of range`, only the position is lost
4. By area the variants are **indistinguishable** (3.46 µm² with a noise floor of ±51)

**Variant D (8 bits) adopted.** Trading 14–17 pp of coverage for false error messages
is a bad deal for a system whose value is that errors are found and named.
Moved the emulator, the RTL (`CHK_NARROW`), the assembler (`CHKN`) and the code generator (cfgD) over.

⚠ Incidentally: the downloaded PO2013 set is **the 2019 version, while the Norebo compiler is from 2016**.
They are incompatible, and this shows up as a hang, not an error. For the analysis of
compiled code the matching Norebo set was used.

### 09:20 — 🔴 correction: the data does NOT close the fork
Measuring the adopted (8-bit) variant on the SECOND workload refuted the rationale of finding 8.

| variant | compilation | compute |
|---|---|---|
| 12 bits (diagnostics broken) | 13.9% | **50.0%** |
| 8 bits (diagnostics intact) | 13.0% | **15.8%** |

**The error in the rationale:** the decision was made on the distribution of check SITES (median 32),
while the hot loops of compute code run LARGE arrays (1000 and 3600 in the benchmark).
Only 6 of 15 checks fell under 8 bits, and not the ones executed millions of times.
The static number dropped by 17 pp, the dynamic one **threefold**.

The lesson: encoding decisions need a **dynamic profile**, not a count of sites.

A two-word variant is no way out either: the processor has to skip the second word, that is a cycle,
and the gain disappears. The architecturally correct answer is a limit in a register hoisted out of the loop,
but **the Oberon code generator cannot hoist invariants** and will not learn to without rewriting ORG.

**Bottom line: a real fork is shown with the measured cost of each branch**; for the article this is
better than a single decision. See `docs/FINDING-09-fork-unresolved.md`.

## Next step
A dynamic indexing profile: a counter per check, grouped by limit.
It will close the fork for good and is cheap.

### 10:10 — 🎯 FORK CLOSED: a limit made of two pieces
The dynamic profile (a counter of check executions by length class) showed that
on the compute workload **68.3% of executions are arrays of 256…1023**, which 8 bits do not cover.
And it gave a predictive model: the ratio of dynamic coverage predicts the ratio of the
gain **exactly** (31.6% versus a measured 31.6%).

This prompted me to look for bits where I had not looked. **Field `a` (IR[27:24]) of the CHK instruction
is not needed** (when it fires ira0 = 15; when it does not, no register is written), and it lies
OUTSIDE the position field (23:8) and OUTSIDE the trap number field (7:4).
→ the limit is assembled from two pieces `{IR[27:24], IR[15:8]}` = 12 bits, and the trap number is intact.

| variant | compilation | compute | diagnostics |
|---|---|---|---|
| 12 bits in IR[15:4] | 13.9% | 50.0% | 🔴 the WRONG error |
| 8 bits | 13.0% | 15.8% | ✅ |
| **two pieces (adopted)** | **13.7%** | **50.0%** | ✅ |

Checked on an array of 1000 elements: E gives 19 words, CHK is used,
the message `array index out of range` is correct. On the compute workload the result **matches bit
for bit** the maximum-coverage variant (57,133,094 cycles).
Moved the RTL (`CHK_SPLIT`), the assembler (`CHKS`), the emulator, the code generator (cfgE) and the Makefile over.
RTL regression green, 61 checks. See `docs/FINDING-10-split-encoding.md`.

## Current state (rewrite)
- **Measurements complete:** the cost of checks 2.74% (compilation) / 10.16% (compute);
  hardware support removes 13.7% / 50.0% with diagnostics intact;
  area 58…154 GE (the lower bound within noise); base 18.21 kGE, 993 flip-flops
- **Findings documented:** 10
- **Remaining:** Fmax (needs OpenSTA); the full set of ISA tests (4 of 12 done);
  the differential bench against the reference ISS; claim C1 as a whole (SoC, browser)

### 10:40 — ✅ finding 11: UMUL in RISC5 is a mixed multiplication, not an unsigned one
`Multiplier.v`: the addend `{w0[31], w0}` is ALWAYS sign-extended; flag u controls
only the last step. Consequence: `UMUL` treats the first operand as unsigned
and **the second as signed**.
Measured: `UMUL R, 2, 0xFFFFFFFF` gives H = 0xFFFFFFFF, whereas a truly unsigned one
would give H = 1. Test `tests/t1_umul.s`, 6/6. See `docs/FINDING-11-umul-is-mixed.md`.
Found by accident: my expectation in `t1_arith.s` was based on the "correct" semantics.
Important for the differential bench: the reference must reproduce exactly this quirk.

### 11:30 — ✅ decoder equivalence check, finding 12
`tb/decoder_equiv.cpp`: all 256 combinations of {IR[31:28] × op} × 5 operand sets = 1280
runs on two cores, comparing registers, flags, cycles and a memory checksum.

**It caught a real bug:** my decode `~p & ~q & v & (op==1)` did not check bit `u`,
so CHK decoded in TWO encodings (`0001` and `0011`), taking two slots
instead of one. Existing code did not break, but the code space was used up twice as fast.
Fixed by inserting `~u &` in the RTL and the emulator; now exactly one encoding differs.

Hooked into `make test` via the `equiv` target. See `docs/FINDING-12-decoder-equivalence.md`.

**ISA tests overall: 12 of the 12 planned are done.**
Full regression: 11 suites × 2 configurations + decoder equivalence, all green.

### 12:40 — 🎯 MILESTONE: real Verilog boots real Oberon
The SoC bench: the `RISC5.v` core on RTL + RAM + ROM + devices as stubs with the same
register interface (as the review recommended, we do not emulate the wired interfaces).
The SD card logic is taken from the reference emulator; it is word-based and maps onto registers.

**Boot: 12 million instructions, 18.65 million cycles, 4.27 s on the host = 4.37 MHz-equivalent.
The framebuffer is non-empty, the Oberon interface is on the screen** (`docs/oberon-boot-screen.png`).
The reference draws the first frame after ~8 million instructions, our RTL after ~7.1 million.

Three bugs along the way:
1. 🔴 `prom.mem` from Wirth's set is a loader over the SERIAL LINE; it does not read
   from the disk. The one from the reference emulator (`risc-boot.inc`) is needed. They start the same.
2. 🔴 During reset the bus must be served from memory: IR is latched every cycle,
   and with zeros the first instruction executes as `MOV R0,R0` instead of a jump.
3. The framebuffer is bottom-up: predicted by the review, it saved a day.
See `docs/FINDING-13-boot-on-rtl.md`.

### 13:20 — 🎯 DIFFERENTIAL BENCH: 15 million instructions of agreement
`tb/lockstep.cpp`: RTL against the reference emulator; after EVERY instruction it compares
the program counter, all 16 registers, H and the four flags. The workload is booting the Oberon system.

**Result: 14,600,503 instructions of strict comparison, 23.2 million RTL cycles,
5.8 s on the host, 0 mismatches.** Warm-up in the loader: 399,497 instructions.

Five sources of nondeterminism eliminated (four predicted by the review):
PC width, the link register after leaving the ROM, the timer, the progress heuristic, the disk image.

The bench caught two of my bugs:
1. the bus during reset (found immediately: in the reference the first instruction branched away)
2. 🔴 **a housekeeping write that I had added myself**, anticipating a trap from the review: the reference
   puts "Sizg" at DisplayStart in `risc_configure_memory()`, which our launch does not
   call. Diverged at step 2,101,536.

Targets `make lockstep` and `make boot`. See `docs/FINDING-14-lockstep.md`.

### 14:10 — 🎯 C1 CLOSED: Oberon runs in the browser on real RTL
`web/`: the RISC5 core → Verilator → Emscripten → WASM, Project Oberon in an ordinary tab.
Checked in Chrome: a full desktop, the banner `Oberon V5 NW 14.4.2013`,
the System.Tool panel with all the commands. Screenshot `docs/oberon-in-browser.png`.

**Delivery is 326 KB gzipped** (model 75 KB, image 249 KB): matches the review's prediction.
**Speed in WASM is 4.27 MHz versus 4.37 native: a 2.3% loss** (the review expected 5–8%).
The screen checksum `B5DFC933` **is the same in all three builds**.

Solved: stubs for thread affinity (predicted by the review), excluding the DPI file,
`verilated_threads.cpp`, linking via `em++`, the disk in memory instead of a file.
**SharedArrayBuffer is deliberately not used**: the page can be embedded anywhere.

🔴 Caught a real bug: **if the tab starts hidden, rAF is never called and the loop
never starts**, even after the tab is opened. Fixed by subscribing to
`visibilitychange`. It showed up precisely in automation with a hidden tab.
See `docs/FINDING-15-browser.md`.

### 14:40 — ✅ Fmax closed, finding 16
`syn/fmax.py`: a sweep of the delay target with an explicit delay-driven abc script and `stime -p`.

**⚠ CORRECTED LATER BY THE AUDIT: the sign of the frequency delta is NOT DETERMINED.**
The delay-driven flow: 2096.0 → 2134.6 ps = −1.81%. Default abc: 2215.3 → 2180.5 ps
= **+1.60%, that is, CHK is FASTER**. The sign is opposite between flows on the same RTL.
The review's prediction ("the comparators will land on the critical path") remains unconfirmed:
the tool's resolution is not enough to test it.

🔴 **CORRECTED LATER: DIFFERENT RTL configurations were compared.** +30.06 was taken without
`CHK_SPLIT`, +123.16 with it. On identical RTL the spread is **2.65×** (+46.55 versus +123.16),
not fourfold. The qualitative conclusion ("the flow moves the effect more than the effect itself")
survives; the number does not.

⚠ Caveats: `WireLoad = "none"` (wire delays not counted); the critical path of the
real system goes through external memory, which is not in the core's netlist.
OpenSTA is not installed and is not packaged in Homebrew; a full static analysis
remains open. See `docs/FINDING-16-fmax.md`.

## Current state (rewrite)
**All design items are closed.**
- C1 (the whole stack in the browser) ✅: `web/`, 326 KB gzip, 4.27 MHz, checked in Chrome
- C3 (the cost of checks in three configurations) ✅: on two workloads, with area and frequency
- ISA tests: 12 of 12 + decoder equivalence, ~360 checks, all green
- Differential bench: 15 million instructions agreeing with the reference
- Findings documented: **16**
Not closed: OpenSTA (full static analysis).

### 15:10 — ✅ finding 17: the cycle model verified on a real workload
A tip from an auditor: the cycle model had never been checked against the RTL on a real workload,
only on 61 synthetic instructions, even though ALL the episode's numbers are built on it.

The comparison is built into the SoC bench. **12,000,000 instructions of the Oberon boot,
0 mismatches (0.0000%), in total 18,654,115 versus 18,654,115: exact to the cycle.**

🔴 A trap in the check itself: the first run gave "a 15.8% mismatch". It was a BUG
IN THE COMPARISON CODE: the instruction was read via `top->adr` before the bus was set (it held the previous
cycle's address). The right thing is to take the PC directly. Had I published it, it would have been a false finding devaluing
all the cycle numbers. **A negative result must be checked as carefully as a positive one.**
See `docs/FINDING-17-cycle-model-validated.md`.

### 16:30 — 🔴 mutation audit: the harness caught a third of the breakages
An auditor introduced **31 mutations into the RTL; 10 of 30 were caught (33%)**. Three mechanisms turned
a failure into "green": an expectation that never fired was not counted, `|| true` swallowed a build error,
`make boot` always returned 0.

Fixed:
- **B1** an expectation that did not fire = a failure (verified: the mutation `>` instead of `>=` is now caught)
- **B2** the build must produce a binary, the run is judged by its exit code, `mkdir -p build`
- **B3** wrote `tests/t1_fp.s`: **17 checks of numerical FP results**, which
  did not exist at all. Rounding-sensitive cases were found by enumeration.
  Three of three FPU mutations are now caught
- **S1** the branch test had **V=0 in all states** → five of the eight conditions
  were indistinguishable. Added states with overflow: **112 checks instead of 64**.
  Three of three branch mutations are caught
- the code generator patches were rescued from `build/` into `patches/` (`make clean` used to wipe them)

The honest count: **250 unique expectations** (not "~360": that was the same set on two builds).
See `docs/FINDING-20-mutation-audit.md`.

### 17:40 — all five auditors reported, ALL five: I DO NOT ACCEPT
| Auditor | The main thing found |
|---|---|
| hostile reader | a comparison of different RTL presented as "fourfold"; area from a rejected encoding; novelty claims refuted by primary sources |
| RTL | **the sign of the frequency delta is not determined** (+1.60% versus −1.81% depending on the flow) |
| toolchain | the patches lived only in `build/`, which `make clean` wipes; configuration C does not run |
| verification | **a mutation score of 33%**: 31 RTL breakages, 10 caught; three mechanisms turned failure into "green" |
| methodology | **broke down the main number: 2.74% = 2.20% execution + 0.54% code generation** |

Fixed: the breakdown via a 2×2 cross-build (`tools/measure_cross.sh`, reproduced,
two independent estimates agree within 0.4%); **the clean number is 2.20%, the hardware removes 17.1%**;
area and frequency reformulated as "below the resolution of the flow";
the range "14–50%" refuted by a 10.4% counterexample and replaced by three points;
the median of 32 recognized as an artifact of the modal value `ARRAY 32 OF CHAR`;
the comparison with the literature **withdrawn**: three of four numbers distorted the meaning;
the counter rule refined (a block, not a mnemonic; `LD` also resets it; MUL→UMUL = 64).
See `docs/FINDING-19`, `FINDING-20`, `FINDING-21`.

### 19:30 — 🎯 THE LOOP IS CLOSED: the Oberon compiler on real RTL
`make selfhost`. All four compiler modules (ORS/ORB/ORG/ORP) were built on Wirth's
`RISC5.v` core under Verilator: **40,770,748 instructions, 66,700,249 cycles,
the result matched the emulator byte for byte for all four.**

The only C in the loop is the bridge to the host file system (included from `norebo.c`
unchanged; only `main()` and the processor start were replaced). It is not needed in the browser.

Three bugs along the way: device addresses are negative while the bus is 24-bit (a run of 4 billion
idle instructions); the stop condition fired on any system call (103
instructions); **the instruction register was not set at start**: RISC5 prefetches, and the core went
on to execute the module table as code.

⚠ And a separate trap: the wait loop `pgrep -f norebo_tb` **found itself** and spent an hour and a half
waiting for its own completion. See `docs/FINDING-22-selfhost-on-rtl.md`.

### 05:47 — bootstrapping inside the system itself, without the host bridge
- The `soc_tb` bench got input: mouse and keyboard registers in the format from `Input.Mod`
  (buttons in bits 24..26, keyboard ready is bit 28) and a scripted mode
  `--script=` (move the mouse, send a scan code, take a frame).
- `tools/keymap.py` builds the keymap by parsing the `kbdTab` table straight from the driver
  source: nothing is made up. `tools/mkscript.py` assembles a script from the commands
  `click` / `type` / `enter` / `shot`; the `y` coordinate is written as in the picture.
- Check: a middle click on `System.ShowModules` opened a viewer with the list of modules.
  Then `ORP.Compile ORS.Mod/s ~` was typed and executed: the compiler built its scanner.
- **Fixed point reached.** Four modules were built by the compiler from disk,
  `System.Free` unloaded all four, and the same sources were built again by the new
  compiler. Code size, data size and key matched for all four:
  ORS 1756/992/76547166, ORB 2325/408/2F03B698, ORG 6650/34980/8F476858,
  ORP 6188/144/E6FCC519. 715 million instructions, 1.1 billion cycles, 0 model mismatches.
- **Trap 4 turned out not to be a compiler bug.** Building all four modules with one
  command failed on ORP. `NilCheck` in `ORG.Mod` is number 4, that is NIL, that is
  heap exhaustion: inside a command `Oberon.Loop` does not run and the garbage collector does not
  work. With four separate commands it passes.
- **Found a reproducibility bug in my own harness.** `disk.c` opens the image as
  `rb+`, and the `boot` target ran without `--disk`, that is, directly on the reference image in `ext/`.
  Every system boot silently modified the source of truth; the image had already diverged from
  upstream. The screen checksum `B5DFC933` matched even on the corrupted image:
  the boot check is insensitive to this. Fixed: without `--persist` the bench
  works on a copy in `build/`, `ext/disk/SHA256SUMS` pins the reference, and the
  `pristine` target checks it and is part of `make check`. The image was restored from upstream.
- `tools/check_bootstrap.py` compares two blocks of the log as a raster, without text
  recognition. Checked for misses: it fails on a frame with only the first generation, on a frame
  with a trap, and on a frame of a single ORP build.
- The finding is recorded in `docs/FINDING-23-bootstrap-in-system.md`. The `pristine` and
  `bootstrap` targets were added to `make check`.

### 06:40 — auditing our own assembler: three Wirths who disagree
- The question was "how correct is our assembler". Coverage: all 16 conditional
  branches are in the tests; of the operations only `ANN` and `XOR` are not checked by anything.
- Comparison with an independent instance, Wirth's own disassembler `ORTool.Mod`,
  gave two differences, both real.
- **The condition table in ORTool is wrong and incomplete**: 11 of 16 indexes are filled,
  and `mnemo1[2]="LS"`, `mnemo1[10]="HI"` versus our CS and CC. The hardware is right:
  `RISC5.v` gives `(cc==2)&C` and `(cc==4)&(C|Z)`. Proven by mutation: with the ORTool
  layout **4 of 112 branch checks fail on the RTL**, with ours 112 of 112 pass.
- **Branch offset width: three different numbers in one system.** ORG.Mod
  (the code generator): `off MOD 1000000H`, 24 bits. RISC5.v (the hardware):
  `disp = IR[21:0]`, 22 bits. ORTool.Mod (the disassembler): `w MOD 100000H`,
  20 bits. Invisible in practice: a 1 MB address space = 18 bits in words.
- That the hardware ignores bits 23:22 was checked by execution, not by reading:
  a new `tests/t1_branch_width.s`, two branches that differ only in them
  arrive at the same point.
- **Found a latent bug of my own**: the assembler checked the range against 24 bits
  and silently accepted unreachable branches. Fixed by separating roles:
  we encode like ORG.Mod (24 bits, compatible with the real compiler),
  and check the range against the hardware (22 bits, an explicit error). The behavior of existing
  tests did not change: the bug was unreachable within 1 MB.
- The assembler self-test got mandatory refusals (`must_fail`) and was included in
  `make test`. The first attempt to hook it in was green on a breakage: the exit code
  was swallowed by the `| tail -1` pipeline, the same class as `|| true` from the audit.
  Rewritten via a file and an explicit check of the code; both paths verified.
- The finding is recorded in `docs/FINDING-24-assembler-correctness.md`.

### 08:20 — three open assembler items closed, a round trip on real code
- **ANN and XOR covered**: `tests/t1_logic.s`, 10 checks on the hardware, semantics from
  `aluRes`. A mutation (swapping AND/ANN) brings down all 10.
- **A byte-for-byte comparison with ORG.Mod's output is done.** `tools/rsc.py` parses .rsc
  following the layout from `ORTool.DecObj` (agrees with the log: 1756/2325/6650/6188 words,
  key E6FCC519). `tools/disasm.py` is taken from RISC5.v. `tools/roundtrip.py` runs
  the round trip word→disassembler→assembler→word. **33,838 words of the real compiler
  reproduced bit for bit.**
- The first run closed on 15,628 of 16,919 and exposed FOUR gaps:
  (1) the trap payload in bits 23:4 of BLR: `Put3(BLR, cond, Pos()*100H +
  num*10H + MT)`, 7.6% of the compiler's code, and there was no way to express it;
  (2) the F1 immediate range: the hardware gives `{{16{v}}, imm}`, that is,
  −65536…−1 with v=1, while we checked it as a 16-bit signed value (a real word
  `50090000` = `SUB R0,R0,-65536`);
  (3) `MOV a,H` / `MOV a,NZCV`: the old `TODO(verify)` was resolved by reading aluRes;
  (4) `FLT` / `FLOOR`: special forms of op=12 that differ in u/v, visible in FPAdder.v.
- **A systematic enumeration** `tools/sweep_encoding.py`: 129,760 forms from the assembler's
  side, all pass the round trip. Enumerating from the WORD side does not work: with op=0
  the hardware does not read field b (the MOV branch in aluRes does not touch B), and a word with a non-empty b
  is not reproduced literally. Added to the hardware test.
- **Found a real encoding collision**: `RTI = BR & ~u & ~v & IR[4]`, that is,
  a branch to a register without link and with an odd payload executes as RTI.
  Confirmed by execution: `tests/t1_irq.s` runs exactly this combination.
  The assembler now rejects this form; it does not affect Oberon traps (those are BLR).
- A mutation probe showed that the two checks do NOT replace each other: the round trip does not catch
  swapping ADC/SBC at all (they do not occur in the compiler's code), and catches swapping a/b
  weakly (122 cases: in accumulator style a and b often coincide). The enumeration catches both.
- **Found another reproducibility bug**: the Python bytecode cache. With one-second
  time granularity on macOS, a disassembler restored from a backup kept
  producing the mutated parse because the `.pyc` was considered fresh. Added
  `PYTHONDONTWRITEBYTECODE` to the Makefile and `__pycache__` to .gitignore.
  What remains is to remove the existing directory: `rm -rf tools/__pycache__` (to be run by hand).
- The `roundtrip` targets and the enumeration are built into `make test` / `make check`; both paths
  (green and red) verified. The tests are now 264 checks in 16 files.
- Finding 24 extended.

### 09:40 — 🔴 the first word of the program was not executed in any of the 264 checks
- Took up an open item: 34% of the encoding space without a mnemonic. It turned out
  this is not garbage: it is `u=1`/`v=1` on operations where `aluRes` does not read these bits.
  Verified by execution (`tools/gen_dontcare_test.py`): 27 of 32 comparisons gave zero.
- **Five forms are significant**: `DIV` with u=1 is unsigned division (the divider gets `~u`,
  inside `sign = x[31] & u`); `FSB` with u/v is the adder in conversion mode.
  For DIV the arithmetic matched exactly: 0xF0F0F0F0 DIV 5 = 0xFCFCFCFC signed,
  0x30303030 unsigned, the difference exactly the measured 0xCCCCCCCC.
- Introduced the suffixes `.u`/`.v`/`.uv` and `UDIV`; FLT/FLOOR/ADC/SBC/UMUL were reduced to one
  alias mechanism. The enumeration grew to 375,776 forms, **word coverage 66.1% → 100%**.
  The round trip on real code stayed complete (33,838 words).
- **THE MAIN THING.** The divider probe gave 0 instead of 14, and the cause was not the divider. RISC5 is a machine
  with prefetch: the address bus holds PC+1, while the contents of IR are executed. During
  reset the bus already holds StartAdr, and the hardware latches the first word into IR.
  `tb/run_tests.cpp` fed ZEROS to the bus during reset: IR kept a zero, the first
  cycle executed MOV R0,R0, and the program's first word was never read at all.
  **In all 264 directed checks the first instruction was not executed.**
- It hid because every test started with an irrelevant instruction. And those
  "strange" numbers from the first measurements (0x30300000 instead of 0x30303030) are explained by the same thing.
- **The most unpleasant part**: the bug HAD ALREADY been found and fixed in `tb/soc_tb.cpp`
  ("this is exactly what I tripped over"), but it was not carried over to `run_tests.cpp`: there was no
  regression test. An audit of all five benches: the other four are fine.
  Now there is `tests/t1_prime.s`, and reset was brought to a single form.
- After the fix all 264 previous checks pass WITHOUT a single change to the expectations, so
  not a single expectation had been tuned to the broken start.
- Finding 25. Checks are now 298 in 18 files.
- The draft probe `tests/t9_probe.s` is not part of the build and can be deleted:
  `rm tests/t9_probe.s tests/t9_probe.bin tests/t9_probe.chk` (to be run by hand).

### 11:20 — a semantic differential and curing four old ailments
- **The last hole is closed.** `tools/alu_model.py` is a model of the integer core per
  RISC5.v, written separately from the assembler. `tools/gen_alu_diff.py` builds
  random programs and checks two things: (1) the model's prediction matches the
  hardware in the result, all four flags and H; (2) the model, having parsed a word from the
  assembler, names the same operation. There is no shared layout in the chain.
  900 cases, **4650 checks**, all green. Seven mutations of the model, all caught.
- **The program did not fit in the address space.** The first large differential
  gave 1720 "failures", and all of them were expectations that NEVER FIRED. The PC is 22-bit, the program sits
  at ORG=0xFFE000, exactly 2048 words to the edge; anything longer silently wraps around to zero.
  It was caught by the rule "an expectation that does not fire is a failure" from the mutation audit.
  Fixed: the harness refuses to load a long program, the generator splits it into files.
- **`measure_clean.sh`: three silencers in a row.** (1) the path: the binary modules live in
  `build/s2X` but were looked for in `build/cfgX`; the copy with `|| true` swallowed
  their absence, and all three configurations ended up being one compiler → a difference of +0.00%;
  (2) hence a ZeroDivisionError at the end, the only external symptom;
  (3) configuration E sets version 2, while the loader checks `versionkey = 1X` and does
  NOT LOAD such modules: our own deliberate lock. Stage 2 built the compiler with
  compiler E, got version 2, the run produced an empty log, and `set -e` aborted right
  after "workload:"; hence the symptom "the script prints nothing".
  Fixed: a hard check, a guard on the denominator, `tools/rsc_setversion.py`.
  **The honest measurement**: A 29,277,745 cycles, B +2.19%, E +1.85%; the hardware removes 15.5%.
  The +2.19% figure agrees with 2.20% from the 2×2 breakdown: two independent methods.
- **Decoder equivalence**: the signature was narrow (R5, R6, flags, cycles, memory),
  and field `a` was hard-wired to 5, while in format F3 that is the condition, i.e. of 16 conditions
  only one was checked, and a corruption of BL was invisible (no R15 and PC). Now the signature is all 16
  registers, the flags, PC, H; field `a` is enumerated: **20,480 combinations instead of 1280**.
  As before, exactly CHK differs.
- **Lockstep did not compare memory.** Added a periodic full RAM comparison: 58
  passes over 14.6 million instructions. The very first mismatch is explainable: `00FFE27C`
  versus `FFFFFA7C`, one return address in different ROM maps; the R15 rule
  was extended to memory, there are 99 allowances per run, and they are counted. A single-bit corruption
  is caught.
- A small thing: `ADC`/`SBC` with a negative immediate are unreachable (the alias
  pins v=0); write `ADD.uv` / `SUB.uv`; the assembler explains this in its error.
- Finding 26.

### 13:10 — 🎯 THE SYSTEM REBUILDS ITSELF COMPLETELY
- 42 modules, from Kernel and Display to Edit and Draw, were built by the Oberon compiler
  inside the system itself on the RISC5.v core. The only input is the mouse and keyboard.
- **37 object files were rebuilt byte-for-byte identical.** The system is a fixed
  point of its compiler. The rebuilt image boots, the screen checksum is still B5DFC933.
- Wrote `tools/oberonfs.py`: reading the Oberon file system straight from the image
  (the layout from Kernel.Mod/FileDir.Mod/Files.Mod). Cross-checked: the extracted
  ORP.rsc gives key E6FCC519 and 6188 words, the same as on the screen and in the bootstrap.
- The build order was derived by a topological sort over IMPORT from the sources
  FROM THE IMAGE ITSELF, not from our 2019 copy.
- **The Project Oberon 2016 image is not fully consistent.** Three modules do not compile
  with the compiler from the same image: `RISC` (pos 926 bad divisor: 80000000H as a divisor
  is negative for a signed INTEGER), `ORC` (imports V24, which is not on the image),
  `Net` (nine incompatible parameters: the SCC signatures have diverged). Plus `Math.rsc`
  is stale (449 words on the image versus 447 when rebuilt, the same key), and `PIO.rsc`
  and `PIO.smb` were missing altogether.
- Trap 4 again: batches of three brought down the third module. The same cause as in finding 23:
  there is no garbage collection inside a command. The compiler has to be called one module per command.
- **The System.Log journal does not scroll** (18 lines), and the first run hid six
  commands of eleven. The script now clears the log after every command and takes
  a frame; `tools/stitch_log.py` stitches the regions into one picture.
- **The check nearly turned out green on a breakage**: the byte-wise comparison passed on an
  UNTOUCHED image, because it does not distinguish "rebuilt and matched" from "not touched".
  Dates do not help: on the image they are all zero, there is no clock. Fixed with mandatory
  positive signs (PIO.rsc must appear, Math.rsc must differ).
- The `make rebuild` target (3 sessions, ~8 minutes) is part of `make check`. Finding 27.

### 15:40 — the lab framework and the first three labs (L2, L3)
- `web/machine.js`: a reusable machine wrapper (rendering, mouse, keyboard,
  typing text as scan codes, clicks at coordinates, rollback). Extracted from index.html.
- `web/oberonfs.js`: reading the Oberon file system from the image in the machine's memory.
- `web/labs.js` + `web/lab.html` + `web/labs-test.mjs`: the labs and the shell.
- The browser build got access to the state: soc_reg/flags/h/ram/fb_crc/disk_word
  and soc_poke (the only write access; without it there is no "break" level).
- **Lab 1 "look"**: boot, screen checksum B5DFC933; open the module list,
  the check counts text pixels in the viewer's strip.
- **Lab 4 "break"**: corrupt the framebuffer (the system is alive), then write
  E7FFFFFF at the current PC (a jump to itself): the machine stops. A stop CANNOT
  be detected by the instruction counter: a jump to itself also executes. The check
  takes five samples of the PC: before the corruption it wanders, after it freezes.
- **Lab 7 "build"**: rebuild Math inside the system and see
  finding 27 with your own hands: 1877 bytes before, 1869 after. The check reads the length FROM THE DISK.
- **Rollback exposed a consequence of finding 19**: after a repeated soc_init the system did not
  boot: RISC5.v has no reset for the register file, the flags, H and IR, and on the second
  start there is garbage there. Fixed by explicit zeroing in soc_init; on an FPGA this will not happen,
  so the silicon checklist item stays open.
- `make labs` requires a check to go from "not done" to "done" and statically
  verifies the shell's markup. The red path is verified. The target is part of `make check`.
- I could not open the page in a browser: Chrome in this environment could not reach the
  local server (an error even on the listing, while curl returned 200). The markup was checked
  statically, the behavior headlessly.
- Finding 28.

### 16:30 — a portable harness framework (P1)
- `tb/scenario.h`: the scenario language, its parsing and playback, dumping a frame to PBM,
  and the `harness::Host` interface (set the pointer / send a key / hand over the screen).
  What is left to the machine is the framebuffer address and size, the row order and the format of the input
  registers: for RISC5 that is twenty lines in soc_tb.cpp.
- **The separation is clean**: after the extraction the boot gives the same checksum B5DFC933,
  and the two-generation bootstrap gives THE SAME 715,000,000 instructions and 1,101,436,669
  cycles, the generations match bit for bit. The numbers agree to the instruction.
- Portability is NOT proven by this: the second machine will prove it (Lilith, step 2 of the plan).
- Finding 29.

### 18:20 — an Oberon handbook, 8 chapters
- `docs/book/*.md` (source) -> `web/book/*.html` (the builder `tools/mkbook.py` on the
  ready-made `markdown` library; we did not write our own converter). About 5000 words.
- Chapters: why, and what is real / the RISC5 machine / the language in one chapter / the system:
  text instead of buttons / modules and symbol files / the compiler from the inside /
  bootstrapping and the fixed point / what we measured.
- **Written from the sources**: 33 keywords from `EnterKW` in ORS.Mod, 42 built-in
  names from `enter` in ORB.Mod, register conventions from ORG.Mod's constants, the example
  module is the real Blink.Mod from the image, the path of `a[i]` follows the Index procedure,
  the trap encoding follows Trap. Numbers from findings 8, 16, 24, 26, 27.
- Labs are linked to chapters; the labs page links to the handbook.
- `make book` fails on a link to a nonexistent chapter or a nonexistent lab;
  `make labs` checks the links from labs to chapters. Three mutations, all caught.
- What is missing: exercises (they are in the labs, 3 of 12), the windowing subsystem, the garbage
  collector, a second machine.
- Finding 30. Next, as agreed: the nine remaining labs.

### 21:10 — nine labs
- Six were added to the previous three: #2 your first module, #3 the interface key,
  #5 how many cycles per instruction (the "measure" level), #6 the heap runs out inside
  a command, #8 the fixed point in two generations, #9 inside the code generator.
  The course syllabus is closed from 1 to 9.
- Added to the framework: state between steps, answer fields (without them there is no "measure"),
  parsing .rsc in the browser (code size, key, version, imports with their keys), reading
  Oberon text (the editor's files are not plain ASCII: a tag, an offset, runs with
  fonts, line ends are carriage returns), a "file rebuilt" sign from the directory's
  housekeeping record.
- **Experiment rejected three hypotheses.** (1) The batch ORS+ORB+ORG+PIO does NOT exhaust the heap:
  it is not about the number of modules but about their weight; ORP is what brings it down. (2) The asterisk after MODULE does not
  shrink the code but GROWS it: 34 words with checks, 38 without: `version := 0` turns on
  RISC-0 mode as a whole, and it reserves eight words at the start of the module. Two effects
  at once; this became the content of a lab rather than being hidden. (3) **The scan-code typist
  did not type the closing parenthesis**: the digit table started from the wrong character,
  `INC(i END` went into the file, and the file was still created without complaint.
- Protection against the last one: the test types text through the real editor, saves it,
  reads the file back from disk and compares it character by character.
- The list of lab numbers in the handbook builder is now read from web/labs.js instead of being hard-coded.
- Labs 10–12 are not done and are impossible in the browser: #10 needs a large amount of compiler
  edits, #11 rebuilding Verilog on the host, #12 waits for the second machine.
- Finding 31.

### 22:40 — labs with tooling as a batch job
- The user's idea: some labs could run in Cozystack. Right: the ones that
  edit the processor and the compiler are not interactive; they are a batch workload, "submit an edit,
  get a verdict".
- `deploy/Containerfile` (debian:trixie-slim + Verilator, g++, python3, node, 863 MB),
  `deploy/lab.sh` (the edit is submitted as the /work directory and overlaid on the tree),
  `deploy/k8s/lab-job.yaml` (the edit via a ConfigMap, an initContainer lays the keys
  back out into paths, backoffLimit: 0).
- **A side effect: independent confirmation of reproducibility**: the image has Verilator 5.032
  versus our 5.052, and all 298 checks, the 375,776 enumerated forms and the 20,480 decoder
  equivalence combinations pass identically. Until now all the numbers came from one
  simulator of one version.
- `make image-check` requires TWO outcomes: the clean tree passes, a broken edit
  (AND and ANN swapped in aluRes) fails, caught by the logic test and the
  semantic differential (118 and 68 failures). It is not part of `make check`: it needs Docker.
- Pitfalls: (1) Docker on macOS does not see directories outside the shared paths: silently
  "no edits", even though the file is there; I moved the working directory inside the project tree.
  (2) `find` without parentheses: `-o` binds more loosely than it reads.
- This is NOT a Cozystack package but an ordinary Kubernetes job. The image was not published,
  was not run in a cluster, and the manifest deliberately says `ghcr.io/REPLACE-ME/`.
- Finding 32.

### 23:50 — a pluggable catalog for Cozystack
- The user's idea: a separate marketplace for emulators of never-released
  architectures, unimplemented OSes and languages, as deployable environments.
- **The mechanism already exists.** Roadmap: a community marketplace in 2027 Q1,
  the proposals in `cozystack/community` are open and not merged; the console relies on dynamic
  discovery via ApplicationDefinition; the precedent is `ccp`. In the tree: PackageSource,
  ApplicationDefinition, `cozypkg tap/untap` (connecting a third-party source;
  the official ones cannot be disabled, there is a protective label), `cozypkg validate` for an EXTERNAL
  repository, the internal/marketplace package.
- The chart reference name: `<source>-<variant>-<component>`, dots turned into dashes
  (internal/marketplace/naming).
- Created `~/projects/forgotten-systems/marketplace`: sources/ + packages/apps/oberon-lab
  + packages/system/oberon-lab-rd. `cozypkg validate .`: 0 errors, 0 warnings.
- **Checked for misses**: replaced a reference name with a nonexistent one, and the validator caught
  the dangling reference. So it really does read our objects.
- **A side finding for the platform**: `helm lint` version 4 complains `invalid icon URL`
  about ALL Cozystack charts (nats, redis, kafka, mongodb: each has exactly one such
  error). This is a divergence of helm 4 from their own convention (/logos/... is resolved inside the
  chart in hack/update-crd.sh). Consequence: `cozypkg validate --helm-lint` on helm 4
  is currently unusable for both their own catalog and a third-party one.
- Images were not published, nothing was pushed to OCI, nothing was run in a cluster:
  REPLACE-ME everywhere on purpose.
- Finding 33.

## Next step
`make check` as a whole (about 8 minutes), then L1/P1 from BACKLOG.md.

### 24.09 — the catalog rebuilt following the cozymarketplace project

Read both projects in `cozystack/community` (`cozymarketplace` by @kvaps and
`cozymarketplace-supplementary` by @IvanHunters); both are already in `main`. Checked them not against
the text but against the code: the `PackageSource`/`ApplicationDefinition` types, `cozypkg`
(`index.go`, `tap.go`, `validate.go`, `push.go`), the reconcilers, the console.

**The catalog is split into three repositories** in `~/projects/forgotten-systems/marketplace`:
`repos/machines` (emulators, labs, the handbook), `repos/languages`
(environments for languages), `repos/images` (boot images for KubeVirt).
The unit of installation is a repository, as the project requires; each has its own
OCI artifact and its own entry in the `index/` meta-index.

**The discovery chain was verified with the real cozypkg:** `search` shows three
entries, `tap forgotten-systems-machines` resolves the short name to
`oci://…:v0.1.0` with the version from the entry. It fails only because `flux` is not in PATH.

**New parts:**
- `handbook`: documentation installed next to the application; works even without
  building an image (pages right in the values, stock nginx);
- `workbench`: a meta-application: a parent chart renders `HelmRelease` objects for
  components of the same repository (the `harbor` idiom);
- `langpack`: an environment for a language: a one-off run or a persistent environment;
- `machine-images`: publishing images to `cozy-public` with collision protection;
- `tools/gen-appdefs.py`: the catalog descriptions are generated from the charts'
  `values.schema.json`; schemas are not written by hand;
- `tools/check.py`: 35 checks, 9 of them mutations.

**Key findings (all in `docs/FINDING-34-marketplace-architecture.md`):**
- the meta-index entry schema is closed (`UnmarshalStrict`) → entry types can be expressed
  only with tags; this is not a choice but a constraint;
- the KubeVirt architecture list is closed (`architectureConfiguration`: exactly
  amd64/arm64/ppc64le/s390x) → a new architecture cannot be added by a package;
- **six golden-image annotations are written and read by nobody** (zero
  matches across the whole tree outside the template that writes them; both consumers
  take only the PVC name); worth filing an issue upstream;
- golden image names are a flat cluster-wide namespace, so a third-party package
  can silently overwrite a platform image; there is no protection upstream, we built our own;
- a component without an `install` block is not installed as a release: that is the
  application template;
- all 100 platform sources have exactly one variant; a second one would send the catalog's
  references into the void;
- `ApplicationDefinitionDashboard` has no field for documentation.

The old top level of the catalog (`sources/`, `packages/`) was removed: it is fully
duplicated in `repos/machines`; a copy is in the scratchpad.

Nothing was published, I did not go into a cluster (the context is a tenant one,
cluster-scoped objects cannot be created there anyway). Registry, images and signatures are
`REPLACE-ME`. Findings: 34.

## Current state (rewrite)
- **Catalog:** `~/projects/forgotten-systems/marketplace`: three repositories,
  a meta-index, a description generator, a set of checks. `make check`: 35/35 green,
  `make validate`: zero errors for each repository (the images one has one
  deliberate warning: the component is privileged).
- **Tools:** `cozypkg` built into `/tmp/cozypkg` (from `~/projects/cozystack`),
  helm 4.2.3; `flux` and `cosign` **are not installed**, and without them publication
  and signing cannot be checked.
- **Not done:** nothing pushed to OCI; container images not built;
  machine boot images not built; not tested on a cluster.

## Next step
File an upstream issue about the unread golden-image annotations
(`vm-default-images.cozystack.io/*`): of all the findings this is the only one that affects
the platform's users themselves, not just third-party catalogs.

### 24.09 — publication, the cluster and the start of the QEMU target

**Published.** The repository was renamed to `paleocomputing` (English subtitle
*experimental computer archaeology*: retrocomputing is about collecting, ours is
about experiments). The series site is on GitHub Pages: `tym83.github.io/paleocomputing`, deployed
via Actions (the classic Pages source can only serve the root or /docs).

Images and the catalog are in `ghcr.io/tym83/paleocomputing/*`, signed with cosign **keylessly**:
the identity is the build process itself. Everything is public, verified by an anonymous download.

**Before publication the Nangate45 cell library was excluded**: its header explicitly
forbids publication. The replacement is Sky130 (Apache-2.0), two lines; not done.

**Three bugs found ONLY on a live cluster**, all following the pattern "the release succeeded,
the application is dead":
1. the source manifest lay outside `packages/` and did not make it into the OCI artifact;
2. the schemas closed the root, while `cozystack-engine` mixes in `_cluster`/`_namespace`
   → Helm rejected the values entirely;
3. nginx with `worker_processes auto` started a worker for every core of the NODE (96 of them),
   did not fit in 64Mi → OOM in a loop. The stock autotune does not help: it edits the config in
   place, and the root is read-only.

Each is closed by a check with a mutation. Catalog checks: **50**.

**State on the cluster (tenant-paleo, context admin@workshop):** the machine works,
`/lab.html` is served (200, 12019 bytes). The handbook waits for a re-tap to v0.1.3.

**The QEMU target is started** (`qemu/`, our own build: QEMU and libvirt reject AI-assisted contributions,
naming Claude explicitly). Written: the decoder, the processor state, translation of 16
operations, division, interrupts, the board, the ports. `qemu-system-risc5` builds with one
command in a container.

**Checked against the hardware:** 16 registers, 4 flags and H agreed with the ALU model taken from
RISC5.v. The check `make -C qemu diff` can go red.

Bugs in the target: a clean build failed where an incremental one passed (no prototype
for the generated decoder); the ROM was at the wrong address and four times larger (the hardware has
512 words); the processor was created but **did not execute**: without `realize` its thread is not
started; **the address bus is 24 bits**, the hardware drops the upper bits, and without truncation
the ports are unreachable.

**A fork of KubeVirt is NOT NEEDED.** Found a standard hook point: the `OnDefineDomain` hook
rewrites the machine description, and `SharedComputePath` on its PVC mounts the volume
**inside compute**, where libvirt runs. One question is open: will libvirt accept
an unfamiliar architecture (`virArchFromString` does not fail on it, it returns NONE).

## Current state (rewrite)
- **Site:** `tym83.github.io/paleocomputing`: live, the lab and the handbook.
- **Catalog:** three repositories, tags v0.1.0…v0.1.3, the latest is clean.
- **The `workshop` cluster** (157.180.61.253, 87 tenants, ~50 VMs):
  **the virt-launcher image was replaced** with ours: `customizeComponents` on the
  KubeVirt resource in `cozy-kubevirt`. Ordinary machines checked: Ubuntu came up.
  ⚠ The rollback is in `/tmp/ROLLBACK.txt`, one command.
- **Sandbox:** tenant `tenant-sandbox`, access via `~/claude2-sandbox.kubeconfig`.
  The `build` bench: 8 cores, 16 Gi, login `ssh -F <scratchpad>/sandbox/config stand`,
  address 77.42.12.137. Images are built on it (podman), and the QEMU tree lives there.
  The VM `check2` lives there: the proof that ordinary machines are intact.
- **QEMU:** the target is complete: the core checked over 1.5 million instructions, disk, screen,
  keyboard, mouse, **VNC**, button chords and an on-screen hint. No FPU.
- **libvirt:** a patch in 5 places, checked on 10.0.0 and 11.9.0.
- **virt-launcher:** `ghcr.io/tym83/paleocomputing/virt-launcher:v1.8.4-risc5`,
  **public**, pulled anonymously.
- **Catalog:** the `oberon-vm` application is built (hook + volume + machine),
  52 checks green. The default `langpack` is Oberon.
- **Language:** English by default, Russian as an option. Everything translated.
- **⚠ Found:** the serving image was published WITHOUT the machine (finding 45). Fixed,
  added a check of the contents after publishing.
- **Git:** PR #1 merged. PR #2 is open and waiting to be merged. Tag v0.1.4 points to
  a broken build; move it after the fixes.

## Next step
Install yosys (`brew install yosys`) and take the base area of the core: this is the second
half of the stage 0 measurement and a direct entry into C3.

### 03:30 — ✅ base area taken, two flow traps measured
Installed yosys 0.69, downloaded Nangate45 typical (6.7 MB).
**Baseline: 14,532.11 µm² = 18.21 kGE, 993 flip-flops, 30.9% sequential logic,
10,938 cells.** Falls in the 10–20 kGE range predicted by the review.

Two traps, both measured (`docs/FINDING-03-synthesis-traps.md`):
1. `stat -tech cmos` loses **758 of 993 flip-flops silently** (76%): confirms the review
2. **`-D` without `-constr` is ignored completely**: the area is identical to the last digit
   with -D 200 and -D 50000. The review did not foresee this
The area-vs-period curve turned out flat (two points, 0.5% apart) → there is nothing to build
a chart from, but the delta from the ISA extension will be clean. **Fmax cannot be obtained without OpenSTA.**

### 04:10 — ✅ CHK implemented in the RTL, area delta measured
Encoding: F0, v=1, op=1 (an alias of LSL; the compiler does not emit it), **the index in field b**
(via field a there would be a combinational loop ira0↔chkFail), the limit in `IR[15:4]` (12 bits),
register c=12 → the hardware jump takes the trap vector from MT without an extra read.
Semantics when it fires: exactly like BLR: `R15 := PC+4; PC := R[12]`. When it does not fire,
it writes neither a register nor the flags (CHK is excluded from the common `regwr` term).

**Δ area = +30.06 µm² = 37.7 GE.** ⚠ CORRECTED LATER: this applies to the rejected
encoding; the adopted one costs +46.55…+123.16 µm² (58…154 GE) depending on the script.

🔴 But the main result is methodological: **logically neutral rewrites of the source
move the area by ±51 µm², and non-monotonically** (two of them separately −51 each, together +88).
So **the measured effect is half the size of the noise from syntax**. Only a comparison of
two builds from a single file via `ifdef` is defensible. See `docs/FINDING-04-noise-floor.md`.

### 04:35 — ✅ CHK verified functionally, regression green, build via make
- `tools/asm.py`: added CHK; **fixed a bug**: with `v=0` the immediate is
  zero-extended, so it has to be checked as unsigned (caught on `IOR R12,R12,0xE05C`).
- `tb/run_tests.cpp`: **fixed how checks are anchored**: they were tied to the number of executed
  instructions, now to the address (word number). On straight-line code these coincide; at the first
  branch they diverge. Plus checks were made one-shot.
- `tests/t2_chk.s`: a CHK that does not fire takes 1 cycle, flags untouched; one that fires
  transferred control to MT, and the skipped instruction did not execute. **5/5.**
- 🟢 **The core with CHK passes all base tests with an identical number of cycles** (203, 21, 453):
  the "old code on the new RTL" test required by the review.
- `make test`: the whole regression with one command.

## Current state (rewrite)
- **Working:** the RISC5 (2018) core under Verilator in two configurations (base and with CHK),
  the bench with a retire detector, a test runner anchored to the PC, the assembler, the decoder probe,
  a synthesis flow with Nangate45, `make test` / `make syn`.
- **Tests:** 61 checks on two cores, all green.
- **Measured:** base area 14,532.11 µm² = 18.21 kGE, 993 flip-flops;
  Δ CHK of the adopted encoding = 58…154 GE (the lower bound within the ±64 GE noise).
- **Findings:** 4 documented in `docs/`.
- **Not done:** Fmax (needs OpenSTA); the SoC wrapper; the differential bench against the ISS;
  configurations A/B/C on a real system (needs the Oberon compiler).

## Next step
Configuration A: a `check := FALSE` patch in `ORG.Mod` and measuring the cost of bounds checks on a
real workload. This needs a working Oberon: either Norebo (cross-building from the host)
or the reference emulator with a disk image.

### 05:10 — 🎯 MAIN RESULT: the cost of run-time checks measured
Brought up **Norebo**, a command-line Oberon compiler (a macOS trap: the file system
is case-insensitive, `make` treats the `Norebo/` directory as the finished target `norebo` and
builds nothing; I built directly into `norebo.bin`).

**The three-stage bootstrap passed: "Stage 2 and Stage 3 are identical"**: T-BOOT-3 ✅.

Created a configuration that did not exist: `check := FALSE` in `ORG.Open`, rebuilt the compiler.
**Result: the checks take 6.2% of the system's code (1490 words of 23,954).**
The spread across modules is 0% (Kernel, which is RISC-0) … 11% (Fonts).

Cross-checked three ways: for ORP Δwords = Δtraps = 390 exactly (almost all of them there are
one-word NIL checks); where there is indexing, Δwords > Δtraps (a bounds check =
2 instructions); Kernel gives 0 in both configurations. What remains in A is `NEW` and `ASSERT`,
which are outside the `check` guard and must stay.

🟢 A refinement to the experiment's setup: **NIL checks dominate, not array bounds
checks** (in ORP 390 of 402 are NIL). The "cost of memory safety" in Oberon is first and foremost
the cost of dereferencing pointers. See `docs/FINDING-05-cost-of-checks.md`.

⚠ This is CODE size, not cycles. They must not be mixed.

### 06:00 — 🎯 the dynamic cost of checks: 2.67% of cycles
Instrumented the Norebo emulator with a cycle counter following the model in `tb/cycle_model.h`.
**The model was first checked against the real RTL cycle by cycle: 61 instructions,
0 mismatches**, including all multi-cycle ones and the back-to-back surcharge.

🔴 **I nearly published a wrong number.** The first measurement gave 0.43%, but it reflected only
the fact that a compiler without checks does less work when generating code, not the cost of
executing the checks. A **second bootstrap stage** was needed: use compiler A to
build the compiler again (binary code without checks inside), the same way through B
with checks, and only then run the same workload with both.
The difference between the wrong and the right measurement is **sixfold**.

**Bottom line: statically 6.2% of code, dynamically 2.67% of cycles (3.78% of instructions).**
The checks take twice as much space as time: they are scattered throughout the code, but
hot loops execute them less often, and each is cheaper than the average instruction (1 cycle versus
an average of 1.642). Oberon is at the cheap end of the range in the literature (Morello 5.7, Toooba 9,
MTE 4–12).

⚠ A Norebo trap: if a source is not found via `NOREBO_PATH`, it **goes into an infinite loop**
instead of an error. The path order in `tools/measure_checks.sh` has been checked; do not touch it.
⚠ A macOS trap: there is no `timeout`; I wrote `tools/run_timeout.py`.

### 06:40 — 🎯 MAIN EXPERIMENT CLOSED: three configurations measured
CHK added to the Norebo emulator (regression clean: old code gives the same 94,149,309
cycles) and to the code generator (`PutCHK` in `ORG.Mod`, configuration C).
The accounting matched exactly: in `Texts` 21 bounds checks → 2 + **19 CHK**, the code is exactly 19 words
shorter; in `Fonts` 22 → 22 CHK, minus 22 words. One word per check.

⚠ An incidental setup error: configuration C's path starts with `cfgC`, which holds
the patched `ORG.Mod`, so different sources were being compared. Removed ORG from the workload.

**RESULT (tools/measure3.sh):**
| configuration | cycles | instr. | code |
|---|---|---|---|
| A — no checks | 29,121,384 | 17,407,595 | 5,775 |
| B — software | 29,919,963 (+2.74%) | +3.92% | +9.92% |
| C — hardware | 29,808,859 (+2.36%) | +3.32% | +8.92% |

🎯 **Hardware bounds checking removes only 14% of the cost of checks** (0.38 of 2.74 pp)
at the price of 0.32…0.85% of the core's area. The reason is measured: NIL checks dominate (390 of 402 in ORP),
and CHK does not touch them; plus the 12-bit limit and open arrays on the old path.
A negative result, and it is stronger than a positive one. See `docs/FINDING-06-three-configs.md`.

## Next step
A second workload: a compute one, with dense array indexing. Currently the only workload
is the compiler (many pointers, little indexing), and this is a recorded limitation. A compute
workload will show the upper bound of CHK's contribution.

### 07:20 — ✅ second workload: the hardware's contribution varies 3.5×
`bench/ArrBench.Mod`: sorting + matrix multiplication, not a single pointer,
all limits < 4096. Result: the checks cost **+10.16% of cycles**, hardware support
removes **exactly 50.0%** (two one-cycle instructions are replaced by one).

🎯 **Versus 14% on the compiler workload: a 3.5× spread.**
"How much does hardware bounds checking give" without naming the workload is a meaningless question.

Two bugs along the way:
1. 🔴 My own benchmark had a real out-of-bounds access (`b[i*M+j]` up to 3599 with an array
   of 1000). **Configuration A swallowed it silently**, corrupting 2600 words; B caught it. An accidental
   but perfect demonstration of why checks matter.
2. 🔴 **CHK breaks diagnostics: `unknown trap 8`.** The limit in `IR[15:4]` overlaps
   both the trap number (bits 7:4) and the position (23:8). The review predicted the loss of the position,
   but not that the error number itself would be corrupted.

An open fork: a 4095 limit with broken diagnostics / a 255 limit with the right number /
a two-word CHK. Decide by data: how many arrays are shorter than 256. Not measured.

## Next step
Measure the distribution of array lengths in the system to close the CHK encoding fork.

### 07:50 — the full set of PO2013 sources and an array length analyzer
Downloaded **the full set of Project Oberon 2013: 46 modules**, including all the windowing ones
(`Display`, `Viewers`, `TextFrames`, `MenuViewers`, `Graphics`, `GraphicFrames`, `Curves`,
`Rectangles`, `Draw`, `GraphTool`, `System`, `Edit`, `Net`, `SCC`, `Math`, `Tools` and others)
into `ext/po2013-src/`. Two zip archives with additional utilities did not download.
Without the windowing modules the sample would be biased: that is exactly where dense indexing lives.

`tools/array_limits.py`: a static analysis that extracts array limits straight from the
compiled code by the pair "`SUB` with an immediate limit + trap #1".
No compiler patch is needed. **Checked on a known case**: on `ArrBench`
it extracted exactly the 60, 1000 and 3600 declared in the source.

`tools/build_po2013.py`: a build in dependency order, computed by a topological
sort over the IMPORT sections (not given by hand).

⚠ **A trap: `Input.Mod` hangs Norebo dead.** Verified that this is NOT my changes:
it hangs with the reference emulator binary, with the stock boot compiler, and with
the `build2` compiler. The file is intact (the hex literal of the keyboard table is closed).
The cause was not found; the module is tiny and does not affect the array length statistics.
The build was made robust: a timeout per module, hung ones are marked and skipped.

### 08:40 — ✅ the CHK encoding fork closed by data
Three independent measurements (`docs/FINDING-08-encoding-decision.md`):
1. On compiled code, 154 check sites: **median limit 32**,
   8 bits cover 70.0%, 12 bits 86.9%
2. On declarations in all 46 sources (99 dimensions, including the windowing modules,
   which are not in the Norebo set): **the median is again 32**, 8 bits 84.8%, 12 bits 99.0%
3. A run on a real error, and here is the main thing:
   - B (software): `array index out of range` ✅
   - C (12 bits): 🔴 **`access via NIL pointer`**: the system confidently reports the WRONG error
   - D (8 bits): ✅ `array index out of range`, only the position is lost
4. By area the variants are **indistinguishable** (3.46 µm² with a noise floor of ±51)

**Variant D (8 bits) adopted.** Trading 14–17 pp of coverage for false error messages
is a bad deal for a system whose value is that errors are found and named.
Moved the emulator, the RTL (`CHK_NARROW`), the assembler (`CHKN`) and the code generator (cfgD) over.

⚠ Incidentally: the downloaded PO2013 set is **the 2019 version, while the Norebo compiler is from 2016**.
They are incompatible, and this shows up as a hang, not an error. For the analysis of
compiled code the matching Norebo set was used.

### 09:20 — 🔴 correction: the data does NOT close the fork
Measuring the adopted (8-bit) variant on the SECOND workload refuted the rationale of finding 8.

| variant | compilation | compute |
|---|---|---|
| 12 bits (diagnostics broken) | 13.9% | **50.0%** |
| 8 bits (diagnostics intact) | 13.0% | **15.8%** |

**The error in the rationale:** the decision was made on the distribution of check SITES (median 32),
while the hot loops of compute code run LARGE arrays (1000 and 3600 in the benchmark).
Only 6 of 15 checks fell under 8 bits, and not the ones executed millions of times.
The static number dropped by 17 pp, the dynamic one **threefold**.

The lesson: encoding decisions need a **dynamic profile**, not a count of sites.

A two-word variant is no way out either: the processor has to skip the second word, that is a cycle,
and the gain disappears. The architecturally correct answer is a limit in a register hoisted out of the loop,
but **the Oberon code generator cannot hoist invariants** and will not learn to without rewriting ORG.

**Bottom line: a real fork is shown with the measured cost of each branch**; for the article this is
better than a single decision. See `docs/FINDING-09-fork-unresolved.md`.

## Next step
A dynamic indexing profile: a counter per check, grouped by limit.
It will close the fork for good and is cheap.

### 10:10 — 🎯 FORK CLOSED: a limit made of two pieces
The dynamic profile (a counter of check executions by length class) showed that
on the compute workload **68.3% of executions are arrays of 256…1023**, which 8 bits do not cover.
And it gave a predictive model: the ratio of dynamic coverage predicts the ratio of the
gain **exactly** (31.6% versus a measured 31.6%).

This prompted me to look for bits where I had not looked. **Field `a` (IR[27:24]) of the CHK instruction
is not needed** (when it fires ira0 = 15; when it does not, no register is written), and it lies
OUTSIDE the position field (23:8) and OUTSIDE the trap number field (7:4).
→ the limit is assembled from two pieces `{IR[27:24], IR[15:8]}` = 12 bits, and the trap number is intact.

| variant | compilation | compute | diagnostics |
|---|---|---|---|
| 12 bits in IR[15:4] | 13.9% | 50.0% | 🔴 the WRONG error |
| 8 bits | 13.0% | 15.8% | ✅ |
| **two pieces (adopted)** | **13.7%** | **50.0%** | ✅ |

Checked on an array of 1000 elements: E gives 19 words, CHK is used,
the message `array index out of range` is correct. On the compute workload the result **matches bit
for bit** the maximum-coverage variant (57,133,094 cycles).
Moved the RTL (`CHK_SPLIT`), the assembler (`CHKS`), the emulator, the code generator (cfgE) and the Makefile over.
RTL regression green, 61 checks. See `docs/FINDING-10-split-encoding.md`.

## Current state (rewrite)
- **Measurements complete:** the cost of checks 2.74% (compilation) / 10.16% (compute);
  hardware support removes 13.7% / 50.0% with diagnostics intact;
  area 58…154 GE (the lower bound within noise); base 18.21 kGE, 993 flip-flops
- **Findings documented:** 10
- **Remaining:** Fmax (needs OpenSTA); the full set of ISA tests (4 of 12 done);
  the differential bench against the reference ISS; claim C1 as a whole (SoC, browser)

### 10:40 — ✅ finding 11: UMUL in RISC5 is a mixed multiplication, not an unsigned one
`Multiplier.v`: the addend `{w0[31], w0}` is ALWAYS sign-extended; flag u controls
only the last step. Consequence: `UMUL` treats the first operand as unsigned
and **the second as signed**.
Measured: `UMUL R, 2, 0xFFFFFFFF` gives H = 0xFFFFFFFF, whereas a truly unsigned one
would give H = 1. Test `tests/t1_umul.s`, 6/6. See `docs/FINDING-11-umul-is-mixed.md`.
Found by accident: my expectation in `t1_arith.s` was based on the "correct" semantics.
Important for the differential bench: the reference must reproduce exactly this quirk.

### 11:30 — ✅ decoder equivalence check, finding 12
`tb/decoder_equiv.cpp`: all 256 combinations of {IR[31:28] × op} × 5 operand sets = 1280
runs on two cores, comparing registers, flags, cycles and a memory checksum.

**It caught a real bug:** my decode `~p & ~q & v & (op==1)` did not check bit `u`,
so CHK decoded in TWO encodings (`0001` and `0011`), taking two slots
instead of one. Existing code did not break, but the code space was used up twice as fast.
Fixed by inserting `~u &` in the RTL and the emulator; now exactly one encoding differs.

Hooked into `make test` via the `equiv` target. See `docs/FINDING-12-decoder-equivalence.md`.

**ISA tests overall: 12 of the 12 planned are done.**
Full regression: 11 suites × 2 configurations + decoder equivalence, all green.

### 12:40 — 🎯 MILESTONE: real Verilog boots real Oberon
The SoC bench: the `RISC5.v` core on RTL + RAM + ROM + devices as stubs with the same
register interface (as the review recommended, we do not emulate the wired interfaces).
The SD card logic is taken from the reference emulator; it is word-based and maps onto registers.

**Boot: 12 million instructions, 18.65 million cycles, 4.27 s on the host = 4.37 MHz-equivalent.
The framebuffer is non-empty, the Oberon interface is on the screen** (`docs/oberon-boot-screen.png`).
The reference draws the first frame after ~8 million instructions, our RTL after ~7.1 million.

Three bugs along the way:
1. 🔴 `prom.mem` from Wirth's set is a loader over the SERIAL LINE; it does not read
   from the disk. The one from the reference emulator (`risc-boot.inc`) is needed. They start the same.
2. 🔴 During reset the bus must be served from memory: IR is latched every cycle,
   and with zeros the first instruction executes as `MOV R0,R0` instead of a jump.
3. The framebuffer is bottom-up: predicted by the review, it saved a day.
See `docs/FINDING-13-boot-on-rtl.md`.

### 13:20 — 🎯 DIFFERENTIAL BENCH: 15 million instructions of agreement
`tb/lockstep.cpp`: RTL against the reference emulator; after EVERY instruction it compares
the program counter, all 16 registers, H and the four flags. The workload is booting the Oberon system.

**Result: 14,600,503 instructions of strict comparison, 23.2 million RTL cycles,
5.8 s on the host, 0 mismatches.** Warm-up in the loader: 399,497 instructions.

Five sources of nondeterminism eliminated (four predicted by the review):
PC width, the link register after leaving the ROM, the timer, the progress heuristic, the disk image.

The bench caught two of my bugs:
1. the bus during reset (found immediately: in the reference the first instruction branched away)
2. 🔴 **a housekeeping write that I had added myself**, anticipating a trap from the review: the reference
   puts "Sizg" at DisplayStart in `risc_configure_memory()`, which our launch does not
   call. Diverged at step 2,101,536.

Targets `make lockstep` and `make boot`. See `docs/FINDING-14-lockstep.md`.

### 14:10 — 🎯 C1 CLOSED: Oberon runs in the browser on real RTL
`web/`: the RISC5 core → Verilator → Emscripten → WASM, Project Oberon in an ordinary tab.
Checked in Chrome: a full desktop, the banner `Oberon V5 NW 14.4.2013`,
the System.Tool panel with all the commands. Screenshot `docs/oberon-in-browser.png`.

**Delivery is 326 KB gzipped** (model 75 KB, image 249 KB): matches the review's prediction.
**Speed in WASM is 4.27 MHz versus 4.37 native: a 2.3% loss** (the review expected 5–8%).
The screen checksum `B5DFC933` **is the same in all three builds**.

Solved: stubs for thread affinity (predicted by the review), excluding the DPI file,
`verilated_threads.cpp`, linking via `em++`, the disk in memory instead of a file.
**SharedArrayBuffer is deliberately not used**: the page can be embedded anywhere.

🔴 Caught a real bug: **if the tab starts hidden, rAF is never called and the loop
never starts**, even after the tab is opened. Fixed by subscribing to
`visibilitychange`. It showed up precisely in automation with a hidden tab.
See `docs/FINDING-15-browser.md`.

### 14:40 — ✅ Fmax closed, finding 16
`syn/fmax.py`: a sweep of the delay target with an explicit delay-driven abc script and `stime -p`.

**⚠ CORRECTED LATER BY THE AUDIT: the sign of the frequency delta is NOT DETERMINED.**
The delay-driven flow: 2096.0 → 2134.6 ps = −1.81%. Default abc: 2215.3 → 2180.5 ps
= **+1.60%, that is, CHK is FASTER**. The sign is opposite between flows on the same RTL.
The review's prediction ("the comparators will land on the critical path") remains unconfirmed:
the tool's resolution is not enough to test it.

🔴 **CORRECTED LATER: DIFFERENT RTL configurations were compared.** +30.06 was taken without
`CHK_SPLIT`, +123.16 with it. On identical RTL the spread is **2.65×** (+46.55 versus +123.16),
not fourfold. The qualitative conclusion ("the flow moves the effect more than the effect itself")
survives; the number does not.

⚠ Caveats: `WireLoad = "none"` (wire delays not counted); the critical path of the
real system goes through external memory, which is not in the core's netlist.
OpenSTA is not installed and is not packaged in Homebrew; a full static analysis
remains open. See `docs/FINDING-16-fmax.md`.

## Current state (rewrite)
**All design items are closed.**
- C1 (the whole stack in the browser) ✅: `web/`, 326 KB gzip, 4.27 MHz, checked in Chrome
- C3 (the cost of checks in three configurations) ✅: on two workloads, with area and frequency
- ISA tests: 12 of 12 + decoder equivalence, ~360 checks, all green
- Differential bench: 15 million instructions agreeing with the reference
- Findings documented: **16**
Not closed: OpenSTA (full static analysis).

### 15:10 — ✅ finding 17: the cycle model verified on a real workload
A tip from an auditor: the cycle model had never been checked against the RTL on a real workload,
only on 61 synthetic instructions, even though ALL the episode's numbers are built on it.

The comparison is built into the SoC bench. **12,000,000 instructions of the Oberon boot,
0 mismatches (0.0000%), in total 18,654,115 versus 18,654,115: exact to the cycle.**

🔴 A trap in the check itself: the first run gave "a 15.8% mismatch". It was a BUG
IN THE COMPARISON CODE: the instruction was read via `top->adr` before the bus was set (it held the previous
cycle's address). The right thing is to take the PC directly. Had I published it, it would have been a false finding devaluing
all the cycle numbers. **A negative result must be checked as carefully as a positive one.**
See `docs/FINDING-17-cycle-model-validated.md`.

### 16:30 — 🔴 mutation audit: the harness caught a third of the breakages
An auditor introduced **31 mutations into the RTL; 10 of 30 were caught (33%)**. Three mechanisms turned
a failure into "green": an expectation that never fired was not counted, `|| true` swallowed a build error,
`make boot` always returned 0.

Fixed:
- **B1** an expectation that did not fire = a failure (verified: the mutation `>` instead of `>=` is now caught)
- **B2** the build must produce a binary, the run is judged by its exit code, `mkdir -p build`
- **B3** wrote `tests/t1_fp.s`: **17 checks of numerical FP results**, which
  did not exist at all. Rounding-sensitive cases were found by enumeration.
  Three of three FPU mutations are now caught
- **S1** the branch test had **V=0 in all states** → five of the eight conditions
  were indistinguishable. Added states with overflow: **112 checks instead of 64**.
  Three of three branch mutations are caught
- the code generator patches were rescued from `build/` into `patches/` (`make clean` used to wipe them)

The honest count: **250 unique expectations** (not "~360": that was the same set on two builds).
See `docs/FINDING-20-mutation-audit.md`.

### 17:40 — all five auditors reported, ALL five: I DO NOT ACCEPT
| Auditor | The main thing found |
|---|---|
| hostile reader | a comparison of different RTL presented as "fourfold"; area from a rejected encoding; novelty claims refuted by primary sources |
| RTL | **the sign of the frequency delta is not determined** (+1.60% versus −1.81% depending on the flow) |
| toolchain | the patches lived only in `build/`, which `make clean` wipes; configuration C does not run |
| verification | **a mutation score of 33%**: 31 RTL breakages, 10 caught; three mechanisms turned failure into "green" |
| methodology | **broke down the main number: 2.74% = 2.20% execution + 0.54% code generation** |

Fixed: the breakdown via a 2×2 cross-build (`tools/measure_cross.sh`, reproduced,
two independent estimates agree within 0.4%); **the clean number is 2.20%, the hardware removes 17.1%**;
area and frequency reformulated as "below the resolution of the flow";
the range "14–50%" refuted by a 10.4% counterexample and replaced by three points;
the median of 32 recognized as an artifact of the modal value `ARRAY 32 OF CHAR`;
the comparison with the literature **withdrawn**: three of four numbers distorted the meaning;
the counter rule refined (a block, not a mnemonic; `LD` also resets it; MUL→UMUL = 64).
See `docs/FINDING-19`, `FINDING-20`, `FINDING-21`.

### 19:30 — 🎯 THE LOOP IS CLOSED: the Oberon compiler on real RTL
`make selfhost`. All four compiler modules (ORS/ORB/ORG/ORP) were built on Wirth's
`RISC5.v` core under Verilator: **40,770,748 instructions, 66,700,249 cycles,
the result matched the emulator byte for byte for all four.**

The only C in the loop is the bridge to the host file system (included from `norebo.c`
unchanged; only `main()` and the processor start were replaced). It is not needed in the browser.

Three bugs along the way: device addresses are negative while the bus is 24-bit (a run of 4 billion
idle instructions); the stop condition fired on any system call (103
instructions); **the instruction register was not set at start**: RISC5 prefetches, and the core went
on to execute the module table as code.

⚠ And a separate trap: the wait loop `pgrep -f norebo_tb` **found itself** and spent an hour and a half
waiting for its own completion. See `docs/FINDING-22-selfhost-on-rtl.md`.

### 05:47 — bootstrapping inside the system itself, without the host bridge
- The `soc_tb` bench got input: mouse and keyboard registers in the format from `Input.Mod`
  (buttons in bits 24..26, keyboard ready is bit 28) and a scripted mode
  `--script=` (move the mouse, send a scan code, take a frame).
- `tools/keymap.py` builds the keymap by parsing the `kbdTab` table straight from the driver
  source: nothing is made up. `tools/mkscript.py` assembles a script from the commands
  `click` / `type` / `enter` / `shot`; the `y` coordinate is written as in the picture.
- Check: a middle click on `System.ShowModules` opened a viewer with the list of modules.
  Then `ORP.Compile ORS.Mod/s ~` was typed and executed: the compiler built its scanner.
- **Fixed point reached.** Four modules were built by the compiler from disk,
  `System.Free` unloaded all four, and the same sources were built again by the new
  compiler. Code size, data size and key matched for all four:
  ORS 1756/992/76547166, ORB 2325/408/2F03B698, ORG 6650/34980/8F476858,
  ORP 6188/144/E6FCC519. 715 million instructions, 1.1 billion cycles, 0 model mismatches.
- **Trap 4 turned out not to be a compiler bug.** Building all four modules with one
  command failed on ORP. `NilCheck` in `ORG.Mod` is number 4, that is NIL, that is
  heap exhaustion: inside a command `Oberon.Loop` does not run and the garbage collector does not
  work. With four separate commands it passes.
- **Found a reproducibility bug in my own harness.** `disk.c` opens the image as
  `rb+`, and the `boot` target ran without `--disk`, that is, directly on the reference image in `ext/`.
  Every system boot silently modified the source of truth; the image had already diverged from
  upstream. The screen checksum `B5DFC933` matched even on the corrupted image:
  the boot check is insensitive to this. Fixed: without `--persist` the bench
  works on a copy in `build/`, `ext/disk/SHA256SUMS` pins the reference, and the
  `pristine` target checks it and is part of `make check`. The image was restored from upstream.
- `tools/check_bootstrap.py` compares two blocks of the log as a raster, without text
  recognition. Checked for misses: it fails on a frame with only the first generation, on a frame
  with a trap, and on a frame of a single ORP build.
- The finding is recorded in `docs/FINDING-23-bootstrap-in-system.md`. The `pristine` and
  `bootstrap` targets were added to `make check`.

### 06:40 — auditing our own assembler: three Wirths who disagree
- The question was "how correct is our assembler". Coverage: all 16 conditional
  branches are in the tests; of the operations only `ANN` and `XOR` are not checked by anything.
- Comparison with an independent instance, Wirth's own disassembler `ORTool.Mod`,
  gave two differences, both real.
- **The condition table in ORTool is wrong and incomplete**: 11 of 16 indexes are filled,
  and `mnemo1[2]="LS"`, `mnemo1[10]="HI"` versus our CS and CC. The hardware is right:
  `RISC5.v` gives `(cc==2)&C` and `(cc==4)&(C|Z)`. Proven by mutation: with the ORTool
  layout **4 of 112 branch checks fail on the RTL**, with ours 112 of 112 pass.
- **Branch offset width: three different numbers in one system.** ORG.Mod
  (the code generator): `off MOD 1000000H`, 24 bits. RISC5.v (the hardware):
  `disp = IR[21:0]`, 22 bits. ORTool.Mod (the disassembler): `w MOD 100000H`,
  20 bits. Invisible in practice: a 1 MB address space = 18 bits in words.
- That the hardware ignores bits 23:22 was checked by execution, not by reading:
  a new `tests/t1_branch_width.s`, two branches that differ only in them
  arrive at the same point.
- **Found a latent bug of my own**: the assembler checked the range against 24 bits
  and silently accepted unreachable branches. Fixed by separating roles:
  we encode like ORG.Mod (24 bits, compatible with the real compiler),
  and check the range against the hardware (22 bits, an explicit error). The behavior of existing
  tests did not change: the bug was unreachable within 1 MB.
- The assembler self-test got mandatory refusals (`must_fail`) and was included in
  `make test`. The first attempt to hook it in was green on a breakage: the exit code
  was swallowed by the `| tail -1` pipeline, the same class as `|| true` from the audit.
  Rewritten via a file and an explicit check of the code; both paths verified.
- The finding is recorded in `docs/FINDING-24-assembler-correctness.md`.

### 08:20 — three open assembler items closed, a round trip on real code
- **ANN and XOR covered**: `tests/t1_logic.s`, 10 checks on the hardware, semantics from
  `aluRes`. A mutation (swapping AND/ANN) brings down all 10.
- **A byte-for-byte comparison with ORG.Mod's output is done.** `tools/rsc.py` parses .rsc
  following the layout from `ORTool.DecObj` (agrees with the log: 1756/2325/6650/6188 words,
  key E6FCC519). `tools/disasm.py` is taken from RISC5.v. `tools/roundtrip.py` runs
  the round trip word→disassembler→assembler→word. **33,838 words of the real compiler
  reproduced bit for bit.**
- The first run closed on 15,628 of 16,919 and exposed FOUR gaps:
  (1) the trap payload in bits 23:4 of BLR: `Put3(BLR, cond, Pos()*100H +
  num*10H + MT)`, 7.6% of the compiler's code, and there was no way to express it;
  (2) the F1 immediate range: the hardware gives `{{16{v}}, imm}`, that is,
  −65536…−1 with v=1, while we checked it as a 16-bit signed value (a real word
  `50090000` = `SUB R0,R0,-65536`);
  (3) `MOV a,H` / `MOV a,NZCV`: the old `TODO(verify)` was resolved by reading aluRes;
  (4) `FLT` / `FLOOR`: special forms of op=12 that differ in u/v, visible in FPAdder.v.
- **A systematic enumeration** `tools/sweep_encoding.py`: 129,760 forms from the assembler's
  side, all pass the round trip. Enumerating from the WORD side does not work: with op=0
  the hardware does not read field b (the MOV branch in aluRes does not touch B), and a word with a non-empty b
  is not reproduced literally. Added to the hardware test.
- **Found a real encoding collision**: `RTI = BR & ~u & ~v & IR[4]`, that is,
  a branch to a register without link and with an odd payload executes as RTI.
  Confirmed by execution: `tests/t1_irq.s` runs exactly this combination.
  The assembler now rejects this form; it does not affect Oberon traps (those are BLR).
- A mutation probe showed that the two checks do NOT replace each other: the round trip does not catch
  swapping ADC/SBC at all (they do not occur in the compiler's code), and catches swapping a/b
  weakly (122 cases: in accumulator style a and b often coincide). The enumeration catches both.
- **Found another reproducibility bug**: the Python bytecode cache. With one-second
  time granularity on macOS, a disassembler restored from a backup kept
  producing the mutated parse because the `.pyc` was considered fresh. Added
  `PYTHONDONTWRITEBYTECODE` to the Makefile and `__pycache__` to .gitignore.
  What remains is to remove the existing directory: `rm -rf tools/__pycache__` (to be run by hand).
- The `roundtrip` targets and the enumeration are built into `make test` / `make check`; both paths
  (green and red) verified. The tests are now 264 checks in 16 files.
- Finding 24 extended.

### 09:40 — 🔴 the first word of the program was not executed in any of the 264 checks
- Took up an open item: 34% of the encoding space without a mnemonic. It turned out
  this is not garbage: it is `u=1`/`v=1` on operations where `aluRes` does not read these bits.
  Verified by execution (`tools/gen_dontcare_test.py`): 27 of 32 comparisons gave zero.
- **Five forms are significant**: `DIV` with u=1 is unsigned division (the divider gets `~u`,
  inside `sign = x[31] & u`); `FSB` with u/v is the adder in conversion mode.
  For DIV the arithmetic matched exactly: 0xF0F0F0F0 DIV 5 = 0xFCFCFCFC signed,
  0x30303030 unsigned, the difference exactly the measured 0xCCCCCCCC.
- Introduced the suffixes `.u`/`.v`/`.uv` and `UDIV`; FLT/FLOOR/ADC/SBC/UMUL were reduced to one
  alias mechanism. The enumeration grew to 375,776 forms, **word coverage 66.1% → 100%**.
  The round trip on real code stayed complete (33,838 words).
- **THE MAIN THING.** The divider probe gave 0 instead of 14, and the cause was not the divider. RISC5 is a machine
  with prefetch: the address bus holds PC+1, while the contents of IR are executed. During
  reset the bus already holds StartAdr, and the hardware latches the first word into IR.
  `tb/run_tests.cpp` fed ZEROS to the bus during reset: IR kept a zero, the first
  cycle executed MOV R0,R0, and the program's first word was never read at all.
  **In all 264 directed checks the first instruction was not executed.**
- It hid because every test started with an irrelevant instruction. And those
  "strange" numbers from the first measurements (0x30300000 instead of 0x30303030) are explained by the same thing.
- **The most unpleasant part**: the bug HAD ALREADY been found and fixed in `tb/soc_tb.cpp`
  ("this is exactly what I tripped over"), but it was not carried over to `run_tests.cpp`: there was no
  regression test. An audit of all five benches: the other four are fine.
  Now there is `tests/t1_prime.s`, and reset was brought to a single form.
- After the fix all 264 previous checks pass WITHOUT a single change to the expectations, so
  not a single expectation had been tuned to the broken start.
- Finding 25. Checks are now 298 in 18 files.
- The draft probe `tests/t9_probe.s` is not part of the build and can be deleted:
  `rm tests/t9_probe.s tests/t9_probe.bin tests/t9_probe.chk` (to be run by hand).

### 11:20 — a semantic differential and curing four old ailments
- **The last hole is closed.** `tools/alu_model.py` is a model of the integer core per
  RISC5.v, written separately from the assembler. `tools/gen_alu_diff.py` builds
  random programs and checks two things: (1) the model's prediction matches the
  hardware in the result, all four flags and H; (2) the model, having parsed a word from the
  assembler, names the same operation. There is no shared layout in the chain.
  900 cases, **4650 checks**, all green. Seven mutations of the model, all caught.
- **The program did not fit in the address space.** The first large differential
  gave 1720 "failures", and all of them were expectations that NEVER FIRED. The PC is 22-bit, the program sits
  at ORG=0xFFE000, exactly 2048 words to the edge; anything longer silently wraps around to zero.
  It was caught by the rule "an expectation that does not fire is a failure" from the mutation audit.
  Fixed: the harness refuses to load a long program, the generator splits it into files.
- **`measure_clean.sh`: three silencers in a row.** (1) the path: the binary modules live in
  `build/s2X` but were looked for in `build/cfgX`; the copy with `|| true` swallowed
  their absence, and all three configurations ended up being one compiler → a difference of +0.00%;
  (2) hence a ZeroDivisionError at the end, the only external symptom;
  (3) configuration E sets version 2, while the loader checks `versionkey = 1X` and does
  NOT LOAD such modules: our own deliberate lock. Stage 2 built the compiler with
  compiler E, got version 2, the run produced an empty log, and `set -e` aborted right
  after "workload:"; hence the symptom "the script prints nothing".
  Fixed: a hard check, a guard on the denominator, `tools/rsc_setversion.py`.
  **The honest measurement**: A 29,277,745 cycles, B +2.19%, E +1.85%; the hardware removes 15.5%.
  The +2.19% figure agrees with 2.20% from the 2×2 breakdown: two independent methods.
- **Decoder equivalence**: the signature was narrow (R5, R6, flags, cycles, memory),
  and field `a` was hard-wired to 5, while in format F3 that is the condition, i.e. of 16 conditions
  only one was checked, and a corruption of BL was invisible (no R15 and PC). Now the signature is all 16
  registers, the flags, PC, H; field `a` is enumerated: **20,480 combinations instead of 1280**.
  As before, exactly CHK differs.
- **Lockstep did not compare memory.** Added a periodic full RAM comparison: 58
  passes over 14.6 million instructions. The very first mismatch is explainable: `00FFE27C`
  versus `FFFFFA7C`, one return address in different ROM maps; the R15 rule
  was extended to memory, there are 99 allowances per run, and they are counted. A single-bit corruption
  is caught.
- A small thing: `ADC`/`SBC` with a negative immediate are unreachable (the alias
  pins v=0); write `ADD.uv` / `SUB.uv`; the assembler explains this in its error.
- Finding 26.

### 13:10 — 🎯 THE SYSTEM REBUILDS ITSELF COMPLETELY
- 42 modules, from Kernel and Display to Edit and Draw, were built by the Oberon compiler
  inside the system itself on the RISC5.v core. The only input is the mouse and keyboard.
- **37 object files were rebuilt byte-for-byte identical.** The system is a fixed
  point of its compiler. The rebuilt image boots, the screen checksum is still B5DFC933.
- Wrote `tools/oberonfs.py`: reading the Oberon file system straight from the image
  (the layout from Kernel.Mod/FileDir.Mod/Files.Mod). Cross-checked: the extracted
  ORP.rsc gives key E6FCC519 and 6188 words, the same as on the screen and in the bootstrap.
- The build order was derived by a topological sort over IMPORT from the sources
  FROM THE IMAGE ITSELF, not from our 2019 copy.
- **The Project Oberon 2016 image is not fully consistent.** Three modules do not compile
  with the compiler from the same image: `RISC` (pos 926 bad divisor: 80000000H as a divisor
  is negative for a signed INTEGER), `ORC` (imports V24, which is not on the image),
  `Net` (nine incompatible parameters: the SCC signatures have diverged). Plus `Math.rsc`
  is stale (449 words on the image versus 447 when rebuilt, the same key), and `PIO.rsc`
  and `PIO.smb` were missing altogether.
- Trap 4 again: batches of three brought down the third module. The same cause as in finding 23:
  there is no garbage collection inside a command. The compiler has to be called one module per command.
- **The System.Log journal does not scroll** (18 lines), and the first run hid six
  commands of eleven. The script now clears the log after every command and takes
  a frame; `tools/stitch_log.py` stitches the regions into one picture.
- **The check nearly turned out green on a breakage**: the byte-wise comparison passed on an
  UNTOUCHED image, because it does not distinguish "rebuilt and matched" from "not touched".
  Dates do not help: on the image they are all zero, there is no clock. Fixed with mandatory
  positive signs (PIO.rsc must appear, Math.rsc must differ).
- The `make rebuild` target (3 sessions, ~8 minutes) is part of `make check`. Finding 27.

### 15:40 — the lab framework and the first three labs (L2, L3)
- `web/machine.js`: a reusable machine wrapper (rendering, mouse, keyboard,
  typing text as scan codes, clicks at coordinates, rollback). Extracted from index.html.
- `web/oberonfs.js`: reading the Oberon file system from the image in the machine's memory.
- `web/labs.js` + `web/lab.html` + `web/labs-test.mjs`: the labs and the shell.
- The browser build got access to the state: soc_reg/flags/h/ram/fb_crc/disk_word
  and soc_poke (the only write access; without it there is no "break" level).
- **Lab 1 "look"**: boot, screen checksum B5DFC933; open the module list,
  the check counts text pixels in the viewer's strip.
- **Lab 4 "break"**: corrupt the framebuffer (the system is alive), then write
  E7FFFFFF at the current PC (a jump to itself): the machine stops. A stop CANNOT
  be detected by the instruction counter: a jump to itself also executes. The check
  takes five samples of the PC: before the corruption it wanders, after it freezes.
- **Lab 7 "build"**: rebuild Math inside the system and see
  finding 27 with your own hands: 1877 bytes before, 1869 after. The check reads the length FROM THE DISK.
- **Rollback exposed a consequence of finding 19**: after a repeated soc_init the system did not
  boot: RISC5.v has no reset for the register file, the flags, H and IR, and on the second
  start there is garbage there. Fixed by explicit zeroing in soc_init; on an FPGA this will not happen,
  so the silicon checklist item stays open.
- `make labs` requires a check to go from "not done" to "done" and statically
  verifies the shell's markup. The red path is verified. The target is part of `make check`.
- I could not open the page in a browser: Chrome in this environment could not reach the
  local server (an error even on the listing, while curl returned 200). The markup was checked
  statically, the behavior headlessly.
- Finding 28.

### 16:30 — a portable harness framework (P1)
- `tb/scenario.h`: the scenario language, its parsing and playback, dumping a frame to PBM,
  and the `harness::Host` interface (set the pointer / send a key / hand over the screen).
  What is left to the machine is the framebuffer address and size, the row order and the format of the input
  registers: for RISC5 that is twenty lines in soc_tb.cpp.
- **The separation is clean**: after the extraction the boot gives the same checksum B5DFC933,
  and the two-generation bootstrap gives THE SAME 715,000,000 instructions and 1,101,436,669
  cycles, the generations match bit for bit. The numbers agree to the instruction.
- Portability is NOT proven by this: the second machine will prove it (Lilith, step 2 of the plan).
- Finding 29.

### 18:20 — an Oberon handbook, 8 chapters
- `docs/book/*.md` (source) -> `web/book/*.html` (the builder `tools/mkbook.py` on the
  ready-made `markdown` library; we did not write our own converter). About 5000 words.
- Chapters: why, and what is real / the RISC5 machine / the language in one chapter / the system:
  text instead of buttons / modules and symbol files / the compiler from the inside /
  bootstrapping and the fixed point / what we measured.
- **Written from the sources**: 33 keywords from `EnterKW` in ORS.Mod, 42 built-in
  names from `enter` in ORB.Mod, register conventions from ORG.Mod's constants, the example
  module is the real Blink.Mod from the image, the path of `a[i]` follows the Index procedure,
  the trap encoding follows Trap. Numbers from findings 8, 16, 24, 26, 27.
- Labs are linked to chapters; the labs page links to the handbook.
- `make book` fails on a link to a nonexistent chapter or a nonexistent lab;
  `make labs` checks the links from labs to chapters. Three mutations, all caught.
- What is missing: exercises (they are in the labs, 3 of 12), the windowing subsystem, the garbage
  collector, a second machine.
- Finding 30. Next, as agreed: the nine remaining labs.

### 21:10 — nine labs
- Six were added to the previous three: #2 your first module, #3 the interface key,
  #5 how many cycles per instruction (the "measure" level), #6 the heap runs out inside
  a command, #8 the fixed point in two generations, #9 inside the code generator.
  The course syllabus is closed from 1 to 9.
- Added to the framework: state between steps, answer fields (without them there is no "measure"),
  parsing .rsc in the browser (code size, key, version, imports with their keys), reading
  Oberon text (the editor's files are not plain ASCII: a tag, an offset, runs with
  fonts, line ends are carriage returns), a "file rebuilt" sign from the directory's
  housekeeping record.
- **Experiment rejected three hypotheses.** (1) The batch ORS+ORB+ORG+PIO does NOT exhaust the heap:
  it is not about the number of modules but about their weight; ORP is what brings it down. (2) The asterisk after MODULE does not
  shrink the code but GROWS it: 34 words with checks, 38 without: `version := 0` turns on
  RISC-0 mode as a whole, and it reserves eight words at the start of the module. Two effects
  at once; this became the content of a lab rather than being hidden. (3) **The scan-code typist
  did not type the closing parenthesis**: the digit table started from the wrong character,
  `INC(i END` went into the file, and the file was still created without complaint.
- Protection against the last one: the test types text through the real editor, saves it,
  reads the file back from disk and compares it character by character.
- The list of lab numbers in the handbook builder is now read from web/labs.js instead of being hard-coded.
- Labs 10–12 are not done and are impossible in the browser: #10 needs a large amount of compiler
  edits, #11 rebuilding Verilog on the host, #12 waits for the second machine.
- Finding 31.

### 22:40 — labs with tooling as a batch job
- The user's idea: some labs could run in Cozystack. Right: the ones that
  edit the processor and the compiler are not interactive; they are a batch workload, "submit an edit,
  get a verdict".
- `deploy/Containerfile` (debian:trixie-slim + Verilator, g++, python3, node, 863 MB),
  `deploy/lab.sh` (the edit is submitted as the /work directory and overlaid on the tree),
  `deploy/k8s/lab-job.yaml` (the edit via a ConfigMap, an initContainer lays the keys
  back out into paths, backoffLimit: 0).
- **A side effect: independent confirmation of reproducibility**: the image has Verilator 5.032
  versus our 5.052, and all 298 checks, the 375,776 enumerated forms and the 20,480 decoder
  equivalence combinations pass identically. Until now all the numbers came from one
  simulator of one version.
- `make image-check` requires TWO outcomes: the clean tree passes, a broken edit
  (AND and ANN swapped in aluRes) fails, caught by the logic test and the
  semantic differential (118 and 68 failures). It is not part of `make check`: it needs Docker.
- Pitfalls: (1) Docker on macOS does not see directories outside the shared paths: silently
  "no edits", even though the file is there; I moved the working directory inside the project tree.
  (2) `find` without parentheses: `-o` binds more loosely than it reads.
- This is NOT a Cozystack package but an ordinary Kubernetes job. The image was not published,
  was not run in a cluster, and the manifest deliberately says `ghcr.io/REPLACE-ME/`.
- Finding 32.

### 23:50 — a pluggable catalog for Cozystack
- The user's idea: a separate marketplace for emulators of never-released
  architectures, unimplemented OSes and languages, as deployable environments.
- **The mechanism already exists.** Roadmap: a community marketplace in 2027 Q1,
  the proposals in `cozystack/community` are open and not merged; the console relies on dynamic
  discovery via ApplicationDefinition; the precedent is `ccp`. In the tree: PackageSource,
  ApplicationDefinition, `cozypkg tap/untap` (connecting a third-party source;
  the official ones cannot be disabled, there is a protective label), `cozypkg validate` for an EXTERNAL
  repository, the internal/marketplace package.
- The chart reference name: `<source>-<variant>-<component>`, dots turned into dashes
  (internal/marketplace/naming).
- Created `~/projects/forgotten-systems/marketplace`: sources/ + packages/apps/oberon-lab
  + packages/system/oberon-lab-rd. `cozypkg validate .`: 0 errors, 0 warnings.
- **Checked for misses**: replaced a reference name with a nonexistent one, and the validator caught
  the dangling reference. So it really does read our objects.
- **A side finding for the platform**: `helm lint` version 4 complains `invalid icon URL`
  about ALL Cozystack charts (nats, redis, kafka, mongodb: each has exactly one such
  error). This is a divergence of helm 4 from their own convention (/logos/... is resolved inside the
  chart in hack/update-crd.sh). Consequence: `cozypkg validate --helm-lint` on helm 4
  is currently unusable for both their own catalog and a third-party one.
- Images were not published, nothing was pushed to OCI, nothing was run in a cluster:
  REPLACE-ME everywhere on purpose.
- Finding 33.

## Next step
`make check` as a whole (about 8 minutes), then L1/P1 from BACKLOG.md.

### 24.09 — the catalog rebuilt following the cozymarketplace project

Read both projects in `cozystack/community` (`cozymarketplace` by @kvaps and
`cozymarketplace-supplementary` by @IvanHunters); both are already in `main`. Checked them not against
the text but against the code: the `PackageSource`/`ApplicationDefinition` types, `cozypkg`
(`index.go`, `tap.go`, `validate.go`, `push.go`), the reconcilers, the console.

**The catalog is split into three repositories** in `~/projects/forgotten-systems/marketplace`:
`repos/machines` (emulators, labs, the handbook), `repos/languages`
(environments for languages), `repos/images` (boot images for KubeVirt).
The unit of installation is a repository, as the project requires; each has its own
OCI artifact and its own entry in the `index/` meta-index.

**The discovery chain was verified with the real cozypkg:** `search` shows three
entries, `tap forgotten-systems-machines` resolves the short name to
`oci://…:v0.1.0` with the version from the entry. It fails only because `flux` is not in PATH.

**New parts:**
- `handbook`: documentation installed next to the application; works even without
  building an image (pages right in the values, stock nginx);
- `workbench`: a meta-application: a parent chart renders `HelmRelease` objects for
  components of the same repository (the `harbor` idiom);
- `langpack`: an environment for a language: a one-off run or a persistent environment;
- `machine-images`: publishing images to `cozy-public` with collision protection;
- `tools/gen-appdefs.py`: the catalog descriptions are generated from the charts'
  `values.schema.json`; schemas are not written by hand;
- `tools/check.py`: 35 checks, 9 of them mutations.

**Key findings (all in `docs/FINDING-34-marketplace-architecture.md`):**
- the meta-index entry schema is closed (`UnmarshalStrict`) → entry types can be expressed
  only with tags; this is not a choice but a constraint;
- the KubeVirt architecture list is closed (`architectureConfiguration`: exactly
  amd64/arm64/ppc64le/s390x) → a new architecture cannot be added by a package;
- **six golden-image annotations are written and read by nobody** (zero
  matches across the whole tree outside the template that writes them; both consumers
  take only the PVC name); worth filing an issue upstream;
- golden image names are a flat cluster-wide namespace, so a third-party package
  can silently overwrite a platform image; there is no protection upstream, we built our own;
- a component without an `install` block is not installed as a release: that is the
  application template;
- all 100 platform sources have exactly one variant; a second one would send the catalog's
  references into the void;
- `ApplicationDefinitionDashboard` has no field for documentation.

The old top level of the catalog (`sources/`, `packages/`) was removed: it is fully
duplicated in `repos/machines`; a copy is in the scratchpad.

Nothing was published, I did not go into a cluster (the context is a tenant one,
cluster-scoped objects cannot be created there anyway). Registry, images and signatures are
`REPLACE-ME`. Findings: 34.

## Current state (rewrite)
- **Catalog:** `~/projects/forgotten-systems/marketplace`: three repositories,
  a meta-index, a description generator, a set of checks. `make check`: 35/35 green,
  `make validate`: zero errors for each repository (the images one has one
  deliberate warning: the component is privileged).
- **Tools:** `cozypkg` built into `/tmp/cozypkg` (from `~/projects/cozystack`),
  helm 4.2.3; `flux` and `cosign` **are not installed**, and without them publication
  and signing cannot be checked.
- **Not done:** nothing pushed to OCI; container images not built;
  machine boot images not built; not tested on a cluster.

## Next step
File an upstream issue about the unread golden-image annotations
(`vm-default-images.cozystack.io/*`): of all the findings this is the only one that affects
the platform's users themselves, not just third-party catalogs.

### 24.09 — publication, the cluster and the start of the QEMU target

**Published.** The repository was renamed to `paleocomputing` (English subtitle
*experimental computer archaeology*: retrocomputing is about collecting, ours is
about experiments). The series site is on GitHub Pages: `tym83.github.io/paleocomputing`, deployed
via Actions (the classic Pages source can only serve the root or /docs).

Images and the catalog are in `ghcr.io/tym83/paleocomputing/*`, signed with cosign **keylessly**:
the identity is the build process itself. Everything is public, verified by an anonymous download.

**Before publication the Nangate45 cell library was excluded**: its header explicitly
forbids publication. The replacement is Sky130 (Apache-2.0), two lines; not done.

**Three bugs found ONLY on a live cluster**, all following the pattern "the release succeeded,
the application is dead":
1. the source manifest lay outside `packages/` and did not make it into the OCI artifact;
2. the schemas closed the root, while `cozystack-engine` mixes in `_cluster`/`_namespace`
   → Helm rejected the values entirely;
3. nginx with `worker_processes auto` started a worker for every core of the NODE (96 of them),
   did not fit in 64Mi → OOM in a loop. The stock autotune does not help: it edits the config in
   place, and the root is read-only.

Each is closed by a check with a mutation. Catalog checks: **50**.

**State on the cluster (tenant-paleo, context admin@workshop):** the machine works,
`/lab.html` is served (200, 12019 bytes). The handbook waits for a re-tap to v0.1.3.

**The QEMU target is started** (`qemu/`, our own build: QEMU and libvirt reject AI-assisted contributions,
naming Claude explicitly). Written: the decoder, the processor state, translation of 16
operations, division, interrupts, the board, the ports. `qemu-system-risc5` builds with one
command in a container.

**Checked against the hardware:** 16 registers, 4 flags and H agreed with the ALU model taken from
RISC5.v. The check `make -C qemu diff` can go red.

Bugs in the target: a clean build failed where an incremental one passed (no prototype
for the generated decoder); the ROM was at the wrong address and four times larger (the hardware has
512 words); the processor was created but **did not execute**: without `realize` its thread is not
started; **the address bus is 24 bits**, the hardware drops the upper bits, and without truncation
the ports are unreachable.

**A fork of KubeVirt is NOT NEEDED.** Found a standard hook point: the `OnDefineDomain` hook
rewrites the machine description, and `SharedComputePath` on its PVC mounts the volume
**inside compute**, where libvirt runs. One question is open: will libvirt accept
an unfamiliar architecture (`virArchFromString` does not fail on it, it returns NONE).

## Current state (rewrite)
- **Site:** `tym83.github.io/paleocomputing`: live, the lab and the handbook.
- **Catalog:** three repositories, tags v0.1.0…v0.1.3, the latest is clean.
- **Cluster (production):** tenant `tenant-paleo`, catalog v0.1.3, the machine and
  the handbook work. Do not touch.
- **Sandbox:** tenant `tenant-sandbox`, access via `~/claude2-sandbox.kubeconfig`,
  cheat sheet `~/claude2-sandbox-HOWTO.md`. The `build` VM: 8 cores, 16 Gi,
  external address 77.42.12.137 via the LoadBalancer `build-ssh` (port-forward does NOT
  reach it: the connection is bridged). Login `ssh -F <scratchpad>/sandbox/config stand`.
- **QEMU:** the target is complete: the core checked step by step over 1.5 million instructions, disk over SPI,
  screen (the buffer matched byte for byte), keyboard, mouse. No floating point.
- **libvirt:** a patch in 5 places (`qemu/libvirt/patch_libvirt.py`), checked on
  10.0.0 and 11.9.0. The domain is defined and runs.
- **virt-launcher:** our own image `virt-launcher-risc5:v1.8.4` built on the bench,
  Oberon works inside it. NOT pushed to a registry.
- **KubeVirt:** the hook `kubevirt/onDefineDomain.py` checked on a live
  libvirt. No fork needed.
- **Git:** work on the branch `feat/risc5-virtual-architecture`, 11 commits with the
  trailer. ⚠ origin/main has 21 commits without `Assisted-by: LLM`; the decision to
  rewrite them is the user's.

## Next step
The main work is done. Still open: floating point in QEMU, translating the handbook
(8 chapters) and the site; live migration of machines on our image has not been checked.

### 24.09 — the catalog works completely on the cluster (v0.1.3)

Both pods `1/1 Running` with no restarts, `worker_processes 1;` confirmed
from inside the container, both pages are served, the category is in place in the console.

The path took three versions, each closing a bug invisible from the desk, all in
`docs/FINDING-35-cluster-bugs.md`. The common signature: the release succeeded, the application is dead.

**Live:** tap v0.1.3, three ApplicationDefinitions, `forgotten-machines-rd` in
cozy-system, tenant `tenant-paleo` with the machine and the handbook.
