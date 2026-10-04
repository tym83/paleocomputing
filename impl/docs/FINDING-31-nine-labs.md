[Русская версия](FINDING-31-nine-labs.ru.md)

# Finding 31. Nine labs

## What was done

Six were added to the previous three. The course programme is covered from the first to the ninth;
each lab is the text of its steps and a machine check for each step.

| No. | title | level | what is checked by the machine |
|---|----------|---------|-------------------------|
| 1 | The system on real hardware | look | screen checksum `B5DFC933`; the text of the module viewer |
| 2 | Your first module | look | `Hello.Mod` on disk contains the required constructs; `Hello.rsc` created |
| 3 | The interface key | change | the key does not change on rebuild; the key recorded in `Oberon.rsc` matches the key of `Texts.rsc` |
| 4 | There is no memory protection here | break | the screen is corrupted and the machine is alive; the program counter has frozen |
| 5 | How many cycles per instruction | measure | the entered number is checked against the machine's counters |
| 6 | The heap runs out inside a command | break | `PIO.rsc` did not appear after the batch and appeared after a single build |
| 7 | The system rebuilds itself | build | length of `Math.rsc` 1877 → 1869 |
| 8 | The fixed point: two generations | look | the file's directory record changed twice, size and key the same |
| 9 | Inside the code generator | change | object file version 1 → 0, code size with an explanation |

## What this required in the framework

* **State between steps.** Many checks compare "before" and "after",
  so a shared bag of state is passed to each step.
* **Answer fields.** The "measure" level is impossible without them: the student enters
  a number, and the check recomputes it from the machine state.
* **Parsing object files in the browser** (`parseRsc`): code size, key,
  version, the list of imports with their keys.
* **Reading Oberon text** (`readText`). Files saved by the editor are stored
  not as bare ASCII: the first byte is a format tag, then the text offset and
  the descriptions of runs with fonts, and line ends are carriage returns.
* **A "file was rebuilt" marker.** `Files.Register` creates a new file and
  replaces the entry in the directory, so the directory record changes on every
  rewrite. This is an honest marker that does not depend on whether the
  content matched, while a byte-for-byte comparison does not distinguish these two cases.

## Three hypotheses that experiment rejected

**The batch `ORS ORB ORG PIO` does not exhaust the heap.** The assumption was that any
four modules in one command would bring the build down. It turned out the issue is not the number but the
weight: the batch went through entirely. What brings it down is `ORP`, which has the heaviest symbol
table. The lab was rewritten for `ORS ORB ORG ORP PIO`.

**The asterisk does not shrink the code, it grows it.** `MODULE*` switches the compiler to
`version := 0`, and that is not only `check := FALSE` but the whole RISC-0 mode:
`ORG.Open(0)` reserves eight words at the start of the module. Measured: 34 words with
checks, 38 without. Two effects at once, and they cannot be separated from inside the system.
This became the content of the lab instead of being hidden: exactly for this reason
our measurement of the cost of checks in chapter 8 had to be done in two stages.

**Text was being saved silently corrupted.** In the scan-code typist the digit table
started at the wrong character, and **the closing parenthesis simply was not typed**:
what went into the file was `Sum*(n: INTEGER: INTEGER` and `INC(i END`. The file
was created all the same, and a "file exists" check lets this through.

Fixed, and a safeguard was put in place: the test types text through the real editor,
saves it, reads the file back from disk and compares character by character.

## The checks are checked

`make labs` runs the scenario of each of the nine headlessly and requires a transition
from "not done" to "done": first the check must NOT pass, then, after
the intended actions, it must pass. For answer fields, rejection of a non-numeric and of a wrong value
is additionally checked.

The list of lab numbers is no longer hard-coded in the course book builder: it is read
from `web/labs.js`, otherwise the link check would drift apart at the very first new lab.

## What is missing

Labs 10–12 of the course programme have not been made and are impossible in the browser:

* **No. 10, your own built-in procedure**: editing `ORB.Mod` and `ORG.Mod` with
  a subsequent rebuild of the compiler. In principle doable inside the system, but
  the amount of editing is large for a browser lab.
* **No. 11, your own instruction in the processor**: requires rebuilding the Verilog, that is,
  work on the host, not in the browser. We have done this (`CHK`), but it is not packaged
  as a lab.
* **No. 12, porting to another machine**: waits for a second machine.
