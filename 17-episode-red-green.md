[Русская версия](17-episode-red-green.ru.md)

# Episode: the two Adas, RED and GREEN

Status: working. In May 1979 the US Department of Defense chose GREEN (CII-
Honeywell-Bull, Jean Ichbiah) over RED (Intermetrics) as its common language,
and GREEN was renamed Ada. RED had a working translator that the contract did
not let anyone count, and it disappeared. This episode rebuilds both
languages from their 1979 documents. Each gets a compiler written in itself
that reaches a fixed point. On RED there is also a NonStop-style kernel and
the Kubernetes control loop, with the control plane run as a Tandem process
pair. There are twelve labs and a comparison with Ada 83. The code is in
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

- **IMPORTS is a real constraint.** Once redc enforced it, every subprogram
  in its own source had to declare what it imports. The small lexer and table
  functions have real lists; the parser and the generator, which touch almost
  all global state, say `IMPORTS ALL` (101 of 137). In the NonStop kernel and
  the Kubernetes code, where the lists are short and real, the check caught
  two mistakes.
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

## THE: Dijkstra's layers in RED

[`os/the.red`](impl/ada-colors/os/the.red) rebuilds the THE multiprogramming
system (Dijkstra, CACM 1968, EWD 196). It is backlog item 5, done in RED
instead of GNAT. The five levels of the paper are RED tasks, and a process
only calls on levels below it: semaphores (level 0) are mailboxes of tokens,
because THE signals between processes and a REGION only brackets one; the
segment controller (level 1) keeps eight segments in three core pages and
dumps to the free drum page with the least latency; the message interpreter
(level 2) shares one console and reads its vocabulary from a segment; three
tape readers and a line printer (level 3) buffer through segments and ask the
operator for paper; three user programs (level 4) and an operator (level 5)
complete the society. The run finishes with every program's result printed.
Lab 12 lets the segment controller report its dumps on the console, a level-1
process calling level 2, and the runtime reports a deadlock at the first dump:
the interpreter needs the segment controller to read its vocabulary, which is
the reason the paper gives for the order of the two levels.

[`os/the_green.grn`](impl/ada-colors/os/the_green.grn) is THE's output path in
GREEN. With neither semaphores nor mailboxes, each semaphore is a server task
that accepts P only while its count is positive, and nine printed lines cost
54 rendezvous.

[`os/the_kube.red`](impl/ada-colors/os/the_kube.red) and
[`os/the_kube_green.grn`](impl/ada-colors/os/the_kube_green.grn) put the
Kubernetes control loop on top of THE as level-4 user programs that use only
P, V, segments, the console and the clock. There is no API server: the store
is segments under one semaphore, a watch is a wake-up semaphore saturating at
one, and resync, heartbeats and lease checks come from a clock process,
because P has no timeout. The first version cut a node's power with
EXTERMINATE while its kubelet held the store's semaphore, and the whole
control plane stopped for good. In GREEN the semaphores are server tasks
again, and the same run costs 1168 rendezvous.

Three contrasts in [`os/contrast/`](impl/ada-colors/os/contrast/), each
written in RED, in GREEN and on THE's semaphores:

| Problem | RED | GREEN (1979) | THE semaphores |
|---|---|---|---|
| Timeout: the producer goes silent | `WAIT` with `DELAY`: the waiter gives up | no timed entry call: the buffer server answers "nothing" for the caller | `P` has no timeout: a watchdog on the clock puts a sentinel item in the buffer |
| Failure while holding a lock | a `REGION` releases its lock on an exception | a lock task stays seized; the other worker waits for ever | the `V` never comes; the other worker waits for ever |
| Readers and a writer | an exclusive `REGION`: everyone takes turns, 40 ms | the server owns the data and hands out copies; the work overlaps, 13 ms | Courtois et al. 1971: readers overlap, and a late reader overtakes the waiting writer |

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

- [`labs/`](impl/ada-colors/labs/README.md): twelve exercises (look, change,
  break, build) and `labs/check.sh`, which says whether a task is done.
- [`problems/run/`](impl/ada-colors/problems/run/): all twenty 1979 contract
  solutions run, ten RED and ten GREEN, plus RED's C.1. Each has a sed file
  with the changes a translator forced, one commented line per change, and an
  expected output; `problems/run/run.sh` checks them all. Interrupts, devices
  and the network are device tasks on the virtual clock; interrupt entries and
  mailboxes at fixed addresses become ordinary ones. No solution translated as
  printed. RED's errors are mostly careless (undeclared names, a missing
  `OCTAL`, a parameter named after the reserved word `REP`), with two design
  errors a translator would pass: in problem 4 the collision test compares
  pointers that are never equal, and in problem 5 every procedure changes a
  copy, so no reservation reaches the database. GREEN breaks its own rules more
  often: four solutions initiate a task, `exit` or `return` inside an `accept`
  body (RM79 9.5, 5.7, 5.3); problem 3 writes one byte further on than it
  reads; in problem 5 `FREE` hangs; problem 8 loses a request whose deadline
  is earlier than the head of its list. Problem 6 needs a fair WAIT: with the
  first ready alternative always taken, the operator's DONE starves. RED leaves
  the choice undefined, and the runtime now takes ready alternatives in turn.
- [`impl/deploy/Containerfile.ada-colors-run`](impl/deploy/Containerfile.ada-colors-run):
  RED and GREEN for the `langpack` application of the Cozystack catalog. A
  `.red` or `.grn` source runs as a one-off job; the image build replays both
  bootstraps and refuses to finish without the fixed points.
- [`r1000/`](impl/ada-colors/r1000/README.md): the cost of a rendezvous on
  the Rational R1000, measured in the Rational Environment on DataMuseum.dk's
  emulator by the machine's microcycle count, in CI. A procedure call took
  2.75 µs and a rendezvous 55 µs, about twenty calls; with GNAT on a modern
  runner a rendezvous costs ten thousand calls (13.5 µs against 1.25 ns).
- [`ada83/`](impl/ada-colors/ada83/): the same three situations in Ada 83,
  built by GNAT `-gnat83` in CI. They are the bounded buffer as a server task,
  the timed entry call that GREEN 1979 did not have, and the lock as a task
  that an exception does not release.

## GREEN

[`green/`](impl/ada-colors/green/) follows the same path as RED: a Python
bootstrap that reuses the RED bootstrap's code generator, then greenc. greenc
is a GREEN compiler written in GREEN, about 6,500 lines. It reached its fixed
point, and every later version was built by the one before. `make -C green
fixpoint test genesis` checks all of it.

greenc follows the Preliminary Ada Reference Manual of May 1979, cited as
RM79. It supports:

- packages, with private types whose components are hidden outside;
- `restricted(...)` visibility lists and `use`;
- overloading by parameter types, modes and names, and by result type;
- operator designators, with `/=` following `=`;
- the fifteen RM79 exceptions;
- the purity rules of RM79 6.5;
- tasks that start only on `initiate` (a second `initiate` of an active task
  raises INITIATE_ERROR, and a terminated task can be started again);
- rendezvous, and `select` with guards, `delay` and `else` (SELECT_ERROR when
  every alternative is closed);
- exceptions from an accept body reaching both partners;
- `raise T.FAILURE`, and `abort`;
- task and entry families;
- generics instantiated with `is new`.

The INTRO 1979 examples 1.1–1.4, 6.3 and 6.5 run in
[`green/tests/corpus/`](impl/ada-colors/green/tests/corpus/). The findings
are in [`notes/green-findings.md`](impl/ada-colors/notes/green-findings.md):

- **The purity rules shape the compiler.** A function may not assign non-local
  objects, allocate or do I/O. A value-returning procedure may be called only
  where the globals it changes are not in scope. So a recursive-descent parser
  over a global token position can use neither: greenc's parser is procedures
  with `out` parameters. RED made the opposite choice: an impure function is
  marked ABNORMAL and may do anything.
- Two errors in the 1979 texts are rejected by greenc: `NET_RISE > 0` compares
  a REAL with an integer literal, and `8#8060` has the digit 8 in base 8.
- **RM79 output puts a space before every number** that is not at column 1, so
  the 1979 change-counting example prints `CHANGE IS $ 2. 53`.

What is not implemented: distinct numeric types (every integer type is
INTEGER, every real type FLOAT), multi-dimensional arrays, record default
values, visible procedures of tasks, `separate`, renaming, interrupts, and
entry families inside task families.

### Kubernetes in GREEN

[`kube/kube_green.grn`](impl/ada-colors/kube/kube_green.grn) is the control loop
of `kube.red` in GREEN, 517 lines against 522. With only the rendezvous, the
design has to change:

- A watch stream is a family of inbox tasks.
- GREEN 1979 has no timed entry call, so the resync tick is made inside the
  inbox by a delay alternative.
- A bounded inbox can lock the two sides together: the API server waits for
  room in a controller's inbox while that controller waits in a call to the API
  server. With inboxes of 4 the cluster stops. The other inboxes keep ticking,
  so the runtime cannot even report a deadlock.

Writing it found a runtime bug. A task aborted while queued at an entry stayed
in the queue, and the server later woke a finished task. RM79 9.10 cancels
such a call, and now so does the runtime.

## In the browser

[https://tym83.github.io/paleocomputing/red/](https://tym83.github.io/paleocomputing/red/) runs RED and GREEN with no server. redc and greenc are built
to WebAssembly from their seeds; the C they produce is compiled by clang and
lld compiled to WebAssembly (`@yowasp/clang`, loaded from jsDelivr) for
`wasm32-wasip1-threads`, and linked with `rt/paleo.c` and wasi-libc from
wasi-sdk. Every task is a thread, every thread a worker on one shared memory,
so the runtime runs unchanged: the same baton, the same virtual clock, and the
same output as a native run. The other paths were weaker: a JavaScript back
end would mean a third code generator in both compilers, and switching stacks
in one thread needs either JSPI, which only Chrome ships, or Asyncify, which
does not mix with the wasm exceptions that carry `setjmp`/`longjmp`. Shared
memory needs cross-origin isolation; GitHub Pages cannot send the headers, so
`coi-serviceworker` adds them. [`impl/ada-colors/web/build.mjs`](impl/ada-colors/web/build.mjs)
rebuilds `site/red/` (the compilers, the runtime object, the libc subset, the
examples); CI checks that the rebuild matches the repository and runs every
example in headless Chrome against the native output and the `.out` files.
After `make seed` the page must be rebuilt too: `cd impl/ada-colors/web && npm ci && node build.mjs`.

## Next

- The Blue and Yellow designs, from DTIC ADB950587, downloaded by hand.
  DTIC was down for maintenance on 12 October 2026.
