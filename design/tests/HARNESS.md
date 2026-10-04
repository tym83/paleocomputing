[Русская версия](HARNESS.ru.md)

# Test harness: the code we use to verify that things work

**Version 0.2**: updated after the review. Open questions are closed, five fixes to the
differential bench and the missing tests have been added. Full findings: `../REVIEW.md`.

Principle: **the reference already exists.** `pdewacht/oberon-risc-emu` (~1500 lines of C) boots
the real Project Oberon 2013 system, so the golden model does not need to be written; it needs to be
wrapped. The whole harness is built around comparing our RTL with this reference.

---

## Structure

```
design/tests/
  harness/
    ref_iss.h        interface to the reference ISS (a wrapper over oberon-risc-emu)
    dut_rtl.h        interface to our model (a wrapper over Verilator)
    state.h          canonical machine state + comparison
    diff_main.c      differential run
    trace.c          trace recording/replay
  directed/
    t1_arith.s       T1.1 integer arithmetic
    t1_flags.s       T1.2 flags (N/Z on ANY register write!)
    t1_shift.s       T1.3 shifts
    t1_fp.s          T1.4 floating-point arithmetic
    t1_mem.s         T1.5 memory
    t1_branch.s      T1.6 branches (16 conditions × 4 forms)
    t1_irq.s         T1.7 interrupts (+ a check that H is NOT saved)
    t1_movspec.s     T1.8 MOV a,H / MOV a,NZCV / MHI
    t2_fmac.s        T1.9 new: FMAC
    t2_chk.s         T1.10 new: CHK
  random/
    gen.py           generator of random valid sequences
  system/
    boot.md          T-BOOT-1..4
  perf/
    bench.md         T4 performance regression
    results.csv      append-only history of measurements
```

---

## 1. Canonical state

The single definition of what counts as "the machine state". Both models must
be able to provide it.

```c
/* state.h */
typedef struct {
    uint32_t pc;
    uint32_t r[16];
    uint32_t h;              /* upper bits of MUL / remainder of DIV */
    uint8_t  n, z, c, v;     /* flags */
    uint8_t  irq_enabled;
    uint32_t spc;            /* saved interrupt context */
} cpu_state_t;

/* Memory writes per step are compared separately, to avoid sweeping all of RAM */
typedef struct {
    uint32_t addr;
    uint32_t data;
    uint8_t  width;          /* 1 = byte, 4 = word */
} mem_write_t;

typedef struct {
    cpu_state_t  cpu;
    mem_write_t  writes[MAX_WRITES_PER_STEP];
    int          n_writes;
} step_result_t;

int  state_equal(const cpu_state_t *a, const cpu_state_t *b);
void state_diff_report(FILE *out, const cpu_state_t *ref, const cpu_state_t *dut);
```

✅ **Closed by the review.** A step = **instruction completion (retire)**, not a cycle: LD/ST = 2 cycles,
FAD = 4, FML = 26, FDV = 27, MUL/DIV = 34. The retire strobe is the clock edge with `~stall`, but
**`stall` is not exported** (`RISC5.v:169`) → a `/*verilator public*/` or a
debug port is needed.

---

## 2. The differential run (the main tool)

```c
/* diff_main.c */
int run_differential(const char *disk_image, uint64_t max_steps)
{
    ref_t *ref = ref_init(disk_image);
    dut_t *dut = dut_init(disk_image);

    for (uint64_t step = 0; step < max_steps; step++) {
        uint32_t pc   = ref_pc(ref);
        uint32_t insn = ref_peek_word(ref, pc);

        step_result_t r_ref, r_dut;
        ref_step(ref, &r_ref);
        dut_step_until_retire(dut, &r_dut);

        if (!state_equal(&r_ref.cpu, &r_dut.cpu) ||
            !writes_equal(&r_ref, &r_dut)) {
            fprintf(stderr,
                "MISMATCH at step %llu\n"
                "  PC   = 0x%08X\n"
                "  insn = 0x%08X  (%s)\n",
                step, pc, insn, disasm(insn));
            state_diff_report(stderr, &r_ref.cpu, &r_dut.cpu);
            writes_diff_report(stderr, &r_ref, &r_dut);
            dump_context(ref, dut, pc);      /* ±16 instructions around */
            return 1;
        }

        if (step % CHECKPOINT_EVERY == 0)
            checkpoint_full_memory(ref, dut, step);   /* infrequent full RAM comparison */
    }
    return 0;
}
```

**Why compare writes rather than the whole memory:** a full comparison of a megabyte after every
instruction would kill the speed. A full comparison happens once every N steps, to catch divergences
that the DUT "did not notice" (for example, a write that missed the bus).

### 🔴 Five fixes without which the bench will not work

1. **A retire strobe** instead of a cycle; see above
2. **The reference has NO interrupts at all** (no `SPC`, no `RTI`, no `irq`) → **T1.7 has nothing to compare against**: write our own reference or acknowledge the absence of a golden model
3. **Different PC widths**: the RTL has `reg [21:0]`, reset to `0xFFE000`; the emulator uses a 32-bit word index, `ROMStart 0xFFFFF800`. They match only because of PROM aliasing → **compare modulo 2²²**
4. **The reference writes to memory things that do not exist in hardware**: `risc.c:130-133` puts `"Sizg"` and the screen dimensions at `DisplayStart` → a byte-wise RAM comparison fails at step **zero**. Exclude these
5. **The `progress` heuristic**: `risc_run` returns as soon as Oberon reads the millisecond counter 20 times in a row → **it silently exits earlier than requested**, and the states diverge not because of an RTL bug. **Patch `risc->progress`** (`risc.c:165`, one line)

Plus: **limit the difftest to RAM, exclude IO**: the emulator models devices in its own way.
And: **the ISS is not cycle-accurate at all** (`risc_run` counts instructions) → T0 compares
the architectural state, **cycles are taken only from the RTL**.

**Run modes:**
| Mode | What it does | When |
|---|---|---|
| `--directed FILE` | loads a test from `directed/`, runs it to HALT | on every commit |
| `--random SEED N` | generates and runs N random instructions | nightly build |
| `--boot` | a full Oberon boot from the image to a ready screen | on every commit |
| `--trace FILE` | replays a recorded trace | when investigating a bug |
| `--bisect` | binary search for the first divergence in a long trace | when investigating a bug |

---

## 3. Directed tests: format

✅ **Closed.** No assembler for RISC5 exists (Project Oberon has none at all;
the only third-party one is `waz-xyz/r5asm`, WIP). Path (a) was chosen: **a mini assembler in Python,
`asm.py` in this same folder; it works, and its self-test of 14 encoding checks passes.**

A practical alternative for some tests: write them directly in Oberon:
`SYSTEM.PUT`, `SYSTEM.LDREG`, `SYSTEM.REG`, `SYSTEM.COND`, `SYSTEM.H` already exist
in the ORB universe.

The test format, with the expected result right in the file:
```
; t1_flags.s: N and Z are set on ANY register write, including LD
        MOV  R0, 0
        MOV  R1, 100
        ST   R1, R0, 0        ; Mem[0] = 100
        MOV  R2, -1           ; clobber the flags
        LD   R3, R0, 0        ; load 100 -> N=0, Z=0
; EXPECT R3 = 100
; EXPECT N = 0
; EXPECT Z = 0
        MOV  R4, 0
        ST   R4, R0, 4
        LD   R5, R0, 4        ; load 0 -> Z=1
; EXPECT Z = 1
        HALT
```

`; EXPECT` is parsed by the harness and checked at the point where it appears. This lets a test
be documentation at the same time, which matters because the tests will go into the text of the article.

---

## 4. Priority of the directed tests

Sorted by the probability of an implementation error, not by the order in the specification:

| Priority | Test | Why it is easy to get wrong |
|---|---|---|
| 🔴 1 | **T1.2 flags** | N and Z are set on ANY write. Not only `LD`: **`regwr = ~p & ~stall \| (LDR & …) \| (BR & cond & v & ~stallX)`: a taken BL/BLR writes R15 and sets N=0, Z=0.** A store does not touch the flags |
| 🔴 2 | **T1.7 interrupts** | entry at `0x00000004`, saving/restoring NZCV+PC, **H is not saved** |
| 🔴 3 | **T1.4 floating point** | 🔴 **pin down Wirth's behavior, NOT IEEE**: denormals and zeros collapse to 0, division by 0 → saturation, **there is no NaN class**, one guard bit, round-half-up rounding. The reference is `risc-fp.c`, not the standard |
| 🟠 4 | T1.1 arithmetic | H on MUL/UMUL/DIV, division by zero, ADC/SBC |
| 🟠 5 | T1.6 branches | 16 conditions, clearing the two low address bits, PC+4 in R15 |
| 🟡 6 | T1.5 memory | byte/word, sign of the 20-bit offset |
| 🟡 7 | T1.3 shifts | signed ASR, shift by 0 and by 31 |
| 🟡 8 | T1.8 MOV variants | `MOV a,NZCV` returns `{N,Z,C,OV, 20'b0, 8'h53}`: the constant **0x53** |
| 🟠 9 | **unaligned access** | `SRadr = adr[19:2]`: the two low bits are silently dropped, there is no error. Pin it down with a test |
| 🟠 10 | **byte lanes** | `inbus1`/`outbus` multiplexing + `SRbe`: a classic place for bugs |
| 🟠 11 | **IRQ during a multi-cycle operation** | `intAck & ~stall` → a delay of up to 34 cycles on DIV; the unsaved `H` also shows up here |
| 🔴 12 | **decoder equivalence** | all 256 combinations of {IR[31:28] × op} with random operands: the old and new cores match bit for bit, except for the new encodings. **Half an hour, and it catches the whole class of encoding errors** |

---

## 5. Tests of the new instructions

### T1.9 FMAC: ⏸ moved to episode 2

FMAC is excluded from the first episode (the speedup was refuted: the Amdahl ceiling is 2.00×,
the achievable range is 1.00–1.07×). The test is kept for the future.

**The old draft:**
```
; FMAC a, b, c  ->  Ra = Ra + Rb * Rc
; The key question: does the result match the FML+FAD sequence?
        ; variant 1: using existing instructions
        FML  R3, R1, R2
        FAD  R4, R0, R3
        ; variant 2: the new instruction
        MOV  R5, R0
        FMAC R5, R1, R2
; EXPECT R4 = R5          <- if NOT equal, FMAC rounds differently
```

⚠ If the fused operation rounds once and the pair rounds twice, the results will **legitimately**
diverge. This has to be decided before implementation: (a) make FMAC round twice so that
it is bitwise equivalent to the pair (simpler for the experiment, more honest for the comparison);
(b) make a real fused operation (mathematically more precise, but it changes the model's output;
see T5).
**Tentatively: variant (a)**: the goal of the experiment is to measure speed, not precision.

### T1.10 CHK
```
; CHK a, b, c  ->  trap if Ra >= Rc (unsigned)
        MOV  R1, 5
        MOV  R2, 10
        CHK  R1, R0, R2        ; 5 < 10, passes
; EXPECT no_trap
        MOV  R1, 10
        CHK  R1, R0, R2        ; 10 >= 10, trap at the boundary
; EXPECT trap
        MOV  R1, -1            ; 0xFFFFFFFF
        CHK  R1, R0, R2        ; unsigned: huge >= 10, trap
; EXPECT trap
```

✅ **Closed by the review, and the answer is different.** A trap through vector `0x04` is **impossible**:
it is maskable (CLI), not accepted during `stall`, silently swallowed inside a handler
(`~intMd`), and `SPC` is **not readable by software** and holds the *next* PC.

**The right semantics already exist in the system:** Oberon traps are software traps, via
`Put3(BLR, cond, ORS.Pos()*100H + num*10H + MT)`, with the vector installed at address `0x20`.
→ **CHK in hardware does `R15 := PC+4; PC := R12`**, with the trap number in `IR[7:4]`.
`Kernel.Trap` can already decode it. Two lines in `pcmux0`, one in `regwr`.

🔴 **CHK must have the F1 form** with a 16-bit immediate limit; in the F0 form
the saving is zero (the array limit is a constant, today it goes straight into the immediate of `Cmp`).
🔴 **CHK must not write a register**; otherwise it would clobber N/Z.

---

## 6. System tests

| Test | Pass criterion |
|---|---|
| **T-BOOT-1** | the PROM loader starts, reads the SD, transfers control |
| **T-BOOT-2** | Oberon reaches a ready screen; the framebuffer checksum matches the reference snapshot |
| **T-BOOT-3** 🔴 | **bootstrapping**: the compiler builds itself, the result matches the previous one bit for bit (a fixed point) |
| **T-BOOT-4** | the system rebuilds itself completely and keeps running |
| **T-INPUT** | a key press and a click of each of the three mouse buttons reach the system |

**T-BOOT-3 is placed at stage 3, not at the end**: it is the most dangerous test, and we need to
learn about its failure early.

---

## 7. Performance regression

```
perf/results.csv   (append-only, committed)
commit,date,config,tokens_per_Mcycle,cycles_per_rebuild,cells,fmax_mhz
```

Collected on every build. Configurations:
- `base`: plain RISC5
- `fmac`: with FMAC
- `chk`: with bounds checking
- `fmac+chk`: both

**Without this table from day one, claims C2 and C3 have nothing to stand on.**

---

## 7a. Tests that were missing in 0.1

- **"an unmodified image on the new RTL"**: the new ISA must not break old binaries. Mandatory: **RISC5 has no trap on an unknown instruction**, so a wrong encoding will execute silently
- **"a new image on the old CPU" must EXPLICITLY REFUSE**: use the `.rsc` version byte (`versionkey = 1X` → set **`2X`**), otherwise the old loader will execute the new instruction as an old one
- **compiler determinism**: two runs on the same source → identical `.rsc`. Without this T-BOOT-3 cannot be interpreted
- 🔴 **a difftest of the compiler itself** across three implementations: native Oberon / Norebo / `fzipp/oberon-compiler` (Go). Catches code generator editing errors **before** they become an OS hang
- overflow of `ORG.maxCode = 8000` words and `maxStrx = 2400` after inserting CHK
- **coverage** with `verilator --coverage`
- **assertions**: "intAck never during stall", "no more than one stall source", "regwr does not coincide with wr", "ben only on F2"
- 🔴 `--x-assign unique --x-initial unique` with a random seed: **Verilator is two-valued and fundamentally cannot check the requirement "all registers are reset"**

## 7b. Bootstrapping: the refined mechanics

This is a **standard mode** of Project Oberon, not a feat. But:
```
gen0: ORP.Compile ORS.Mod/s ORB.Mod/s ORG.Mod/s ORP.Mod/s ~   (* /s is mandatory *)
System.Free ORTool ORP ORG ORB ORS ~                          (* otherwise res=3 *)
gen1 rebuilds itself → gen2; compare byte for byte
```
🔴 `Files.Register` **overwrites the `.rsc` in place, there are no old versions** → a broken new
`ORP.rsc` = there is no compiler any more. For the configuration with CHK **bricking is real** → a second copy
of the image and a host route are mandatory.
🔴 The fixed point proves that the compiler is **its own** fixed point, not that it is correct.
Compare only gen N and gen N+1 **of the same source** (`.rsc` contains `ORS.Pos()`).

## 8. What the harness does NOT check (deliberately)

- Real hardware timing (that needs an FPGA)
- Behavior under metastability and at clock domain boundaries
- Synthesis correctness (that needs formal equivalence checking, a separate stage)
- Power consumption
