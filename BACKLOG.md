[Русская версия](BACKLOG.ru.md)

# Project backlog

Statuses: `idea` / `research` / `in progress` / `done` / `dropped`
Updated: 2026-09-25

---

## Top candidates (ranked)

| # | Project | Track | Effort | Artifacts | Outcome | Status |
|---|---|---|---|---|---|---|
| 1 | **A reconciler in Refal + supercompilation** | 2+4 | an evening to a week | everything exists | statically detectable controller conflicts, a proof of convergence | idea |
| 2 | **The triad on the J1 Forth processor** | 3 | a weekend | everything exists | the first repository, the full hardware+language+OS cycle | idea |
| 3 | **Sulong in managed mode: what breaks in real C++** | cross-cutting | an evening | everything exists | an article with numbers, the entry into the "season of three answers" | idea |
| 3a | **Embeddable component: `<oberon-machine>`, the machine in a worker** | series infra | done | — | two lines put the machine into any page; SAB and COOP/COEP were not needed (finding 54) | **done** |
| 3b | **Episode #1 (FLAGSHIP, revised): Oberon in the browser + the cost of bounds checking** | 3+1 | **9–13 weeks** (130–190 h) | everything exists | design v0.2 in `design/DESIGN.md`, reviewed by five reviewers; the neural network and FMAC moved to episode #2 | **next** |
| 3b2 | **Episode #2: a language model on RISC5 + replacing the FP multiplier** | 3 | after the flagship | everything exists | design and measurements: `13-episode-lm-on-risc5.md`, findings 72–78. Measured on RTL: the fast multiplier gives 1.60× (1 cycle) / 1.57× (2 cycles), the ceiling with free multiplication is 1.64×, so the earlier "1.67×" is unreachable; FMAC by profile 1.015–1.064× (estimate). The next bottleneck is `LD`/`ST` from a code generator without register allocation | in progress |
| 3c | **Episode #2–3: overflow does not exist (B5500 / x86 / CHERI)** | 1 | an evening (min.) to several days (triptych) | emulator and ALGOL ready | see `10-episode-burroughs.md` | idea |
| 3d | **Descriptors in RISC5: measure the real cost of hardware memory safety** | 3 | after the flagship | — | numbers nobody has; turns the series into research | prototype and measurements: `14-episode-descriptors.md`, findings 80–84 |
| 3e | **"Two Adas": the contract problems, RED and GREEN solutions side by side** | 2 | days | ✅ both document sets found | requires no code at all | idea |
| 4 | **The reflective tower (3-Lisp anew)** | paradigms | a week | papers exist | an episode that breaks the worldview | idea |
| 5 | **Dijkstra's THE on GNAT** | 1(D)+2 | 2–4 weeks | one paper | testing the reconstruction genre on a minimal target | idea |
| 6 | **Reproduce Project Oberon from the book** | 3 | a month | everything exists | calibration: the whole cycle from ISA to GUI is understood | idea |
| 7 | **Check the state of open silicon shuttles for RISC5** | 3 | hours (research) | — | a decision on the "silicon" path | idea |
| 8 | **Transputer: a multi-node grid + occam + Helios** | 3+1 | flagship, months | INMOS docs exist, Helios was open-sourced | a physical CSP machine, a conference demo | idea |
| 9 | **iAPX 432 emulator** | 1(C) | large | Intel docs exist but are partial (datasheets are missing); `iapx432-image-builder` is incomplete/unverified | confirmed 29.09: there is NO working emulator, the gap = the project | **empty** |
| 10 | **Kronos: the processor in Verilog + Excelsior** | 3+1 | large | the material is almost undigitized | the first original contribution + preserving the heritage | idea |
| 11 | **Our own Oberon machine board (iCE40 + SRAM, hand soldering)** | 3 | months | everything exists | **an empty niche: there is no open kit to build** | idea |
| 12 | **Magic Cap: a 68349 emulator + Magic Link peripherals** | 1(C) | large | ROMs with collectors (to check) | Telescript agents live | idea |
| 13 | **A level-3 C interpreter (provenance + UB + replay)** | cross-cutting | large | the standard | a precise UB detector; the shadow memory is reused in item 3 | idea |
| 14 | **Ada Red: frontend** | 2 | 3–6 months part-time | ✅ spec, rationale, syntax diagrams, test problems and examples: everything exists | the first publicly available RED compiler in history | research |
| 15 | **A Tandem NonStop style kernel in Ada Red** | 1(D)+2 | after item 14 | Bartlett SOSP'81 + Gray 1985 | alternative history, process pairs live | idea |
| 16 | **Energy in the type system: working out the concept** | paradigms | a week of research | no predecessors | find out whether the idea works or falls apart | idea |
| 17 | **Linda / tuple space as a language** | paradigms+4 | medium | theory exists | possibly the same idea as item 1, from the other side | idea |
| 18 | **Reduceron on an FPGA** | 3 | medium | alive, documented | hardware graph reduction | idea |
| 19 | **The WAM from Aït-Kaci's book** | 2 | medium | the book | a classic, a visible result | idea |
| 20 | **Futamura projections: a compiler from an interpreter, live** | 2 | medium | 1971 papers | an episode that knocks you flat | idea |
| 21 | **Trusting Trust + diverse double-compiling** | 2 | medium | everything exists | reaches beyond the retro audience (supply chain security) | idea |

---

## New candidates (2026-09-29: ternary, analog, living Lisp OSes)

From a survey of "never-implemented or lost hardware architectures that can be emulated now". Not merged into the main table (the numbering is provisional): these are things the backlog did not have yet. What already exists and is not duplicated: iAPX 432 (#9), transputer (#8), Burroughs/descriptors (#3c/#3d/#10/#14), Reduceron/graph reduction (#18), WAM (#19), Lisp machine on RISC5 (#3b2/#13).

| # | Project | Track | Effort | Artifacts | Outcome | Status |
|---|---|---|---|---|---|---|
| 22 | **Setun-70: ternary live**: balanced ternary, the DSSP language (two-stack RPN), Dijkstra's structured programming right in the hardware | 3+1 | an evening | emulator ready ([smaslovski/Setun70](https://github.com/smaslovski/Setun70)) | ternary arithmetic and DSSP in a terminal; our own Russian heritage line (Brusentsov, Moscow State University), a strong "home-grown" story | idea |
| 23 | **The analog renaissance: ODEs with patch cords**: the class of machines died out and is now revived | 6+1 | an evening to a weekend | [The Analog Thing](https://the-analog-thing.org/) (open-hw) + [PyAnalog](https://github.com/anabrid/pyanalog) (simulator) | a Lorenz attractor/ODE in real time, "computation without discretization" | idea |
| 24 | **Multi-valued logic: the quaternary machine that never was**: MVL research of the 1980s, a complete machine was never built | 6 | medium (research) | MVL papers | emulation of a base-4 ISA; "the never-implemented branch" as a story of its own | idea |
| 25 | **Living in a Lisp OS: Medley Interlisp**: Interlisp-D is alive, the Maiko VM, the browser | overview/lab | an evening | living project [interlisp.org](https://interlisp.org/) | a resident Lisp OS in one click; a "look/break" lab on something ready-made | idea |
| 26 | **Turing's full ACE (1945): a never-implemented design**: only the cut-down Pilot ACE was built | overview/research | research | the ACE spec | a reconstruction of "the machine that was never built" | idea |
| 27 | **GA144 / Forth F18: 144 asynchronous cores**: a rhyme to J1 (#2), but an async array | 3 | medium | an emulator exists | exotic async Forth next to our J1 triad | idea |
| 28 | **Babbage's Analytical Engine live**: never completed | overview | an evening | the Fourmilab emulator (J. Walker) + Plan 28 | a program in Lovelace's style; the "zeroth" never-implemented machine | idea |
| 29 | **Rational R1000: an Ada machine live**: the hardware was brought back to life by DataMuseum.dk | 2 (Ada) | medium | the DataMuseum.dk emulator | a companion to the Ada track (RED/GREEN #14/#3e): a real Ada machine | idea |

---

## Wild / counter-intuitive (2026-09-29: "looks like cheating the laws, but it is all honest")

Selection criterion: looks like a violation of common sense + mathematically honest + can be emulated + almost nobody has touched it. Futamura (#20) and 3-Lisp (#4) are from the same basket and already rank higher.

| # | Project | Track | Effort | Artifacts | Outcome | Status |
|---|---|---|---|---|---|---|
| 30 | 🎯 **The Pendulum/PISA reversible processor**: computation without erasing bits, almost zero energy (Landauer); programs run backwards | 3+6 | an evening (emul.) to large (RTL) | the PendVM emulator + the PAL assembler; Vieri's thesis (MIT); Frank's archive (UF revcomp); physically, Vaire "Ice River" 2025 (energy recovery 1.77), AQFP superconductors | reversible assembly live; "uncompute" before your eyes; a bridge to the topic of the energy of computation | idea |
| 31 | **The Mill** (Ivan Godard): a "belt" instead of registers, ultra-wide issue; brilliant on paper, never made it to silicon | 3 | large | 10+ years of talks/patents | an emulator of an architecture that does not exist in hardware | idea |
| 32 | **Transport-Triggered (TTA/"MOVE")**: a single "move" operation, computation as a side effect | 3 | medium | academic TTA (MOVE, the TCE toolchain) | an absurd but buildable CPU; a contrast to a regular ISA | idea |
| 33 | **OISC / subleq**: a processor with a single instruction, Turing-complete | 3 | an evening | a whole subleq scene | a minimalism record; a clear lab | idea |
| 34 | **A CPU inside Conway's "Life" / Wireworld**: a working computer built in a cellular automaton | paradigms | an evening to a weekend | Golly, the OTCA metapixel, Life-in-Life | an absurdly beautiful demo: a computer "grown" in an automaton | idea |
| 35 | **Clockless / asynchronous CPUs**: computation without a clock generator (Sutherland's micropipelines) | 3 | medium | Sutherland "Micropipelines"; async toolchains | "impossible" timings; a rhyme to GA144 (#27) | idea |
| 36 | **Orthogonal persistence + pure capability OSes** (KeyKOS/EROS/Coyotos, Grasshopper): no files, no boot, no "save"; the world of objects is persistent | 1+paradigms | medium | EROS/Coyotos sources, papers | an OS that "never shuts down"; a deep story about memory as disk | idea |
| 37 | **Single-level store** (Multics, IBM AS/400): memory and disk are one | 1 | overview/medium | Multics/AS400 docs | show that "there might have been no files" | idea |
| 38 | **A replicated deterministic VM of shared reality** (Croquet/TeaTime, Kay/Hillis): everyone "in one living picture" without a server | paradigms+infra | medium | TeaTime papers, OpenCroquet | distributed reality built on determinism, not on synchronization | idea |
| 39 | **Relational programming / miniKanren**: run programs BACKWARDS: get the inputs from the result, synthesize code from a spec | 2 | medium | miniKanren, "The Reasoned Schemer" | the magic of "the program in reverse"; an episode that breaks the picture | idea |
| 40 | **Content-addressed code (Unison)**: functions by hash: no broken dependencies, no build, code cannot be "broken by a rename" | 2 | medium | Unison is alive | a radical model of code; a parallel to our topics of fragility | idea |
| 41 | **Unum / posit arithmetic** (Gustafson): a heretical replacement of IEEE float with variable precision; did not catch on in silicon | 3 | medium | SoftPosit, the posit spec | a different arithmetic in hardware/emulation; a sharp dispute with IEEE | idea |
| 42 | **Babbage's Analytical Engine on an FPGA/in Verilog**: there is NO notable FPGA implementation (an empty niche); a decimal (base-10) Mill/Store with anticipating carry | 3 | medium to large | software emulators (Fourmilab/ports), Plan 28, arxiv 2024 | an original contribution, not a port: a base-10 machine in silicon | idea |
| 43 | **A purely functional OS after Henderson/Stoye**: the OS as a lazy input→output stream; Stoye's "sorting office" against nondeterminism, on a reduction machine | paradigms+3 | medium | Henderson 1982; Stoye's PhD (Cambridge, for SKIM); our SKIM/Reduceron rig (#18) | a double rhyme (functional OS × SKIM); an early, unfinished model, not a NixOS overview | idea |
| 44 | 🎯 **A reversible BALANCED-TERNARY processor** (Setun × Pendulum): a combination that does NOT exist: ternary reversible gates/adders are described, ternary CPUs and reversible CPUs exist separately, but a "ternary+reversible" machine does not | 3+6 | large | components: balanced-ternary reversible gates (IEEE), a 24-trit ternary RISC on an FPGA; reversibility from PISA/PendVM | be the first: a reversible-ternary ISA + emulator; stitching together two favorite topics | **empty (checked 29.09)** |
| 45 | **Glushkov: MIR / the recursive machine** (Kyiv, 1965–69): no emulator, poorly digitized; address arithmetic and an ALGOL-like language "in hardware" | 3+1 | large | material from the Institute of Cybernetics (to check); the Russian-Soviet line like Kronos (#10) | an emulator + preserving the heritage; an original contribution | **empty (checked 29.09)** |

---

## Overview episodes (no emulator needed, can be placed between heavy ones)

Priority by the strength of the modern parallel:

1. **Amoeba**: "the Kubernetes scheduler in 1990". Experiment: 5 nodes, jobs spreading out, k8s alongside.
2. **Singularity**: "WASI twenty years later". All processes in ring 0, isolation by types.
3. **VM/370**: "Firecracker in 1972".
4. **EROS/KeyKOS**: pull the power, show the consistency; CRIU alongside.
5. **Burroughs MCP**: buffer overflow → a hardware fault in 1961.
6. **NetWare**: a file benchmark against modern Linux on the same virtual machine.
7. **Exokernel Xok**: "io_uring and eBPF as the kernel's slow capitulation".
8. **QNX floppy**: distroless and unikernel alongside, compare size and cold start.
9. **Genera**: catch an error, redefine a function, continue from the same spot.
10. **GEORGE 3 / JCL**: "they reinvented job control and called it YAML". Snarky, goes down well at conferences.
11. **Domain/OS**: a networked single-level store; RDMA and CXL alongside.
12. **Sprite**: live process migration; LFS → LSM.
13. **Pick / MUMPS**: a database instead of a file system.
14. **Multics**: rings and segments; SGX/TDX and mmap.
15. **ITS**: everything open; eBPF vs zero trust.
16. **Contiki on the C64 / SymbOS**: how many resources are really needed.
17. **TempleOS**: handle it respectfully.
18. **Nemesis**: QoS and the noisy neighbor.

---

## New direction: from the machine to the platform (2026-09-22)

In full: `11-roadmap-platform.md`. The top lines:

| # | Project | Effort | Depends on |
|---|---|---|---|
| P1 | **Extract the RISC5 tooling into a portable framework** | medium | — |
| P2 | **Lilith as the second machine** on the same framework | medium | P1 |
| P3 | FaaS wrapper: the machine as a function in Cozystack | medium | — |
| P4 | **Oberon on Lilith**: the first cross-port | medium | P2 |
| P5 | ~~A custom machine type in KubeVirt~~ | — | ⚠ the direct path is closed: the list of architectures in KubeVirt is fixed (FINDING-34) |
| P6 | ~~A pluggable marketplace for Cozystack~~ | — | ✅ 24.09.2026, `marketplace/`: three repositories, a meta-index, 35 checks |
| P7 | An official community catalog | large | P6 ✅, from here on it is blocked by publication, not by code |

**The cultural outreach layer** (`12-labs-and-archive.md`): for each machine, interactive
labs and an archive. The nearest items:

| # | Project | Effort | State |
|---|---|---|---|
| L1 | 🎯 **Rebuilding Oberon with itself on our RTL** | small | almost closed, the main wow |
| L2 | A lab framework (task + check + rollback) | medium | — |
| L3 | "Look / break / bootstrap" labs | small | rely on what is ready |
| L4 | A "host files ↔ image" bridge for editing in the browser | medium | needed for the "build" level |
| L5 | The first interview with a knowledge holder | small | **people do not wait** |

🟢 **A correction to the premise:** the Oberon compiler **is already written in Oberon** (ORS/ORB/ORG/ORP,
Oberon-07) and bootstraps itself, verified bit for bit. What is written in C is **the Norebo runtime**
(1091 lines): the RISC5 emulator and the interface to Unix. The task is not "rewrite the compiler"
but to remove C from underneath it, and our SoC rig already almost closes this.

## Rhythm

The combination "a heavy project with its own emulator once a quarter + overview and experimental
episodes in between" is more sustainable than an even flow.

**Start with Amoeba or Singularity:** both can be brought up today, both hit the current
agenda, both set the tone "this is not a museum, this is your architecture twenty years ago".

---

## Open questions

- The state of open silicon shuttles: prices, submission windows, program status (some have closed or changed owners in recent years)
- Availability of Sony Magic Link / Motorola Envoy ROM images
- Will the Taos VP code specification surface: look at the Tao Group patents
- Is there a publicly available description of the Elbrus-1/2 microarchitecture; ways to reach knowledge holders through ITMiVT
- The state of the Helios sources and the existence of working builds
- Which Project Oberon ports exist for ECP5/iCE40 and their state

## Closed questions (2026-09-21)

Results: `07-browser-embed.md`.

- ✅ **retro-b5500**: browser-based, the ALGOL compiler is included in the cold start → the overflow demo is feasible. Pitfalls: the cold start is not one click, Safari clears IndexedDB after 7 days.
- ✅ **v86 + QNX 4.05**: a ready profile with a 1.4 MB image, embeddable as a library (npm `v86`, `libv86.js`, TS definitions). The demo floppy image is legally available (Internet Archive, WinWorld). Limitation: 32-bit only.
- ✅ **Oberon in the browser**: Schierl's OberonEmulator, JS and JS+WASM variants. Caveat: paravirtualized SPI and keyboard, patched images are needed. For an honest triad, build `pdewacht/oberon-risc-emu` with Emscripten.
- ✅ **Verilator → WASM**: the path works. Measured: the bare core runs at 17.75 MHz-equivalent natively, ~3–4 MHz in WASM versus the real 25 → booting Oberon on the RTL takes 8–10 s, **RTL is not the starting scenario**. Sizes: SoC 62 KB brotli, ISS 9 KB, image 184 KB → 1.5–3 s to interactive.
- ✅ **The Oberon experiment design was reviewed by five reviewers**: `design/REVIEW.md` (930 lines of findings), rewritten into `design/DESIGN.md` v0.2. Key points: there is no free space in the encoding (except `IR[15:4]`); a speedup of ≥2× is unreachable; the novelty of a number for the cost of bounds checking was refuted, the real gap is the "the system rebuilds itself" workload; Wirth's RTL is tied to Xilinx and does not synthesize as is; take the 2018 version, not 2015 (2015 has no interrupts).
- ✅ **Ada RED**: the specification survived IN FULL. The Reference Manual + Design Rationale (March 1979) were transcribed to HTML on iment.com by one of the authors; PDF on DTIC (ADA219453) and a mirror on the Internet Archive (`DTIC_ADA219453`). There are syntax flow diagrams, contract test problems and example programs. Steelman is freely available. Details: `08-ada-red.md`.
  - ⚠ Correction: Intermetrics **did have** a working RED translator (Mark Davis), but under the contract terms it was not considered in the selection and did not survive. The statement "it was never compiled" is wrong.
  - Blue and Yellow are absent from the open web (checked by titles and metadata of the DTIC mirror on the Internet Archive + the web; the control query for Red succeeds). What remains is DTIC from a browser, a library, or the Ada historians' community.
  - 🎁 GREEN documents were found under the color name, from before the renaming to Ada: `DTIC_ADA070753` (Informal Introduction), `DTIC_ADA073714` (Formal Definition), `DTIC_ADA070752` (Sample Problems — GREEN Solutions). The last one matches appendix B of the RED rationale ("Contract Test Problems").
  - → **A new cheap episode:** "Two Adas": the same contract problems, with RED and GREEN solutions side by side. Requires no code at all.

---

## Decisions of principle

- **An open toolchain is mandatory** for the whole hardware track (iCE40/ECP5 + yosys/nextpnr). A proprietary environment kills reproducibility.
- **Verilator from day one**: the reader must be able to run the triad without a board in one command.
- **Announce the genre of the article in advance.** For "an OS in a language nobody wrote OSes in", it is "what the language does not give and why", not a victory report. Then a negative result stays a result.
- **Do not build "Kubernetes, but better".** Pick an axis where it is structurally wrong, and build where it does not exist.

---

## "Cheap × impressive" analysis (2026-09-21)

**The underrated criterion: the reproduction threshold.** A demo that runs in the browser
spreads many times better than one that needs QEMU, an image and half an hour of fiddling. This is the main multiplier
of impact, not a detail of presentation.

### Best ratio
| Project | Time | Why |
|---|---|---|
| **Burroughs: overflow does not exist** | an evening + an evening for the text | emulator in the browser, ALGOL ready, the thesis hits the regulatory memory safety agenda |
| B5500 / x86 / CHERI triptych | +a day or two for CHERI | the manifesto of the whole series, the "season of three answers" grows out of it |
| QNX on a floppy vs a container | half a day | the numbers speak for themselves, zero risk; downside: the audience suspects the thesis "things used to be more compact" |
| Oberon rebuilds itself | an hour or two | video works better than text; downside: no sharp modern thesis |

### What looks cheap but is not (a correction to the estimates earlier in the file)
- **The reconciler in Refal** is written down as "an evening", which is optimistic. Modeling the state as a term is easy; bringing it to a convincing result with supercompilation takes a week and a half, and there is a risk that a live example will not produce a pretty picture. An excellent second or third episode, a bad first one.
- **Sulong on real C++** is a classic evening that turns into a week. Building a non-trivial program under someone else's toolchain always eats more. Take a deliberately small but not toy program.
- **Amoeba and NetWare**: a huge effect, but networking in both can easily eat three days. Not the first episodes.
- **The reflective tower**: a week and the strongest impression, but a narrow audience: those able to appreciate it mostly already know. The effect is deep, not wide.

### Decision on the first episode
**Oberon in full** was chosen (`09-episode-01-oberon.md`): the only one that gives at once
scale, hardcore and a genuine surprise. A deliberate trade-off: 2–4 weeks instead of an evening.
Burroughs (`10-episode-burroughs.md`) moves to second/third.
