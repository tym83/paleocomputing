[Русская версия](DESIGN.ru.md)

# Design: an Oberon machine in the browser and the cost of bounds checking

**Version 0.3**: rewritten after a review by five independent reviewers; v0.3 adds
corrections from the browser reviewer's final report (speed, interfaces, graphics, mouse).
Original version: `DESIGN-v0.1-superseded.md`. Findings: `REVIEW.md`.

> **What changed compared with 0.1.** The claim about free space in the encoding was
> refuted. The ≥2× speedup was refuted by arithmetic and by measurement. The novelty of the number
> for the cost of bounds checking was refuted by references. The neural network and FMAC were moved to a separate
> episode. The bounds-checking experiment was turned around and became cheaper and stronger.

---

## 1. What we do and what we do not

**The episode:** "Wirth's processor, cycle by cycle, in your tab, and what bounds checking
really costs".

**The episode makes two claims.** The third (a speedup through an ISA extension) was moved
to episode 2 together with the language model: it is the most expensive, the riskiest, internally
contradictory, and **not needed for either of the two remaining ones**.

| # | Claim | Criterion |
|---|---|---|
| **C1** | The whole stack (processor, compiler, OS) runs in the browser | cold boot ≤ T s, **median and spread** over K runs on M named configurations |
| **C3** | The cost of array bounds checking in three configurations on a fully open stack | the numbers are reproduced by one command; the interval is taken **over a population of programs** (all ~25–30 system modules individually, median + IQR) |

**Non-goals (explicit):** compatibility with Wirth's real board; networking; a neural network; FMAC;
performance for the sake of performance; completeness of ISA extensions.

🟢 **A separate non-goal, accepted deliberately: `SharedArrayBuffer` and cross-origin isolation
are not used.** COOP/COEP are needed only for WASM threads and a synchronous `Atomics.wait`;
there is neither here (`verilator --threads` is pointless for a 5702-gate design,
and input is asynchronous by nature). Architecture: the emulator in a Worker, the frame sent to the main
thread via `postMessage(buf, [buf])`: transferable, an ownership transfer in O(1).

This removes a whole class of problems at once: GitHub Pages **cannot set response headers**
(checked on a live `.github.io`); `COEP: require-corp` breaks any third-party resource without
`Cross-Origin-Resource-Policy`, and `credentialless` **is not supported by Safari**; embedding
in an iframe requires `allow="cross-origin-isolated"` from someone else's page.
**→ the page can be embedded anywhere, including someone else's blog.**

### The honest frame of C3

**We do not claim novelty of the axes.** The overhead of bounds checking has been measured and
published: Morello 28.01% → 5.70% (an estimate for an optimized design 1.8–3.0%),
Toooba 9%, ARM MTE on the Pixel 8 independently 4.00% and 11.98%, Intel MPX in silicon 1.47–2.52×.
Area too, including silicon: Morello < 6%, CHERIoT 28 nm 26,988 → 58,110 gates,
Ibex 57.3 → 90.3 kGE.

**Exactly two things are new:**
1. 🎯 **The workload "the system rebuilds itself"** (an analog of `buildworld` on CheriBSD):
   nobody in the literature has measured it
2. **Three configurations on a stack where every layer is open**, from the gate to the application program

**And one conclusion that follows directly from the numbers and works stronger than any novelty:**
> turning off bounds checks in Oberon gives about the same ~6% as the entire flagship
> instruction set extension

---

## 2. Layers

```
┌──────────────────────────────────────────────────────────────┐
│ Episode page                                                 │
│  canvas 1024×768×1bpp (WebGL2) · keyboard · 3 mouse buttons  │
│  ISA configuration switch · counters · charts                │
└──────────┬───────────────────────────────┬───────────────────┘
           │ by default                    │ on an explicit button
   ┌───────▼────────┐             ┌────────▼─────────┐
   │ ISS → WASM     │             │ RTL → Verilator  │
   │ 355 MHz in WASM│ ◄─ difftest │ → C++ → WASM     │
   │ (optional)     │             │ 5.8–7.0 MHz SoC  │
   └───────┬────────┘             └────────┬─────────┘
           └───────────┬───────────────────┘
                 ┌─────▼─────┐
                 │  SoC      │ RISC5 + SRAM + PROM + devices
                 └─────┬─────┘
                 ┌─────▼─────┐
                 │Oberon 2013│ OS + compiler (3 builds: no/software/hardware checks)
                 └───────────┘
```

🟢 **The risk "Verilator in WASM is too slow" was removed by measuring the full `RISC5Top`
(Verilator 5.052 → Emscripten 6.0.9 → Node/V8):**

| Model | native | **in WASM** | versus the real 25 MHz |
|---|---|---|---|
| RISC5 core + FPU | 14.7–15.2 MHz | **13.9–14.1 MHz** | 0.56× |
| **Full SoC** (core+FPU+VID+SPI+PS2+RS232+mouse) | 6.6–8.1 MHz | **5.8–7.0 MHz** | ≈3.5× slower |
| `pdewacht` ISS | 589 MHz | **355 MHz** | 14× faster than reality |

**The loss from WASM is almost zero, 5–8%** (verilated code is flat 32-bit integer
arithmetic, ideal food for WASM). On an average 2021 x86 laptop, divide
by 2–2.5 → **~3 MHz SoC**, and Oberon is alive at that.

→ **7 MHz = 116 thousand cycles per frame at 60 Hz. Oberon, designed for 25 MHz,
is fully responsive at 7 MHz**: the cursor, typing, redrawing windows in real time.
**The honest model can be the main scenario**; a separate fast one for interaction
is not required (it stays as the difftest reference).

**The peripherals cost half:** the bare core at 14 MHz → the full SoC at 7 MHz; the main consumer is
`VID.v`, which honestly clocks the pixel stream of 1024×768@60. By throwing it out (see §4), we get back
closer to 14.

A full rebuild of the model (`verilator` + `em++ -O3`) takes **8.2 s**.

🔴 **There is no "visible pipeline" to show: RISC5 has no pipeline.** Single-stage fetch
plus multi-cycle units with `stall`. What is spectacular is something else: **stalls, the register file, the NZCV
flags, the path through the FP units**. Fix the wording in `07-browser-embed.md`.

---

## 3. The RISC5 core: facts

Source: **`RISC5.v` from Wirth's site, version 31.8.2018**.
🔴 The version from `Spirit-of-Oberon/ProjectOberon2013` is dated 25.9.2015 and **has no
interrupts**. Without the 2018 version T1.7 cannot be written.

**Registers** R0–R15 (R12=MT, R13=SB, R14=SP, R15=LNK; only R15 is special in hardware).
**Flags** N, Z, C, V. **H**: the upper bits of MUL / the remainder of DIV, not saved on IRQ.
**SPC**: 26 bits: PC + NZCV. 🔴 **Not readable by software**: there is no `MOV a, SPC` in the ISA.

### Formats: corrected
`p=IR[31], q=IR[30], u=IR[29], v=IR[28]`

| Format | Bits 31:28 | |
|---|---|---|
| F0 | **`00uv`** ← not `00u0` | register-register |
| F1 | `01uv` | register-immediate |
| F2 | `10uv` | u: load/store, v: word/byte, 20-bit offset |
| F3 | `110v` / `111v` | branch to register / by offset |

### 🔴 There is NO free encoding space

The arithmetic decode **does not look at bits 30 and 28**: `assign FAD = ~p & (op == 12);`
And the header of `FPAdder.v` says: `// u = 1: FLT; v = 1: FLOOR`.

→ **F0 with bit 28 = 1 and op=12 is FLOOR**, and the compiler emits it for every `ENTIER`:
`ORG.Floor: Put0(Fad+V, x.r, x.r, RH)`.

The full breakdown: `0001`+op=12,13 → FLOOR · `0011`+op=0 → MOV a,NZCV (INFO = **0x53**) ·
`0011`+op=8,9 → ADC/SBC · `0011`+op=10,11 → UMUL / unsigned DIV.
The other 24 are **not free but aliases** of the base operation.

🔴 **RISC5 has no trap on an unknown instruction at all.** Any 32-bit word is a
valid instruction. A wrong encoding **will execute silently**, and the difftest will not catch it
if the patch is applied to only one model.

### 🟢 The only provably free space is bits `IR[15:4]`
`RISC5.v` does not read them for F0, and `ORG.Put0` always writes zeros there:
`code[pc] := ((a*10H + b)*10H + op)*10000H + c`.
A precedent in the ISA itself: RTI/STI use `IR[4]`/`IR[5]` inside F3.

**A mandatory test before any extension:** all 256 combinations of {IR[31:28] × op} with
random operands: the old and new cores match bit for bit, except for the new encodings.

### Latencies (from the RTL; they determine everything)
FAD/FSB **4** · **FML 26** · FDV 27 · MUL/DIV 34 · LD/ST 2 · everything else 1.
The FP multiplier is **a sequential shift-and-add over 24 steps**; there is no `*` in the sources at all.

🔴 **Measurement confounders:**
- **video DMA steals ~7% of cycles** through `stallX(vidreq)`: it is part of the machine, not noise
- **`FML;FML` = 32 cycles instead of 26** (a counter that is not closed) → any dense FP microbenchmark falls into this pit
- the sources contain **two multipliers that differ by 17 times** (`Multiplier` vs `Multiplier1`)

---

## 4. The SoC contract: confirmed against `RISC5Top.v`

| Address | What |
|---|---|
| `0x000004` | interrupt vector (word 1) |
| `0x00000C` | `MemLim` |
| `0x000018` | `heapOrg` |
| **`0x000020`** | **software trap vector = MT (R12)** |
| `0x0E7F00` | DisplayStart, 98,304 bytes |
| `0x0FFFC0…FF` | devices, `ioenb = (adr[23:6] == 18'h3FFFF)` |
| `0xFFC000…FFFFFF` | PROM window **only on the code bus** |
| **`0xFFE000`** | reset address (`StartAdr = 22'h3FF800`) |

Devices 0–9: timer · `{btn,swi}`/LED · RS232 data · RS232 status · SPI data · SPI ctrl ·
`{rdyKbd, dataMs}` · kbd data · GPIO data · GPIO tri-state.

**What must be in the contract and was missing in 0.1:**
1. The address space is **24 bits**, the PC is 22. Software writes −64, hardware sees `0xFFFFC0`, the emulator compares with `0xFFFFFFC0` → **pin down how many bits are decoded**
2. 🔴 **The PROM is only on the code bus. `LD` from the PROM is impossible.** Code/data separation is mandatory
3. The PROM **aliases every 2 KB**
4. **The mouse and keyboard share one word**; the three buttons are packed into `dataMs[27:0]`
5. **GPIO (words 8, 9)**
6. 🔴 **The framebuffer is bottom-up** (`vidadr = Org + {3'b0, ~vcnt, hword}`): a naive model gives an upside-down screen and eats a day
7. **RS-232 is not optional**: the loader reads word 1 to choose the boot source
8. There is **exactly one** interrupt: the 1 kHz timer

**Memory budget (calculated):** RAM 1 MB · framebuffer 98,304 B from `0x0E7F00` ·
`stackOrg := heapOrg`, `stackSize = 8000H` → **950,016 bytes remain for everything**.

### 🔴🔴 The two models speak different languages: the main unaccounted work

The claim "both models implement one SoC contract" **is false in fact**:

| | Honest (`RISC5Top.v`) | Fast (`risc.c`) |
|---|---|---|
| Display | `hsync, vsync, RGB[2:0]`: **a VGA pixel stream** | `risc_get_framebuffer_ptr()` + damage |
| Keyboard | `PS2C, PS2D`: **bit-level PS/2 on two wires** | `risc_keyboard_input(bytes[])` |
| Mouse | `msclk, msdat`: **bit-level PS/2**, `MouseP.v` | `risc_mouse_button(1..3, down)` |
| Disk | `SCLK/MOSI/MISO/SS`: **bit-level SPI + an SD state machine** | `disk_new(file)`, block reads |
| Memory | external SRAM, tri-state | `uint32_t RAM[]` |

→ For the RTL to boot Oberon we would have to write a bit-level PS/2 keyboard serializer,
a bit-level PS/2 mouse serializer, **a bit-level SD card state machine on top of SPI** (CMD0/CMD17/CMD24
with CRC) and a VGA stream receiver that assembles a frame from `hsync/vsync/RGB`.
**That is several days of work with waveforms, not "a half-page SoC layer".**
Stage 2 in §10 did not account for this.

🟢 **Decision: do not emulate the wires.** Replace `PS2`, `MouseP`, `SPI` with stub modules
with **the same register interface to the bus** (the same addresses), receiving data directly from
the C++ test bench. The `RISC5.v` core, the subject of the article, stays untouched and honest. The display
is read from the framebuffer area directly in the test bench's SRAM array, as the ISS does.
**Bonus: by throwing out `VID`, we get back from 7 MHz closer to 14.**

Keep the bit-level interfaces as a separate "for the meticulous" mode, off the critical path.

### What has to be done to the RTL before anything else
🔴 **Wirth's RTL is tied to Xilinx and neither verilates nor synthesizes as is:**
- `Registers.v`: **`RAM16X1D`** ×32×2, the whole register file is built from a primitive → rewrite as a behavioral 3R1W
- `RISC5Top.v`: **`IOBUF`** ×40, bus `inout [31:0] SRdat` → a pair `SRdatI`/`SRdatO`
- `VID.v`: **`DCM`** with a `LOC` constraint → a stub/parameterizable pclk source
- `msclk`/`msdat` are declared `inout` → breaks the behavioral bench
- the Verilator runtime does not link under Emscripten: `pthread_getaffinity_np`, `pthread_setaffinity_np`, `sched_getcpu`: three stubs

~50 lines, an evening of work. **But without it there is no area and no Fmax, so there is no C3.**

---

## 5. The experiment: the cost of bounds checking, turned around

### What the system already has
`ORG.Index` emits `SUB` + `BLR CC` = **2 instructions / 2 cycles** per indexing
(open arrays: 3 / 4; the length comes as a hidden parameter: **Oberon already has a Burroughs
descriptor, only a software one**). Plus checks for NIL, types, division, ranges.

🔴 **They cannot be turned off:** `check := v # 0`, and `version` = 1 always, except for `MODULE*` (RISC-0,
unsuitable for system code). **A build of "Oberon without checks" does not exist.**

The measured share: the dot-product loop is **23 instructions / 60 cycles**,
the checks take **4 cycles of 60 (6.7%)**, for open arrays **8 of 66 (12%)**.

### Three configurations
| # | Configuration | How to get it | When available |
|---|---|---|---|
| **A** | no checks | patch `check := FALSE` in `ORG.Open` + an option in `ORP.Option`, ~5 lines; rebuild the compiler and the system | **week 1, on the ISS, without a single line of RTL** |
| **B** | software (stock) | as is | immediately |
| **C** | hardware | CHK in the RTL + code generator | after the RTL |

🔴 **A caveat we must write ourselves:** the baseline point A is **not stock Oberon**
but a patched build. And the software baseline B is **a straw man**: elimination only
for constant indexes, no loop-invariant hoisting, no BCE.

### The CHK instruction
🔴 **It must be the F1 form with a 16-bit immediate limit.** In the F0 form the saving is
**zero**: the array limit is a constant that today `Put1a(Cmp, RH, y.r, lim)` puts
straight into the immediate. With a register CHK you first need `MOV RH, lim`: 2 instructions again.

**The ceiling of the saving: 1 cycle and 1 word per indexing.** The number is computed by a counter in the ISS
**without a single line of Verilog**.

### 🟢 The trap semantics already exist in the system
A trap through vector `0x04` is **impossible**: it is maskable (CLI), not accepted during
`stall`, silently swallowed inside a handler (`~intMd`), and `SPC` is not readable by software
and holds the *next* PC.

Oberon traps are software traps, via F3:
```oberon
ORG.Trap:      Put3(BLR, cond, ORS.Pos()*100H + num*10H + MT)
Kernel.Init:   Install(SYSTEM.ADR(Trap), 20H)       (* vector = 0x20 = MT *)
Kernel.Trap:   u := SYSTEM.REG(15); SYSTEM.GET(u-4, v); w := v DIV 10H MOD 10H
```
→ **CHK in hardware does the same as BLR: `R15 := PC+4; PC := R12`**, with the trap number in the same
`IR[7:4]`. Non-maskable, works inside handlers, `Kernel.Trap` can already decode it.
**Two lines in `pcmux0`, one in `regwr`.**

🔴 CHK **must not write a register**: `regwr = ~p & ~stall` writes unconditionally and would clobber N/Z,
unlike the current CMP. Needs work in the decoder.
🔴 **The source position will not fit**: in F0 bits 23:20 = register b, 3:0 = register c,
only 15:4 = 12 bits are free → up to 4095 characters, while `ORP.Mod` is 43 KB. Solution: a two-word
CHK or an honest note "diagnostics have degraded".

### 🔴 The descriptor variant (B2) is NOT in this episode
The register file is **54% of all RISC5 sequential state** (512 bits of 604 + ~350
in FP/mul/div, ~955 flip-flops in total). A descriptor scheme doubles exactly that.
Measured on Ibex: +57% of the whole core, **the register file +112.5%**, while **the comparator itself
in the EX block is +2.2%**. CHERI-RISC-V Toooba: RF 64→151 bits, **+136% FF**.

→ On RISC5 it will be **worse**. The resulting number would be a property of RISC5's RF-dominated structure,
**not the cost of descriptor addressing**. If done at all, do it separately and with this caveat.

---

## 6. Measurement methodology

### Cycles
A counter in the RTL. 🔴 **The `pdewacht` ISS is not cycle-accurate at all** (`risc_run` counts
instructions) → cycles only from the RTL; the difftest compares the architectural state, not timing.
🔴 Cycles for C3 are measured **with the idle detector turned off**; state this explicitly.

### Area: the defensible minimum
🔴 `yosys stat` by default **silently loses more than half of RISC5**: in the generated genlib
`MUX2 = AND2 = NAND2 = 4`, there are no timings, `stat -tech cmos` knows only `$_DFF_P_`/`$_DFF_N_`
and assigns **zero transistors** to the real `$_DFFE_*_`/`$_SDFF_*_`/`$_ADFF_*_`, and
`stat -liberty` gives area 0 to unknown cells **as an ordinary log line**.

```tcl
read_verilog RISC5.v Multiplier.v Divider.v FPAdder.v FPMultiplier.v FPDivider.v
hierarchy -check -top RISC5
synth -top RISC5 -flatten
dfflibmap -liberty $LIB          # WITHOUT THIS THE FLIP-FLOPS DROP OUT SILENTLY
abc -liberty $LIB -constr core.sdc -D <period_ps>
opt_clean
stat -liberty $LIB
```
🟢 **The base figure for the differential measurement was obtained by a run:**
**RISC5 = 5702 cells** (1914 `$_MUX_`, 1181 `$_NAND_`, 765 `$_AND_`, **604 flip-flops**)
plus the submodules Multiplier/Divider/FPAdder/FPMultiplier/FPDivider. There is a baseline to count
the CHK delta from.

`kGE = area / area(NAND2_X1)`, the script `syn/python/get_kge.py` from lowRISC as is.
OpenSTA on the netlist for Fmax. **Bit-identical flow, one version for all configurations.**
**A sweep of `-D` over at least 5 points → an area-vs-period chart**: one picture answers
most of a reviewer's questions. The reference to copy: **lowRISC Ibex `syn/`**.

**A mandatory sentence for the article:**
> Absolute QoR from an open-source flow trails a commercial flow by roughly 25–60% in cell
> area and ~2× in power on identical RTL; the numbers here are for relative comparison
> within a fixed enablement, not as absolute silicon cost.

🔴 **A delta smaller than ~10% in LUTs is within the tool's spread** (the same PicoRV32:
Yosys 1403 LUTs versus Vivado 1146, +22%).
🔴 **FPGA figures only as an implementation artifact**, never as a claim about area:
the FPGA↔ASIC gap is ≈35× in area (Kuon & Rose).
🔴 nextpnr **does not support Spartan-3** (Wirth's target platform). iCE40 has 128 KB of BRAM,
ECP5-85F ~460 KB: **1 MB fits nowhere**; synthesize the core separately and explain what was counted.

### The denominator decides everything
The same ~0.7 kGE reads as 33% (SERV), **3.5–7% (RISC5)**, 4% (Ibex micro), 0.03%
(OpenTitan). Give **both denominators**: the core and a plausible SoC. The frame:
"even on a core without caches, MMU, a predictor and privileged modes the cost is X%;
on a core with a cache hierarchy it is an order of magnitude smaller".

🔴 **On delay a small core loses structurally:** the load/store address path in RISC5
is short (adder → address out, one stage), and the comparators will almost certainly land on the
critical path. On a core with L1+TLB the comparator hides next to the tag compare; that is what
Morello and CHERI do. **Say both: conservative on area, hostile on delay.**

### Workloads
1. 🎯 **The system rebuilding itself**: the main one, not measured in the literature
2. All ~25–30 system modules **individually** → median + IQR (this is the "interval")

---

## 7. Test strategy

Details and code: `tests/HARNESS.md`. Here only what changed after the review.

### T0: the differential bench, five fixes
1. 🔴 **"Step" ≠ "cycle"**: an exported retire strobe is needed (`~stall`, not exported → `/*verilator public*/`), `while (!retire) tick();`
2. 🔴 **The reference has no interrupts at all** (no `SPC`, no `RTI`, no `irq`) → **T1.7 has nothing to compare against**; write our own reference or acknowledge the absence of a golden model
3. 🔴 **Different PC widths** (the RTL has 22 bits, the emulator a 32-bit word index) → compare **modulo 2²²**
4. 🔴 **The reference writes `"Sizg"` + the screen dimensions at `DisplayStart`** (`risc.c:130-133`) → a byte-wise RAM comparison fails at step **zero**. Exclude these
5. 🔴 **The `progress` heuristic**: `risc_run` silently returns earlier than requested → **patch `risc->progress`** (`risc.c:165`, one line), otherwise the states diverge not because of an RTL bug

Plus: **limit the difftest to RAM, exclude IO**: the emulator models devices in its own way.

### What was missing in 0.1 and is needed
- **coverage** with `verilator --coverage`
- **assertions**: "intAck never during stall", "no more than one stall source", "regwr does not coincide with wr", "ben only on F2"
- 🔴 **BL/BLR clobbers N and Z** (`regwr = … | (BR & cond & v & ~stallX)`): T1.2 only had LD
- **unaligned access** (`SRadr = adr[19:2]`, the low bits are silently dropped)
- **byte lanes** (`inbus1`/`outbus` + `SRbe`)
- **an interrupt during a multi-cycle operation** (up to 34 cycles on DIV)
- 🔴 **T1.4 pins down Wirth's behavior, not IEEE**: denormals and zeros → 0, division by 0 → saturation, **there is no NaN class**, one guard bit. The reference is `risc-fp.c`
- **the test "an unmodified image on the new RTL"**: the new ISA must not break old binaries
- **the test "a new image on the old CPU" must EXPLICITLY REFUSE**: use the `.rsc` version byte (`versionkey = 1X` → set **`2X`**), otherwise the old loader will silently execute the new instruction
- **compiler determinism** (two runs on the same source → identical `.rsc`)
- 🔴 **a difftest of the compiler itself** across three implementations: native Oberon / **Norebo** / **fzipp/oberon-compiler (Go)**. Catches code generator editing errors **before** they become an OS hang
- a check for overflow of `ORG.maxCode = 8000` words and `maxStrx = 2400` after inserting CHK
- 🔴 `--x-assign unique --x-initial unique` with a random seed: **Verilator is two-valued and fundamentally cannot check the requirement "all registers are reset"**

### Bootstrapping
A standard mode of Project Oberon, **not a feat**: the risk in 0.1 was overstated. But the mechanics are needed:
```
gen0 (old ORP): ORP.Compile ORS.Mod/s ORB.Mod/s ORG.Mod/s ORP.Mod/s ~
System.Free ORTool ORP ORG ORB ORS ~          (* otherwise res=3: key conflict *)
gen1 rebuilds itself with the same commands → gen2
compare gen1/*.rsc with gen2/*.rsc byte for byte
```
🔴 **`Files.Register` overwrites the `.rsc` in place, there are no old versions** → a broken new
`ORP.rsc` = there is no compiler any more. **For configuration C bricking is real** (every `.rsc`,
including the compiler, contains CHK) → **a second copy of the image and a host route are mandatory**.

🔴 The fixed point proves that the compiler is its own fixed point, **not that it is correct**.
Only gen N and gen N+1 **of the same source** can be compared (`.rsc` contains `ORS.Pos()`).

**The host route is mandatory as CI**, not as a fallback: Norebo (`build-image.py`
builds a fresh `Oberon.dsk`) + the Go port. Both branches must converge to identical `.rsc`.
`BootLoad.Mod` and `ORL.Mod` are **missing** from the published sources; the PROM image is ready-made
(`prom.mem`), and the linker for the inner core is in Norebo.

---

## 8. The browser

**Sizes measured:** RTL SoC → WASM 181.7 KB (62.4 brotli) · ISS → WASM 20.1 KB (9.0) ·
disk image 990,208 B (184 brotli). WASM compilation in V8: 2.9 ms and 0.1 ms.
Booting Oberon on the ISS takes ~30 million cycles = **~85 ms**.
**In total ~0.5 MB brotli → 1.5–3 s to interactive.** The ≤10 s requirement has a 4× margin.

🔴 **GitHub Pages does not serve brotli** and sets `max-age=600`. Put `.dsk.gz` there by hand,
decompress with `DecompressionStream('gzip')`, cache via the Cache API.
🔴 **SAB/COOP-COEP cannot be set on GH Pages** → `-pthread` and `--threads` are out
(not needed for a single core, but check that the wrapper does not pull them in). **No SAB.**
🔴 **The RTL model burns a whole core continuously** (it has no idle heuristic like the ISS) →
only on a button press, stopping on `document.hidden`, an idle detector in the bench.
🔴 **Do not use VCD** (×3.4 slower, 23.5 bytes/cycle) → `--public-flat-rw`
and reading the model's fields directly, for free.
🟢 **Graphics are not a problem, and optimizing them would be premature** (measured, full screen):
expanding 1bpp→RGBA in plain JS with a 256×8 table takes **0.333 ms/frame**; finding the changed
region in 96 KB takes **0.007–0.010 ms**; `putImageData` of 3 MiB ~1–3 ms.
**In total 0.4–3.4 ms out of 16.7.** Emulation (116 thousand cycles/frame) costs several times more.
WASM-SIMD and WebGL are not needed. **Change detection is free**: do not build write hooks;
for the RTL the test bench sees every write via `SRwe`/`SRadr` anyway. Draw via
`OffscreenCanvas` from the Worker (Safari since 16.4).
**There is no Emscripten port of `oberon-risc-emu`**: rewrite the SDL2 layer onto canvas +
KeyboardEvent, ~half a day.

### Three mouse buttons
The mouse register is **one 28-bit word (IO word 6)**: X in the low bits, Y in the middle bits,
**the buttons in bits 26/25/24** (`1 << (27 - button)`). The hardware sees **the simultaneous state of
the three buttons**: inter-button clicks require bit state, not a sequence of `click` events.

- Work with `mousedown`/`mouseup`/`mousemove`; the source of truth is **`e.buttons`** (a bit mask), which maps directly onto the register
- **Middle:** `preventDefault()` on `mousedown` with `button===1` (suppresses Chrome's autoscroll and paste in Firefox/X11) **plus on `auxclick`**
- **Right:** `preventDefault()` on `contextmenu`
- 🔴 **The macOS trap:** `Ctrl+click` is turned into a right click by the system → **a "Ctrl + left" mapping is physically unreachable on a Mac**. The precedent from the `pdewacht` README: *"You can use the left alt key to emulate a middle click"* → use **left Alt/Option, not Ctrl**
- A lost `mouseup` outside the window → `setPointerCapture()` on the canvas + resynchronization from `e.buttons` on every `mousemove`
- **Pointer Lock is not needed and is harmful**: the mouse in Oberon is absolute, and Pointer Lock gives only deltas
- 🔴 **Mobile: honestly, no.** An inter-button click cannot be reproduced on a touchscreen. A read-only mode: the demo runs, input is blocked, with the caption "a three-button mouse is required"

### Switching ISA configurations: three levels

🔴 **Verilator produces C++, not a simulator.** To get an executable model in the browser
you need clang + wasm-ld: another 40–100 MB and tens of seconds. Tellingly: **RTL Studio, which
I cited as a precedent, simulates with Icarus and Slang, not Verilator, for exactly this reason.**

The workaround "simulate the netlist gate by gate" was tested and is no good:

| Approach | Speed |
|---|---|
| Verilator→WASM (prebuilt) | **7,000 kHz** |
| Gate by gate in JS, table-driven | 36 kHz |
| The same with code generation | 13 kHz (**slower**: V8 does not optimize a function with 5700 statements) |

→ 0.2–0.5% of Verilator's speed: fine for 5 thousand cycles of a single instruction, not for booting an OS.

🟢 **The working solution is three levels, all of which give the effect "I changed the processor":**

1. **🎯 The decoder as data, not as text.** Move the decode table into registers/a microcode ROM
   inside the RTL, accessible from the bus. Then "add CHK" = write a row into the table
   from the already compiled WASM model. Instant, honest (it is real RTL, just
   configurable), and **this is exactly the mechanism by which live processors receive
   microcode patches. Stronger as a story than editing text.**
2. **A prebuilt fan of variants.** Each SoC model is 177 KB raw / **62 KB brotli**.
   Twenty variants = 1.2 MB, loaded lazily on click, switching with a single `instantiateStreaming`
   (**2.9 ms**).
3. **A "really rebuild" button**: a form sends the Verilog to CI, and a
   `.wasm` comes back. The full cycle is **8.2 s** plus the queue.

Keep a Verilog editor on the page, but let it **highlight and lint** (Yosys in WASM can
do that), while CI does the building.

🟢 **Yosys in the browser works and has been checked:** `@yowasp/yosys`, 77.4 MB raw / **15.5 MB
tarball**; synthesizing the full RISC5 + FPU takes **3.2 s**, peak RSS 450–800 MB, the result is 5702 cells.
→ **"compute the area of a new instruction right on the page" is technically possible.**

---

## 9. Reconnaissance (stage 0): one evening, 3–4 hours

Three numbers, each of which can rewrite the plan:
1. `verilator` on `RISC5.v` (the 2018 version!) natively, a trivial loop → **cycles/s**
2. `yosys -p 'synth_ice40'` → **passes or not, how many cells**
3. Grep the decoder for FLT/FLR → **confirm that `IR[15:4]` really are free**

Plus something cheap and immediately useful: **measuring configuration A against B on the reference ISS**:
a ready number for C3 **in the first week, without any RTL**.

**Closed by the review, needs no reconnaissance:** the address map, the PROM, the memory budget, the latencies,
the code generation for bounds checks, artifact sizes, browser speed.

---

## 10. Stages, exit points and timeline

**Estimate: 130–190 hours → 9–13 weeks at 15 h/week.** Not 2–4 weeks.
A neural network writes the code: this takes 30–40% off *writing* and **nothing off debugging**,
and all the risk sits in debugging.

**The critical path is not linear.** Synthesis (area, Fmax) and configuration A **do not depend
on the RTL and run in parallel from day one**.

| Point | Time | Publishable result if nothing further happens |
|---|---|---|
| **CP-0** | ~1 wk | "How much free space there is in the instruction set of Wirth's processor" + the three reconnaissance numbers + **the cost of bounds checks from configuration A** |
| **CP-1** | ~3–4 wk | "We ran the processor against its own emulator instruction by instruction": a methodological article + a live bench |
| **CP-2** | ~6–8 wk | **"Real Verilog, cycle by cycle, boots an operating system"**: already an episode |
| **CP-3** | ~9–11 wk | The same in the browser + "rebuild the whole system". **Flagship-lite, published in any case** |
| **CP-4** | ~13–16 wk | + three configurations, cycles/area/Fmax. **The target** |

🔴 **For CP-2 and CP-3 the text must be written in advance.** Otherwise the exit point does not work:
at the moment the project has to be closed, nobody has the strength to write an article from scratch.

### Hidden work that was not in 0.1 (70–110 h)
the assembler (partly ready: `tests/asm.py`) · a fork of the ISS for lockstep · a retire detector ·
de-Xilinx-ing the RTL · building and editing the disk image · the synthesis flow · the three mouse buttons ·
caching and hosting · one-command reproducibility · debugging harness ·
licenses for Wirth's materials · **the article text, 20–30 h** · page design

---

## 11. Risks

| Risk | Lik. | Impact | Mitigation |
|---|---|---|---|
| Scope creep | **high** | high | non-goals in §1; FMAC and the neural network moved out; B2 moved out |
| The project runs out of steam before publication | **high** | high | CP-0…CP-3 with text written in advance |
| The RTL is not de-Xilinx-ed in time → no C3 | medium | **high** | moved to stage 0 |
| Bricking during bootstrapping of configuration C | medium | high | a second copy of the image + the host route as CI |
| Comparators on the critical path → an Fmax drop | **high** | medium | expected and published honestly; an area-vs-period chart |
| The area delta is within the tool's noise | medium | medium | one bit-identical flow, a sweep over 5 points, a caveat |
| **The RTL model heats up the laptop** (it has no idle heuristic like the ISS) | **high** | medium | **a cycle quota per frame** (7 million/60 ≈ 116 thousand per `requestAnimationFrame`) + the `Page Visibility API` to stop completely in the background. NB: a Worker has no `rAF`, so the main thread hands out the quota |
| The RTL's bit-level interfaces (PS/2, SPI+SD, VGA) eat stage 2 | **high** | **high** | stub modules with the same register interface, §4 |
| The number turns out boring (~6%) | medium | low | that is the result; the frame is "as much as the whole ISA extension" |
