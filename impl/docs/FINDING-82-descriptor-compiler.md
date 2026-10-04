[Русская версия](FINDING-82-descriptor-compiler.ru.md)

# Finding 82. A compiler with descriptors: the whole environment rebuilds to a fixed point, and two design limits turned up on live code

Configuration **F** of the code generator (`patches/ORG-cfgF.Mod`, generated
from E) is E plus descriptors for open arrays. Arrays of known length stay on
`CHK`: there the bound is known to the compiler, and a descriptor with the same
constant inside would be the same check with an extra load (the rationale is in
`14-episode-descriptors.md`).

## What F generates

| place | E (as in stock) | F |
|---|---|---|
| parameter `a: ARRAY OF T` | two words: address, length | two words: **descriptor**, length |
| passing an array of known length or a string | address + `MOV len` | address + `MHI len<<4` + `IOR` (+2 words) + `MOV len` |
| passing an open array further on | address + length | the descriptor **as is** + length |
| `a[i]`, element of 1/2/4/8 bytes | `LD len; CMP; BLR trap; [LSL]; LD adr; ADD`: 5–6 instructions, 7–8 cycles | `LD desc; IDX`: 2 instructions, 3 cycles |
| `a[i]`, other element size | the same | software check + descriptor clearing |
| `SYSTEM.ADR(a)`, string copy, whole-array assignment | `LD adr` | `LD desc; LSL 12; ROR 12`: explicit clearing |
| `LEN(a)` | `LD len` | unchanged |
| `.rsc` version byte | 2 | 3 (a different open-array ABI) |

In F, `IDX` is emitted **regardless of the `check` flag**: modules compiled
without checks (version 0, `MODULE*`) still index open arrays through the
descriptor; the compiler has no way to switch this check off.

## Homogeneous environments and the fixed point

The measurement in finding 21 kept the Norebo environment (Kernel, Files, Texts,
Oberon…) stock and changed only the compiler. With F that is impossible: the
stock `Texts` would receive a descriptor instead of an address. Therefore
`tools/build_cfg_toolchain.sh` builds the **whole** environment with its own
code generator in three stages:

1. the configuration's sources built by the stock binaries (the compiler already
   generates X code but itself still runs as stock code);
2. the same, built by stage 1, so the whole environment is X code;
3. the same, built by stage 2.

| configuration | stages 2 and 3 | modules |
|---|---|---|
| A | byte-identical (16 files of 16) | 15 + InnerCore |
| B | identical, and also identical to the shipped `ext/norebo/build2` | 15 + InnerCore |
| E | identical | 15 + InnerCore |
| **F** | **identical (15 of 15)** | 14 + InnerCore (without the linker, see below) |

For F this is a strong check: a compiler that **itself executes** `IDX`,
descriptor assembly and clearing produces byte-for-byte the same output as the
compiler in stock code. Any missed clearing case would have produced a wrong
address, and there would be no fixed point.

Reproduce with `bash tools/build_cfg_toolchain.sh F` (seconds per stage).

## Limit 1: length ≤ 4095, violated in exactly one place

The F compiler refuses when an array longer than 4095 elements is passed to an
open parameter (`array too long for a descriptor`), rather than silently
truncating the length. Where it happened:

* **The Norebo linker** (`ext/norebo/Norebo/CoreLinker.Mod`):
  `Buffer = ARRAY 63*1024 DIV 4 OF INTEGER`, 16 128 words, is passed to
  `VAR buffer: ARRAY OF INTEGER`. Two call sites.
* **The whole PO2013 system**: of the 40 modules that the stock compiler builds,
  F builds all 40 with **not a single** violation (the same 3 modules, `RISC`,
  `SmallPrograms` and `ORC`, do not build with stock either).
  `tools/scan_open_args.sh F`.

The linker is a host tool, not part of the system; in F it is not built, and
`InnerCore` is linked by the stock `CoreLinker` identically in all
configurations (it only reads object files and writes the image, and its code is
not part of the measurements).

## Limit 2: address ≤ 1 MB, violated by the Norebo heap

The first build of the F environment **hung** at stage 3, silently. The cause:
Norebo has 8 MB of memory and does not collect garbage within a command; fourteen
modules in one compiler run push the heap above 1 MB, while a descriptor can
express only a 20-bit address. Strings from the heap (names in `ORB` objects)
passed to an open parameter got a truncated address. Verified twice:

* one module per run works, and there is a fixed point;
* the same run on a Norebo built with 1 MB of memory runs out of heap at `ORP`.

On Wirth's board 1 MB is all of memory, and the limit coincides with the
machine. But this is a design limit, not an accident: **this rung's descriptor
does not carry over to a machine with more than 1 MB of memory without narrowing
the length** (21 bits of address means length up to 2047, and so on). CHERI pays
for the same thing with pointer width.

The measurements (finding 83) therefore build environments one module per run;
the compilation workload, five modules in one run as in finding 21, fits in 1 MB,
which is confirmed by the byte-for-byte match of its output (finding 83).

## Code size

| | B | E | F | F vs E |
|---|---:|---:|---:|---:|
| 40 PO2013 modules, code words | 63 531 | 63 212 | 64 495 | **+2.03%** |
| `IDX` sites in them | — | — | 73 | |

The growth comes not from indexing (which is shorter) but from **descriptor
assembly at the call site**: every string constant passed to an open parameter
(`ORS.Mark("…")`, `Texts.WriteString(W, "…")`) gets two words. `ORP` grows by 316
words (+5.1% over stock) with the same source. A possible optimization is to keep
ready-made string descriptors in the module's constant area (like the PRT on the
B5000), but the address there is SB-relative, so relocation at load time would
be needed; **this was not done, and the gain was not estimated**.

## What this does not show

* A rebuild of the **system image** on the RTL in F (finding 27 does it for
  stock): that requires a system loader that accepts version 3 and running an F
  system on the core with IDX. Here F was verified on the whole Norebo
  environment and on compiling all 40 PO2013 modules, but an F system was not
  booted on the RTL. Open.
