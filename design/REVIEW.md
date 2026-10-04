[Русская версия](REVIEW.ru.md)

# Design review: summary of findings

Five independent reviewers. Status: 1/5 received.

---

## Reviewer 5: scope, timeline, critical path ✅

### Verdict on the timeline
**2–4 weeks is fantasy, off by a factor of 4–6.** The real estimate by stage: **225–360 hours**.
Adjusted for a neural network writing the code (it speeds up writing by 30–40% and **does not speed
up debugging**): 180–280 h. At 15 h/week that is **15–24 weeks**.

The breakdown, where the estimate falls apart:
- stage 1 (skeleton): 20–30 h if we take Wirth's `RISC5.v`, **60–90 h** if we write our own, **and this decision has not been made in the design** (new question Q12)
- stage 3 (boot): the only stage without an upper bound, 10–60 h
- stage 5 (inference port): **45–90 h**, the biggest piece
- stage 8 (release): one table row in the design, really 40–55 h

### 🔴 A contradiction I did not notice
**Weight quantization versus a floating-point FMAC.** §7 requires quantizing the weights, otherwise the model
does not fit in 1 MB next to the OS and the framebuffer. §5 builds the speedup on a **floating-point**
FMAC. If the weights are one byte each, a floating-point FMAC does not work on them: unpacking to float is needed
on every access, and it eats the gain.

**Either the weights are fp32 and do not fit, or they are int8 and FMAC is the wrong instruction.** This would
have to be resolved in the middle of the project, under load.

### 🟢 A bonus I missed
The Oberon compiler **already** emits a software bounds check. So the baseline
exists for free, and not two points are measured but **three: no checks / software /
hardware**. This is stronger than the declared differential measurement and cheaper at the same time.

### The critical path is drawn wrong
§10 draws a strict chain 0→8. In fact **the two most valuable pieces do not depend on it**:
- **the inference port** needs neither the RTL, nor the SoC, nor WASM, only a working Oberon, which exists today (`pdewacht`). It can run in parallel from day one
- **synthesis (yosys/nextpnr → cells, Fmax)** does not depend on booting the OS. **Half of the C3 numbers can be obtained on the second day of the project.** In the plan it is seventh
- half of the compiler work is done inside the stock emulator and does not wait for the RTL

### My risk rankings are wrong
- **Bootstrapping is not scary**: for Project Oberon it is a standard mode of operation, not a feat. The risk in §11 is overstated
- **Q6 (Verilator speed in WASM) is not "the most dangerous"**; it is the quickest to check, and those are different things. The reviewer's estimate: natively a few million cycles/s, in WASM 0.5–3 million → a slowdown of 10–50× against 25 MHz. Interaction will be sluggish but alive. **Q6 will almost certainly pass**

### Hidden work: 70–110 h not accounted for in the plan
a RISC5 assembler (8–16) · a fork of the reference ISS for lockstep (6–10) · **a retire detector in the RTL
(6–10)** · building/editing the disk image (8–16) · **the yosys/nextpnr synthesis flow (10–20): it is
not in §10 at all, and C3 rests on it** · three mouse buttons in the browser (4–8) · COOP/COEP and
hosting (4–6) · the reproducibility promised in §1 (8–16) · debugging harness (8–12) ·
licenses for Wirth's materials (2–4) · **the article text (20–30)** · page design (10–15)

Plus: item 3a in the backlog (the embedding component, 2–3 days) is marked `next` **separately** from
episode 1, but episode 1 does not exist without it, and those days are not budgeted in the "2–4 weeks".

### 🔴 The T0 sketch in §8 is wrong
`rtl_step(dut)` as "one retire cycle": **MUL, DIV and all floating-point arithmetic in RISC5 are
multi-cycle**. States cannot be compared every cycle. An instruction completion signal
and buffering of memory writes are needed. (I suspected this and raised it as an open question
in HARNESS.md; confirmed.)

### New reconnaissance questions (more important than my Q1–Q6)
| # | Question | What it threatens |
|---|---|---|
| **Q7** | Does `RISC5.v` go through yosys/nextpnr at all? | **kills C3 entirely**: without area and Fmax only cycles remain |
| **Q8** | Do the revisions of the RTL, the disk image and the compiler sources match | a mismatch will show up at stage 3 as a "mysterious hang" |
| **Q9** | 🔴 **Are FAD's u/v bits taken by FLT/FLR (float↔int conversions)?** | **a direct threat to §3**: the claim "32 free slots" and the FMAC encoding are built on an analysis that did not take FAD's modifiers into account |
| **Q10** | What instruction retirement looks like in the RTL | without it T0 cannot be written |
| **Q11** | What the code generator emits for the bounds check now | the baseline of experiment B |
| **Q12** | Take Wirth's RTL or write our own core | a decision worth a month and a half, not made |
| **Q13** | 🔴 "Editing the ISA on the page": how exactly? | §11 itself rates "impossible" as **highly likely**, and this is **the headline act of the episode**. A real option: **a parameterizable decoder with the instruction enabled by a run-time flag**, more honest and almost as spectacular. Decide **now**, not at stage 8 |
| **Q14** | Licenses for the RTL, the image, the weights | Wirth's materials have their own notice, not an OSI license |

### Reconnaissance in one evening (3–4 h) that closes three plan killers
1. `verilator` on `RISC5.v` as is, natively, a trivial loop → **cycles/s**. Below ~300 thousand/s, the honest model is dead as an interactive one
2. `yosys -p 'synth_ice40' RISC5.v` → **passes or not, how many cells**
3. grep the decoder for FLT/FLR → **is the encoding really free**

### 🔴 The main recommendation: cut C2 entirely
| Claim | Verdict |
|---|---|
| C1: the whole stack in the browser | **keep**: this is the episode |
| C2: FMAC speeds up inference | **cut, move to episode 2**: the most expensive, the riskiest, the least connected to the thesis |
| C3: the cost of hardware bounds checking | **keep**: the only real research result |

Saving: **70–130 hours** (about half the project). Going out together with C2: stage 5, stage 6,
test T5, the memory budget in §7, quantization, the contradiction above.

What remains: real Verilog cycle by cycle in a tab · Oberon boots · a "rebuild the
system" button with a counter · hardware bounds checking measured in cycles/cells/Fmax ·
the measurement workload is **the system rebuilding itself** (the design in §6 itself calls it
the best one; without inference it becomes the only one, and the reviewer has nothing to tear apart).

"The article is not weaker than the original; it is **sharper**, because it has one thesis, not three."

### 🔴 There is not a single exit point, which is fatal for a side project
| Point | Time | Minimal publishable result |
|---|---|---|
| CP-0 | ~1 wk | "How much free space there is in the instruction set of Wirth's processor" + 3 reconnaissance numbers |
| CP-1 | ~3–4 wk | "We ran the processor against its own emulator instruction by instruction": a methodological article about differential testing |
| **CP-2** | ~6–8 wk | **"Real Verilog, cycle by cycle, boots an OS"**: already an episode |
| **CP-3** | ~9–11 wk | The same in the browser + "rebuild the system". **Flagship-lite; publish even if nothing further happens** |
| **CP-4** | ~13–16 wk | + the cost of hardware bounds checking. **The target** |
| CP-5 | — | inference + FMAC = **episode 2** |

**Rule: for CP-2 and CP-3 the text must be written in advance**, otherwise the exit point does not
work: at the moment the project closes there will be no strength to write an article from scratch.

### The main danger (one)
**The decision to put the language model into the first episode.** The most expensive (70–130 h), the most
poorly estimated (Oberon-07 without address arithmetic means rewriting, not porting),
carrying its own class of risks (numerical divergences), internally contradictory
(quantization vs a floating-point FMAC), and at the same time **nothing depends on it**: neither C1 nor C3.

"A side project is not killed by complexity. It is killed by the timeline tripling with nothing
to show. Enthusiasm has a half-life of a few weeks; this plan is designed for months."

### The proposed redefinition of episode 1
"Wirth's processor, cycle by cycle, in your tab, and what hardware memory safety
really costs". C1 + C3, 130–190 h → **9–13 weeks** at 15 h/week.

If an episode is needed **really within 2–4 weeks**, that is a different episode: the ready `pdewacht` via
Emscripten + the embedding component, Oberon rebuilds itself, the thesis about 10,000 lines.
No RTL of our own and no research number. **It would be more honest to call it episode 0.**

---

## Reviewer 1: RTL and hardware ✅

Checked against the primary sources: `RISC5.v` (31.8.2018), `RISC5Top.v`, `Registers.v`,
`FPAdder/FPMultiplier/FPDivider/Multiplier/Divider.v`, `PROM.v`, `VID.v` from Wirth's site,
plus `ORG.Mod`, `Kernel.Mod`, `Modules.Mod`, `Display.Mod` and `pdewacht` (`risc.c`, `risc-fp.c`).

### 🔴🔴🔴 B-1. The chosen FMAC encoding is an EXISTING instruction

`RISC5.v:88`: `assign FAD = ~p & (op == 12);`: **q, u, v are not checked**.
`FPAdder.v:2`: `// u = 1: FLT; v = 1: FLOOR`.

→ **F0 with bit 28=1 and op=12 is FLOOR (float→int).** And the compiler emits it:
```oberon
(* ORG.Mod:928 *) U = 2000H; V = 1000H;
PROCEDURE Floor*(VAR x: Item);
BEGIN load(x); Put1(Mov+U, RH, 0, 4B00H); Put0(Fad+V, x.r, x.r, RH) END Floor;
```
**Every `ENTIER` in Oberon is my "free" slot.**

And the specific encoding from §5 (`0001|a|b|0000|…|0000|c`): per `RISC5.v:113`, with q=0,u=0
the result = `C0` regardless of v → **on stock RISC5 it executes as `MOV a, Rc`**,
the most frequent instruction in the ISA. Silently.

**The design contradicts itself on one page:** the u=1 table contains `MOV a,NZCV`,
which requires v=1, and right there it claims "in F0 bit 28 is always 0".

| Prefix | op | What it really is |
|---|---|---|
| `0001` | 12,13 | **FLOOR**: emitted by the compiler |
| `0011` | 0 | **MOV a,NZCV** (INFO = 0x53, T1.8 is right) |
| `0011` | 8,9 | ADC / SBC |
| `0011` | 10,11 | UMUL / unsigned DIV |
| the other 24 | — | **not free but aliases** of the base operation |

**Free slots: zero.**

🟢 **The only PROVABLY free space is bits `IR[15:4]`.** `RISC5.v` does not read them for F0
at all, and `ORG.Put0` always writes zeros there:
`code[pc] := ((a*10H + b)*10H + op)*10000H + c`.
→ `FMAC = {0000, a, b, op, IR[15:8]=subopcode≠0, 0000, c}`. There is a precedent in the ISA itself:
RTI/STI use `IR[4]`/`IR[5]` inside F3.

**A mandatory test:** all 256 combinations of {IR[31:28] × op} with random operands:
the old and new cores match bit for bit, except for the new encodings. Half an hour, catches the whole class.

### 🔴🔴🔴 B-2. C2 is arithmetically unreachable. FMAC saves ONE cycle out of thirty-eight

Latencies from the sources (they match reviewer 2):
FAD/FSB **4** · FML **26** · FDV 27 · MUL/DIV 34 · LD/ST 2 · everything else 1.
Wirth's FP multiplier is **a sequential shift-and-add over 24 steps**.

The dot-product loop: `LD 2 + LD 2 + FML 26 + FAD 4 + ADD/ADD/SUB 3 + B 1 = 38`,
of which FML is 68%.

An honest fused FMAC (run the FPMultiplier sequentially, then the FPAdder) = `1+25+3 = 29`
versus `26+4 = 30`. **The saving is one fetch cycle. 38→37 = 1.027×.**
An ideal single-pass MAC → ~1.09×.

🟢 **2× is achieved in exactly one way: replacing the sequential `FPMultiplier` with a
pipelined one** (on an FPGA, a DSP block, practically free). The loop → ~12 cycles = **3.2×**,
and only then does FMAC on top of it begin to mean something.

🔴 **The justification in §5 is false:** "eliminates the intermediate register write with a flag
update": the flags (`RISC5.v:159-160`) are pure combinational logic from `regmux` and **cost no cycles at all**.

🔴 **"This takes a minute" (§1)**: FMAC requires an FSM to run the two
FP units sequentially, changes to the stall tree, the `aluRes` mux, the decoder, a new builtin in ORG and
**rebuilding the compiler inside the system**.

### 🔴🔴 B-3. A trap through vector 0x04 is impossible in principle

`RISC5.v:149`: `intAck = intPnd & intEnb & ~intMd & ~stall;`
1. **Maskable** (`intEnb`, cleared by CLI): a bounds check that can be turned off by one instruction is not a check
2. **`~stall`**: not accepted during a multi-cycle operation → cannot be precise inside LD/FML
3. **`~intMd`**: inside a handler it is **silently swallowed**
4. 🔴 **`SPC` is not readable by software.** The ISA has no `MOV a, SPC`. A handler **physically cannot find out where the event came from**. Plus `SPC` holds the *next* PC, not the address of the faulting instruction. Plus there is no nesting

🟢 **The right solution is already in the sources.** Oberon traps are software traps, via F3:
```oberon
(* ORG.Mod:100 *) PROCEDURE Trap(cond, num) BEGIN Put3(BLR, cond, ORS.Pos()*100H + num*10H + MT) END
(* Kernel.Mod:263 *) Install(SYSTEM.ADR(Trap), 20H);   (* trap vector = address 0x20 = MT *)
(* Kernel.Mod:256 *) u := SYSTEM.REG(15); SYSTEM.GET(u-4, v); w := v DIV 10H MOD 10H;
```
→ **CHK should do in hardware the same as BLR: `R15 := PC+4; PC := R12`**, with the trap number
in the same `IR[7:4]`. No new vector, non-maskable, works inside handlers,
`Kernel.Trap` can already decode it. **Two lines in `pcmux0`, one in `regwr`.**

### 🔴🔴 B-3(c). Experiment B is set up backwards

Bounds checks in ORG are always emitted (`check := v # 0`, v=1 for RISC5), plus checks for NIL,
types, division, ranges. The cost: **2 cycles and 2 words** per indexing, +2 cycles for
open arrays (the length is already passed as a hidden parameter: **Oberon already has a Burroughs
descriptor, only a software one**).

🟢 **The right setup:**
1. Patch `check := FALSE`, rebuild the compiler and the system → **a measurement of the cost of
   safety on a real OS without a single line of RTL**. A publishable number
   that nobody has given. **Available in the first week.**
2. Only then CHK: how many of the 2 cycles it gives back. **The ceiling is 1 cycle and 1 word.**
3. B2 (descriptors): this is where there is something to say, because moving the already existing
   software descriptor into hardware is exactly the Burroughs/CHERI argument

🔴 CHK in the F0 form is useless (the length is a constant) → **an F1 form is needed**. And `Ra = Ra` will clobber
N/Z (`regwr = ~p & ~stall` writes the register unconditionally) → "do not write" has to be added in the decoder.

### 🔴 C-4. Wirth's RTL is tied to Xilinx primitives. yosys/nextpnr/ASIC will not accept a single line

| File | Construct |
|---|---|
| `Registers.v` | **`RAM16X1D`** ×32×2: the whole register file is built from a Xilinx primitive |
| `RISC5Top.v:112,119` | **`IOBUF`** ×40 + an internal tri-state bus `inout [31:0] SRdat` |
| `VID.v` | **`DCM`** with `(* LOC = "DCM_X1Y1" *)` |

→ **§6 "area from yosys ✅, Fmax from nextpnr ✅" will not work on a single line.**
This will be discovered at stage 6–7, exactly when without it there is no C3.
Fixed with ~50 lines in an evening, **but it must be in the plan**.

🟢 **Incidentally: my concern about the pipeline/RMW timing is unfounded.** The third read port
for FMAC **already exists** (`Registers` is triple-ported, `dout0 = A` for ST). **RISC5 has no pipeline
at all**: the machine is single-cycle with stalls, `IR` is held during a stall → a read-modify-
write of `Ra` is trivially safe.

### 🔴 C-5. The differential bench: five concrete breakages

1. **"Step" ≠ "cycle"**: it will diverge on the very first `LD`. An exported retire strobe is needed
2. 🔴 **The reference has NO interrupts at all**: no `SPC`, no `RTI`, no `irq`; grep returns nothing. **T1.7 has nothing to compare against**
3. **Different PC widths**: the RTL has `reg [21:0]`, reset to 0xFFE000; the emulator has `ROMStart 0xFFFFF800`, a 32-bit word index. They match only because of PROM aliasing. **Compare modulo 2²²**
4. 🔴 **The reference writes to memory things that do not exist in hardware**: `risc.c:130-133` puts `"Sizg"` + the screen dimensions at `DisplayStart`. **A byte-wise RAM comparison will fail at step zero**
5. `risc_run` counts **instructions, not cycles** → all C2/C3 numbers come only from the RTL, with nothing to compare against

**What else is missing from §8:**
- **coverage** (`verilator --coverage`): directed tests without a coverage metric are not enough
- **assertions**: "intAck never during stall", "no more than one stall source", "regwr does not coincide with wr", "ben only on F2"
- 🔴 **BL/BLR clobbers N and Z**: `regwr = … | (BR & cond & v & ~stallX)` → every taken BL writes R15 → N:=0, Z:=0. **T1.2 mentions only LD**
- **unaligned access**: `SRadr = adr[19:2]`, the two low bits are silently dropped
- **byte lanes** (`inbus1`/`outbus` + `SRbe`)
- **an interrupt during a multi-cycle operation** (a delay of up to 34 cycles on DIV)
- 🔴 **T1.4 must pin down Wirth's behavior, not IEEE**: denormals and zeros collapse to 0, division by 0 → saturation, there is no NaN class. The reference is `risc-fp.c`
- 🔴 **T5: FMAC WILL round differently.** This is not a risk, it is a definition: the FPMultiplier rounds, then the FPAdder rounds again. Decide before coding

### 🟠 S-6. The address map: complete, plus significant omissions

| Address | What |
|---|---|
| `0x000004` | interrupt vector |
| `0x00000C` | `MemLim` (`Kernel.Init: SYSTEM.GET(12, MemLim)`) |
| `0x000018` | `heapOrg` (`SYSTEM.GET(24, heapOrg)`) |
| **`0x000020`** | **software trap vector = MT (R12)** |
| `0x0E7F00` | DisplayStart, 98,304 bytes |
| `0x0FFFC0…FF` | devices, `ioenb = (adr[23:6] == 18'h3FFFF)` |
| `0xFFC000…FFFFFF` | PROM window **on the code bus** |
| **`0xFFE000`** | **reset address**, `StartAdr = 22'h3FF800` |

Devices (0–9): timer · `{btn,swi}`/LED · RS232 data · RS232 status/speed ·
SPI data · SPI ctrl · `{rdyKbd, dataMs}` · kbd data · GPIO data · GPIO tri-state.

**What is wrong or missing in §4:**
1. The address space is **24 bits**, the PC 22. Software writes −64, hardware sees `0xFFFFC0`, and the emulator compares with `0xFFFFFFC0` → **the models diverge on aliasing**. The contract must pin down how many bits are decoded
2. 🔴 **The PROM hangs only on the code bus. `LD` from the PROM is impossible.** §4 has no code/data separation at all
3. The PROM **aliases every 2 KB**
4. **The mouse and keyboard share one word**, the three buttons are packed into `dataMs[27:0]`; §4 draws them as two devices
5. **GPIO (words 8, 9) is missing completely**
6. 🔴 **The framebuffer is stored bottom-up** (`vidadr = Org + {3'b0, ~vcnt, hword}`). A naive model gives an upside-down screen: "it seems to have booted, but upside down", and **eats a day**
7. 🔴 **The video controller steals cycles from the processor**: `SRadr = vidreq ? vidadr : adr[19:2]`, `.stallX(vidreq)`. → my "Verilator cycles are more precise than a real board" is **wrong**: video DMA is not noise but part of the machine
8. **RS-232 is not optional** for T-BOOT-1: the loader reads word 1 to choose the source
9. There is **exactly one** interrupt: the 1 kHz timer, hardwired

### 🟠 S-7. The clocking/reset requirements are insufficient, and Wirth's code violates all three

**Violations of "one domain":**
- `RISC5Top.v:145`: `always @(posedge CLK50M) clk <= ~clk;`: **a clock from a flip-flop output**
- `RISC5Top.v:68`: `PROM PM (.clk(~clk))`: **an inverted clock**
- 🔴 `RISC5Top.v:103`: `assign SRwe = ~wr | clk;`: **the clock as a combinational data signal**. Breaks STA, formal verification and any ASIC flow
- `VID.v`: the `pclk` domain (×3 = 75 MHz) and **a multi-bit crossing without synchronizers**: a real CDC bug in the original, and an **internal** one, while §4 talks only about "everything external"

**Registers without reset:** `IR`, `N`, `Z`, `C`, `OV`, `H`, `SPC`, `stallL1`, `irq1`;
`Multiplier.P`, `Divider.RQ`, `FPMultiplier.P`, `FPDivider.R/Q`, `FPAdder.*`;
`cnt0`, `cnt1`, `gpout`, and **`rst` itself is a register without reset**.
`Registers.v`: `RAM16X1D #(.INIT(16'h0000))` is zeroed by the bitstream; **in silicon that will not happen**.

**What §4 lacks but is mandatory for silicon:** SDC constraints (the critical path is known
in advance: `B + sext(off)` → external asynchronous SRAM → `inbus` → `regmux` in one cycle) ·
DFT/scan · a caveat that 1 MB of SRAM will not fit on a shuttle · the tri-states must move into the pads ·
**the PROM is exactly preloaded memory; the problem has simply moved**

🔴 **Verilator is two-valued and fundamentally incapable of detecting a missing reset.**
So the requirement "all registers are reset explicitly" **cannot be checked with the chosen tool**.
Needed: `--x-assign unique --x-initial unique` with a random seed, or a four-valued
simulator, or a formal reset check via SymbiYosys. §8 has none of this.

### 🟠 S-8. The u=1 table in §3 is incomplete, and what is missing is the source of B-1
Missing: **DIV → unsigned division** (`.u(~u)`) and **FAD/FSB → FLT(u=1) / FLOOR(v=1)**.
The second is exactly the blocker. "Checked against RISC.v": **the check was not done**.

### 🟠 S-9. §5 "minimal intervention" is underestimated
`ORG` is a generator on a register stack; `Put0` **always** treats `a` as a pure output.
FMAC with `Ra` as a source violates the invariant: the accumulator must live below `RH` and not
be allocated via `incR`. This is a change to the allocation discipline (`load`, `incR`, `CheckRegs`).
Plus: **every ISA variant needs its own compiler and its own image**, built on the
corresponding hardware; T-BOOT-3 is run for each variant.

### 🟢 S-10. The memory budget can be computed now; there is no reason to block on Q4
RAM 1 MB · framebuffer 98,304 bytes · stack `stackOrg := heapOrg`, `stackSize = 8000H` ·
`heapLim := MemLim`. What remains for everything is **~950 KB minus the framebuffer**; the occupied part
is measured with `System.Watch` in a live system in twenty minutes.

### Recommendations for §10
1. Add to stage **0**: (a) an experiment over all 256 {prefix × op} combinations: a table of "what is really decoded"; (b) **de-Xilinx-ing the RTL** (Registers/IOBUF/DCM), otherwise stages 6–7 have no tools; (c) **measuring `check:=FALSE` vs `TRUE` on the reference emulator: a ready number for C3 without any RTL, in the first week**
2. **Reformulate C2**: measure "fusion" (~3%) and "replacing the sequential FP multiplier" (several times) separately. Both are honest, and together the text is more interesting
3. **Turn experiment B around**: the base is the system with the checks removed; CHK measures the return of what is already being spent. Implement CHK as a hardware `BLR → R12` with the number in `IR[7:4]`
4. **Rewrite T0 in §8**: a retire strobe, a 22-bit PC mask, excluding the emulator's magic at DisplayStart, a separate branch for interrupts (there is no reference), coverage, assertions, `--x-initial unique`
## Reviewer 2: compiler and toolchain ✅

The reviewer downloaded the real sources (`ORS/ORB/ORG/ORP`, `Kernel/Files/Modules`, `System.Mod`)
from projectoberon.net and `RISC5Verilog.zip` (RISC5.v, FPAdder.v, FPMultiplier.v, Multiplier.v,
Divider.v, FPDivider.v, RISC5Top.v) and checked them line by line. Below, in decreasing order of severity.

### 🔴🔴 1. C2 is unreachable. Proven by arithmetic over the RTL

The cost of operations **from the RTL itself**:

| operation | cycles | source |
|---|---|---|
| **FML** | **26** | `FPMultiplier.v:23` (`stall = run & ~(S == 25)`) |
| FDV | 27 | `FPDivider.v:26` |
| integer MUL / DIV | 34 | `Multiplier.v:14`, `Divider.v:14` |
| **FAD / FSB** | **4** | `FPAdder.v:123` |
| LD / ST | 2 | `RISC5.v:168` |
| everything else | 1 | |

The inner dot-product loop per the actual code generation of
`ORG.Index`/`RealOp`/`Store`/`For1`/`For2` with bounds checks enabled:
**≈61 cycles per iteration**, of which FML is 26 (43%).

**FMAC removes exactly FAD = 4 cycles → 1.07×, not 1.3–2×.**

The absolute ceiling for optimizing everything except the multiplication: 61/26 = **2.35×**. So even
after removing loads, address arithmetic, bounds checks and loop control completely,
2× is barely reachable.

The reason the design did not account for: **the Oberon code generator has no register
allocator.** The `Item` model (ORG.Mod:26–36) and the `load`/`Store` pair reload the accumulator
from memory **on every statement**. The compiler cannot keep the sum in a register across an iteration
and will not learn to without rewriting ORG.

**→ Reformulate C2:** the bottleneck is not the absence of FMAC but **the sequential
shift-add `FPMultiplier` at 26 cycles**. Replace it with a pipelined one (3–4 cycles) → 61 → ~39
cycles = **1.56× without a single line in the compiler**; together with FMAC and removed checks,
an honest ~2×.

The story comes out stronger: **"it was not about the instruction, but about Wirth's multiplier being
sequential"**. FMAC remains a second, known-to-be-small result.

### 🔴🔴 2. §3 is factually wrong: there is NO free space in the encoding

`RISC5.v:68–71`: `p=IR[31], q=IR[30], u=IR[29], v=IR[28]`.

- Format F0 is **`00uv`**, not `00u0`. **Bit 28 is already used.**
- `ORG.Floor` → `Put0(Fad+V, …)`, `ORG.Float` → `Put0(Fad+U, …)` (ORG.Mod:928–934), that is,
  float↔int conversions sit in FAD's modifiers. Exactly question Q9, confirmed.
- The decode does not look at bit 28: `assign FAD = ~p & (op == 12);`
- All 16 values of `op` are taken. Only **the don't-care bit `v` of 14 of the 16 operations** is free,
  and that is **an alias of an existing instruction**, not a free slot.
- 🔴 **RISC5 has no trap on an unknown instruction at all.** Any 32-bit word is a valid instruction.

**Consequence:** the old RTL, encountering my encoding `0001|a|b|0000`, **will silently execute
`MOV`**. Without a diagnostic. And the T0 difftest **will not catch it** if the patch is applied to one
model: both will be consistently wrong.

**→ Rewrite §3.** Encode FMAC as `op=14, v=1` and **explicitly narrow the decode**:
`assign FML = ~p & (op==14) & ~v;`. In the text: "we reuse a don't-care bit", not
"free space".

### 🔴 3. B1 as proposed gives a ZERO saving

`CHK a, b, c` is register-register. But the `lim` of a fixed-length array is a **constant**
that today `Put1a(Cmp, RH, y.r, lim)` puts straight into the immediate field of F1.
With a register CHK you first need `MOV RH, lim`, then `CHK`: 2 instructions again.

**CHK must exist in the F1 form (a 16-bit immediate limit)**: this is a
requirement, not a detail.

### 🔴 4. Oberon already has bounds checking, and it cannot be turned off

`ORG.Index` (ORG.Mod:271–304) emits `Cmp` + `Trap(10,1)`.
The cost **today: 2 cycles** per indexing of a fixed-length array, **4 cycles** for an
open array.

`ORG.Open`: `check := v # 0`, and `version`=1 always, except for `MODULE*` (RISC-0: without
symbol files and exports, unsuitable for system code). **A build of "Oberon without bounds
checks" does not exist.**

Consequences:
1. B1 measures **replacing a software check with a hardware one**: confirmed
2. The zero baseline has to be **created with a compiler patch** (an option in `ORP.Option` + passing it to `ORG.Open`, ~5 lines), and the article must say that the baseline is not stock Oberon
3. **C3 becomes a three-point measurement**

But the episode gains from this: the number **"what the check costs that every Oberon user
has been paying since 1988 and cannot turn off"** has not been published anywhere and is more interesting than
yet another CHERI estimate.

### 🔴 5. A hardware CHK trap breaks Oberon's diagnostics

`ORG.Trap`: `Put3(BLR, cond, ORS.Pos()*100H + num*10H + MT)`. `System.Mod:396–407` reads
the word at `LNK-4`: the position is in bits 23:8 (16 bits).

In the F0 format bits 23:20 are register `b`, 3:0 register `c`. Only **bits 15:4 =
12 bits** are free → a position up to 4095 characters. **ORP.Mod is 43 KB. The position does not fit.**

Plus: RISC5 has no exceptions at all, only `irq` with `SPC` (26 bits: PC+NZCV). A hardware
CHK must force a `BLR` to R12 writing LNK → a new path in `pcmux`
(`RISC5.v:150`) that correctly interacts with `stall` and `intAck`. **This is not a "cheap variant".**

A small thing: "otherwise `Ra = Ra`" means a register write, and `regwr` (`RISC5.v:127`) updates
N and Z. Better not to write the register at all; then CHK does not spoil the flags, unlike the current CMP.

### 🟠 6. §5 "without changing the parser and the type system" is wrong

**Three modules of four** are touched:

| file | what | size |
|---|---|---|
| `ORB.Mod` | `enter("FMAC", SProc, noType, 153)` | 1 line |
| `ORP.Mod`: **this is the parser**, `StandProc` | a branch with `CheckReal`×3 + `CheckReadOnly`, **and this is also type checking** | 1 branch |
| `ORG.Mod` | a constant + `PROCEDURE FMAC*` with the RH/Store discipline (template: `ORG.Increment`, ORG.Mod:823) | ~10–12 lines |
| `ORS.Mod` | not touched | 0 |

🔴 **A hard limitation:** `ORP.StandFunc` (ORP.Mod:240) overwrites the middle argument:
**a built-in function cannot have three parameters**. `x := SYSTEM.FMAC(a,b,c)` is impossible.
**FMAC must be a statement procedure:** `SYSTEM.FMAC(sum, w, x)`.

And the inference module must import `SYSTEM`, so it becomes "unsafe" as a whole.
This is worth saying out loud in the article, since the episode is about memory safety.

### 🟠 7. Bootstrapping: mechanics that were not in the plan

- **The .smb key** is a checksum of the file (`ORB.Export`). If the interface changed without the `/s` option → `ORS.Mark("new symbol file inhibited")`, compilation fails. Adding `PROCEDURE FMAC*` changes ORG.smb → **`/s` is mandatory**
- **The key at load time** (`Modules.Load`): `res=3: key conflict`. `System.Free ORTool ORP ORG ORB ORS ~` is needed **between generations**; `Free` refuses when `refcnt > 0`
- 🔴 **`Files.Register` overwrites the `.rsc` in place. There are no old versions. A broken new `ORP.rsc` = there is no compiler any more**

The correct order for FMAC (no bricking, the compiler itself does not use FMAC):
```
gen0 (old ORP): ORP.Compile ORS.Mod/s ORB.Mod/s ORG.Mod/s ORP.Mod/s ~
System.Free ORTool ORP ORG ORB ORS ~
gen1: rebuilds itself with the same commands → gen2
compare gen1/*.rsc with gen2/*.rsc byte for byte
```

🔴 **For CHK bricking is real:** from gen1 on, **every** `.rsc`, including the compiler, contains CHK.
The only working compiler requires the new CPU. A bug in the RTL CHK → the system does not build.
**A second copy of the image and a host route are mandatory.**

Two clarifications about the fixed point:
- `.rsc` contains `ORS.Pos()` in every Trap word → any edit of the source changes the bytes. Only **gen N and gen N+1 of the same source** can be compared
- The fixed point proves that the compiler is its own fixed point, **not that it is correct**. A bug in code generation for a construct that does not appear in the compiler itself (and there is almost no FP code in ORP/ORG!) **is not caught at all**. → **T-BOOT-3 is not a test of FMAC**

🟢 **A ready mechanism that should be used:** `.rsc` has a version byte
(`ORG.Close`; `Modules.Mod:67`: `versionkey = 1X`, otherwise `res=4: bad file version`).
Mark modules of the extended ISA as **`2X`** → the old loader honestly refuses instead of
silently executing FMAC-as-FML (see item 2).

### 🟢 8. There are two host routes, and they give a difftest of the compiler

- **pdewacht/project-norebo**: an emulator + a virtual FS + **a static linker for the Inner Core** + `build-image.py`, which builds a fresh `Oberon.dsk` from the sources. B will need ~10 lines in `Runtime/risc.c`
- **fzipp/oberon-compiler**: ORS/ORB/ORG/ORP in Go, **a real cross-compiler**

**The value the design misses:** two independent backends give **a differential test
of the compiler itself**: compare the `.rsc` from native Oberon, Norebo and the Go port on the same
source. Catches code generator editing errors **before** they become an OS hang.
§8 has a difftest only for the CPU, none for the compiler.

**→ The host route is mandatory as CI**; bootstrapping inside the system is a demonstration;
both must converge to identical `.rsc`.

Separately: **`BootLoad.Mod` and `ORL.Mod` are missing** from the published sources (there are 27
modules there). The PROM image is ready-made: `prom.mem` in `RISC5Verilog.zip`; the linker for the inner core is
in Norebo. **This is how question Q2 is closed.**

### 🔴 9. §7 (the inference port) is underestimated several times over

- 🔴 **There is no math library at all.** The PO2013 distribution has no `Math.Mod` (checked against the full list of 27 modules). We need `expf` (softmax), `sqrtf` (RMSNorm), `sin/cos` or `pow` (RoPE). Writing them ourselves on non-standard float means hundreds of lines plus a precision test
- 🔴 **FP is not IEEE.** `FPMultiplier.v`: no denormals, no NaN, Inf only as saturation; round-half-up rounding, not round-to-even. pdewacht's `risc-fp.c` reproduces these quirks
  - T1.4 "denormals, NaN" must be checked **not against IEEE** but against the RTL as the reference
  - **T5 as it stands cannot be implemented**: a comparison with the reference C implementation (IEEE) will **always** diverge, regardless of FMAC. The reference for T5 is a fixed run of the previous build of the same code
- **No unsigned types and no logical right shift** (only ASR and ROR). An xorshift RNG has to be rewritten with ROR + a mask. Bitwise operations only via `SET` + `SYSTEM.VAL`
- **The tokenizer cannot be embedded in the source**: `ORG.maxStrx = 2400` characters of literals per module, `maxCode = 8000` words
- **GC in the hot loop is not a problem, for the opposite reason**: `Kernel.New` simply returns 0 when memory runs out and does not call the GC; GC runs only from `Oberon.Collect` between commands → **inside a long command GC does not run at all**, and any allocation in a loop yields NIL and a trap. **All buffers are static, one `NEW` at startup**

**The memory budget (Q4) is closed:** RAM 1 MB; `Display.base = 0E7F00H`, 96 KB up to `0FFEFFH`;
`Kernel.stackSize = 8000H` (32 KB), `stackOrg = heapOrg`; `MemLim` is the word at address 12,
`heapOrg` the word at address 24 (set by the loader).

**Estimate: 2–3 weeks for §7 alone.** Comparable to the whole rest of the episode.

### 🟢 10. §4 (the address map) is confirmed and refined. Q1 and Q2 are closed

`RISC5Top.v:85–97`: `ioenb = (adr[23:6] == 18'h3FFFF)`: the top 64 bytes, `iowadr = adr[5:2]`:

| word | read | write |
|---|---|---|
| 0 | millisecond counter | — |
| 1 | `{btn, swi}` | LED |
| 2 | RS232 data | RS232 data (startTx) |
| 3 | `{rdyTx, rdyRx}` | bitrate |
| 4 | SPI data | SPI data (spiStart) |
| 5 | spiRdy | spiCtrl |
| 6 | `{rdyKbd, dataMs}` | — |
| 7 | kbd data | — |
| 8 / 9 | gpin / gpoc | gpout / gpoc |

**PROM:** `codebus = (adr[23:14] == 10'h3FF) ? romout : inbus0`; `StartAdr = 22'h3FF800`
(in words) → in bytes **0FFE000H**. Interrupt vector: word 1 = byte 4, confirmed.

Corrections to §3:
- "N and Z on any register write": **correct**
- "H is not saved on an interrupt": **correct**, `SPC` is 26 bits = PC + NZCV
- T1.8: `MOV a, NZCV` returns `{N,Z,C,OV, 20'b0, 8'h53}`: the constant **53H**, not "INFO". Fix the wording of the test
- 🔴 **`RISC5.v` has no memory** (external SRAM via `RISC5Top`/SRce/SRbe): **the Verilator wrapper has to be written ourselves**; the "SoC contract" from §4 does not apply to the RTL directly

### 🔴 11. T0 "one retire cycle" will not work

It desynchronizes on the very first boot: LD/ST=2, FAD=4, FML=26, FDV=27, MUL/DIV=34.

Cycles have to be run until `~stall`, but **`stall` is an internal wire (`RISC5.v:169`), not
exported** → a `/*verilator public*/` or a debug port is needed.

And: **the pdewacht ISS is not cycle-accurate at all** → T4 (cycles) is taken only from the RTL, T0 compares
the architectural state, not timing. Separate these explicitly.

And: comparing all memory writes directly will not work: pdewacht models the IO registers
in its own way. **Limit the difftest to RAM, exclude IO**, or feed the same deterministic stimulus.

### 🟠 12. There is no assembler, and that is not a problem

Project Oberon has no assembler at all. The only third-party one is `waz-xyz/r5asm` (WIP).
The practical path: replicate `ORG.Put0/Put1/Put2/Put3` (ORG.Mod:54–82, ~20 lines) in Python,
plus a disassembler. Part of T1 can be written directly in Oberon: `SYSTEM.PUT`, `SYSTEM.LDREG`,
`SYSTEM.REG`, `SYSTEM.COND`, `SYSTEM.H` already exist in the ORB universe.

**What §8 is missing:**
- a test "an unmodified image on the new RTL": the new ISA must not break old binaries (mandatory given item 2)
- a test "a new image on the old CPU": it **must refuse explicitly** (the `.rsc` version byte), not hang
- a compiler determinism test (two runs → identical `.rsc`); without it T-BOOT-3 cannot be interpreted
- a difftest of the compiler across three implementations
- a check for overflow of `maxCode = 8000` and `maxStrx = 2400` after inserting CHK

### 🟠 13. §6: "area and Fmax without hardware" is true, but not on that FPGA

`nextpnr` **does not support Spartan-3** (Wirth's target platform is xc3s200/xc3s1000).
Supported are ice40, ECP5, MachXO2, Gowin, Nexus.
- iCE40: 128 KB BRAM, **1 MB does not fit**, no multipliers
- ECP5-85F: ~460 KB BRAM, **also not 1 MB**
- Sky130/OpenLane: a 1 MB SRAM macro is unrealistic, the report will be for the area of **the core without memory**

The figures will be for ECP5, not for Spartan-3 and not for silicon: **three incomparable metrics**.
Doable without hardware, but the figure **must be qualified** in the article.

### The reviewer's bottom line: what to fix immediately
1. **Reformulate C2**: the target is the `FPMultiplier` (26 cycles), not FMAC. FMAC is secondary (~1.07×)
2. **Rewrite §3**: F0 = `00uv`, bit 28 is taken, there are no free slots, there is no trap on an unknown instruction
3. **Make C3 a three-point measurement** + create a build without checks (a compiler patch)
4. **CHK must have an F1 form**, otherwise B1 measures zero
5. **§5: ORB + ORP + ORG are touched**; FMAC is a procedure, not a function
6. **Add `/s`, `System.Free`, `.rsc` version = 2X**; T-BOOT-3 at stage 2, but not as a test of FMAC
7. **The host route (Norebo + fzipp) is mandatory CI**, not a fallback
8. **Timeline: §7 alone takes 2–3 weeks**
## Reviewer 3: measurement methodology ✅ (part: area)

### 🔴🔴 1. `yosys stat` by default silently loses more than half of RISC5

Not "an imprecise metric" but **a wrong one**. From the yosys sources (`kernel/cost.h`,
`passes/techmap/abc.cc`, `passes/cmds/stat.cc`):

- after `synth`, ABC maps to a genlib generated on the fly, where **`MUX2` = `AND2` = `NAND2` = 4 units** (in a real library mux2 = 3 GE, nand2 = 1 GE). Bounds-check logic is mux/xor-heavy, that is, **exactly the kind this model estimates wrongly**
- the same genlib has **no timing at all**: every row gets `PIN * NONINV 1 999 1 0 1 0`. There is no target clock; this is the minimum-area point that no tapeout uses
- 🔴 **`stat -tech cmos` knows only `$_DFF_P_`/`$_DFF_N_`.** After `synth` the flip-flops are `$_DFFE_*_`, `$_SDFF_*_`, `$_ADFF_*_`, all of which contribute **zero transistors**; the number is silently marked with a `+` suffix
- 🔴 **`stat -liberty` assigns area 0 to any cell missing from the liberty**, and reports it as an ordinary log line `Area for cell type X is unknown!`: not a warning, not an error. Forget `dfflibmap` → **"chip area" contains not a single flip-flop**

**Scale for RISC5:** `RISC5.v` contains **604 bits of state, of which 512 = the register
file**; plus Multiplier 70, Divider 70, FPAdder 104, FPMultiplier 53, FPDivider 54 →
**≈955 flip-flops, 54% of which are the register file. A default run throws them all out.**

The yosys model's error versus real sky130 cells: buf −75%, inv −50%, xor +29%,
dfxtp −25%, **dfrtp and edfxtp −100%**.

### 🔴🔴 2. B2 on RISC5 is structurally the worst possible testbed

The register file is **54% of all RISC5 sequential state**. Any scheme of
"a descriptor in a register" extends 16×32 = 512 bits to 16×(32+N). **Doubling the RF doubles
more than half of the core.**

Measured on a neighboring core (Riedel et al., arXiv:2505.08541, FreePDK45, a commercial
synthesizer): Ibex 57.3 → 90.3 kGE (**+57%**), the main contribution being **the register file +112.5%**
(5.7 → 12.2 kGE), while **the EX block is +2.2%**: the comparator itself is almost free.
Rugg et al. on CHERI-RISC-V: Toooba's physical RF went from 64 to 151 bits, **+136% FF**.

On RISC5, where the RF takes a larger share of an even smaller core, it will be **worse**.
→ If B2 is done, the resulting number is a property of RISC5's RF-dominated structure,
**not the cost of descriptor addressing**. Say this in the article ourselves, before the comments do.

Conversely: "a bounds comparator is cheap" is true only for a small number of **global** bounds
registers. The estimate for B1: a 32-bit unsigned comparator ≈130–200 GE, two ≈300–400 GE,
plus trap/mux 50–150 GE → **≈0.4–1.1 kGE**.

### 🔴 3. A small baseline inflates the percentage AND worsens the delay: both sides work against us

The numerator is fixed by the datapath width (32 bits, the same for RISC5 and for an OoO core).
The denominator collapses. With the same ~0.7 kGE:

| baseline | size | overhead |
|---|---|---|
| SERV minimal | 2.1 kGE | ~33% |
| **RISC5 core (estimate)** | **~10–20 kGE** | **3.5–7%** |
| Ibex micro | 16.85 kGE | ~4% |
| Ibex RV32EMCB + icache | 57.3 kGE | ~1.2% |
| RI5CY + FPU | ~90 kGE | ~0.8% |
| OpenTitan Earl Grey | 2060 kGE | **~0.03%** |

🟢 **Rhetorically this is a winning position, but only if the number comes out small:** "even on a
core without caches, MMU, a predictor and privileged modes the cost is X%; on any core with
a cache hierarchy it is an order of magnitude smaller". Give **both denominators**: the core and a plausible SoC.

🔴 **But on delay a small core loses structurally.** In RISC5 the load/store address path
is short: adder → address out, one stage. Two sequential 32-bit
comparators will almost certainly **land on the critical path**. On a core with an L1+TLB stage
the comparator hides next to the TLB tag compare; that is exactly what Morello and CHERI do.
→ the report for RISC5 is **conservative on area and hostile on delay**. Say both.

### 🔴 4. "+5% area" is entirely within the tool's noise

The same PicoRV32 without timing constraints, Xilinx 7-series
(`YosysHQ/picorv32/scripts/yosys-cmp`): Yosys **1403 LUTs** versus Vivado **1146** (+22%);
FD 671 versus 574 (+17%). On iCE40: Yosys 1795 versus Lattice LSE 1621 (+11%).

→ run the baseline and the modified core **with a bit-identical flow, one version**;
any delta **smaller than ~10% in LUTs** must come with a caveat that it is within the
tool's spread.

The FPGA↔ASIC gap (Kuon & Rose, TCAD 26(2), 2007, 90 nm versus 90 nm): area **≈35×** for
purely logic circuits, 18–24× with hard blocks; delay 3–4×; dynamic power 12–14×.
**LUTs and GE are not roughly but one and a half orders of magnitude incomparable.**

### 🔴 5. The open flow is fit for relative comparison, unfit as a "silicon estimate"

The measured gap (Kahng et al., ISPD '26, arXiv:2601.17520):

| platform | design | COMM → ORFS | Δ |
|---|---|---|---|
| NanGate45 | ibex | 22,094 → 29,530 µm² | **+33.7%** |
| ASAP7 | ibex | | **+54.8%** |

On timing at the same period: commercial WNS +0.019 ns, 0 failing endpoints;
ORFS WNS −0.094 and **247 FEP**. Ablation localizes the gap: **it is in synthesis, not in P&R**.
Confirmed by Infineon/TUM (Yosys 1.24× at 130 nm, 1.49× at 40 nm), Basilisk,
TWEPP 2025 (+53%…+113% on IHP SG13G2).

**Rule: expect 1.25–1.6× the area and ~2× the power versus commercial.** The gap grows
at small nodes and shrinks at 130 nm: **sky130 flatters the open flow**.
Plus sky130hd in the default ORFS loads **exactly one corner** (`tt_025C_1v80`).
And do not divide the area by k² when projecting to a modern node: DeepScaleTool gives 1.7%
error versus 24% for naive scaling.

### 🟢 The defensible minimum: a concrete flow

```tcl
read_verilog RISC5.v Multiplier.v Divider.v FPAdder.v FPMultiplier.v FPDivider.v
hierarchy -check -top RISC5
synth -top RISC5 -flatten
dfflibmap -liberty $LIB          # without this the flip-flops drop out of the area SILENTLY
abc -liberty $LIB -constr core.sdc -D <period_ps>
opt_clean
stat -liberty $LIB               # -> Chip area ... µm², + % sequential
```
`kGE = area / area(NAND2_X1)`; take `syn/python/get_kge.py` from lowRISC as is.
OpenSTA on the netlist for Fmax. The same, bit for bit, for the modified core.
**A sweep of `-D` over at least 5 points → an area-vs-period chart for both designs.**
One picture answers most of a reviewer's questions.

The reference to copy: **lowRISC Ibex `syn/`** (Nangate45 typical, a 4000 ps clock,
IO constraints explicitly at 10–80% of the cycle). Tellingly, ABC is fed **2000 ps, twice as tight as
the target**, meaning the constraint given to the mapper materially moves the result, **and it must
be published**. Calibration: Yosys+Nangate45 gives **8–12% more** than the commercial estimate.

**A mandatory sentence for the article:**
> Absolute QoR from an open-source flow is known to trail a commercial flow by roughly
> 25–60% in cell area and ~2× in power on identical RTL; the numbers here are intended for
> relative comparison within a fixed enablement rather than as absolute silicon cost.

**Table:** baseline / modified × (kGE, µm², node + library + corner, target f,
achieved Fmax, the area of each at its own Fmax, cells, flip-flops, % sequential)
+ a row "what is excluded" (memories, SRAM macros, pads, DFT)
+ overhead relative to the core **and** to a plausible SoC + the area-delay product.

**FPGA figures only as an implementation artifact** ("fits in N LUTs on board X, runs at
Y MHz"), never as a claim about area.

### 🟢 The novelty of C3 is independently confirmed
**No ASIC synthesis of RISC5 exists publicly in any form**: no paper, no tapeout,
no sky130/OpenLane/TinyTapeout project, not a single GE figure.
The only real data are Skulski's utilization percentages (riskfive.com), **with the unit not
stated**: 95.4% XC3S200, ~50–58% XC6SLX9, 4% XC6SLX150, 3% XC7A200T. Triangulation:
**~3000–4000 LUTs / ~1000 slices for the whole SoC**, **0 DSP blocks**: there is no `*` operator in the sources
at all, hence the 26/34-cycle mul/div/FP.
Wirth's own size metric is exactly one: **lines of Verilog: 898 for the whole SoC**
(Xcell Journal #91, Q2 2015), the core `RISC5.v + RISC5Top.v` ≈ 347.

---

## Reviewer 3: consolidated bottom line ✅ (second part)

The reviewer **built the real `RISC5.v` under Verilator and measured** rather than estimated.

### 🔴🔴🔴 1. C2 is refuted by measurement, not by reasoning

The compiled Oberon dot-product loop is **23 instructions / 60 cycles** per
iteration (open arrays: 26 / 66). `FML+FAD` = 30 of 60.

→ **The Amdahl limit for FMAC is exactly 2.00×, and only if the instruction costs nothing.**
A physically implementable FMAC: **1.00–1.07×**.

**All three numbers in the design are above the ceiling:** ≥2× in §1, 1.3–2× in §5, 1.2× in §11.

The real 2× lies in replacing the 26-cycle iterative FP multiplier with a DSP (60→36 = 1.67×)
and in CSE in the code generator, that is, **not in the ISA extension**, which breaks the causal story
of the headline act.

### 🔴🔴🔴 2. C3 "nobody has this number" is WRONG

**Cycles have been measured:**
- Morello 28.01% → 5.70%; an estimate for an optimized design 1.8–3.0%
- Toooba 9%
- MTE on the Pixel 8 independently 4.00% / 11.98%
- MPX in silicon 1.47–2.52×

**Area has been measured, including silicon:**
- Morello **<6%**
- CHERIoT 28 nm: 26,988 → 58,110 gates
- Ibex 57.3 → 90.3 kGE

🟢 **There is exactly one real gap: a workload of "the system rebuilding itself"
(an analog of CheriBSD buildworld) is absent from the literature. Aim there.**

### 🔴 3. B1 in §6 measures one instruction out of twenty-three

`ORG.Index` already emits `SUB` + `BLR CC` = 2 instructions / 2 cycles (open arrays: 3 / 4).
The checks cost **4 cycles of 60 (6.7%)**, for open arrays **8 of 66 (12%)**.
A hardware CHK saves **1 cycle**, and this number **is computed with a counter in the ISS without a single
line of Verilog**.

Plus: the software baseline is **a straw man**. Elimination only for constant
indexes, no loop-invariant hoisting, no BCE.

### 🔴 4. A "confidence interval" on a deterministic simulator is empty

The interval has to be taken **over a population of programs**: all ~25–30 system modules individually,
**median + IQR**, exactly as in CheriABI.

The reverse asymmetry: **C1, the only claim with real variance, comes without an
interval.**

### 🔴 5. Confounders that the design lacks

- **Video DMA steals ~7% of cycles** through `stallX`
- 🔴 **Consecutive FP operations are more expensive** because of a counter that is not closed: `FML;FML` = **32 cycles instead of 26**. → **any dense FMAC microbenchmark falls straight into this pit**
- `Multiplier` vs `Multiplier1`: **a 17× difference**
- §7 is internally contradictory (byte quantization + a floating-point FMAC); independently confirmed by the third reviewer
- **FP in RISC5 is not IEEE** (no NaN, one guard bit) → T1.4 tests nonexistent semantics, and the criterion "with unchanged output" **is guaranteed to fail**

### 🟢 Three reformulations of the claims

**C2** → "the loop RTL → code generator → bootstrapping → rebuild closes in N minutes;
the measured speedup X% matches the Amdahl-predicted ceiling Y% within Z%".
A passable criterion that **proves the machine model is correct**.

**C3** → "we do not claim novelty of the axes (references to Morello / Toooba / MTE / MPX); what is new is
**the workload 'the system rebuilds itself', measured by nobody**, and three configurations
(no checks / software / hardware) on a stack where every layer is open".
Plus a second point that follows from the data: **turning off bounds checks here costs about
as much as the flagship ISA extension, around 6%.**

**C1** → "cold boot ≤ T s, **median and spread** over K runs on M named configurations".

### 🔴 A blocker for §9 that is not on the list
**The choice of "integers or REAL" in inference has not been made**, and it determines whether the demo is
**0.4 s/token or 10 s/token**. This is a question on the level of Q1–Q6.
## Reviewer 4: browser and WASM ✅

The reviewer **actually ran Verilator locally** and measured sizes on live artifacts.

### 🟢 Q6 is removed: the speed is sufficient, the risk was overestimated

Measured on the real RTL (Verilator 5.052, `-Os`, Apple Silicon):

| | without trace | with `--trace` (VCD) |
|---|---|---|
| speed | **17.75 MHz-equiv.** | 5.33 MHz-equiv. |
| net machine code | 209,760 B | 264,928 B |

A control on picorv32 (6× more RTL): practically the same →
**the size is determined by the Verilator runtime and the wrapper, not by the size of the core.**

⚠ **Corrected by the final report:** the 17.75 MHz figure was intermediate (the bare core, a sub-agent).
The final measurement of the full `RISC5Top` via Verilator 5.052 → Emscripten 6.0.9 → Node/V8:

| Model | native | **in WASM** |
|---|---|---|
| Core + FPU | 14.7–15.2 MHz | **13.9–14.1 MHz** |
| **Full SoC** | 6.6–8.1 MHz | **5.8–7.0 MHz** |
| ISS | 589 MHz | **355 MHz** |

**The loss from WASM is 5–8%.** On an average 2021 x86 laptop, divide by 2–2.5 → ~3 MHz.
→ **7 MHz = 116 thousand cycles per frame at 60 Hz; Oberon is fully responsive.
The honest model CAN be the main scenario.** The fear of "100 thousand cycles/s" was off
by ~70×. The peripherals cost half; the main consumer is `VID.v`.
A full rebuild of the model (verilator + em++ -O3) takes **8.2 s**.

### 🟢 "≤10 s to interactive" is achievable with a 4× margin

All sizes measured:

| Artifact | raw | brotli |
|---|---|---|
| RTL SoC (Verilator→WASM) | 181.7 KB | **62.4 KB** |
| ISS `oberon-risc-emu` → WASM | 20.1 KB | **9.0 KB** |
| Image `Oberon-2020-08-18.dsk` | 990,208 B | **184 KB** |
| stories260K int8 weights | 278,608 B | ~incompressible |
| Yosys (if pulled into the browser) | 77.4 MB | ~15.5 MB |

WASM compilation in V8: SoC **2.9 ms**, ISS **0.1 ms**. Booting Oberon on the ISS takes ~30 million
cycles = **~85 ms**. Natively the ISS runs at **273 MHz-equiv.**; the screen appears after 8 million cycles = 0.03 s.

**Total without Yosys: ~0.5 MB brotli → 1.5–3 s to interactive.**

🔴 **GitHub Pages does not serve brotli** (checked on a live `schierlm.github.io`: with
`Accept-Encoding: br,gzip` it returns gzip). And `max-age=600` is only 10 minutes; without the Cache API
every visit after that = a repeated download. A `.dsk` will not be compressed via GH Pages; put
`.dsk.gz` there by hand and decompress with `DecompressionStream('gzip')`.

### 🔴 Weights: the only model that fits

| Model | fp32 | int8 (q8_0) |
|---|---|---|
| **stories260K** | **1,056,540 B: does NOT fit** (misses the whole memory by 7,964 bytes) | **278,608 B: fits easily** |
| stories15M | 60.8 MB | 16.2 MB: does not fit |
| stories42M / 110M | 167 / 438 MB | do not fit |

What remains for data is **950,016 bytes** (1 MB of RAM minus the framebuffer from `0x000E7F00`).

🟢 **This is the best story for the demo: "the only model that fits in Wirth's machine
is 260K in int8".** Quality: val loss 1.297, a vocabulary of 512: the text is coherent but
kindergarten-level. Position it accordingly, not as a chat.

**int8 weights are incompressible** (gzip 91%, brotli 90%); plan by the raw size.

### 🔴 The RTL model burns a whole core continuously, and the design does not mention it

`oberon-risc-emu` has a heuristic: `risc_run()` returns as soon as Oberon reads the millisecond counter
20 times in a row. An idle Oberon on the ISS costs **0.002 ms per frame instead of
0.78 ms**. The RTL model has no such luxury: it has to simulate every cycle,
including the empty wait loop.

→ the tab holds **100% of one core the whole time it is open**: fan, battery,
throttling. Plus browsers throttle timers in background tabs.

**Solution:** RTL only on an explicit button press, stopping on `document.hidden`, an idle detector
in the bench itself. And **state honestly that cycles for C3 are measured with the detector turned off**.

### 🔴 The same heuristic breaks the differential bench
During a differential run `risc_run` will **silently return earlier than the requested number of cycles**, and
the states will diverge not because of an RTL bug. **Patching `risc->progress` is mandatory**
(one line, `risc.c:165`).

### 🔴 "A visible pipeline": there is nothing to show
**RISC5 has no pipeline.** Single-stage fetch (`IR <= codebus`) plus multi-cycle
units that signal `stall`. Fix the wording in `07-browser-embed.md` and in the article,
otherwise people will catch it immediately. What is spectacular is something else: **the `stall*` stalls, the register file, the NZCV flags,
the path through the FP units**.

### 🔴 Three blockers for verilating RISC5Top (each is minutes, but put them in stage 2)
- The Xilinx primitive **`DCM` in `VID.v`**: needs a stub
- **`IOBUF`** for SRAM and GPIO; the bus `inout [31:0] SRdat` → a pair `SRdatI/SRdatO` with `assign inbus0 = wr ? outbus : SRdatI`
- **`msclk`/`msdat` are declared `inout`**: breaks the behavioral bench

Plus: **the Verilator runtime does not link under Emscripten out of the box**:
`pthread_getaffinity_np`, `pthread_setaffinity_np`, `sched_getcpu` are undefined. Three stubs
in one `.cpp`, but half an hour lost if you do not know.

### 🔴🔴 Take the RIGHT version of the RTL
The version from `Spirit-of-Oberon/ProjectOberon2013` is dated **25.9.2015 and does NOT contain
interrupts**. The version from Wirth's site (31.8.2018) says "with interrupt and
floating-point" in its header. §3 of the design describes SPC and the vector at `0x00000004` → **the 2018 version is needed,
and T1.7 cannot be written without it.**

### 🟠 Do not use VCD for visualization
It costs **×3.4 in speed** and **23.5 bytes per cycle** (a window of 50 thousand cycles = 1.2 MB).
Build with **`--public-flat-rw`** and read the model's fields directly, for free.

### 🟢 Rendering is NOT a problem (corrected by the final report)
Measured on the full screen: expanding 1bpp→RGBA in plain JS with a 256×8 table takes **0.333 ms/frame**;
finding the changed region in 96 KB takes **0.007–0.010 ms**; `putImageData` of 3 MiB ~1–3 ms.
**In total 0.4–3.4 ms out of 16.7.** Emulation costs several times more. **Optimizing the graphics
would be premature**; WASM-SIMD and WebGL are not needed.

### 🟢 There is no Emscripten port of `oberon-risc-emu`
The SDL2 layer (`sdl-main.c`, `sdl-ps2.c`) has to be rewritten onto canvas + KeyboardEvent. **~half a day**:
the only real work in this part.

### 🔴 Two risks missing from §11
1. **SAB/COOP-COEP breaks embedding**: the headers cannot be set on GH Pages, so
   Verilator's `-pthread` and `--threads` are out (not needed for a single core anyway, but check
   that the wrapper does not pull them in). **Solved by giving up SAB.**
2. **The RTL model burns a core continuously**: solved with an idle detector + stopping in the background.

### 🔴🔴 THE TWO MODELS SPEAK DIFFERENT LANGUAGES: the main unaccounted work
"Both models implement one SoC contract" is **false in fact**. The RTL has wired
interfaces (a VGA pixel stream, bit-level PS/2 for the keyboard and mouse, bit-level SPI + an SD state machine,
external SRAM with tri-state); the ISS has function calls.
→ We would need: a PS/2 keyboard serializer, a PS/2 mouse serializer, **a bit-level SD state machine
on top of SPI** (CMD0/CMD17/CMD24 + CRC), a VGA stream receiver. **Several days of work
with waveforms.** Stage 2 did not account for this.
🟢 **Solution: stub modules with the same register interface to the bus**, with data coming directly
from the C++ test bench; the `RISC5.v` core is untouched. The display comes from the test bench's SRAM array.
**Bonus: without `VID` the speed goes back from 7 to 14 MHz.**

### 🟢 Switching the ISA: the decoder as DATA
Verilator produces **C++, not a simulator** → building in the browser needs clang + wasm-ld
(+40–100 MB). **RTL Studio, which I cited as a precedent, simulates with Icarus and Slang,
not with Verilator, for exactly this reason.**
Gate-level simulation of the netlist was tested: 36 kHz table-driven, 13 kHz with code generation
(**slower**: V8 does not optimize a function with 5700 statements) versus 7000 kHz for Verilator.
🎯 **Recommendation: the decode table as microcode in registers/ROM accessible from the bus.**
"Add CHK" = write a row into the table from the already built model. Honest RTL,
instant, **and this is exactly the mechanism by which live processors receive microcode patches**.

### 🟢 Yosys works in the browser
`@yowasp/yosys`, 77.4 MB raw / **15.5 MB tarball**. Synthesizing the full RISC5 + FPU takes **3.2 s**,
peak RSS 450–800 MB, the result is **5702 cells** (1914 `$_MUX_`, 1181 `$_NAND_`, 765 `$_AND_`,
**604 flip-flops**) + 6 submodules.
→ **"Compute the area of a new instruction right on the page" is technically possible**, and this is also
the base figure for the CHK delta.

### 🟠 Three mouse buttons: details and the macOS trap
The buttons are **bits 26/25/24** of word 6 (`1 << (27 - button)`); the hardware sees the simultaneous
state. The source of truth is **`e.buttons`**, not individual events.
`preventDefault` on `mousedown button===1` **and on `auxclick`**; on `contextmenu`.
🔴 **On macOS `Ctrl+click` yields the right button at the system level → a "Ctrl + left" mapping is physically
unreachable.** Use **left Alt/Option** (the precedent is the `pdewacht` README).
`setPointerCapture()` against a lost `mouseup`. **Pointer Lock is harmful**: the mouse is absolute.
🔴 **Mobile: honestly, no**; a read-only mode.
