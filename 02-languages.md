[Русская версия](02-languages.ru.md)

# Track 2. Languages and compilers

The situation is better than with operating systems: a language is described by a report,
and reports outlive hardware. "Never implemented" for a language almost always means "can be
implemented today".

---

## The treasure: a specification exists, an implementation never did or was abandoned

- **The three losing Ada contestants** (1977–79). Green won → Ada. **Red** (Intermetrics), **Blue** (SofTech) and **Yellow** (SRI) remained published specifications and were never compiled. The best story of the track: three fully described languages of the same class that nobody has ever seen running.
- **CPL**: too ambitious for the machines of its time, never fully implemented. From a cut-down version → BCPL → B → C. The whole C lineage is a by-product of a failure.
- **Plankalkül** (Zuse, 1942–45): the first high-level language, written for the drawer; a full implementation appeared only in our time.
- **Fortress** (Sun, Guy Steele, shut down in 2012): mathematical notation as syntax, units of measure in the type system, parallelism by default. The 1.0 specification was published in full. The most "modern" abandoned language.
- **Id and Val**: for dataflow machines (Monsoon, Tagged-Token, MIT). There are almost no implementations outside that hardware → connects to the emulator track.
- **Sisal**: a functional language for supercomputers that outran Fortran on a number of problems.
- **Napier88 and PS-algol**: orthogonal persistence at the language level: a data structure simply exists after the program ends. A pair for KeyKOS and Grasshopper.
- **Argus** (Liskov): the guardian as the unit of distribution, atomic actions in the language. Durable execution and sagas, described in the eighties.
- **Emerald**: an object migrates across the network as a property of the language. A pair for Magic Cap and Amoeba.
- **Hermes** (IBM, successor of NIL): a safe distributed language with typed processes.

---

## Implemented but forgotten: the overview genre with a modern parallel

- **Self**: prototypes instead of classes, the birthplace of polymorphic inline caches; V8 is built on this technique.
- **Oz / Mozart**: dataflow variables, constraints, multiple paradigms. The Van Roy & Haridi textbook is the best text on models of computation.
- **BETA**: a single "pattern" construct instead of classes, methods and functions. The Scandinavian line from Simula.
- **Simula 67**: where all of OOP comes from; a compiler is available (GNU Cim).
- **Icon**: goal-directed evaluation and generators as the base semantics. Not repeated at scale anywhere.
- **SNOBOL4**: pattern matching with backtracking, before regular expressions.
- **Concurrent Clean**: uniqueness types = linear types and borrowing 15 years before Rust.
- **Mesa and Cedar** (PARC): Mesa monitors as the canonical synchronization model; the first systems language with garbage collection in production.
- **Modula-3**: exceptions, threads, modules and safety in one well-thought-out whole. Influenced Java and C#, then vanished itself.
- **Newsqueak and Alef** (Pike, Winterbottom): channels and goroutines before Go. Newsqueak is tiny; an interpreter can be written in an evening.
- **Prograph**: visual dataflow, a commercial product. Every node editor today rediscovers its pitfalls.
- **K and A+**: the APL line that survived only in finance.
- **Lucid**: intensional programming, a value depends on a context dimension.
- **Pict** (pi-calculus, Pierce and Turner): dead. The join calculus → JoCaml, Cω; the ideas seeped into the mainstream without attribution.

---

## The domestic (Soviet) line

- **Refal** (Turchin), and with it **supercompilation**, an optimization technique more powerful than anything in industrial compilers. Live implementations of Refal-5 exist and are maintained. The SCP4 supercompiler exists.
- **Analitik** (MIR-2, 1969, Kyiv): symbolic differentiation and formula transformation **in hardware**. No implementations; must be written from scratch.
- **Rapira and Robik** (Ershov's line): school languages with Russian-language syntax and well-designed didactics. Practically no interpreters are left.
- **El-76**: connects to the OS track: a language that was the machine's instruction set.

---

## Esoterica and jokes

- **INTERCAL**: the COME FROM statement, the mandatory PLEASE (neither too rarely nor too often).
- **Malbolge**: designed so that writing in it is impossible; the first program was found by brute-force search. A compiler for it is still a feat.
- **Befunge**: two-dimensional control flow.
- **Unlambda, Thue, Whitespace, Piet, Shakespeare, Chef, LOLCODE**.
- **Subleq** and one-instruction machines: a link to the emulator track; the finale: write something indecently large using a single instruction.

---

## Sub-track: compiler techniques

The most practical episodes: everything is reproducible on a laptop.

- **Futamura projections** (1971): get a compiler from an interpreter by automatic specialization. The connection to JIT is direct, and almost nobody knows it. An episode with a working demonstration is a knockout.
- **Warren Abstract Machine**: Prolog's abstract machine, dissected by Aït-Kaci down to the instruction in a separate book. A classic strong project.
- **Abstract reduction machines**: SECD, the Krivine machine, the G-machine, STG. Implementable from the papers; together they give a picture of "how functional languages execute".
- **Supercompilation**: see Refal.
- **Reflections on Trusting Trust**: reproduce Thompson's attack on our own compiler, then the defense through diverse double-compiling and bootstrappable builds. Not retro but a live supply chain security agenda → will spread beyond the retro audience.
- **Burroughs one-pass compilers**, which compiled faster than the card reader could feed the punched cards.

---

## Links to other tracks

- Napier88 ↔ Grasshopper/KeyKOS ↔ the thesis that the reconcile loop is unnecessary (track 4)
- Argus, Emerald ↔ durable execution and task migration (track 4)
- occam ↔ Newsqueak ↔ Alef ↔ Helios ↔ the transputer (track 3)
- Taos VP code ↔ TIMI (AS/400) ↔ WASM: both a language and an answer to heterogeneity
- Refal + supercompilation ↔ controllers as rewriting rules (track 4)
