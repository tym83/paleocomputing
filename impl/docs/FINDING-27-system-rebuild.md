[Русская версия](FINDING-27-system-rebuild.ru.md)

# Finding 27. The system rebuilds itself completely, and the image turns out not to be fully consistent

## What was done

Finding 23 showed the compiler bootstrapping itself: four modules, two generations,
a fixed point. Here the same thing is done for **the whole system**: 42 modules,
from `Kernel` and `Display` to `Edit` and `Draw`, built by the Oberon compiler inside
the system itself, running on the `RISC5.v` core. The only input is the mouse and keyboard.

The build order was not taken from memory or copied from someone else's script: it was derived
by a topological sort over `IMPORT` from the sources **on the image
itself**. For this `tools/oberonfs.py` was written: it reads the Oberon file system
straight from the disk image, following the layout in `Kernel.Mod`, `FileDir.Mod` and
`Files.Mod`.

The reader was cross-checked: `ORP.rsc` extracted from the image has key
`E6FCC519` and 6188 words of code, exactly what the system printed on screen and what
the bootstrap run gave. Three independent paths agreed.

## Result

**37 object files rebuilt byte-for-byte identical.** The system is a fixed
point of its own compiler. The rebuilt image boots and gives the same
screen checksum `B5DFC933`.

## The Project Oberon 2016 image is not fully consistent

Of the 42 modules, **three do not compile with the compiler from the same image**:

| module | error | cause |
|--------|--------|---------|
| `RISC` | `pos 926 bad divisor` | `IR DIV 80000000H`: the constant is negative as a signed INTEGER, and `ORG.Mod` requires a positive divisor |
| `ORC` | `pos 95 import not available` | imports `V24`, which is on the image neither as source nor as a symbol file |
| `Net` | nine `incompatible parameters` | the signatures of `SCC` calls diverged from `SCC.Mod` on the same image |

And two discrepancies in binary files:

* **`Math.rsc` is stale.** The shipped file contains 449 words of code; the rebuild
  gives 447, with the same key `32C32F12`. That is, the interface is the same, but the code
  was produced by a different version of the compiler than the one on the image.
* **`PIO.rsc` and `PIO.smb` were missing entirely** and are created by the rebuild.

This is a property of the distributed image, not of our machine: all three failures are
diagnostics of the Oberon compiler itself, and the discrepancy in `Math.rsc` is visible
by a byte-for-byte comparison.

## Trap 4 again, and again the same one

Building in batches of three modules dropped the third into `TRAP 4`: `Checkers`,
`GraphicFrames`, `Net`. The cause is the same as in finding 23: within one command
control does not return to `Oberon.Loop`, the garbage collector does not run, and the
symbol tables pile up until the heap is exhausted. One at a time, the same modules go through.

The limitation is stable and reproducible: **the Oberon compiler has to be invoked
one module per command** if the modules are large.

## The log does not scroll, and that nearly hid the result

The `System.Log` viewer holds about 18 lines and does not scroll by itself. The first
run showed 14 successful compilations on screen and a stop at the `RISC` error,
while the remaining six commands were simply not visible. From the outside "not visible" and "not
executed" are indistinguishable.

Fixed: the script clears the log after each command and captures a frame, and
`tools/stitch_log.py` stitches the log regions into one picture.

## The check nearly came out green on a breakage

The first version of `tools/check_rebuild.py` compared the images byte for byte and
**passed on an untouched image**: a byte-for-byte comparison on its own does not
distinguish "rebuilt and matched" from "not touched at all".

File dates do not help: on this image they are all zero, the machine has no clock.

Fixed with positive markers, without which the comparison proves
nothing: `PIO.rsc` and `PIO.smb` MUST appear (they are not on the original
image), and `Math.rsc` MUST differ. Their absence is a failure, not a relaxation.
Verified: on an untouched image the check fails, on a rebuilt one it passes.

## How to reproduce

```
make rebuild
```

Three sessions, about a billion instructions, around eight minutes. The target is part
of `make check`.
