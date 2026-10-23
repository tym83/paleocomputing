[Русская версия](README.ru.md)

# Labs: what RED can do

Twelve short exercises on RED, the language that lost the DoD-1 competition to
GREEN in 1979. Each one takes 10–20 minutes. The programs are in `labs/red/`, and
`labs/check.sh` tells you whether a task is done. It translates your file with
`build/redc`, runs it and looks at what came out.

```sh
make                         # builds redc from its seed and checks the fixed point
labs/check.sh 01 look        # run lab 1 as it is
labs/check.sh 01 change      # check your change to labs/red/01-capsule.red
git checkout labs/red        # start over
```

The tasks follow the series' levels: **look**, **change**, **break**, **measure**
and **build**. The clock in these programs is virtual and the scheduler follows
the RED rules exactly. A run prints the same thing every time, so you can compare
your output with someone else's.

| # | Program | Task | What you should see |
|---|---|---|---|
| 01 | `01-capsule.red` | **look**, then **change**: add `FUNC peek(READONLY s : stack) => INT` to the capsule, export it, print `"peek " & CNVT[STRING[ASCII]](peek(s))` | `peek 7` |
| | | **break**: write `s.top := 0;` in `main` | Exporting a type does not export selection of its components (RM 8.2). This is how RED makes an abstract type, with no `private` section |
| 02 | `02-imports.red` | **break**: remove `hits` from the IMPORTS list of `hit` | A procedure is a closed scope (RM 3.5, 3.7). A variable from outside is known only if imported |
| | | **change**: assign to `limit` inside `hit` | `limit` is imported READONLY |
| 03 | `03-mailbox.red` | **look**: the producer runs three messages ahead. **change**: `CONST size := 0` | A mailbox of size 0 is a rendezvous: `send 2` comes after `got 1` |
| | | **measure**: try sizes 1, 2, 5 | How far ahead the sender can run |
| 04 | `04-wait.red` | **change**: make the sender slower than the WAIT | The timeout wins |
| | | **break**: wait on `SEND(m0, 1)` with `m0 : MAILBOX[INT](0)` | X_EMPTY_MAILBOX. The Rationale forbids this because it can deadlock (RM 10.5) |
| 05 | `05-region.red` | **look**: an exception inside a REGION still releases the lock. **break**: remove the GUARD | The worker dies, `main` waits forever, and the runtime reports that every task is blocked |
| 06 | `06-priority.red` | **look**: `c b a`. **change**: give all three the same priority | `a b c`: equal priorities run in FIFO order (RM 10.2) |
| 07 | `07-generic.red` | **look**: `swap` gets an instance for INT and one for STRING, and nobody names them. **build**: write `GENERIC t : TYPE FUNC max(CONST a, b : t) => t`, call it with integers and strings, print `"max ..."` | An instance per type, made at the call (RM 11.3) |
| 08 | `08-pairs.red` | **change**: set `crash_after` to another request number | Wherever the primary dies, the audit holds |
| | | **break**: in the primary, swap the checkpoint `SEND` (with its `IF`) and the reply `SEND`, so that the crash falls between them | The audit finds a confirmed transfer missing from the books. The total is still right, so nothing looks wrong at a glance |
| 09 | `09-kube-ha.red` | **look**: the API server's primary dies in the middle of a rollout, and the cluster still ends where it should | |
| | | **break**: delete the draining loop in `node_ctl` | Healthy nodes are evicted after the failover |
| 10 | `red/redc/*.red` | **build**: add a built-in `MAX(a, b)` to `builtin` in `07-expr.red`, run `make fixpoint`, then translate a program that prints `MAX(3, 7)` | The compiler that is written in RED accepts your change and reproduces itself |
| 11 | `problems/run/C1-matrix-vector.sed` | **break**: drop one line of the sed script and translate the 1979 sample again | Each line is an error in the text printed in 1979 that a translator rejects |
| 12 | `12-the.red` | **look**: Dijkstra's THE system (1968) in five levels; three programs share three core pages through a drum | No process waits for one above it, and the society finishes |
| | | **change**: `CONST ncore := 8` | `drum transfers 0`: a core page per segment, and the segment controller never needs the drum |
| | | **break**: set `report_dumps` to `TRUE`, so the segment controller (level 1) tells the operator about every dump through the message interpreter (level 2) | Deadlock: the interpreter needs the segment controller to read its vocabulary. This is why THE puts the console above the drum |

Lab 10 checks your own program: `labs/check.sh 10 build myprog.red`. Lab 11 checks
the regenerated sample:

```sh
sed -f problems/run/C1-matrix-vector.sed problems/original/red/C1-matrix-vector.red \
  | sed -n '/^CAPSULE matrix_vector_package/,/^END CAPSULE/p' > /tmp/c1.red
cat problems/run/C1-main.red >> /tmp/c1.red
labs/check.sh 11 break /tmp/c1.red
```

Reference solutions for the change, break and build tasks are in
`labs/solutions/`. `labs/verify.sh` checks the checker: each solution must pass,
and the unchanged program must not. CI runs it on every pull request.

## YELLOW

Eight exercises on YELLOW, SRI International's design of 1978, the one that
was told to modify Pascal to fit Ironman (see `yellow/README.md`). The programs
are in `labs/yellow/`; the lab numbers are `y1` to `y8`, and `check.sh`
translates them with `yellow/build/yellowc` after the standard prelude. Line
numbers in the translator's messages are given in your file.

```sh
make -C yellow fixpoint      # builds yellowc from its seed
labs/check.sh y1 look        # run lab Y1 as it is
labs/check.sh y1 break       # check your change to labs/yellow/y1-operators.yel
git checkout labs/yellow     # start over
```

| # | Program | Task | What you should see |
|---|---|---|---|
| Y1 | `y1-operators.yel` | **look**: `(a - b) - c` and `a - (b - c)` | `-` is not associative, and YELLOW makes you say which subtraction comes first |
| | | **change**: print `(a * b) DIV c`, a space, and `a * (b DIV c)` | `13 10`: `*` and `DIV` are on one level and `DIV` is not associative either |
| | | **break**: write `a - b - c` without parentheses | `needs parentheses` (VIII.A). Pascal reads it left to right; YELLOW does not read it at all |
| Y2 | `y2-parameters.yel` | **look**: `Divide` sets its OUT parameter, then fails | `q = 3`: an OUT parameter reaches the actual only at RETURN (X.A.2) |
| | | **change**: add `OUT r` to `Divide`, set `r := a MOD b`, print `"remainder "` and `r` | `remainder 1` |
| | | **break**: write `a := 0` inside `Divide` | `a variable is needed here`: a CONST parameter is never changed, not even by its own routine |
| Y3 | `y3-enumerations.yel` | **look**: an ORDERED `Phase` and an UNORDERED `Fruit` | `SUCC`, `LAST` and `FOR` work on the ordered one |
| | | **change**: add `Failed` at the end of `Phase` and a CASE for it in `WritePhase` | `last phase Failed` |
| | | **break**: compare two fruits with `<` | `< <= > >= apply to ordered values`: an UNORDERED enumeration has only `=` and `#`. Try also adding `Colors = UNORDERED (Red, Orange)`: an unqualified `Orange` then names values of two types |
| Y4 | `y4-templates.yel` | **look**: one TEMPLATE, two INSTANCEs | Each instance is the module written out again with the actuals in place of the formals |
| | | **change**: add a second INTEGER64 instance (`OtherStack`, `PushO`, ...), push 5 on it, print `"two integer stacks, depths "` with both depths | `depths 3 1`: two instances of one type are two modules with their own state |
| | | **break**: instantiate `StackTemplate` for `Fruit` | `apply to ordered values`, from inside the template: it is checked only when an instance is made, and `Largest` uses `<` |
| Y5 | `y5-monitor.yel` | **look**: A waits first with rank 2, B second with rank 1 | `B got 1`, and the waiter runs before the producer goes on: Hoare's SEND hands the monitor over (X.E.4) |
| | | **change**: give A and B the same rank | `A got 1`: first come, first served within a rank |
| | | **break**: remove `SEND(arrived)` from `Give` | `deadlock`: a signal is not a state, and nobody wakes the consumers |
| Y6 | `y6-functions.yel` | **look**: a FUNCTION and a value-returning PROCEDURE | `calls 0` |
| | | **change**: make `Square` a `PROCEDURE ... RETURNS` that adds 1 to `calls` | `calls 2`: a value-returning procedure may have side effects |
| | | **break**: write `calls := calls + 1` inside the FUNCTION `Square` | `calls is not local`: a FUNCTION assigns only to its own locals (D-33) |
| Y7 | `y7-modules.yel` | **look**: `Counter` exports `count` READONLY, `Stack` exports `S` OPAQUE | `count 2` |
| | | **change**: export `count` VAR, set `count := 0` in the main part, print `"count after reset "` and `count` | `count after reset 0` |
| | | **break**: write `st.top := 0` in the main part | `its components are hidden` (X.B.3). Assigning `count` without the change gives `a variable is needed here` |
| Y8 | `y8-the.yel` | **look**: Dijkstra's THE system with YELLOW's monitors (`os/the_yellow.yel`) | No process waits for one above it, and the society finishes |
| | | **change**: set `ncore` to 8 | `drum transfers 0` |
| | | **break**: set `reportDumps` to `TRUE` | Deadlock: the segment controller, a monitor on level 1, waits for the console, whose interpreter needs the segment controller to read its vocabulary |

The reference solutions are `labs/solutions/y*.yel`; `labs/verify.sh` checks
them with the RED ones.
