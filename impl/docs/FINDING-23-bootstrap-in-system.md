[Русская версия](FINDING-23-bootstrap-in-system.ru.md)

# Finding 23. The Oberon compiler reproduces itself inside the system on the RTL

## What was checked

Finding 22 showed that the compiler produces the same code on the `RISC5.v` core as
the C emulator. But back then it was launched by Norebo, a C wrapper that substituted
the host file system. A question remained: can the machine do without the
host altogether?

Here the compiler runs inside the real Oberon system, booted from
a disk image. The only input into the machine is the mouse and keyboard registers
(`-40` and `-36`). There is not a single line of host code in the loop.

## How

The testbench `tb/soc_tb.cpp` got a scripted mode: a file of lines
`<instruction number> <action> <arguments>`, where the action is to move the mouse,
press a PS/2 scan code, or capture the framebuffer. The register format is taken straight from
`Input.Mod`: buttons in bits 24..26, coordinates in 12-bit fields, keyboard
ready is bit 28.

The layout is not made up: `tools/keymap.py` parses the hexadecimal table
`kbdTab` from the `Input.Mod` source and builds the reverse mapping "character →
scan code". Capital letters are produced by wrapping with `12H` / `F0H 12H`.

`tools/mkscript.py` builds a script from human commands (`click`, `type`,
`enter`, `shot`). The `y` coordinate is written as in the picture, top to bottom, and
converted to Oberon's system (bottom to top) inside the generator.

## Result

The script `scripts/gen2_sep.src`: type five commands into `System.Tool`, execute
the first four (building `ORS`, `ORB`, `ORG`, `ORP`), unload all four modules
from memory, execute the same four commands again; now they are executed by the freshly
built compiler, loaded from disk.

| module | generation 1 | generation 2 |
|--------|-------------|-------------|
| ORS | 1756  992 76547166 | 1756  992 76547166 |
| ORB | 2325  408 2F03B698 | 2325  408 2F03B698 |
| ORG | 6650 34980 8F476858 | 6650 34980 8F476858 |
| ORP | 6188  144 E6FCC519 | 6188  144 E6FCC519 |

The code size, data size and key matched for all four modules. The line
`OR Compiler 18.4.2016` is printed anew in the second block: that is the new
`ORP.rsc` announcing itself on load, so the second generation really was
built by the new binaries, not by the old ones left in memory.

715 000 000 instructions, 1 101 436 669 cycles, mismatches with the cycle model:
zero.

## Trap 4, which turned out not to be a compiler bug

The first attempt built all four modules with **one** command
`ORP.Compile ORS.Mod/s ORB.Mod/s ORG.Mod/s ORP.Mod/s ~`. `ORS`, `ORB` and `ORG`
built, and on `ORP` it dropped out with `TRAP 4 in ORB`.

`ORP.Compile ORP.Mod/s ~` on a clean boot runs without errors
(`6188 144 E6FCC519`), so the source is not the problem.

In `ORG.Mod`, number 4 is set by `PROCEDURE NilCheck`: a NIL dereference. And NIL
is returned by `Kernel.New` when the heap has run out. Within one command control
does not return to `Oberon.Loop`, the garbage collector does not run, and the symbol
tables of four modules pile up in memory.

With four separate commands all four modules go through. The limitation is not
the compiler's but the system's memory model: the compiler has to be built one module per
command.

## A reproducibility bug found in our own harness along the way

`tb/disk/disk.c` opens the image as `rb+` and writes real sectors into it.
The `boot` target ran the testbench **without** `--disk`, that is, with the default value:
the reference image in `ext/disk/`. Every system boot silently edited
the source of truth; by the time of the finding the image already differed from upstream
(`3eee8459…` versus `3a460a5a…`).

Meanwhile the framebuffer checksum matched the reference
`B5DFC933` even on the corrupted image, so the boot check is
insensitive to disk corruption and could not have caught this.

Fixed in two layers:

* without `--persist`, the testbench copies the image to `build/<name>.work` and works on
  the copy; writing to the given file is allowed only with an explicit flag;
* `ext/disk/SHA256SUMS` pins the reference, so that any divergence is noticeable.

The image was restored from upstream, and booting it gives the same `B5DFC933` as before.

## What this means

The circle is completely closed. The machine is described by Wirth's Verilog, his
system runs on it, and inside the system its compiler builds its own source and reaches
a fixed point. Between the host and the machine there remain only the mouse, the keyboard
and the disk image.
