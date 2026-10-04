[Русская версия](FINDING-68-labs-a-and-compiler.ru.md)

# Finding 68. The cost of a bounds check in three numbers, and a built-in function of your own

## Lab 12: now all three configurations

Until now, lab 12 compared two: B, the stock compiler with a software check
(a comparison and a branch to a trap), and E, the code generator with the CHK
instruction on a core with CHK. Added now is A, a code generator with no check
at all (`ORG.NoChk.Mod` = `patches/ORG-cfgA.Mod` except for the comment with
the version stamp; `labs-test.mjs` compares the files line by line). A person
compiles the same loop with three compilers and gets their own three numbers:

| configuration | time | in the code | words |
|---|---:|---|---:|
| B, software | 276 ms | 1 trap, 0 CHK | 74 |
| E, hardware | 265 ms | 0 traps, 1 CHK | 73 |
| A, no check | 252 ms | neither | 72 |

The model's timer counts clock cycles (25,000 per ms), so the numbers are
exact and repeatable. The software check costs 2.00 cycles per indexing
operation, the hardware one 1.08; the hardware recovers 46% of the cost. The
sizes add up by instruction: B = E + 1 trap, E = A + 1 CHK.

The machine-level evidence by which the check tells the configurations apart
is the loaded code itself: the number of CHK instructions and trap patterns in
memory, not in the file. This rules out the case where someone forgot
`System.Free` and old code is still running.

## Lab 13: a built-in function of your own

The `compiler` task from the labs container has moved to the browser. Pascal
had `SQR`; Wirth removed it from Oberon; the person brings it back
themselves: three insertions (`ORB` knows the name, `ORP` parses the call,
`ORG` emits the instruction), a rebuild of the compiler inside the system,
`System.Free`, and a module that calls `SQR`.

The checks read the machine:

* all three insertions are on disk, each in its place;
* the compiler has been rebuilt: the `ORB` key is unchanged, the `ORG` key is
  new, and `ORP.rsc` imports the new one;
* `Sq.r = 385`, and the module's loaded code contains exactly one
  `MUL Ri, Ri, Ri` instruction, the one that `ORG.Sqr` emits;
* the compiler built by the new compiler is a fixed point: `ORB.rsc`,
  `ORG.rsc`, `ORP.rsc` are byte-for-byte the same. `SQR` changed nothing but
  itself.

In the course plan, lab 13 is marked as done in the browser; 14 (an
instruction of your own for the processor) remains a host lab, since Verilog
cannot be rebuilt in the browser; 15 comes after Lilith.

## What turned up along the way

At first the test script failed on the insertion into `ORG.Mod`: instead of
`PROCEDURE Sqr*(VAR x: Item)` the file got `PROCEDURE Sqr*(VX: Item)`. The
keyboard model lost keystrokes in a dense series of Shifted characters when
typing at 10 thousand instructions per character: letters went missing and
Shift stayed pressed. At 30 thousand it was clean. This does not affect a
person, since nobody can type that fast by hand; it only affects automated
typing in the checks.
