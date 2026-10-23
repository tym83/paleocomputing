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

## BLUE

Seven more exercises on BLUE, SofTech's design of 1978, dropped after the first
phase (see `../blue/`). They show what BLUE has and the others do not, or has in
another shape. The programs are in `labs/blue/`, the lab numbers start with `b`,
and `labs/check.sh` translates `.blu` files with `blue/build/bluec`.

```sh
make -C blue fixpoint        # builds bluec from its seed and checks the fixed point
labs/check.sh b1 look        # run lab B1 as it is
labs/check.sh b5 break       # check your change to labs/blue/b5-region.blu
git checkout labs/blue       # start over
```

| # | Program | Task | What you should see |
|---|---|---|---|
| b1 | `b1-enums.blu` | **look**: the literal `\GREEN` belongs to two types, at a different position in each | `light number 2 and color number 3` |
| | | **change**: add `\FLASHING` to `LIGHT` and make `NEXT_LIGHT` go from `\AMBER` to it | `\FLASHING` in the cycle |
| | | **break**: write `IF S < \SPADES THEN ... END IF;` | An `UNORDERED` type has `=` and `<>` and nothing else (3.4.4.1) |
| b2 | `b2-generic.blu` | **look**: one `SWAP` with `?T`, called with integers, strings and colours; nobody names the instances | `swapped: 1978 BLUE` |
| | | **build**: write `FUNCTION BIGGER (X, Y: ?T) RETURNS (T) WHERE T NEEDS (LESS_THAN_ (T, T) RETURNS (BOOLEAN))`, call it with integers and colours, print `'bigger ...'` | Each instance takes `LESS_THAN_` from where it is called (section 5) |
| | | **break**: `SWAP (# I, K);` | `?T` is bound by one argument, and the other does not fit |
| b3 | `b3-imports.blu` | **break**: remove `ROUTINES: (HIT)` from `PLAY` | `PLAY` calls `HIT`, so it must import `HIT` or every variable `HIT` uses (4.1.1). |
| | | **change**: assign to `LIMIT` inside `HIT` | `LIMIT` is imported as input, before the `#` |
| b4 | `b4-rep.blu` | **look**: a device's status codes as an `UNORDERED` type with `REP ENUM_VAL_REP` | `register 0001 reads \BUSY` |
| | | **change**: add `\OFFLINE AS BIN '0100'` and read `BIN '0100'` from the register | `reads \OFFLINE` |
| | | **break**: move `S := [STATUS]$$(REGISTER);` out of the `SELECT OBJECT_MACHINE` | Bits become a value only in a machine-dependent part (4.5.5.2) |
| b5 | `b5-region.blu` | **look**: worker 1 dies holding a `REGION` semaphore, and worker 2 gets in | The end of the path released it (3.11.1) |
| | | **break**: declare `MUTEX` as `SEMAPHORE (SYNCH)` | Deadlock. A `SYNCH` semaphore is a signal, and a dying path must not send false signals (J3.11-1) |
| | | **change**: wrap the work in a `BLOCK`, catch `FAILED` after it inside the path and `RELEASE` there | Both through and the block signals nothing. Catch without the `RELEASE`, and the path ends normally still holding the semaphore: deadlock again |
| b6 | `b6-the.blu` | **look**: THE in BLUE, the same run as `12-the.red`, on BLUE's own semaphores | No process waits for one above it |
| | | **change**: `CONST NCORE: INTEGER := 8;` | `drum transfers 0` |
| | | **break**: set `REPORT_DUMPS` to `TRUE`. bluec refuses until `DUMP` (level 1) imports `TELL_OPERATOR` (level 2): add it | Deadlock. The broken order had to be written into the IMPORTS before it could run |
| b7 | `b7-race.blu` | **look**: a timeout is a race of two paths, `GET` and `TIMER`, that `TERMINATE` each other | `2 received` |
| | | **change**: `CONST TIMEOUT: INTEGER := 5;` | `no item for 5 ms` |
| | | **break**: remove `PRIORITY 1` from `GET` | `1 still in the box`: `TIMER` cut `GET` down after it had taken the item's token, so the item stays in the box and no `RECEIVE` will get it. The higher priority makes `GET` run before `TIMER` can do that |

The solutions are in `labs/solutions/b*.blu`, and `labs/verify.sh` checks them
with the RED ones.
