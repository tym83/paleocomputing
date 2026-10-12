# DoD-1 contract test problems: RED vs GREEN originals

In 1978–79 the DoD High Order Language program gave the finalist teams the same set of
ten sample ("contract test") problems. This directory holds both finalists' 1979
solutions, transcribed:

- **RED** (Intermetrics): *RED Rationale*, March 1979, Appendix B "Contract Test Problems".
  The code is printed as page images. All 15 images were transcribed by eye from
  `iment.com/maida/computer/redrat/images/pb-*.jpg`.
- **GREEN** (CII-Honeywell-Bull / Honeywell SRC): *Set of Sample Problems for DOD High Order
  Language Program. GREEN Solutions*, April 1979, DTIC ADA070752. The code was transcribed
  from page images of the PDF, rendered at 150 dpi. The archive OCR text is too noisy to use directly.

Both sets contain the same ten problems with the same DoD wording, so **all ten are common**.
RED also prints one extra program in Appendix C (the matrix-vector package), included
as `red/C1-matrix-vector.red`.

## Running them

All twenty solutions and C1 run: `problems/run/run.sh` makes each original
translatable with its sed file, adds what the problem assumes to be present
(`*-units`), drives it (`*-main`) and compares the output with the expected
one. Every line of a sed file is a change a translator forced, with the reason
next to it, so the sed files list the errors of the 1979 texts. Interrupts,
devices and the network are tasks on the virtual clock. The originals are not
in git; get them as described below.

## Layout

```
original/red/NN-slug.red     RED solutions;   header comments use '%'
original/green/NN-slug.grn   GREEN solutions; header comments use '--'
```

Each file starts with a comment header. It gives the source, a condensed problem
statement and the team's own design notes. The code follows a separator line.

Transcription rules:
- Only obvious scan noise was fixed. Spots that remain uncertain are marked `% OCR?` or `-- OCR?`.
- Typos and inconsistencies in the 1979 originals are **kept as printed** and listed in
  each file's header. Examples: misspelled identifiers, undeclared names, and RED P3's
  `'writing` versus the `'being_written` enum.
- Neither set was ever compiled by a production compiler. RED says only that its
  solutions passed the syntax check of the RED Test Translator. Expect semantic slips on both sides.

## Problems and line counts

"Code" counts the lines after the header separator. "NCL" counts non-blank,
non-comment lines in the same range.

| # | Problem | Task in one line | RED file | RED code / NCL | GREEN file | GREEN code / NCL | Both |
|---|---------|------------------|----------|---------------:|------------|-----------------:|:----:|
| 1 | Polled asynchronous interrupt | `READ(device)` returns a character from 10 keyboards sharing a hard-wired 128-byte ring buffer at 500(8). The handler polls, and an interrupt at 440(8) fires only when the buffer is about to overflow | `01-polled-interrupt.red` | 141 / 79 | `01-polled-interrupt.grn` | 100 / 84 | yes |
| 2 | Priority interrupt system | Kernel for 4 interrupt priority levels with vectors at 20–34(8). Higher levels preempt lower ones, interrupts stay enabled as much as possible, and handler bodies are replaceable | `02-priority-interrupt.red` | 71 / 45 | `02-priority-interrupt.grn` | 93 / 72 | yes |
| 3 | Small file-handling package | CREATE / WRITE / ENDWRITE / READ(record) / DESTROY of sequential disk files, with exceptions on misuse, no deadlock, and a place for a disk scheduler | `03-file-handling.red` | 273 / 138 | `03-file-handling.grn` | 520 / 429 | yes |
| 4 | Dynamic pictures | Grid on a display with two joystick-driven objects and START/RESET interrupt buttons. On collision the objects blink, then reset | `04-dynamic-pictures.red` | 248 / 125 | `04-dynamic-pictures.grn` | 167 / 139 | yes |
| 5 | Database protection module | Exclusive or shared reservation of data-sets, with configurable priority, sharing limit, access rights, preemption and wait-or-raise behaviour | `05-database-protection.red` | 266 / 162 | `05-database-protection.grn` | 380 / 312 | yes |
| 6 | Process control | Processes a (input) → b (processing) → c (output) over a double buffer, with d as operator monitor. a and b can be stopped without losing data | `06-process-control.red` | 128 / 63 | `06-process-control.grn` | 110 / 94 | yes |
| 7 | Adaptive routing | Network node keeping distance, delay and routing tables, updated periodically from neighbour table exchanges and on link break or establish | `07-adaptive-routing.red` | 166 / 68 | `07-adaptive-routing.grn` | 149 / 124 | yes |
| 8 | General-purpose real-time scheduler | `EXECUTE process, time [, interval]`, plus self-scheduling, priority order on ties, disconnect at any time, and a generic sort | `08-realtime-scheduler.red` | 86 / 44 | `08-realtime-scheduler.grn` | 308 / 234 | yes |
| 9 | Distributed parallel output | Send a 5-packet message over up to 10 asynchronous links (link processes L0..L9) to 5 addressees, then purge it when all transmissions are acknowledged | `09-distributed-output.red` | 69 / 42 | `09-distributed-output.grn` | 92 / 76 | yes |
| 10 | Unpacking and conversion | Unpack the classification, precedence and destination of a bit-packed message header into a queue entry from `GET-A-QUEUE` | `10-unpacking-conversion.red` | 86 / 49 | `10-unpacking-conversion.grn` | 111 / 96 | yes |
| C1 | Matrix-vector package (RED Appendix C, not a contract problem) | Library capsule of matrix and vector arithmetic with overloaded operators | `C1-matrix-vector.red` | 372 / — | — | — | RED only |
| | **Total, P1–P10** | | | **1534 / 815** | | **2030 / 1660** | |

By non-comment lines GREEN is about twice as large. RED's listings are heavily annotated:
roughly half of RED's code lines are `%` comments. Most of GREEN's extra bulk is in
P3, P5 and P8, where GREEN builds server tasks for things RED delegates to
built-in features: REGION locks, mailboxes and the scheduler's `DELAY_UNTIL`.

## Overall contrasts

- **Concurrency model.**
  - RED uses tasks (`TASK`, `CREATE ... NAMED act`) in two ways:
    - asynchronous, buffered message passing (`MAILBOX[T](n)`, `SEND`/`RECEIVE`/`COND_SEND`, multi-way `WAIT`);
    - shared variables guarded by `DATA_LOCK` + `REGION`.
  - GREEN only has rendezvous: `entry`/`accept`/`select`, with guards, `delay` and `else`.
    Wherever RED takes a lock, GREEN writes a server task.
- **Interrupts.**
  - RED binds a mailbox to an interrupt (`LOCATION (INTERRUPT n)`), so an interrupt arrives as a message.
  - GREEN binds an entry to an interrupt (`for E use at ...`), so an interrupt arrives as an entry call.
- **Encapsulation.**
  - RED uses `CAPSULE ... EXPORTS` lists and imports into routines with `IMPORTS`/`EXPOSE`.
  - GREEN uses package specs and bodies. A **task spec** can also export procedures, functions,
    types, exceptions and even variables (P1, P3, P5, P8), so a task works as a module.
    GREEN adds `restricted (unit-list)` visibility lists (P3, P5, P7, P10) and restricted private types (P3).
- **Exceptions.**
  - RED uses them in 2 of 10 problems: P3 `RAISE`, and P5 `GUARD ... RERAISE`.
  - GREEN uses them in 3: P3, P5 and P8. They are raised inside accept bodies so they propagate
    to the caller, and P5 raises `USER_PROCESS(X).FAILURE` into another task.
- **Generics.**
  - RED uses them in 2 problems, with a TASK parameter in P8 and a PROC parameter in P9.
    Instantiation is written explicitly as `name [actual]`.
  - GREEN uses them in 3 problems, with procedure parameters in P2, a type parameter in P3 and
    a value parameter `S: STRING` in P8. Generic parameters use GREEN's 1979 form `generic (...)`.
- **Low-level I/O.**
  - RED uses `REP` clauses and `LOCATION` addresses, and has a built-in `LOW_IO(device, cmd, data)` (P3, P4).
  - GREEN uses record and enumeration representation clauses and address clauses, but has no I/O
    primitive. Device access is written as variables at addresses, or left to `separate` / library units.

## Per-problem observations

### P1 — Polled asynchronous interrupt
- **Ring buffer.** RED maps the hardware ring buffer and its head and tail pointers with
  `REP` and `LOCATION (OCTAL ("500"))` (`01-polled-interrupt.red:45-49`). GREEN does the same with
  `for ... use at 8#500` and a record representation clause (`01-polled-interrupt.grn:~100-107`).
- **Per-keyboard queues.**
  - RED: each keyboard's software queue is a `MAILBOX[CHARACTER](80)`, filled with `COND_SEND`
    (`.red:97`).
  - GREEN: each keyboard's queue is a member of the task family `LOGICAL_KEYBOARD(0..9)`, a
    one-character buffer task with `READ` and `DEPOSIT` entries (`.grn:50-82`).
- **Overflow interrupt.**
  - RED sends it to a mailbox at `LOCATION (INTERRUPT 440)`, served by an
    `interrupt_handler` task (`.red:122`).
  - GREEN binds it to entry `INTERRUPT` (`for INTERRUPT use at 8#440`, `.grn:108`). The entry
    is one alternative of the `POLLING` task's select.
- **Polling.**
  - RED's `read` does a multi-way `WAIT` on `RECEIVE` or `DELAY(time_out)` (`.red:148-154`).
  - GREEN's `POLLING` loop selects between `delay POLLING_PERIOD`, `accept INTERRUPT`
    and `delay 0` used as a "guarded else" (`.grn:112-129`).
- **Mutual exclusion.** RED guards the tail pointer with `REGION d` (`.red:79`). GREEN needs no
  lock, because only the `POLLING` task touches the buffer.
- Neither solution uses exceptions or generics.

### P2 — Priority interrupt system
- **Overall design.**
  - RED delegates preemption to the scheduler. It has four tasks, each `SET_PRIORITY(ME, 255..252)`,
    each blocked on its own interrupt mailbox `LOCATION (INTERRUPT 16/20/24/28)`
    (`02-priority-interrupt.red:29-32, 39-75`).
  - GREEN programs the priority logic explicitly. A `DISPATCH` task has interrupt
    entries `INT_0..INT_3` (`.grn:70-73`) and keeps a `PENDING` array.
- **GREEN's dispatcher.** A 9-way guarded select compares array slices with aggregates, e.g.
  `PENDING(0..2) = (FALSE,FALSE,TRUE)`, to decide which handler to release (`.grn:102-135`).
- **Handlers.**
  - GREEN: the handlers are a task family `HANDLER(0..3)`, each priority computed from
    `SYSTEM'MAX_PRIORITY` and `'INDEX` (`.grn:81`). They talk to `DISPATCH` through an entry
    family `SERVE(LEVEL)` and an entry `RTI`.
  - RED: the handler bodies are inline code. To replace one you edit the source.
  - GREEN makes the bodies replaceable at instantiation time, as four generic procedure
    parameters (`generic (procedure ROUT0; ...)`, `.grn:50-54`). The guideline asked for
    runtime replacement; neither solution provides it.
- **Size.** RED: 45 non-comment lines. GREEN: 72.

### P3 — Small file-handling package
- **Directory and locking.**
  - RED: a single `CAPSULE directory` holds the directory as an in-core linked list of `PTR`
    records, protected by a `dir_busy` `DATA_LOCK`, with a second lock serialising the disk
    (`03-file-handling.red`).
  - GREEN builds three layers:
    1. a typed front end, `restricted(FILE_MANAGER) generic (type ELEM) package FILE_IO`
       (`.grn:40-98`);
    2. a `FILE_MANAGER` task;
    3. inside it, a `DIRECTORY` package, a task family `FILE(1..100)` (one task per open
       file) and a `DISK_HANDLER` task.
- **Typed records.** Only GREEN gives typed records. It uses a generic `ELEM`, converted to
  untyped transfers with `'ADDRESS`/`'SIZE`. RED's `write`/`read` move a fixed
  record type.
- **Writer identity.**
  - RED stores the writer's task activation (`ME`) in the directory entry and checks
    `f.writer /= ME` (`.red:194`).
  - GREEN issues a `restricted type KEY_TYPE is private` key to each generic instance
    (`.grn:103`).
- **Exceptions.**
  - RED raises named exceptions directly, often inside REGIONs (`.red:110-194`).
  - GREEN declares 9 exceptions in the task spec and re-exports them through `renames`. Errors
    are raised inside accept bodies so they reach the caller. There are `when others => null`
    handlers to keep servers alive, and a `TASKING_ERROR` handler.
- **Disk access.**
  - RED drives the disk with `LOW_IO` on a REP-packed command record and waits on a disk
    interrupt mailbox at `OCTAL("32")` (`.red:93, 107`).
  - GREEN's disk I/O is abstract (`DISK_HANDLER.READ/WRITE`), and scheduling is "not given".
- **Size.** This is the largest pair. GREEN: 429 NCL in four separate subunits. RED: 138.

### P4 — Dynamic pictures
- **Object motion.**
  - RED runs one task per moving object (`move_object(o)`), created at a lower priority
    (`04-dynamic-pictures.red:215-216`), and stops objects by `EXTERMINATE`-ing their tasks (`.red:115`).
  - GREEN has a single `DISPLAY` task with a periodic `select delay BASIC_PERIOD; ... or accept RESET`
    loop (`.grn:156-202`). It moves both objects itself.
- **Joysticks.**
  - RED reads the joystick registers with `LOW_IO` into a REP-packed velocity record placed by
    `LOCATION` (`.red:69, 105`).
  - GREEN's joysticks are a task family `JOYSTICK(SQUARE..CIRCLE)`. Its `READ` entry reads
    registers placed by an address clause and a record representation clause (`.grn:~65-111`).
- **Crash detection.**
  - RED reports a crash by `SEND` to `crash_mailbox` (`.red:140-147`). The main procedure does a
    3-way `WAIT` on the reset, start and crash mailboxes (`.red:247-268`).
  - GREEN checks for a crash inline in the display loop.
- **Buttons.** Both bind START and RESET to interrupts: RED with interrupt mailboxes (`.red:235-236`),
  GREEN with interrupt entries (`.grn:61-62`).
- **Display output.** RED imports `display` and `blink` from outside the capsule. GREEN leaves
  `DRAW_OBJECT` as a `separate` subunit.

### P5 — Database protection module
- **Concurrency.**
  - RED uses no tasks. Every operation is a procedure under one global `d_lock` REGION, and
    callers are identified with `ME` (`05-database-protection.red:157-276`).
  - GREEN gives each data-set a member of the task family `DATA_SET(DS_NAME)`. Inside it are
    entry families indexed by priority (`TEST_EXCLUSIVE(P)`, `WAIT_SHARED(P)`, ...). These are
    served by `for P in reverse ...` loops over guarded selects that test `'COUNT`
    (`.grn:390-417`).
- **Waiting.**
  - RED overloads `exclusive` and `shared`, each in two forms (`.red:157/193, 218/241`).
    The waiting form wraps the raising form in a `GUARD ... WHEN unavailable => DELAY ... ELSE => RERAISE`
    retry loop (`.red:200-208`). This is polling, not queuing.
  - GREEN queues requesters on entries, so there is no busy retry.
- **Preemption.**
  - RED just replaces the current-users list. Preempted users are not notified.
  - GREEN raises an exception **in another task**: `raise USER_PROCESS(X).FAILURE`
    (`.grn:343, 356`). It also sets a flag in that task's exported variable `PREEMPTED_DS`.
- **Generics.** Neither solution uses them, although the guideline invited them. Both chose
  "one general module".
- **I/O.** GREEN needs `restricted(TEXT_IO)` for operator messages. RED does no I/O.

### P6 — Process control
- **Double buffering.**
  - RED models it as messages. Buffer IDs `'b0`/`'b1`/`'done` travel between tasks a and b
    through mailboxes (`06-process-control.red:52-93`).
  - GREEN gives each buffer to a member of the task family `WORKER`, nested inside task A
    (`.grn:73-117`).
- **Result area.** RED copies the whole result area into a message for task c. GREEN keeps it shared.
- **Shutdown.**
  - RED: d sends `'done` to a. a forwards it to b after its last data, and both exit. Nothing is
    killed.
  - GREEN: d accepts an interrupt entry and calls `A.STOP`. The filling worker flushes its
    partial buffer inside the rendezvous, then A `abort`s the worker family (`.grn:117`).
- **Operator console.** RED's console uses `READLN`/`WRITELN`. GREEN's process d is driven by an
  interrupt entry (`.grn:140`).
- Neither solution uses exceptions, although the problem's stated purpose was "interactions
  between parallel processing and exception handling".

### P7 — Adaptive routing
- **Table protection.**
  - RED gives each node a mailbox in `ARRAY NODE OF MAILBOX[MAIL]`. A `send_table` task
    periodically copies the table under `REGION d` and `SEND`s it, and a `receive_table` task relaxes
    received tables under the same REGION (`07-adaptive-routing.red:85-192`).
  - GREEN makes the table a server task `TABLE` with `READ`/`WRITE`/`GET_ROUTE` entries
    (`.grn:108-122`).
- **Periodic update.**
  - RED: `DELAY(delay_time)` after each round, so the period drifts by the work time (`.red:124`).
  - GREEN: `UPDATE_TABLE` computes `delay START_TIME + BASIC_PERIOD - SYSTEM'CLOCK`, a
    drift-free periodic loop (`.grn:137, 186`).
- **Link changes.** Only GREEN handles them, through `ESTABLISH_LINK`/`BREAK_LINK` entries. RED does not
  model link break or establish.
- **Neighbour exchange.** RED does it with mailbox sends. GREEN calls an assumed `LIBRARY` package
  (spec only).
- **Visibility.** GREEN scopes `MAIN` with `restricted(NETWORK_INFO)` (`.grn:68`).

### P8 — General-purpose real-time scheduler
- **Design.**
  - RED writes no scheduler and uses the built-in one:
    - `DELAY_UNTIL(next)` for one-shot and periodic processes (`08-realtime-scheduler.red:43-71`);
    - a `GENERIC t:TASK  TASK execute [t](start, rep, prior, VAR done)` wrapper that sets
      priority, waits, `CREATE`s t, and can cancel it with `TASK_END` (`.red:82-115`).
  - GREEN writes a whole scheduler, `package SCHEDULER`:
    - a `SCHEDULING_TASK` with a doubly-linked delay list in an array;
    - driven by an interrupt entry `TICK` (`.grn:197-199`);
    - an entry family `WAIT(TASK_ID)` used to block and release self-suspending tasks
      (`.grn:102, 133, 296`).
- **Registering a process.**
  - RED: a process is a task type passed to a generic.
  - GREEN: a process registers by instantiating `generic (S: STRING) package TASK_PATTERN`. The
    instance's initialization part calls `SIGN_ON` (`.grn:71, 173`). `EXECUTE` is overloaded with
    default parameters.
- **Generic sort.** Neither solution implements it. RED relies on task priorities; GREEN says
  so in its text (`.grn:57`).
- **Exceptions.** GREEN exports 7 exceptions and raises them inside accepts. RED has none.
- **Size.** This is the widest size gap: 44 vs 234 NCL.

### P9 — Distributed parallel output
- **Per-addressee work.**
  - RED creates one task per addressee, `dist_out1(u)`, kept in an `ARRAY OF ACT`
    (`09-distributed-output.red:82`). Each task picks its link procedure by a `CASE` over `'L0..'L9`
    and instantiates `GENERIC p: PROC  PROC dist_out2 [p]` with it (`.red:46-56`).
  - GREEN uses two task families, `PACKETIZER(1..100)` (one member per message-link pair) and
    `LINK_CONTROLLER(LINK)` (`.grn:66-70`). Members are computed and initiated individually.
- **Completion.**
  - RED: the parent joins by `RECEIVE`-ing 5 completion messages.
  - GREEN: `MESSAGE` counts `ACK`s, then frees the buffers by setting `AVAILABLE` flags (`.grn:122`).
- **Link procedures.** RED passes them as generic parameters. GREEN uses link-controller tasks.
- Neither solution uses exceptions.

### P10 — Unpacking and conversion
- **Packet layout.** Both lean on representation clauses.
  - RED: a discriminated record `packet(packet_length)` with `REP SIZE/ALIGN` bit fields
    and a trailing `ARRAY NOBOUNDS OF (SIZE(8))` (`10-unpacking-conversion.red:40-53`). It also has
    `PRAGMAT SUPPRESS X_INIT` (`.red:82`).
  - GREEN: enumeration representation clauses (`for CLASSIFICATION use`, `.grn:75`) and
    record representation clauses `at N*BYTE range a..b` (`.grn:91, 115`).
- **Program form.**
  - RED: a plain procedure `message_handler` called with a pointer from `get_a_queue`.
  - GREEN: a `restricted(LINE_HANDLER, QUEUE_HANDLER) task PACKET_TO_QUEUE` loop that takes packets from
    one unit and passes queue entries to the other (`.grn:47`).
- **Field conversion.** Both use `CASE` statements to turn the enumeration fields into characters.
- **Literals.** GREEN prints character literals in double quotes (`"T"`). RED writes them as `'T`.

## Feature matrix

This shows what a compiler and runtime must support to run each original as written.
● = used. Line references are in the per-problem notes and in the file headers.

### RED

| Feature | 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 | 10 | C1 |
|---|---|---|---|---|---|---|---|---|---|---|---|
| `CAPSULE ... EXPORTS` | ● | ● | ● | ● | ● | ● | ● | | ● | ● | ● |
| `CAPSULE ... IMPORTS`, routine `IMPORTS` | ● | ● | ● | ● | ● | ● | ● | | ● | | ● |
| `EXPOSE ... FROM` (Configuration: `bytes`, `HOURS`, `MINUTES`) | ● | | ● | ● | ● | | ● | | | ● | ● |
| `ABBREV` subtypes | ● | | ● | | ● | ● | ● | | | | ● |
| Enumeration types / `'lit` literals | | | ● | ● | ● | ● | | | ● | ● | |
| Records | ● | | ● | ● | ● | | ● | | | ● | |
| Parameterised (discriminant) types | | | | | | | | | | ● | ● |
| `PTR`, `ALLOC`, `NIL` | | | ● | ● | ● | | ● | | | ● | |
| `STRING[ASCII](n)` | | | ● | | | ● | | | ● | | |
| `REP` (SIZE / ALIGN / ENUM / `ARRAY NORMAL` / `NOBOUNDS`) | ● | | ● | ● | | | | | | ● | |
| `LOCATION (addr)` | ● | | | ● | | | | | | | |
| `LOCATION (INTERRUPT n)` interrupt mailboxes | ● | ● | ● | ● | | | | | | | |
| `OCTAL ("...")` | ● | | ● | | | | | | | | |
| `LOW_IO` | | | ● | ● | | | | | | | |
| `TASK`, `ACT`, `CREATE ... NAMED` | ● | ● | | ● | | ● | ● | ● | ● | | |
| Task parameters | | | | ● | | | | ● | ● | | |
| `ME` | | ● | ● | ● | ● | | | | | | |
| `SET_PRIORITY` / `PRIORITY` | | ● | | ● | | | | ● | | | |
| `MAILBOX`, `SEND`, `RECEIVE` | ● | ● | ● | ● | | ● | ● | ● | ● | | |
| `COND_SEND`, `FULL_SLOTS` | ● | | | | | | | | | | |
| Multi-way `WAIT ... WHEN` | ● | | | ● | | ● | | ● | | | |
| `DELAY` | ● | | | ● | ● | | ● | | | | |
| `DELAY_UNTIL`, `DELAY_UNTIL_INACTIVE`, `TASK_END` | | | | | | | | ● | | | |
| `EXTERMINATE` | | | | ● | | | | | | | |
| `DATA_LOCK` + `REGION` | ● | | ● | ● | ● | | ● | ● | | | |
| `EXCEPTION` declarations, `RAISE` | | | ● | | ● | | | | | | |
| `GUARD ... WHEN ... ELSE => RERAISE` | | | | | ● | | | | | | |
| Overloading (procedures / operators) | | | | | ● | | | | | | ● |
| `GENERIC` (TASK parameter / PROC parameter), `name [actual]` | | | | | | | | ● | ● | | |
| Parameter modes `OUT` / `VAR` / `READONLY` | ● | | ● | | ● | | | ● | ● | ● | ● |
| `CASE ... WHEN` | | | ● | | ● | | | | ● | ● | |
| Labelled loops, `EXIT label` | ● | | ● | | ● | ● | | | | | ● |
| `PRAGMAT` (INLINE / SUPPRESS) | | | | | | | | | | ● | ● |
| `ASSERT` | | | | | | | | | | | ● |
| `READLN` / `WRITELN` | | | | | | ● | | | | | |

### GREEN

| Feature | 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 | 10 |
|---|---|---|---|---|---|---|---|---|---|---|
| Package spec / body (initialisation part) | | ● | ● | | ● | ● | ● | ● | ● | ● |
| `restricted (units)` visibility list | | | ● | | ● | | ● | | | ● |
| Restricted / private types, private part | | | ● | | | | | | | |
| `generic (...)` (proc / type / value params) | | ● | ● | | | | | ● | | |
| `use` clause | | | ● | | ● | | ● | ● | | ● |
| Derived types `new T range`, subtypes | ● | | ● | | ● | ● | | ● | ● | ● |
| Records, aggregates (named, `others`, range choice) | ● | ● | ● | ● | ● | | ● | ● | ● | ● |
| Access types, allocators, `.all`, `null` | | | ● | | | | | ● | | |
| `renames` (incl. exception renames) | | | ● | | | | | ● | | |
| Overloading | | | | | ● | | | ● | | |
| Task spec / body, `initiate` | ● | ● | ● | ● | ● | ● | ● | ● | ● | ● |
| Task families, `'INDEX`, family-slice `initiate` | ● | ● | ● | ● | ● | ● | | | ● | |
| Procedures / functions / variables exported from a task spec | ● | | ● | | ● | | | ● | | |
| Entries, `accept ... do ... end` | ● | ● | ● | ● | ● | ● | ● | ● | ● | ● |
| Entry families | | ● | | | ● | | | ● | | |
| `select` with `when` guards | ● | ● | | | ● | ● | | | | |
| `select ... else` | | | | | ● | ● | | | | |
| `delay` (statement / select alternative) | ● | | | ● | | | ● | | | |
| `'COUNT` on entries | | | | | ● | ● | | | | |
| Interrupt entries `for E use at addr` | ● | ● | | ● | | ● | | ● | | |
| Address clauses `for X use at` | ● | | | ● | | | | | | |
| Record representation clauses | ● | | | ● | | | | | | ● |
| Enumeration representation clauses | | | | | | | | | | ● |
| `'ADDRESS`, `'SIZE` | | | ● | ● | | | | | | |
| `SET_PRIORITY`, `SYSTEM'MAX_PRIORITY`, `SYSTEM'CLOCK` | | ● | | | | | ● | | | |
| `abort` | | | | | | ● | | | | |
| Exception declarations, `raise`, handlers, `raise;` | | | ● | | ● | | | ● | | |
| `raise T.E` into another task | | | | | ● | | | | | |
| `separate` body stubs / subunits | ● | | ● | ● | | ● | | | | |
| `TEXT_IO` | | | | | ● | | | | | |
| Based literals `8#...#` | ● | ● | | | | | | | | |

### Minimum runtime for a translator

- **RED.** The runtime must provide:
  - a priority scheduler with `SET_PRIORITY`;
  - bounded mailboxes with blocking and conditional send and receive;
  - a multi-way `WAIT` over mailbox events and timeouts;
  - `DATA_LOCK` regions;
  - absolute and relative delays;
  - task termination (`EXTERMINATE`, `TASK_END`, `DELAY_UNTIL_INACTIVE`);
  - interrupt-to-mailbox binding;
  - `LOW_IO`.

  Running P1–P4 needs simulated memory-mapped buffers and interrupts.
- **GREEN.** The runtime must provide:
  - rendezvous with selective wait (guards, `delay`, `else`);
  - task families and entry families;
  - `'COUNT`;
  - explicit `initiate` and `abort`;
  - exception propagation out of an accept body to the caller;
  - exceptions raised into another task (P5);
  - interrupt-to-entry binding;
  - a clock and priorities.

  Running P1, P2, P4, P6 and P8 needs simulated interrupts.
- **Stubs on both sides.** Several units are left unwritten and need stubs:
  - RED: `display`, `blink`, `get_a_queue`, the link procedures `L0..L9`, `process`/`read`.
  - GREEN: `DRAW_OBJECT`, `ENABLE`/`DISABLE`, `READ`, the `LIBRARY` package, `LINE_HANDLER`/`QUEUE_HANDLER`.
