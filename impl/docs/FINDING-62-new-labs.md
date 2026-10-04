[Русская версия](FINDING-62-new-labs.ru.md)

# Finding 62. Labs 10–12: the collector, tasks, and the cost of checking on your own code

Three new labs in `web/labs.js`, with the English text in `web/labs.en.js` and the
sources to be typed in `web/lab-sources.js` (one copy for both the page and the test
run). Each one goes through the "not done → done" path in `labs-test.mjs` on the real
RTL model; to run a subset, use `node labs-test.mjs 10 11 12`.

## What is checked and where it comes from

All three checks read **the machine's memory**, not the screen. This required finding
the loaded modules and their variables:

| what | where | how it was verified |
|---|---|---|
| the `Kernel` descriptor | always `100H`, because the kernel is linked first | the name in the descriptor = `Kernel` |
| `Kernel` variables | `data` = the word at `100H+52`; `allocated` at `+0`, `heapOrg` `+8`, `heapLim` `+12`, `MemLim` `+24` | `heapOrg` and `MemLim` are compared with words 24 and 12 left by the boot loader; on a mismatch the check refuses to answer |
| the module list | the `Modules` descriptor is at the address in word 20 (which `Modules.Init` also reads); `root` is the first `Modules` variable after the 24 bytes of its type descriptors | the walk yields the same 13 modules as `System.ShowModules` |
| variables of your own module | `data` + the size of the type descriptors from `.rsc` + 4·index, in declaration order (`Modules.Load`: descriptors, then variables) | the values matched what the log prints |

The descriptor layout (`name[32], next, key, num, size, refcnt, data, code,
imp, cmd, ent, ptr`) was taken from `Modules.Mod` on the image. `parseRsc` now also
returns `tdBytes`, the size of the type descriptor area.

### 10. The garbage collector from the inside (observe)

1. The answer is the constant `BasicCycle`; it is compared against `Oberon.Mod` **on
   disk** (a regular expression over the source), not against a hard-coded number.
2. `Junk.rsc` exists and `tdBytes > 0`.
3. `Kernel.allocated ≥ 200 000` after `Junk.Make`; the value is remembered.
4. After `System.Collect`, `allocated` is lower than the remembered value by more
   than 200 000. `allocated` decreases only in `Kernel.Scan`, so this is proof of
   collection, not a coincidence.
5. `Junk.lost > 0` after two `Junk.Make` in a row.

The test run additionally shows that **two seconds of idling (30 million
instructions) do not collect the garbage**, and that after step 5 the collector
**comes on its own**, triggered by heap pressure.

### 11. One task at a time (break)

Your own task `Tick.Step` counts calls (`n`) and the longest gap between them (`gap`,
ms).

2. `n > 0`: the task was called.
3. `gap ≥ 900` after `Tick.Spin` (a command that takes a second). The normal gap is
   100 ms, the task period; 900 can only come from a command that held the loop. In
   the test run it is 1109 ms.
4. After `Tick.Break` the check itself runs the machine for 5×200 000 instructions:
   every program counter sample must lie inside the code of the `Tick` module
   (`code … imp` from the descriptor), and `n` must not change. In the test run the
   machine sits at `3824C` inside `Tick.Stuck`.

### 12. The cost of checking, by hand (measure)

The lab brings up **the kernel with CHK** and places `ORG.Chk.Mod` on the disk.

1. The `Cost` module is loaded, `Cost.t > 0`, and the **loaded** code (memory, not the
   file) has zero CHK instructions. The time is remembered.
2. `ORG.rsc` has been rewritten (its directory entry changed), the key is the same,
   and there is more code than in the shipped one (6650 words).
3. The loaded `Cost` contains CHK, and the time is different. This is counted from
   memory, so it fails if `System.Free` was forgotten and the old code is still
   running.
4. The answer is the speedup percentage, checked against the two measured times.

Numbers from the test run: **276 ms → 264 ms** for 300 000 indexing operations,
exactly **1.00 cycle per indexing operation**, 4.35%. Step 1 run on the **stock**
kernel gives the same 276 ms; this is a claim in the lab text, and it is checked.

## What was surprising

**The timer is cycles.** `Kernel.Time` reads a counter that the model increments once
every 25 000 cycles (`tb/wasm_main.cpp`). Milliseconds in the lab are an exact measure
of work, repeatable to the unit; a saving of one cycle per indexing operation gave
exactly 12 ms over 300 000 indexing operations.

**The collector is an ordinary task.** `Oberon.Mod` ends with the line
`CurTask := NewTask(GC, 1000); Install(CurTask)`. It is called once a second, but it
only collects if there have been 20 user actions since the last collection
(`BasicCycle`) or less than 64 KB remain before the end of the heap. Time by itself is
no reason: 256 KB of garbage stayed in place for as long as you like.

**Why only between commands: the stack is not scanned.** The roots for marking are
only `mod.ptr`, that is, the modules' global pointers. In the middle of a command,
live objects are held by local variables, and a collection would throw them away.

**An anonymous record behind a pointer gets no type descriptor.**
`TYPE Block = POINTER TO RECORD … END` in the 2016 compiler: `ORP` builds a descriptor
(`ORG.BuildTD`) only for a named record. The `.rsc` comes out with an empty
descriptor area, and `NEW` in the measurement **did not increase `Kernel.allocated` by
a single byte**: the tag is not taken from its own type. That is why the type in the
lab is named (`BlockDesc`), and the step 2 check explains the reason if it sees
`tdBytes = 0`. The mechanism has not been fully worked out; the observation is
reproducible.

**A click at (700, 620) does not put the caret at the end of the text.** The test run
typed commands after `Edit.Open …`, and the tail of that line stuck to the next one:
`Junk.Make` turned into `Junk.Makeen Junk.Mod ~`, and the system answered
`Junk command not found`. The old scenarios did not suffer from this because they
typed a single line. The caret is now set by clicking to the right of the end of the
text.

**Fast typing loses Shift.** A long line with capitals, typed at 4000 instructions per
character, turned `ORG.Chk.Mod` into `ORG.Chk.mod`. The step is now 10 000.

**Compiling `ORG` is 20 million instructions**, not a minute: seconds, even in the
browser.

## A file on disk before boot

`oberonfs.js: addFile` inserts a file into the image **before** boot: the header
(`mark, name, aleng, bleng, date, ext, sec`) following `FileDir.Mod`, the data into
free sectors (numbers below 64 are not used, because `Kernel.InitSecMap` keeps them
marked as taken), and the entry into a leaf of the directory B-tree. Writing to the
disk of a running system is not possible: it keeps the map of used sectors in memory.
Before boot there is no map; `FileDir.Init` builds it by walking the directory and
marks the new file like any other. A full leaf is not split: the function refuses
loudly. On the reference image, `ORG.Chk.Mod` lands in the leaf `ORB.Mod … ORTool.Mod`
(16 entries out of 24).

`<oberon-machine>` gained a `files` attribute; the lab declares
`machine: { variant: 'chk', files: ['ORG.Chk.Mod'] }`, and `lab.html` brings the
machine up again, just as `checks.html` does on a kernel change.

## The version stamp: where the lab departs from configuration E

`ORG-cfgE.Mod` marks modules with CHK as version 2 so that the stock loader rejects
them (Finding 18: on the stock kernel CHK executes as LSL and corrupts a register).
But the loader in the boot image is also stock, and it rejects version 2 even on the
kernel with CHK. The inner kernel cannot be rebuilt in the browser. Therefore
`web/ORG.Chk.Mod` writes version 1; this is the only difference from
`patches/ORG-cfgE.Mod`, and `labs-test.mjs` checks it line by line. It is safe only in
the lab: a kernel change brings the machine up with a clean disk, and a module with
CHK never reaches the stock kernel.

## Limits

* Lab 12 measures **B versus E** (the software check versus the hardware one).
  Configuration A, with no checks at all, is not there: a module compiled with an
  asterisk (`MODULE *`) is RISC-0 version 0, and the loader will not accept it; and an
  `ORG` with `check := FALSE` would require one more file on the disk. It can be done
  with the same `addFile`, but that is a different lab.
* "300 000 indexing operations" in the messages refers to the loop from the
  assignment. If a person changes the loop, the percentages are correct, but the
  cycles per indexing operation are not.
* Numbers 10–12 in the course plan (`12-labs-and-archive.md`) used to mean "your own
  built-in procedure", "your own processor instruction" and "porting". The numbers
  went to the labs that were actually built; the planned ones moved to 13–15, and the
  container tasks (`deploy/lab.sh`, `deploy/Containerfile`, Finding 32) are named by
  task name (`isa`, `compiler`, `check`), as in the catalog's `task:` field, not by
  number. Finding 31 ("labs 10–12 are not built") describes the old numbering.
