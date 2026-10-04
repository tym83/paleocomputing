[Русская версия](13-episode-lm-on-risc5.ru.md)

# Episode 2: a language model inside Oberon, and what actually makes it slow

Decision on the setup: 2026-09-28. A continuation of the flagship (`09-episode-01-oberon.md`):
there, "the neural network and FMAC" were deliberately taken out of the design (`design/DESIGN.md`, §1); here
they come back, but not as a promise of speedup, as a measurement.

## The essence

A small character-level language model, trained on the host, runs **inside the Oberon
system**: a module in Oberon-07, built by the system's own compiler, reads the weights from a
file and prints text. It runs on the real `RISC5.v` RTL cycle by cycle.

Then comes an honest breakdown of where the cycles go, and a test of two hypotheses from `BACKLOG.md`
(line 3b2): "FMAC gives 1.07×, a pipelined multiplier gives 1.67×". The source of these numbers is
the reviewers' arithmetic over RTL latencies and one manual measurement of a dot-product loop
(`design/REVIEW.md`, reviewer sections 1–3); there is neither a reproduction command
nor a model workload behind them. Here they are either confirmed by measurement or not.

## Claims and criteria

| # | Claim | Verification criterion |
|---|---|---|
| **L1** | The model runs inside Oberon on Wirth's RTL | the module is built by the system's own `ORP.Compile`; the output on the RTL is byte-for-byte equal to the host reference for a fixed seed and prompt; a single command `make lm` |
| **L2** | The host reference is exact to the bit, not "similar" | the host implementation computes in RISC5 arithmetic (`risc-fp.c`, cross-checked against the RTL in finding 50) in the same order of operations; the divergence from IEEE float32 is measured and shown separately |
| **L3** | It is known where the cycles go | on the RTL, within the generation window: cycles per character, the share of cycles in FML/FAD/FDV/MUL/LD-ST/other, the number of instructions of each class; the shares sum to 100% |
| **L4** | The speedup from a fast multiplier is measured, not computed | an `FPMultiplier` variant behind a define (following the `WITH_CHK` pattern); results are bitwise equal to the original on ≥10⁷ random pairs + edge classes; the model output is the same; the speedup on the model and on the system's stock workloads is measured |
| **L5** | The FMAC ceiling is computed from the measured profile | from the number of FML→FAD pairs in the window; honestly marked as an estimate, not a measurement |
| **L6** | The hardware cost of the fast multiplier is known | ECP5 (the finding 69 flow): Fmax, LUT, DSP for the original and the fast multiplier; whether 25 MHz holds |

## The model

**A character-level MLP (Bengio 2003):** a context of 8 characters → embeddings of 16 → a hidden layer of 256
(ReLU) → logits over a vocabulary of ~40 characters. About 44 thousand parameters.

Why not a transformer: at these sizes a transformer has the same arithmetic (multiply-
accumulates), but needs attention softmax, normalization (`sqrt`) and a cache: hundreds of lines on
non-standard floating point with no gain for the episode's question. The episode's question is not
text quality but the cost of multiplication. ReLU instead of tanh so that there is exactly one transcendental
function: `exp` in the softmax during sampling, ~40 calls per character versus ~44 thousand
multiplications.

Training is on the host, Python + numpy, no GPU, a fixed seed. The text is a public-domain
Project Gutenberg book; the source, license and SHA-256 are recorded
next to the script. Sampling is deterministic: our own integer PRNG in the module and in the
reference. We position the quality honestly: "looks like English", not "a chat".

## Memory budget

Checked against the sources, not from memory:

| | address / size | source |
|---|---|---|
| board RAM | 1 MB | `RISC5Top.v` |
| framebuffer | from `0E7F00H`, 96 KB | `Display.Mod` |
| `MemLim` | `0E7EF0H` | `BootLoad.Mod:8` |
| stack | `stackOrg = 80000H`, `stackSize = 8000H` (32 KB) | `BootLoad.Mod:8`, `Kernel.Init` |
| **heap** | `80000H … 0E7EF0H` = **425,712 B** for everything (texts, windows, our buffer) | `Kernel.Init`: `heapLim := MemLim` |
| modules (code + globals) | below `80000H − 8000H`, ~480 KB for all loaded modules | `Modules.Mod` |

fp32 weights: 44 thousand × 4 B ≈ **176 KB**; they fit in the heap with more than a twofold margin,
with one `NEW` at startup (the collector does not run inside a command, `REVIEW.md` §9).
Norebo (where the main measurement on the RTL takes place) gives 8 MB; cycles do not depend on memory
size, but the model must also fit in the real machine, otherwise the episode is dishonest.

## Weight format: fp32, and this is a decision from arithmetic

The conflict from the review: "int8 fits, but then a floating FMAC is the wrong instruction". On
RISC5 the machine itself resolves it. Latencies from the RTL (`tb/cycle_model.h`, finding 17):

| path of one multiply-accumulate | arithmetic cycles |
|---|---|
| fp32: `FML` 26 + `FAD` 4 | **30** |
| int8 → float: `LDB` + `FLT` (which is `FAD` with u) 4 + `FML` 26 + `FAD` 4 | 34 + load |
| fixed point: `MUL` 34 + `ADD` 1 (+ shift) | **35–36** |

**Integer multiplication on RISC5 is more expensive than floating-point** (34 versus 26 cycles). Quantization
speeds up nothing and only adds unpacking; its only advantage is size, and fp32 already
fits. Decision: **fp32**; the file format is raw 32-bit words in the
RISC5 representation (it matches the IEEE bits for normal numbers; subnormals
are explicitly zeroed during packing and counted).

## What we measure and how

* **Where:** `norebo_tb`, Norebo on the Verilator RTL (finding 22). The Norebo C emulator
  is fine for fast debugging, but the episode's numbers come only from the RTL.
* **Window:** the module writes start and end-of-generation markers to the LED port (`-60`);
  the bench counts cycles and instructions only inside the window. Loading modules and reading the weights
  are not included in the number.
* **Cycles per character:** window cycles ÷ number of characters; plus a linearity check (N and 2N
  characters).
* **Profile:** for each executed instruction, its class (FML, FAD/FSB, FLT/FLOOR,
  FDV, MUL, DIV, LD, ST, branch, other) and how many cycles it stalled; FML directly after
  FML is counted separately (the counter surcharge, 32 instead of 26).
* **QEMU:** the same program in `qemu-system-risc5`, only as a functional check of the
  output. QEMU does not model cycles; we take no numbers from it.
* **Fast multiplier:** the same run, the same output, a different core. Plus the stock
  workloads: system boot (`make boot`) and the compiler building itself (`selfhost`).
* **FMAC:** an estimate from the profile: how many cycles go to `FML→FAD` pairs and how many of
  them a fused instruction can remove with each multiplier implementation.

## Non-goals

* Changing the compiler and a new instruction in this episode. FMAC is only estimated.
* Text quality, large models, a BPE tokenizer, a transformer.
* Running on a physical board: the frequency comes from FPGA timing analysis, not from hardware.
* IEEE compatibility: we compute in Wirth's arithmetic and say so.

## Risks

| Risk | Likelihood | What we do |
|---|---|---|
| RISC5 rounding ≠ IEEE → the character choice diverges from the numpy reference | high | the reference computes in `risc-fp.c`; the divergence from IEEE is measured and published, not hidden |
| `exp` on non-standard floating point | medium | our own `exp` in the module with the same order of operations in the reference; a test over a grid of values |
| The run on the RTL takes too long | medium | ~2–3 million cycles per character by estimate → 50–100 characters in minutes; long runs only in the background |
| The fast multiplier is not bit-for-bit equal to the original | medium | a differential test of the modules before any measurement |
| A single-cycle 24×24 multiplier does not hold 25 MHz on ECP5 | medium | then a two- or three-cycle variant, and that is a result too |
| The speedup turns out small | — | that is the result; we publish it as is |

## Results

Taken on 2026-09-28. Every number comes with a command; all commands run from `impl/`.
Details in findings 72–78 in `impl/docs/`.

### L1, L2: the model inside Oberon, text exact to the byte (finding 72)

| what | result | status | command |
|---|---|---|---|
| model | MLP, context 8, embeddings 16, hidden 256, vocabulary 36; 42,852 parameters, fp32, 171,572 B | — | `python3 lm/train.py` |
| quality | 1.24 / 1.57 nats/character (training / held-out 10%) | measured | `lm/weights.json` |
| Norebo emulator versus the RISC5 reference | 3 seeds × 64 characters, byte for byte | measured | `make lm-check` (runs in CI) |
| Wirth's RTL versus the reference | 2 seeds × 16 characters, byte for byte | measured | `make lm` |
| the real system on the RTL (1 MB, disk, windows), compilation inside the system | `LM.Out` = reference | measured | `make lm-system` |
| QEMU, the same scenario | `LM.Out` = reference; the frame is bitwise equal to the RTL frame | measured | `make lm-qemu` |
| memory | the record with the weights is 171,408 B, 40% of the heap (425,712 B); code 892 words | from the sources and compiler output | — |

Example (seed 1): `alice was one thought all the tell you spo`.

IEEE versus RISC5 (finding 78): 98.5% of logits differ bitwise
(median divergence 3.8·10⁻⁶ with logits of ~3.5), but the text over 20 seeds
× 128 characters never diverged once: `python3 lm/ieee_study.py 128 $(seq 1 20)`.

### L3: where the cycles go (finding 74)

RTL, a measurement window around the model step, 32 characters: `make lm-profile`.

| | value | status |
|---|---:|---|
| cycles per character | **2,804,372** | measured |
| instructions per character | 1,150,926 | measured |
| characters per second at 25 MHz | 8.9 | recomputed, without video DMA |
| share of cycles in `FML` | **39.15%** | measured |
| `LD` / `ST` | 27.34% / 6.14% | measured |
| `FAD` | 6.02% | measured |
| `FDV`, `FSB`, `FLT`, `FLOOR`, `MUL` combined | 0.07% | measured |
| stall (beyond one cycle per instruction) | 59%, of which 64% is `FML` | measured |
| inner loop: instructions / cycles per multiply-accumulate | 27 / 66 | disassembler + counting |

### L4: the fast multiplier (findings 73, 74, 75)

| | value | status | command |
|---|---:|---|---|
| bitwise equality with `FPMultiplier` | 0 mismatches over 10,228,649 operations, both variants | measured | `make fpmul-diff` |
| model speedup, 1 cycle | **1.604×** | measured | `make lm-profile` |
| model speedup, 2 cycles | **1.566×** | measured | `make lm-profile` |
| Amdahl prediction for 1 cycle | 1.604× (matched) | calculation | `make lm-profile` |
| ceiling with free multiplication | 1.643× | calculated from the profile | — |
| the compiler building itself | 1.0000× (31 `FML` in 40.8 million instructions) | measured | `make lm-stock` |
| system boot | 1.0000× (0 `FML` in 12 million instructions) | measured | `make boot boot-fast` |

The BACKLOG hypothesis "a pipelined multiplier gives 1.67×" is **not confirmed in
this form**: on this code 1.67× is unreachable even with free multiplication
(the ceiling is 1.643×); measured 1.566–1.604×.

### L5: FMAC (finding 74)

An estimate from the measured number of `FML`→`FAD` pairs (42,086 per character): savings
from 1 cycle per pair (sequential execution of the same blocks) to 4 (the addition is
free).

| multiplier | FMAC on top of it | status |
|---|---|---|
| original | 1.015× … 1.064× | estimate |
| 2 cycles | 1.024× … 1.104× | estimate |
| 1 cycle | 1.025× … 1.107× | estimate |

The hypothesis "FMAC gives 1.07×" **is confirmed as an upper bound**, not as an
expectation. FMAC does not remove loading and storing the sum; that is the
compiler's job; after the multiplier is replaced, `LD`/`ST` are 54% of the cycles.

### L6: the hardware cost (finding 76)

ECP5 LFE5U-85F, 5 seeds per variant, `cd fpga && make docker-fmul`.

| core (core wrapper) | median fmax, MHz | DSP | FF | status |
|---|---:|---:|---:|---|
| original | 47.40 | 0 | 614 | measured |
| 1 cycle | 36.20 | 4 | 561 | measured |
| 2 cycles | 47.30 | 4 | 588 | measured |

25 MHz holds in all 30 place-and-route runs (including the soc wrapper, where the frequency
is limited by the path to the ROM, not by the multiplier).

### Side findings

* QEMU could not write to the disk: the drive had no write permission and
  the raw image did not grow; fixed, finding 77. Keyboard input via QMP does not reach
  the system; not investigated.
* Floating-point comparison in Oberon reads the `OV` flag from the last integer
  addition: `1.0 < 2.0` yields FALSE after an overflow; finding 78,
  `bash lm/ovprobe.sh`.

### What remains

* Cycles in the real system (with windows and video DMA) have not been measured, only in Norebo.
* Neither FMAC nor register allocation in the code generator has been implemented:
  both are estimates or directions, not measurements.
* A browser page with a multiplier switch has not been built.
