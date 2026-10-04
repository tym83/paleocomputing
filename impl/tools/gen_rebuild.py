#!/usr/bin/env python3
"""Script for a full rebuild of the system by Oberon inside the system itself.

The module order is derived by a topological sort over IMPORT from the sources
that are ON THE IMAGE (not from our 2019 copy): the compiler inside the system
reads exactly those.

Modules are built in batches. Building everything with one command is impossible: inside
a command control does not return to Oberon.Loop, the garbage collector does not run,
and symbol tables pile up until the heap is exhausted; that is what broke the first attempt
at bootstrapping the compiler (finding 23). The batch is kept small, and the four compiler
modules go one at a time: they have the heaviest tables.
"""
import sys, pathlib
sys.path.insert(0, "tools")
import modorder
from oberonfs import Image

IMG = "ext/disk/Oberon-2016-08-02.dsk"
SKIP = {"BootLoad", "SmallPrograms", "Display.Orig", "Input.Orig"}
# One at a time: the compiler has the heaviest symbol tables, and RISC.Mod
# does not compile on this image at all (pos 926 bad divisor: the constant
# 80000000H as a divisor is negative for a signed INTEGER), and in a batch its
# failure would drag its neighbours down with it.
ALONE = {"ORS", "ORB", "ORG", "ORP", "Texts", "Modules", "Display", "System", "RISC"}
XLOG, YLOG = 980, 6          # System.Clear in the System.Log title bar
BATCH = 3
ROW0, ROWH, XCMD = 569, 12, 690          # first new line, height, x of the command


def main():
    src = pathlib.Path(sys.argv[1]) if len(sys.argv) > 1 else None
    if src is None:
        sys.exit("specify the directory with the sources extracted from the image")
    modorder.SRC = src
    order, _ = modorder.order()
    mods = [m for m in order if m not in SKIP]
    size = {m: (src / f"{m}.Mod").stat().st_size for m in mods}

    lines, i = [], 0
    while i < len(mods):
        if mods[i] in ALONE:
            lines.append([mods[i]]); i += 1
        else:
            grp = []
            while i < len(mods) and len(grp) < BATCH and mods[i] not in ALONE:
                grp.append(mods[i]); i += 1
            lines.append(grp)

    # About 15 new lines fit in the System.Tool viewer. Enlarging it with
    # System.Grow is not allowed: it closes the log, and without the log a compilation failure
    # is invisible: the file just stays the same, and the byte-for-byte comparison
    # shows "matched". So we split into sessions that continue one disk.
    PER = 11
    parts = [lines[i:i + PER] for i in range(0, len(lines), PER)]

    print(f"modules to build: {len(mods)}, commands {len(lines)}, sessions {len(parts)}")
    for pi, part in enumerate(parts, 1):
        out = [f"# System rebuild, session {pi} of {len(parts)}: "
               f"{sum(len(g) for g in part)} modules in {len(part)} commands.",
               "at 12000000", "click 700 620 L"]
        for k, grp in enumerate(part):
            out.append("type ORP.Compile " + " ".join(f"{m}.Mod/s" for m in grp) + " ~")
            if k != len(part) - 1:
                out.append("enter")
        out += ["wait 3000000", f"shot build/rb{pi}_typed.pbm"]
        # Estimate: the compiler (109,356 bytes of source) took 40.8 million instructions.
        # Inside the system file operations through the SPI disk model are added,
        # so we take a fourfold margin and no less than 25 million per command.
        total = 20_000_000
        for k, grp in enumerate(part):
            b = sum(size[m] for m in grp)
            wait = max(25_000_000, int(b / 109356 * 40.8e6 * 4))
            # The log is cleared after every command: the System.Log viewer holds
            # about 18 lines and does NOT scroll by itself, so without clearing, the output
            # of later commands is simply invisible, and "invisible" and "did not run"
            # cannot be told apart from outside.
            out += [f"click {XCMD} {ROW0 + k * ROWH} M      # {' '.join(grp)}",
                    f"wait {wait}",
                    f"shot build/rb{pi}_c{k:02d}.pbm",
                    f"click {XLOG} {YLOG} M",
                    "wait 2000000"]
            total += wait + 4_000_000
        out.append(f"shot build/rb{pi}_done.pbm")
        open(f"scripts/rebuild{pi}.src", "w").write("\n".join(out) + "\n")
        print(f"  scripts/rebuild{pi}.src: budget {total:,} instructions")
        for k, grp in enumerate(part):
            print(f"     line {k:2d} (y={ROW0+k*ROWH}): {' '.join(grp)}")


if __name__ == "__main__":
    main()
