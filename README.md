[Русская версия](README.ru.md)

# Paleocomputing

*Experimental computer archaeology*

Computers, languages and operating systems that worked and then disappeared,
sometimes taking with them ideas that nobody has repeated since. We run them
for real and see what they could do.

**→ [Open the series website](https://tym83.github.io/paleocomputing/)**

---

## The first five minutes

There is nothing to install. The 1986 Oberon system (processor, compiler,
operating system and windows) boots right in the browser, on Niklaus Wirth's
actual circuit description.

| | |
|---|---|
| [Lab](https://tym83.github.io/paleocomputing/oberon/lab.html) | nine exercises, each one checks itself |
| [Just run the system](https://tym83.github.io/paleocomputing/oberon/run.html) | no exercises: mouse, keyboard, windows |
| [Handbook](https://tym83.github.io/paleocomputing/oberon/book/) | eight chapters, from "why bother" to "what we measured" |
| [Swap the processor](https://tym83.github.io/paleocomputing/oberon/checks.html) | a hardware switch and the cost of bounds checking, computed on the spot |
| [Embed it on your page](https://tym83.github.io/paleocomputing/oberon/embed.html) | the machine as a component: two lines in any page |

This is not an emulator. The browser computes the state of every wire on every
clock cycle: whatever the simulation shows is what the real chip would have done.

### If you want to check our work yourself

You need Verilator and a C++ compiler:

```
cd impl
make deps     # check the environment
make check    # about eight minutes
```

In those eight minutes: instruction set tests, a system boot, a step-by-step
comparison against the reference model over 14.6 million instructions, the
compiler bootstrapping itself, and a full rebuild of the system, 37 files
compared byte for byte.

⚠ Tested on macOS ARM. It should build on Linux, but this has not been tested.

### What to read next

| | |
|---|---|
| `impl/docs/FINDING-*.md` | 85 findings: what was measured, what was found, what turned out to be wrong |
| `impl/README.md` | how the measurement harness is built, Makefile targets, who owns what |
| `15-episode-kube.md` | the latest episode: Kube, a Kubernetes control plane written in Oberon, running inside the Oberon machine and in Cozystack ([Russian](15-episode-kube.ru.md)) |
| `impl/kube/` | the Kube code and how to run it |
| `marketplace/` | a pluggable catalog for Cozystack: the same machines as applications |
| `kubevirt/GUIDE.md` | the same machine in your own KubeVirt, without Cozystack ([Russian](kubevirt/GUIDE.ru.md)) |
| `qemu/GUIDE.md` | the same machine in plain QEMU ([Russian](qemu/GUIDE.ru.md)) |
| `BACKLOG.md` | what comes next in the series and in what order |

---

## How the repository is organized

What follows are working notes on planning the series. Started: 2026-09-21.

## Goal

A series of articles plus open repositories about undeservedly forgotten systems:
operating systems, programming languages, processor architectures and paradigms.
Not retro nostalgia, but building a working vocabulary of ideas, some of which go
into the design of a new infrastructure layer (track 4).

## Four tracks

1. **Operating systems**: `01-os-catalog.md`
2. **Languages and compilers**: `02-languages.md`
3. **Language machines** (hardware + language + OS as a single triad): `03-language-machines.md`
4. **The infrastructure layer of tomorrow**: `04-infra-layer.md`

Plus cross-cutting material:
- `05-experiments.md`: standalone experiments and cross-ideas
- `06-paradigms.md`: paradigms without a language implementation
- `BACKLOG.md`: a ranked list of projects with their status

## Four project genres (important for planning)

| Genre | What it needs | What it produces |
|---|---|---|
| **Emulation** | hardware documentation + an OS image | bit-exact fidelity, the original software runs |
| **Revival** | OS sources | a port to live hardware or an emulator, archaeology of build systems |
| **Reimplementation** | only the described principles | a new system built from an old spec, no legal questions, open source from day one |
| **Archaeology** | nothing or almost nothing | hunting for artifacts, interviews with the people who hold the knowledge |

Key conclusion: in the OS track the bottleneck is **not the emulator but the artifacts**.
An emulator can be written from documentation; the question is whether there is anything
to load into it.

## Recurring threads of the series

- Persistence instead of files: KeyKOS/EROS → Grasshopper → Napier88 → Phantom OS
- Safety through types rather than the MMU: Burroughs → Elbrus → Oberon → Singularity → WASI
- Capabilities instead of ACLs: CAP → iAPX 432 → KeyKOS → seL4
- Processor-independent code: Taos VP → TIMI (AS/400) → Dis → JVM → WASM
- Specialization beats generality: NetWare, QNX, Tandem, DPU
- CSP from hardware to language: transputer → occam → Helios → Newsqueak → Alef → Go

## The thesis of the language-machine sub-track

Language machines lost not on merit but on economics (a cheap mass-produced general-purpose
chip + dramatically improved compilers + the RISC argument). The economics have changed:
FPGAs are cheap, RISC-V allows custom extensions, open silicon shuttles are available,
CHERI brings back hardware enforcement of language semantics, and accelerators have
brought back specialized silicon.

## Current state

Stage: collecting and ranking material. No code has been started.

## Next steps

See the top lines of `BACKLOG.md`. Candidates for the first strike:
1. A reconciler in Refal + supercompilation (cheap, relevant, feeds track 4)
2. A first triad on the J1 Forth processor (a weekend, the full hardware + language + OS cycle)
3. Check the state of open silicon shuttles for RISC5
