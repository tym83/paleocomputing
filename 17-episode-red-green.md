[Русская версия](17-episode-red-green.ru.md)

# Episode: the two Adas, RED and GREEN

Status: working. In May 1979 the US Department of Defense chose GREEN (CII-
Honeywell-Bull, Jean Ichbiah) over RED (Intermetrics) as its common language,
and GREEN was renamed Ada. RED had a working translator that the contract did
not let anyone count, and it disappeared. This episode rebuilds both
languages from their 1979 documents. Each gets a compiler written in itself
that reaches a fixed point. On RED there is also a NonStop-style kernel and
the Kubernetes control loop, with the control plane run as a Tandem process
pair. There are eleven labs and a comparison with Ada 83. The code is in
[`impl/ada-colors/`](impl/ada-colors/); the research notes are in
[`impl/ada-colors/notes/`](impl/ada-colors/notes/).

## Sources

The RED Reference Manual (8 March 1979, Nestor and Van Deusen) is in two
places. One is the HTML transcription by Mary Van Deusen, one of its two
authors, at iment.com. The other is DTIC AD-A219453, "approved for public
release" since 1990. The RED Rationale is at iment.com; its Appendix B holds
the ten DoD contract test problems. Episode 08 had already found these.

Two GREEN documents were found on archive.org's DTIC mirror this time and
were not known before:

| DTIC | Document | Date |
|---|---|---|
| ADA071761 | *Preliminary Ada Reference Manual*, with the Duncan letter of 14 May 1979 announcing the choice | May 1979 |
| ADA073662 | *Rationale for the Design of the GREEN Programming Language* | 15 Mar 1979 |
| ADA070753 | *The Green Language: An Informal Introduction* | Apr 1979 |
| ADA073714 | *The Green Language: A Formal Definition* | Apr 1979 |
| ADA070752 | *Sample Problems ... GREEN Solutions*: the same ten contract problems | Apr 1979 |
| ADA131511 | Ada 83 (ANSI/MIL-STD-1815A), for comparison | 1983 |

The working notes are:

- [`notes/red-grammar.md`](impl/ada-colors/notes/red-grammar.md): all 83 syntax diagrams read from the page images, and 105 examples.
- [`notes/green-digest.md`](impl/ada-colors/notes/green-digest.md): GREEN 1979 syntax, semantics, and a cited table of every difference from Ada 83.
- [`notes/history.md`](impl/ada-colors/notes/history.md): the competition, people and influence. Every claim there has a source, and each is marked verified or not.
- [`problems/README.md`](impl/ada-colors/problems/README.md): both teams' solutions to all ten contract problems side by side, with a feature matrix. GREEN's solutions are about twice as long, 1660 against 815 non-comment lines.

Not found: the Blue and Yellow designs. DTIC ADB950587 (4,575 pages, phase 1)
reportedly contains all four, but it is reachable only from a browser. The
RED translator itself was not found either.

## One runtime, two languages

Both compilers translate to C and link
[`rt/paleo.c`](impl/ada-colors/rt/paleo.c). That file holds the strings,
exceptions on setjmp/longjmp, checked integer arithmetic, text I/O, RED
mailboxes and data locks, GREEN rendezvous, and the scheduler.

Every task is a thread, but a baton lets exactly one run at a time. That makes
the RED rules hold exactly: the highest priority runs, FIFO within a priority,
and a newly eligible higher-priority task preempts. Time is virtual. When
every task is blocked, the clock jumps to the next wake-up. When nothing can
ever wake up, the runtime reports a deadlock instead of hanging. Every run of
every program here prints the same thing, so expected outputs can be checked
in.

## RED: a compiler that grew itself

The first step is [`red/boot/redboot.py`](impl/ada-colors/red/boot/redboot.py).
It is about 2,250 lines of Python together with its parser, and it translates
only the part of RED that the real compiler is written in.

The real compiler, [`red/redc/`](impl/ada-colors/red/redc/), is about 5,000
lines of RED. Version 1 was a port of the bootstrap. Built by the bootstrap,
it translated itself, and that output translated itself to the identical C
file. That was the fixed point.

From then on, `red/seed/redc.c` (the C that the last redc made of itself) is
the only thing needed to build redc. Each new feature was added to redc
*without* being used, built by the previous seed, checked for a fixed point,
and only then used in redc's own source. The order was:

1. capsules, EXPORTS/EXPOSE, several translation units, nested subprograms
   with static links, and **enforced IMPORTS**;
2. multitasking: TASK, CREATE ... NAMED, ACT, mailboxes, WAIT, REGION and
   DATA_LOCK, priorities, EXTERMINATE, DELAY, TIME;
3. overloading, including operators; parameterised types whose parameters are
   attributes (`vector(n)`, `v.n`); two-dimensional arrays; FLOAT; sets;
   constructors; slice assignment;
4. generics with **implicit instantiation**. There is no instantiation
   statement: an invocation supplies the replacement elements, from `[..]` or
   from the types of the actual parameters, and the translator makes or
   reuses the instance. NEEDS lists are accepted.

`make` rebuilds redc twice from the seed and compares the two C files.
`make genesis` replays the very first step from the Python bootstrap. Both run
in CI ([`.github/workflows/ada-colors.yml`](.github/workflows/ada-colors.yml)).

What is not implemented: unions, user-defined assignment and the other forms
of chapter 13, NEW capsules with parameters, GOTO, and the low-level layer of
chapter 14 (latches, user-defined schedulers, interrupts). REP and LOCATION
are not parsed either.

### What RED's rules did to a compiler written in RED

Writing 5,000 lines of RED is a test of the language. These are the places
where it pushed back, all of them by its own rules:

- **IMPORTS is a real constraint.** Once redc enforced it, its own source had
  to declare every outer variable each subprogram touches. The check then
  caught mistakes in the NonStop kernel and in the Kubernetes code.
- **Names are case-insensitive and the predefined ones are not reserved.** A
  global variable `pos` hid the built-in `POS`. A task parameter `me` hid `ME`.
  A record field `len` collided with the `.LEN` attribute. Each time the
  compiler did what the scoping rules say.
- **Reserved words.** `TO`, `CAPSULE`, `EXPOSE`, `IMPORTS`, `READONLY` and
  `SUBTYPE` are reserved, so they cannot be identifiers. The parser function
  `subtype` had to be renamed.
- **There is no empty statement.** An empty body is written by putting
  nothing, so `WHEN DELAY(20) => ;` is a syntax error. The 1979 solution of
  problem 8 has the same slip.
- **Strings have fixed length per object** (`STRING[ASCII](n)`).
  Variable-length text means an indirect type `PTR (n : INT) STRING[ASCII](n)`
  with ALLOC, which is exactly what the manual's symbol-table example does.
- **An exported type is opaque.** Exporting a type does not export selection
  of its components or `:=` (RM 8.2). RED gets abstract types from what a
  capsule exports, with no `private` section.

### The 1979 sample runs

The RED Rationale prints a matrix-vector package (Appendix C.1, by Abrahams,
Hubbard, Knobe, Levine and Smith). It now translates and runs: matrix times
vector, cross product, determinant, inverse through `** (-1)`.
[`problems/run/C1-matrix-vector.sed`](impl/ada-colors/problems/run/C1-matrix-vector.sed)
lists every change it needed. Each one is an error that any RED translator
rejects, which suggests the sample was typed rather than compiled:

- `ASSERT b.n : c.m`, with `:` printed for `=`, four times;
- the capsule opens as `matrix_vector_package` and closes as
  `vector_matrix_package`;
- `trans`, `upperTriangle` and `backSubstitute` use `m` and `n`, which are not
  declared there;
- `a(p.r)` and `x(k.p)`, with `.` printed for `,`;
- `CONST k : integer`.

Logic slips that a translator accepts were kept:

- `IF i = j` should be `IF i /= j`, so the pivot swap never happens;
- `determ` ignores the sign of row swaps and multiplies the diagonal inside the
  elimination loop;
- `realmultiply` loops to the outer `k` instead of its own parameter `i`.

## PAIRS: a NonStop kernel in RED

[`os/pairs.red`](impl/ada-colors/os/pairs.red) is about 280 lines. It is backlog
item 15. RED's mailboxes are the Guardian message system: processes share
nothing and talk only by messages.

The service `$BANK` runs as a process pair on two processors. The primary
checkpoints every change to the backup **before** it replies. The backup
watches the heartbeat with a timed WAIT and, when it stops, takes the name and
starts a new backup on a spare processor. Clients number their requests and
retry on a timeout.

The run kills the primary at the worst moment, after the checkpoint and before
the reply. The retry is answered from the checkpoint. A final audit then
replays what the clients were told against the books, and they agree. Swap the
two SENDs, replying before checkpointing, and the audit finds a confirmed
transfer missing from the books while the total balance is still right.

## Kubernetes on RED patterns

[`kube/kube.red`](impl/ada-colors/kube/kube.red) maps each Kubernetes part onto
RED:

- the API server is a task that alone owns the store;
- a watch is a mailbox;
- each controller keeps an informer cache and reconciles on an event or on a
  timed resync (WAIT with DELAY);
- writes carry the resource version they were based on, and a stale write is
  refused (the run shows one);
- pod creation uses expectations;
- kubelets renew leases. A node that stops renewing goes NotReady and its pods
  move.

The run creates a deployment, scales it, kills a node and rolls out a new
version.

[`kube/kube_ha.red`](impl/ada-colors/kube/kube_ha.red) is the episode's crazy
idea: the **control plane as a Tandem process pair**, with no replicated store
and no consensus. The API server's primary checkpoints each mutation to the
backup. In the run it dies in the middle of a rollout, right after storing the
first new pod. The writes still in its mailbox are lost and nobody is told.
The cluster recovers anyway, through three mechanisms:

- level-triggered controllers;
- expectations that expire on a quiet resync;
- a relist from the new primary.

On the way, the HA run reproduced two real Kubernetes failure modes before
they were fixed in the same way as upstream:

1. After the control plane failover, every node looked NotReady at once and
   everything was evicted. The fix is the full-disruption guard: if all nodes
   go silent together, it was the control plane, so evict nothing.
2. Then nodes were evicted one by one, for two reasons. Freshness was judged
   by the time written in the lease instead of by the time the controller
   **saw** it change, which is what the node lifecycle controller does. And
   the controller decided before draining the events already queued.

## Labs and comparisons

- [`labs/`](impl/ada-colors/labs/README.md): eleven exercises (look, change,
  break, build) and `labs/check.sh`, which says whether a task is done.
- [`ada83/`](impl/ada-colors/ada83/): the same three situations in Ada 83,
  built by GNAT `-gnat83` in CI. They are the bounded buffer as a server task,
  the timed entry call that GREEN 1979 did not have, and the lock as a task
  that an exception does not release.

## GREEN

*In progress: the compiler written in GREEN, its fixed point, tasking with
`initiate`, `select` and rendezvous, and the 1979 INTRO examples. This section
will be filled in when it lands.*

## Next

- The Blue and Yellow designs, from DTIC ADB950587, downloaded by hand.
- The 1979 contract problems running on both compilers side by side, with
  simulated interrupts for problems 1, 2 and 4.
- RED in the browser: redc is plain C, so the open question is a C back end
  in WebAssembly or an interpreter.
- The Rational R1000 emulator, to measure the cost of a rendezvous on the
  real Ada machine.
