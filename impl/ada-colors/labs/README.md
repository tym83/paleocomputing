[Русская версия](README.ru.md)

# Labs: what RED can do

Eleven short exercises on RED, the language that lost the DoD-1 competition to
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
