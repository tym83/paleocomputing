[Русская версия](05-experiments.ru.md)

# Cross-cutting experiments and cross-ideas

---

## 1. Interpreted C

**This exists:** `tcc -run` + the shebang `#!/usr/bin/tcc -run` (C as a scripting language in
one line); **Cint** (CERN, two decades inside ROOT) → **Cling** → moved upstream into
LLVM as **clang-repl** (an official REPL for C ships as part of LLVM, and few people know it);
**Ch** (commercial, full C99); **picoc**; **Interactive C** (MIT robotics courses);
Swierczek's **c4** (an interpreter for a subset of C in four functions, ~500 lines,
which runs its own source).

**The real question is what breaks along the way:**

- **Memory has to be flat.** Boxed values die on a byte-wise `memcpy` of a struct, on a union, on casting `struct*` to `char*`. You need a byte-addressable heap, with type information in a shadow layer. An honest C interpreter = a sanitizer that also executes.
- **A pointer is not an address.** The modern model says a pointer carries **provenance**: two pointers can compare equal and still not be interchangeable. The hardware knows nothing about this. An interpreter can. **The interpreter turns out to be more precise than the processor**, because it executes the language from the standard, not what the compiler collapsed it into.
- **UB.** ~200 cases in C11. Three strategies: do something reasonable / stop with a diagnostic / execute all the variants the standard allows. The third is the most valuable.
- **Unspecified evaluation order.** `f() + g()`: an interpreter fixes one order and hides the bug. The honest way is to randomize or enumerate.
- **The outside world.** libc and system calls call code back (the qsort comparator, a signal handler). You need a two-way bridge via libffi and trampolines: the biggest and most boring part, where all the complexity of picoc and Cint sits.
- **Small things:** setjmp/longjmp, volatile (meaningless without modeling device registers), signals, alignment, bit fields, VLAs, flexible arrays, restrict, inline assembly (needs a processor emulator).
- **The preprocessor.** C's semantics begin before C. For a REPL the translation phases have to be replayed incrementally.

**Why:** a precise UB detector instead of a heuristic one; deterministic replay and
debugging with stepping backwards; hot code replacement; a sandbox for untrusted C without
virtualization; teaching (the student sees the abstract machine).

**Levels:**
| # | What | Size |
|---|---|---|
| 0 | `tcc -run` + shebang | 5 minutes, the article's hook |
| 1 | Our own bytecode machine, a flat heap, a C89 subset, libffi | 5–10k lines (the class of c4 and picoc) |
| 2 | Full C11: the clang frontend, execution over the AST or LLVM IR; start with clang-repl | less code of our own, more correctness |
| 3 | **Shadow memory with provenance and initialization, UB diagnostics, deterministic replay** | this is where what does not exist ready-made begins → open-source it |
| 4 | Nondeterministic execution: enumerating all variants the standard allows | **Cerberus** (Sewell) and **KCC** (C11 in the K framework) already live there, plus the **CompCert** reference interpreter |

**The link:** the C abstract machine is the specification of a nonexistent computer for which
all the world's system software was written and which nobody ever built. Implementing it directly =
the same genre as "a forgotten machine of which only a report remains". The report is ISO/IEC 9899.

**The punchline:** specialize your C interpreter on a particular program by partial
evaluation → by the first Futamura projection you get a compiled binary. A C compiler
from a C interpreter, automatically, without a single line of code generator. A 1971 demonstration.

---

## 2. A managed runtime for C++ ("a JVM for C++")

**Already done:** **Sulong** in GraalVM (LLVM bitcode on the JVM via Truffle, JIT, a fully
managed memory mode: C and C++ **already run on the JVM**); **C++/CLI** (a real product, but
the language had to change: separate pointers, a placement operator, a type category; it could
not be fused, only docked); **WebAssembly** (won because it deliberately did **not** become a JVM:
linear memory instead of an object model, no GC for C++ objects); **Cheerp** (can compile C++
objects into real runtime objects with identity; the closest of all); **NestedVM**; a graveyard of
LLVM-to-bytecode backends.

**Why it is harder than with C:**
- **Interior pointers** everywhere (the address of a field, of a vector element, of a base subobject). A moving GC breaks every stored one. Either pin everything down (the GC is pointless) or forbid them (that is not C++).
- **RAII.** Deterministic destruction is the central idiom: locks, handles, transactions. A GC gives nondeterministic finalization, which is no substitute (Java buried finalizers for exactly this reason).
- **Value semantics.** Copy constructors, moves, layout guarantees, trivially copyable types. The JVM has only references for objects. Value types = Valhalla, now in its second decade.
- **Templates.** Monomorphization at compile time versus type erasure at run time: opposite models. Specialization at run time = the Truffle mechanism = **Futamura projections again**.
- **Multiple inheritance, virtual bases, pointer adjustment on casts.**
- **The ABI as part of the language.** Stack unwinding through C frames, dlopen, system libraries, assembly.
- Minimal GC support appeared in **C++11** and was **removed in C++23** because nobody implemented it.

**The organizing thought: historically there have been three answers to the question "how do we make
C++ memory-safe and portable without rewriting it":**
1. **Change the language**: C++/CLI, Cyclone, modern C++ with smart pointers. Legacy does not move over.
2. **Change the virtual machine**: WASM, Sulong, Cheerp. Whoever argues least with the original's semantics wins.
3. **Change the hardware**: CHERI, Morello: provenance is checked in hardware, the language does not change. Exactly what Burroughs did in 1961 and Elbrus in 1980, now with an eye on C.

**Three answers, three episodes. The best frame for an entire season: one problem, three eras, three schools.**

**The stakes:** memory safety has become a regulatory topic, and "rewrite it in Rust" is not
feasible for the existing volume. A managed runtime is the only path in which
old code is not rewritten but recompiled.

**Experiment:** do not build a JVM for C++ from scratch (that is a career, not an article). Take Sulong
in managed mode, run a real, moderately crummy C++ program and honestly
measure: what broke, where speed dropped, which idioms fell off, which memory errors
it caught that the native build swallowed silently. An evening of work, an article with
numbers. On top of that, a discussion of an honest managed C++ that keeps RAII and run-time provenance.
**Shadow memory with provenance is needed both here and in item 1 → write it once.**

---

## 3. An OS from a spec, written in a forgotten language

### The asymmetry
Refal can be picked up tomorrow (live Refal-5 implementations, a supercompiler). There are no
alternative Adas at all: neither Red, nor Blue, nor Yellow was ever compiled. Any project in Red
starts with the language frontend. Refal is a weekend experiment; Red is a year-long project.

### What can actually be implemented from "only a spec"
- **Dijkstra's THE**: five layers, about a dozen processes, one paper. The ideal target.
- **The Tandem NonStop kernel**: process pairs, checkpoints. Bigger than THE, but manageable.
- The rest is either large (iMAX) or not a spec but prose (Midori).

### Pairs that fit together
- **Ada Red + a NonStop-style kernel**: the most organic. Ada was designed exactly for this: embedded systems, reliability, tasks and rendezvous in the language. Process pairs fit almost without strain. Both artifacts are contemporaries, the late 70s. An honest alternative history: the language that did not win the competition writes the OS of which no code remains.
- **Ada Red + iMAX on an emulated iAPX 432**: the maximal version: a machine built for Ada + an OS in Ada + the Ada that lost the competition. All three tracks at one point. A flagship for years; keep it as the horizon.
- **THE in Ada**: the layers map onto packages, Dijkstra's semaphores → Ada's synchronization primitives. The 12-year anachronism works for the story. **The practical move:** first build THE in modern Ada (GNAT), check that the reconstruction from the paper holds up; this removes the main risk cheaply. Then rewrite it in Red. Two articles: "THE works" and "THE in a language that does not exist".

### Refal: as a kernel it is a stretch, as a control plane it is a hit
Writing a kernel in Refal is a bad idea: no pointers, no direct memory access, everything runs on GC and
term rewriting. You hit exactly the reason nobody wrote kernels in it.
The result is "look, I managed it", not "look, this is better".

On the other hand, Refal is a natural notation for controllers. See `04-infra-layer.md`, the section
"Refal as a control plane language".

### A risk to accept in advance
If you take an OS spec and write it in a language nobody has written an OS in, you will almost certainly
find out **why** nobody did. That is not a failure but a result, provided the article is planned
from the start as "what the language does not give and why", not as a victory report.
