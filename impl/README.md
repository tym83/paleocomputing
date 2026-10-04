[Русская версия](README.ru.md)

# Oberon-lab: Wirth's RISC5 core under Verilator, with measurements

Niklaus Wirth's actual Verilog, run cycle by cycle, boots Project Oberon,
both on the host and in the browser. Plus measurement infrastructure for the question
"what do run-time checks cost, and what do we gain by moving one of them into hardware".

**Status: not accepted by five auditors.** The numbers and caveats are in `docs/FINDING-*.md`;
the summary of corrections is in `docs/FINDING-19-audit-corrections.md`.

## Quick start

```
make deps      # check the environment
make check     # full check: tests + system boot + differential bench
```

## Dependencies

| Tool | What for | Tested with |
|---|---|---|
| **Verilator** | running the RTL | 5.052 |
| **yosys** | synthesis, area | 0.69 |
| **python3** | tools and scripts | 3.14 |
| **cc** | emulators, test benches | Apple clang 21 |
| em++ (Emscripten) | only `make web` | 6.0.9 |
| Nangate45 liberty | only `make syn`, `make fmax` | `syn/lib/` |

⚠ Tested only on macOS ARM. It should build on Linux, but this has not been tested.

## Targets

| Target | What it does |
|---|---|
| `make test` | 14 ISA test suites (250 unique checks) on two core configurations + decoder equivalence |
| `make boot` | the RTL boots Oberon and checks the screen checksum |
| `make boot-chk` | the same on the core with the ISA extension |
| `make lockstep` | step-by-step comparison with the reference emulator, 14.6 million instructions |
| `make boot-desc`, `make lockstep-desc` | the same on the core with descriptors (`IDX`, episode 14) |
| `make desc-loop` | the headline loop: no check, software check, CHK, descriptor |
| `make desc-measure` | three workloads in four homogeneous Norebo environments (~10 minutes), then `desc-cross`, `desc-profile` |
| `make check` | everything above except the measurements |
| `make syn` / `make syn --chk` | area via yosys |
| `make web` | build the browser version |
| `make configs` | restore the code generator configurations from `patches/` |
| `make lm-check` / `make lm` | episode 2: the language model on the emulator / on the RTL against the reference, byte for byte |
| `make lm-profile` | cycles per character, profile, speedup from the fast FP multiplier, FMAC ceiling |
| `make lm-system` / `make lm-qemu` | the model inside the real system on the RTL / in QEMU |
| `make fpmul-diff`, `make boot-fast`, `make lm-stock` | the fast FP multiplier: bit-exact equality, boot, stock workload |

## What belongs to whom

**Taken ready-made** (not ours; lives in `rtl/` and `ext/`):
- the RISC5 core and peripherals: Niklaus Wirth, [projectoberon.net](http://www.projectoberon.net/), `RISC5.v` dated 31.8.2018
- [pdewacht/project-norebo](https://github.com/pdewacht/project-norebo): a command-line Oberon compiler
- [pdewacht/oberon-risc-emu](https://github.com/pdewacht/oberon-risc-emu): the reference emulator
- the Project Oberon 2013 system image

**Ours** (~4200 lines):
- `tb/`: SoC bench, differential bench, decoder probe, equivalence check, cycle model
- `tools/`: RISC5 assembler, analyzers, measurement scripts
- `tests/`: 14 ISA test suites
- `patches/`: four Oberon code generator configurations
- `web/`: the browser build

**Our changes to other people's code**: 53 lines in `RISC5.v` (the CHK instruction),
`Registers.v` rewritten from Xilinx primitives into a behavioral description, a cycle counter
and a profiler in the emulators.

## Known limitations

- **The path to silicon is not ready**: there is no reset for the register file, the flags, `H`, `IR`;
  `Registers.v` relies on `initial`, which `dfflibmap` silently drops
- **Area and frequency are below the resolution of the flow**: logically neutral
  rewrites of the source move them more than the effect being measured
- **Configurations C and D were rejected** and are kept for history; C requires `NOREBO_CHK=wide`
- The peripherals in the bench are register stubs, not wired interfaces:
  the video controller is not connected, disk transfer is word-based
- In the browser, writes to the disk live only in the tab's memory

## Licenses

Wirth's materials are distributed under his own notice, not under an OSI license.
For Norebo and oberon-risc-emu, see the licenses in their directories. Our code in `tb/`, `tools/`,
`tests/`, `patches/`, `web/` is unrestricted.
