[Русская версия](FINDING-30-book.ru.md)

# Finding 30. The Oberon course book

## What was done

Eight chapters, about five thousand words, in `docs/book/*.md`. The source of truth is
Markdown in the repository: it can be read and reviewed in git. The output is
`web/book/*.html`, next to the labs, so that reading and doing the assignments happen in
one place.

| chapter | about |
|-------|-------|
| 1. What this is for, and what here is real | what is simulated, what is modelled, how it is verified |
| 2. The machine: RISC5 | registers, four instruction formats, conditions, traps, memory map |
| 3. The language: Oberon in one chapter | all 33 keywords, types, statements, built-in procedures |
| 4. The system: text instead of buttons | the middle click, three buttons, the arrow and the tilde, windows, the log |
| 5. Modules, symbol files and keys | separate compilation, why `/s`, build order |
| 6. The compiler from inside | four modules, the item, the path from `a[i]` to instructions, fixups |
| 7. Self-hosting and the fixed point | what the agreement of generations proves and what it does not |
| 8. What we measured and what we found | the cost of checks, the CHK encoding, discrepancies in Oberon itself |

The builder is `tools/mkbook.py` on the `markdown` library (we did not write our own
converter). A shared template, a table of contents, forward and back navigation.

## Written from the sources, not from memory

The keywords were pulled from the `EnterKW` table in `ORS.Mod`: there are exactly 33.
The built-in names come from `enter` in `ORB.Mod`: there are 42. The register conventions
(`MT=12`, `SB=13`, `SP=14`, `LNK=15`) come from the constants of `ORG.Mod`. The complete example
module is the real `Blink.Mod` from the image. The path of `a[i]` is traced through the procedure
`Index` in `ORG.Mod`, the trap encoding through `Trap` in the same place.

The numbers in chapter eight come from findings 8, 16, 24, 26, 27: the cost of checks 2.19% and
1.85%, the share removed by hardware 15.5%, area 46…123 µm², the dynamic
profile 68.3%, three widths of the offset field, the error in the `ORTool` condition table.

## Connection to the labs

Each lab now has links to the relevant chapters, and the labs page
has a link to the course book.

## Checks

`make book` fails if a link leads to a nonexistent chapter or to a
lab that does not exist. `make labs` additionally checks that links from
the labs lead to existing chapter files.

A broken link in a textbook is worse than a missing chapter: it looks like it works.

Checked for misses three times: a link to chapter `99-nety.md`, a link to
lab No. 5 (which does not exist) and a link from a lab to a nonexistent
chapter file each break the build.

## What the course book does not contain

It is a textbook for the three labs that have been made, and for the machine. It does not contain:

* exercises with checks: those are in the labs, and so far there are three of twelve;
* a walkthrough of the windowing subsystem and graphics (`Viewers`, `TextFrames`, `Graphics`);
* a description of the garbage collector and the heap layout;
* anything about the second machine: it does not exist yet.
