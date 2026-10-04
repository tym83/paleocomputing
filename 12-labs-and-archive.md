[Русская версия](12-labs-and-archive.ru.md)

# The cultural outreach project: labs, teaching materials, an archive

Written on 2026-09-22. Two layers on top of every machine we bring back to life:
**interactive labs** and **an archive of rare material**. Artifacts are a by-product,
not the goal.

---

## 0. A correction that makes Oberon STRONGER, not weaker

The premise "the compiler is not written in Oberon, it must be rewritten" is **wrong**, and that is
good news: the work has already been done by Wirth, and we have checked it.

| Module | Language | Author's header |
|---|---|---|
| `ORS.Mod`: scanner | **Oberon-07** | "Scanner in Oberon-07" |
| `ORB.Mod`: symbol table | **Oberon-07** | "in Oberon-07" |
| `ORG.Mod`: code generator | **Oberon-07** | "code generator in Oberon-07" |
| `ORP.Mod`: parser | **Oberon-07** | "Oberon compiler for RISC" |

**And we did not take it on faith; we checked it bit for bit.** A three-stage build:
the compiler builds itself, the resulting compiler builds itself again, the bytes
are compared. The result is `Stage 2 and Stage 3 are identical`. This is a **fixed point**:
proof that the language serves itself.

Moreover, it **holds even after we instrumented the emulator**: the
auditor checked, and all 30 output files matched byte for byte.

### Where C really remains, and why that is the wow act

Not in the compiler. In the **Norebo runtime**, 1070 lines:
- `risc-cpu.c` (484): the RISC5 processor emulator
- `norebo.c` (586): the bridge to Unix: files, arguments, output

**And we have already replaced the first of the two.** Our SoC bench boots the real system on live
Verilog. So the Oberon compiler **is already able to work without a C emulator**,
on honest RTL.

Hence an act nobody else has:

> Oberon compiles itself **on a processor described in Verilog, run cycle
> by cycle, in a browser tab**. Not a single line of C in the product: the language, the compiler,
> the operating system and the processor form a closed loop that the reader can turn
> without getting up.

This is stronger than "we rewrote the compiler", because there is nothing to rewrite, and nobody has yet
closed the loop all the way.

### What remains for this

| Step | State |
|---|---|
| the core on RTL boots the system | ✅ done |
| the same in the browser | ✅ done |
| the compiler works inside | ✅ done (it is in the image) |
| **the system rebuilding itself on our RTL** | 🔴 not checked: the main step |
| an editor and a file system in the browser | 🟠 the system has its own; a bridge to the outside is needed |
| remove `norebo.c` (the bridge to Unix) | 🟠 for the host scenario; not needed for the browser |

**The system rebuilding itself on our RTL** is the wow that everything is heading toward.
A "rebuild" button with a seconds counter, after which the system keeps running on
the code it has just produced.

---

## 1. Labs: the format

Every machine gets a set of labs. Not text with screenshots but **executable
exercises in the browser**, where the reader changes something and immediately sees the result.

### Mandatory properties of the format

- **Zero barrier to entry.** Open the link and it works. No installation, no registration
- **Every lab is self-contained** and fits into 10–20 minutes
- **There is something to break.** The best lab is one where the reader is allowed to spoil things and is shown
  what exactly got spoiled
- **Reversibility.** A "restore as it was" button, always
- **Checking.** The lab knows whether the reader completed the exercise

### Levels

| Level | What the reader does |
|---|---|
| **Look** | start the system, poke around, read the explanation |
| **Change** | fix a program, rebuild, see the effect |
| **Break** | introduce an error, see the diagnostic, understand the mechanism |
| **Measure** | take a number yourself and compare it with ours |
| **Build** | add an instruction, change the core, port |

---

## 2. An Oberon course: draft syllabus

The language is almost unknown, and yet it is **the smallest of the full-fledged ones**: the entire
specification fits in 16 pages. This is a rare case where a single course can
take you from "never seen the syntax" to "I edit the code generator".

| # | Lab | Level | What is already ready |
|---|---|---|---|
| 1 | The first program: everything is text, the middle button executes | look | system in the browser ✅ |
| 2 | Syntax in 20 minutes: the whole language on one page | look | — |
| 3 | Modules and separate compilation; what a symbol file is | change | — |
| 4 | Run-time checks: break an index, see the trap | **break** | measured ✅ |
| 5 | What checks cost: take the number yourself | **measure** | scripts ✅ |
| 6 | Dynamic structures and the garbage collector | change | — |
| 7 | Bootstrapping: the compiler builds itself | look | checked ✅ |
| 8 | The fixed point: why it is a proof | look | checked ✅ |
| 9 | Inside the code generator: how `a[i]` turns into instructions | change | `ORG.Mod` studied ✅ |
| 10 | The garbage collector from the inside: where and when it collects | look | in the browser ✅ |
| 11 | One task at a time: cooperative tasks of the main loop | **break** | in the browser ✅ |
| 12 | The cost of a check by hand: your own number on your own code | **measure** | in the browser ✅ |
| 13 | Add your own built-in procedure | **build** | in the browser ✅ |
| 14 | Add an instruction to the processor and teach the compiler | **build** | done ✅ |
| 15 | Port a module to another machine | **build** | after Lilith |

Numbers 10–12 are taken by the browser labs that were built (the collector, tasks, the cost
of a check); the ones originally planned under these numbers moved to 13–15 unchanged.
Of the remaining twelve, seven rely on what already works.

---

## 3. The archive: the second half of the project

The cultural outreach part. Not "we built it" but **"we preserved and explained it"**.

### What to archive

| Category | Examples from our catalogs |
|---|---|
| **Vanishing artifacts** | Ada RED (the spec was unavailable for 30 years), Kronos, DEMOS, El-76 |
| **Living holders of knowledge** | participants of the Ada competition, the developers of Kronos, Elbrus, Tandem |
| **Reproducible builds** | our images, emulators, patches, so that it still runs in 10 years |
| **Explanations of mechanisms** | how the fixed point works, Burroughs descriptors, CSP in hardware |
| **Negative results** | 21 findings, 3 of them about our own mistakes |

### Principles drawn from the first piece of work

1. **Artifacts decide, not ideas.** The iAPX 432 and Elbrus are blocked not by complexity
   but by the availability of documentation. Check before starting
2. **Dissertations and patents are underrated.** The Ada RED spec turned up transcribed
   by one of its authors; for closed systems patents are often the only route
3. **Holders of knowledge are mortal.** For Kronos, Elbrus and DEMOS, people are still reachable.
   An interview is both a source and material in its own right
4. **A negative result is archive material too.** "We searched and did not find it" saves
   the next person years
5. **Reproducibility matters more than beauty.** The audit showed that half of our scripts
   reproduced numbers other than the published ones. An archive without reproducibility is a museum
   of dead exhibits

---

## 4. How this maps onto the other tracks

Every machine from `11-roadmap-platform.md` gets three layers:

```
   ARTIFACT          what we built: an emulator, an OS port, measurements
      ↓
   LABS              how the reader touches it with their own hands
      ↓
   ARCHIVE           where it came from, who invented it, what has survived, what has not
```

Without the first there is no proof. Without the second nobody will come. Without the third it is
an engineering craft project, not cultural work.

---

## 5. Next up

| # | Step | Why now |
|---|---|---|
| L1 | **The system rebuilding itself on our RTL** | the main wow, almost done |
| L2 | A lab framework: canvas + exercise + check + rollback | built once, reused afterwards |
| L3 | Labs 1, 4, 7 (look / break / bootstrapping) | all three rely on what is ready |
| L4 | A "host files ↔ image" bridge for editing code in the browser | without it there is no "build" level |
| L5 | The first interview with a holder of knowledge | people do not wait |
