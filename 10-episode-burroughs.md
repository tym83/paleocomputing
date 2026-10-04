[Русская версия](10-episode-burroughs.ru.md)

# The Burroughs B5500 episode: "buffer overflow does not exist"

Status: second/third episode. Costs an evening (minimal version). The emulator and the ALGOL compiler
are ready; see `07-browser-embed.md`.

## What this machine is (context for the article)

The early sixties. IBM dominates, with five smaller companies around it (the BUNCH); Burroughs is among
them, and is actually a maker of adding machines that cannot compete with IBM in money or in sales
channels.

And instead of "like IBM, but cheaper" it makes a bet impossible today for a commercial company:
**design the machine not around the hardware but around a programming language.** And around ALGOL 60 at that,
an academic European language that almost nobody in American business uses.

The architect is **Robert Barton**. The principle: a machine should be designed from how people
want to express problems, not from what is convenient to build out of gates. Barton later strongly
influenced Alan Kay; the line of reasoning from which Smalltalk grew partly comes from here.

The result is the **B5000** (announced in 1961) and its faster successor, the **B5500**.

### What was wild about it

- **There is no assembler.** Not "not recommended": it was not shipped. The instruction set is such that writing by hand is pointless.
- **The OS is written in a high-level language.** The MCP (Master Control Program) is written in ESPOL, a dialect of ALGOL. Unix in C would appear more than ten years later and be considered a breakthrough. The villain of "Tron" is named after this tradition.
- **The machine is stack-based.** There are no general-purpose registers visible to the programmer. Hence block structure and recursion come for free, while machines built for FORTRAN could not do recursion at all.
- **An array is accessible only through a descriptor** with a base and a length. Indexing is a hardware operation with a check. Bounds checking is not a compiler option but the only way to access an element.
- **Memory is typed.** A flag bit in the word distinguishes data from a control word. In the later machines of the line the flag was extended to a three-bit tag.
- **Virtual memory** through a presence bit in the descriptor.
- **Multiprocessing** from the start; the MCP ran on two processors.
- **One-pass compilers** that generated stack code almost directly from the expression, without register allocation.

In sum: in 1961 there was a machine where it was impossible to corrupt someone else's memory, impossible to
write a single line of assembly, with working virtual memory and multiprogramming,
and with the OS written in a human language.

### Why it lost

1964: the **System/360**, a family with upward compatibility, and IBM sells it the way
Burroughs cannot. **Stack machines lost to register machines**: the top of the stack is a bottleneck,
and pipelining fits registers better. **Checks cost cycles**, and cycles were expensive.
Plus: being different means not having anyone else's software.

None of the reasons is about the quality of the architecture.

### Why it did not die

The line B5000 → B5500 → B6500 → B6700 → B7700 never broke and turned into **Unisys
ClearPath MCP**, which **is still sold**; banks run on it. Possibly the longest-lived
architecture in history, older than the System/360.

The final irony: today it runs **on an emulator on top of x86**, that is, on top of the
architecture that defeated it. The machine has outlived its own silicon.

## The thesis of the episode

The weak version ("an array with bounds checking") is easily dismissed: ALGOL 60 requires
index checks anyway, many implementations did it in software, and a skeptic will say the hardware has nothing to do with it.

**The strong version: on the B5500 a pointer cannot be manufactured, in principle.**

The flag bit **cannot be written from the ordinary state of the machine**. You cannot declare
a variable, put a number that looks like a descriptor into it, and use it as a
pointer. Pointer arithmetic is not forbidden by a rule; it is **inexpressible**.

The exact parallel: what CHERI introduces as capability tags in memory (unforgeable,
cleared on an arbitrary write) is the same flag bit, more than sixty
years later.

**A careful formulation that cannot be knocked down:** the B5500 was not "secure" in the modern
sense; it had its own trust model, a privileged mode, and the systems language
could do more than application ALGOL. The defensible claim: *on this machine there was no
mode in which the check was turned off, and there was no way to express a raw
pointer from an application program.* That is enough, and it is irrefutable.

## Contents of the demo

**Part 1.** Going past the end of an array → the machine stops the program in hardware.
**Part 2 (more important).** An attempt to forge a descriptor → does not get through at all.
The first impresses, the second proves.

**The control experiment on x86 is not a segfault.** The reader will write off a crash as "the protection
worked". What is needed is **silent corruption**: a write past the bound lands in the neighboring variable,
the computation continues, the program prints a **plausible wrong answer**. No sanitizer,
standard optimization, the way production builds are made. A wrong answer is incomparably more
convincing than a crash.

**A third machine: CHERI** via an emulator with CheriBSD: the same C program, a hardware fault
on capability bounds. More expensive (a day or two for the environment), but it closes the thesis: 1961 → today →
1961 again on a new turn of the spiral. The minimal version also works with two machines.

## Structure of the text

1. The control experiment on a modern machine: a short C program, a standard build, a plausible wrong answer. The reader recognizes their everyday life.
2. The same task on a 1961 machine: the machine refuses to execute. No flags, no sanitizers.
3. The mechanism: the descriptor, the length inside it, hardware indexing, the unforgeable flag, the absence of an assembler. Part 2 of the demo goes here.
4. Why the line lost, honestly: not because it was worse, but because the general-purpose chip was cheaper and checks cost cycles.
5. CHERI, MTE, PAC, regulatory pressure around memory safety. The industry spent sixty years arriving at what already existed.

**The spine of the article:** WebAssembly is a stack machine where memory is addressed through a
bounds-checked construct and a raw pointer into host memory is inexpressible.
The 2017 answer structurally looks like the 1961 answer.

## What to clarify before writing

1. **The exact syntax of the control cards** for "compile and execute". Sources: the project wiki, Kimpel's blog (a post about preparing the ALGOL compiler sources), the retro-b5500 Google group.
2. **The exact wording of the fault** that the MCP prints: it will go in as a screenshot and into the headline.
3. **Whether the reader can be spared the cold start** (a prefilled IndexedDB / saved state). Remember: Safari clears storage after 7 days → coming up from the image must always work.
4. Whether the ALGOL compiler will accept the program in the form we write it, and whether the diagnostics are readable.

## Ethics

The emulator is years of work by Paul Kimpel, and the project has a live community in its Google group.
When the material is ready, write to them, both as thanks and because the people who restored the
machine will offer corrections. **Only with the user's consent and not on behalf of the assistant.**

## Further reading

The B5500 reference manual on bitsavers (descriptors and the word format). Elliott
Organick's book on the later machines of the line. Barton's early-sixties paper on a new approach to
the functional design of a digital computer.
