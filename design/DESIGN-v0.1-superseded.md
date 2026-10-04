[Русская версия](DESIGN-v0.1-superseded.ru.md)

# Design: an Oberon machine in the browser + an ISA extension experiment

Version 0.1 (draft for review). 2026-09-21.

---

## 1. Goal and success criteria

Episode 1 of the series. Three claims that must be proven by **measurement**, not by
rhetoric:

| # | Claim | How it is checked | Criterion |
|---|---|---|---|
| **C1** | The whole stack (processor, compiler, OS) runs in the browser | the page loads, Oberon boots, the editor responds | ≤ 10 s to interactive on a typical laptop |
| **C2** | Adding an instruction to the processor speeds up an application task, and this takes a minute | RTL edit → rebuild → measurement | inference speedup ≥ 2× with unchanged output |
| **C3** | Hardware bounds checking costs X cycles and Y gates | a differential measurement on the same workload | the number is published with a confidence interval and reproducible by a command |

**Non-goals (explicit):** compatibility with Wirth's real board; network support; performance
for the sake of performance; completeness of ISA extensions.

---

## 2. System layers

```
┌─────────────────────────────────────────────────────────┐
│ Episode page (HTML/JS)                                  │
│  canvas 1024×768×1bpp · keyboard · 3-button mouse       │
│  model switch · measurement buttons · counter output    │
└───────────────┬─────────────────────┬───────────────────┘
                │                     │
     ┌──────────▼─────────┐ ┌─────────▼──────────┐
     │ FAST MODEL         │ │ HONEST MODEL       │
     │ ISS in C → WASM    │ │ RTL → Verilator →  │
     │ (for interaction)  │ │ C++ → WASM         │
     └──────────┬─────────┘ └─────────┬──────────┘
                └──────────┬──────────┘
                    ┌──────▼──────┐
                    │  SoC layer  │ RISC5 + RAM + PROM + devices
                    └──────┬──────┘
                    ┌──────▼──────┐
                    │ Oberon 2013 │ OS + compiler + inference module
                    └─────────────┘
```

Both models implement **the same SoC contract** (§4) and are checked against each other (§8).

---

## 3. The virtual "hardware" layer: the RISC5 core

From the specification (checked against `RISC.v`):

- **Registers:** R0–R15. Oberon software conventions: R12=MT (module table), R13=SB (module globals), R14=SP, R15=LNK. Only R15 is special in hardware.
- **Flags:** N, C, V, Z. N and Z are set on **any** register write (including a load); C and V only on integer ADD/SUB.
- **H**: the upper 32 bits of MUL / the remainder of DIV. **Not saved on an interrupt** → MUL/DIV in a handler are unsafe.
- **SPC**: saves NZCV and PC on IRQ.

### Formats

| Format | Bits 31:28 | Meaning |
|---|---|---|
| F0 | `00u0` | register-register, n=Rc |
| F1 | `01uv` | register-immediate, v=1 → sign extension |
| F2 | `10uv` | u=0 load / u=1 store; v=0 word / v=1 byte; 20-bit offset |
| F3 | `110v` / `111v` | branch: register / offset; v=1 → with link in R15 |

F0/F1 operations (op in bits 19:16): MOV, LSL, ASR, ROR, AND, ANN, IOR, XOR, ADD, SUB,
MUL, DIV, **FAD, FSB, FML, FDV**.

With u=1 these are modified: MOV→(H | NZCV | MHI), ADD→ADC, SUB→SBC, MUL→UMUL.

### 🎯 Free encoding space

**In F0 bit 28 is always 0** (`00u0`). So the combinations `0001` and `0011` in bits 31:28
are not taken by anything → **32 free slots for three-operand instructions**. In addition, F0 has
12 free bits in the middle of the word and the nibble before the `c` field.

This is the playground for extensions. We note separately: **base RISC5 has no fused
multiply-accumulate in either integer or floating-point arithmetic**, so the target of the experiment
is not taken.

---

## 4. The SoC contract

Both models must behave identically according to this contract.

### Memory
- RAM: configurable, **1 MB** by default (as in Wirth's). Parameter `MEM_WORDS`.
- Byte and word addressing; a 32-bit word, little-endian.
- **PROM/loader**: a separate area, executed from reset.
- The framebuffer: an area in main RAM, 1024×768×1 bit = 96 KB.

### Address map
⚠ **TO VERIFY against `RISC.v` and the book**: the values below are reconstructed and must be checked
before coding starts:

| Area | Purpose |
|---|---|
| `0x00000000` | reset vector / start of memory |
| `0x00000004` | **interrupt vector** (confirmed by the specification) |
| `…` | framebuffer (in Oberon 2013, `DisplayStart`) |
| the top 64 bytes of the address space | device registers |
| PROM area | loader |

Device registers (reconstruction, **TO VERIFY**): millisecond counter, LEDs/switches,
RS-232 data and status, SPI data and control, mouse/keyboard status, keyboard data.

### Devices (the minimal set for C1)
| Device | Requirement |
|---|---|
| **Timer** | a free-running millisecond counter |
| **Display** | 1024×768, 1 bit/pixel, framebuffer read from RAM |
| **Keyboard** | a PS/2-compatible stream of scan codes |
| **Mouse** | X, Y, **three buttons** (critical: the whole shell runs on inter-button clicks) |
| **SPI/SD** | block read/write of the disk image |
| **RS-232** | optional, for the initial load and debug output |

### Clocking and reset
- One clock domain in the core. Everything external goes through synchronizers (groundwork for the FPGA, see `03-language-machines.md`).
- **All registers are reset explicitly.** Redundant on an FPGA, mandatory in silicon.
- **Memory is not assumed to be preloaded.** The loader comes from the PROM, not from the bitstream.

---

## 5. ISA extension: experiment A (speedup)

### The FMAC instruction
A fused floating-point multiply-accumulate.

```
       4      4       4       4                     4       4
   +------+-------+-------+-------+-------------+-------+-------+
   | 0001 |   a   |   b   |  op   |             |  0000 |   c   |
   +------+-------+-------+-------+-------------+-------+-------+
   FMAC a, b, c    Ra = Ra + Rb * Rc     (op = 0000)
```

It occupies the free space `0001` (F0 with bit 28=1) and conflicts with nothing.

**Why it should give a gain.** The inner dot-product loop is currently:
`LD` (weight) · `LD` (activation) · `FML` · `FAD` + pointer increments + loop control.
FMAC removes one instruction of the four arithmetic/load ones and, more importantly, eliminates
the intermediate register write with a flag update.

**Expected speedup: 1.3–2×.** If more is needed, a second stage: `FMACI` with
address post-increment, which also removes the pointer arithmetic.
⚠ Treat the 2× estimate from `09-episode-01-oberon.md` as **a hypothesis to be measured**, not
a promise. If we get 1.4×, that is the honest result of the episode.

### What changes in the compiler
The Oberon compiler is written entirely in Oberon and bootstraps itself. The minimal intervention:
1. A new built-in procedure (SYSTEM-like) that the code generator expands into FMAC.
2. **No** changes to the parser or the type system.

This is a deliberately minimal path: automatic recognition of the idiom `a := a + b*c` in the
code generator would be nice, but it is not needed for C2 and adds risk.

⚠ **Bootstrapping is the critical path.** The modified compiler must build itself
inside the system. Order: build the new compiler with the old one → rebuild itself with the new one →
compare byte for byte (fixpoint). See test T-BOOT-3.

---

## 6. ISA extension: experiment B (the cost of memory safety)

The main research result of the series. The Burroughs lesson applied to RISC5.

### What we add
Hardware bounds checking on indexing. Two variants to choose from (to be decided at review):

**Variant B1, "cheap": a check instruction.**
```
   CHK a, b, c     trap if Ra ≥ Rc (unsigned), otherwise Ra = Ra
```
The compiler inserts it before every indexing. We measure: the growth in cycles and in code.

**Variant B2, "honest": a descriptor in a register.**
A separate load/store format with checking: base and length in a register pair,
the bounds check in the access operation itself, a trap on violation.

B2 is closer to Burroughs and to CHERI, but requires changes to the memory model and the compiler.
**Recommendation: start with B1**: it gives a publishable number at low cost; keep B2 as
the next episode.

### What we measure
| Metric | Source | Without hardware? |
|---|---|---|
| Cycles | the Verilator cycle counter | ✅ more precise than a real board (no noise and no interrupts) |
| Area (cells/LUT) | the `yosys` synthesis report | ✅ |
| Max frequency | `nextpnr` for the chosen FPGA | ✅ no board needed |
| Silicon estimate | an open synthesis flow | ✅ without sending anything |

**Workloads for the measurement: two, and both are mandatory:**
1. Inference (compute code, dense indexing)
2. **The system rebuilding itself** (a real mixed workload, not a microbenchmark)

A measurement on a microbenchmark only would be rightly torn apart by reviewers.

---

## 7. The software side

| Component | Source | Work |
|---|---|---|
| Oberon 2013 image | the Project Oberon distribution | building the disk image |
| Compiler | part of the image | editing the code generator (§5) |
| Inference module | a port of the reference implementation (~700 lines of C) | porting to Oberon |
| Model weights | an external file | quantization, placing them in the image or feeding them via SPI |

**Memory budget (check by calculation before starting work):**
- total RAM: 1 MB
- framebuffer: 96 KB
- OS + compiler + modules: **TO VERIFY**
- left for weights and activations: **TO VERIFY**

⚠ If it does not fit, in the browser the memory can be increased (`MEM_WORDS`), but then C1 and C3 are measured
on a non-standard configuration, and this must be stated honestly in the article. Alternative: stream
the weights layer by layer via SPI.

---

## 8. How we verify that things work (test strategy)

### T0. Differential testing: the main tool

We have a **known-good reference model**: `pdewacht/oberon-risc-emu` (~1500 lines of C),
which boots the real system. So the golden reference does not need to be written; it exists.

```
        instruction stream
              │
      ┌───────┴───────┐
      ▼               ▼
  reference ISS    our RTL (Verilator)
      │               │
      └───► compare the state after EVERY instruction ◄───┘
            PC, R0..R15, H, N/C/V/Z, all memory writes
```

The first divergence → a context dump (PC, instruction word, both states) and a stop.

This is standard practice for processor projects, and it removes the bulk of the bugs
before they become mysterious hangs in the OS.

**Test code (sketch):**
```c
// tb/diff_main.c
for (;;) {
    uint32_t pc = ref_pc(ref);
    uint32_t insn = ref_read_word(ref, pc);
    ref_step(ref);
    rtl_step(dut);                 // one retire cycle
    if (!states_equal(ref, dut)) {
        dump_mismatch(pc, insn, ref, dut);
        return 1;
    }
    if (++n % 1000000 == 0) checkpoint(ref, dut);
}
```

### T1. Directed ISA tests
Assembly tests, one for each instruction and each significant case:

- **T1.1 arithmetic**: ADD/SUB with overflow, ADC/SBC with carry, MUL/UMUL (H!), DIV (H=remainder), division by zero
- **T1.2 flags**: N and Z are set on **any** register write, including `LD`; easy to forget in RTL
- **T1.3 shifts**: ASR with sign extension, ROR, LSL by 0 and by 31
- **T1.4 floating point**: FAD/FSB/FML/FDV, including zeros, infinities, denormals, NaN, rounding
- **T1.5 memory**: LD/ST word and byte, negative offsets, the bounds of the 20-bit field
- **T1.6 branches**: all 16 conditions × (register/offset) × (with link/without), clearing the two low address bits
- **T1.7 interrupts**: entry at `0x00000004`, saving/restoring the flags and PC, STI/CLI, **and an explicit check that H is NOT saved** (documented behavior)
- **T1.8 MOV variants**: `MOV a,H`, `MOV a,NZCV` (should return INFO in the low bits), `MHI`
- **T1.9 new**: FMAC: precision against the FML+FAD sequence (they may differ in rounding!), all special values
- **T1.10 new**: CHK: firing at the boundary, unsigned comparison, behavior with Rc=0

### T2. Randomized testing
A generator of random instruction sequences (with valid addresses), run through T0.
A separate "FP only" mode with directed generation of special values.

### T3. System tests
- **T-BOOT-1**: the PROM loader starts, reads the SD, transfers control
- **T-BOOT-2**: Oberon reaches a ready screen, responds to the keyboard and mouse
- **T-BOOT-3 (critical)**: **bootstrapping**: the compiler builds itself, the result is compared byte for byte with the previous one (reaching a fixed point)
- **T-BOOT-4**: the system rebuilds itself completely and keeps running
- **T-DISP**: the framebuffer checksum against a reference snapshot

### T4. Performance regression
Every build writes to a file: cycles per inference of one token, cycles per full system
rebuild, the number of cells from the synthesis report, Fmax. The chart is kept from day one, otherwise C2 and C3
will have nothing to stand on.

### T5. Output correctness check
⚠ **Mandatory:** after FMAC is enabled, the model output must stay **functionally the same**.
If FMAC rounds differently from FML+FAD, the text may diverge. Test: compare
the token sequence with a fixed seed on the reference and the accelerated builds.
If it diverges, document and explain it rather than hide it.

---

## 9. What needs to be clarified before work starts

| # | Question | Why it blocks |
|---|---|---|
| Q1 | The exact device address map from `RISC.v` | without it the SoC cannot be written |
| Q2 | The address and structure of the PROM/loader | without it there is no start |
| Q3 | The format and width of floating-point arithmetic in `RISC.v` (rounding!) | FMAC and T5 depend on it |
| Q4 | The real memory budget: how much is left for the model | it determines whether the demo fits in 1 MB |
| Q5 | The structure of the Oberon compiler's code generator | the estimate of work for §5 |
| Q6 | The speed of the Verilator model in WASM: cycles/s | it determines whether interaction is alive on the honest model |

**Q6 is the most dangerous.** If the honest model gives, say, 100 thousand cycles/s, then 25 MHz
turns into a 250× slowdown, and "live ISA editing" stops being spectacular.
Check it **first thing**, before everything else.

---

## 10. Stages

| Stage | Content | Output |
|---|---|---|
| **0. Reconnaissance** | Q1–Q6, especially Q6 | a decision: is the plan alive |
| **1. Skeleton** | RTL core + reference ISS + differential bench (T0, T1) | the core passes all directed tests |
| **2. SoC** | memory, devices, PROM | T-BOOT-1 |
| **3. System** | the Oberon image, boot, input/output | T-BOOT-2, T-BOOT-3 |
| **4. Browser** | both models in WASM, the page, input | C1 |
| **5. Workload** | port of inference to Oberon | text generation works |
| **6. Experiment A** | FMAC: RTL + compiler + measurements | C2 |
| **7. Experiment B** | CHK: RTL + compiler + measurements on two workloads | C3 |
| **8. Release** | text, page, repository | publication |

---

## 11. Risks

| Risk | Likelihood | Impact | Mitigation |
|---|---|---|---|
| Verilator in WASM is too slow | medium | high | the fast model handles interaction; the RTL stays a showcase of the mechanism; check at stage 0 |
| Editing Verilog in the browser is impossible (synthesis needed) | **high** | medium | a prebuilt set of ISA variants instead of arbitrary editing; the effect is weaker but it lives |
| The model does not fit in 1 MB | medium | medium | increase memory (with an honest caveat) or stream the weights via SPI |
| Compiler bootstrapping does not converge | medium | **high** | T-BOOT-3 is placed early, at stage 3, not at the end |
| FMAC changes the output because of rounding | medium | low | T5; the divergence is documented as a result |
| The speedup turns out to be 1.2×, not 2× | medium | low | we publish what was measured; if needed, the second stage FMACI |
| Scope creep | **high** | high | non-goals are fixed in §1; B2 is explicitly moved to the next episode |
