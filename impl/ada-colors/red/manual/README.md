# The examples of chapter 14 of the RED manual

Chapter 14 of the *RED Reference Manual* (Intermetrics, March 1979) describes
the low-level facilities: the operations from which the high-level tasking of
chapter 10 is built, and with which a system programmer can build other
schedulers and synchronization schemes. Its examples are transcribed in
`original/` as printed, errors included, and `run/run.sh` makes them
runnable and runs them with redc, the same way `problems/` does for the
contract problems.

Each `run/*.sed` lists the changes a translator forced, or fills what the
manual left as `...`, with the reason next to each line. `*-units.red` stand
for what an example assumes to be present, `*-head.red` and `*-main.red` put
the example in a program and drive it, `*.in` is what is typed on the
teletype, and `*.out` is the expected output.

| Section | Example | What the run shows |
|---|---|---|
| 14.1.1 | Pulsed events: a mailbox of length 0 and `EMPTY_SLOTS` | three awaiting activations continue at one signal; one arriving later waits for the next |
| 14.1.3 | Replies through a mailbox carried in the message | ten senders, one receiver, every reply reaches its sender |
| 14.1.4 | A keyboard interrupt received through `LOCATION (INTERRUPT 16)` | the characters typed arrive one every 100 ms of virtual time |
| 14.3.1 | `MAILBOX` defined in the language with user-defined waiting invocations | a blocked producer, a `WAIT` on the defined `receive` with a timeout, `cond_send`, `cond_receive` and the slot counts |
| 14.4.1 | Monitors: `MONITOR_LOCK` and `MONITOR_QUEUE` from data locks, used for a line buffer | Hoare's semantics: `CONTINUE` hands the monitor to the awakened activation at once |
| 14.5.3 | A round robin scheduler as a user-defined scheduler | three activations get the processor in turns of 10 ms |

## Sources and rights

The examples come from the *RED Reference Manual* (Intermetrics, March 1979;
the RED documents carry "Copyright © 1979 Intermetrics, Inc."), as reprinted by
Mary Van Deusen at iment.com, where the code is printed as images. They are
transcribed here for study and comparison.

## Errors in the printed examples

- 14.5.3: `REGION dlock;` has `;` where `DO` belongs, and the scheduler calls a
  variable `new`, a reserved word.
- 14.4.1: a record component is called `external`, a reserved word, and
  `delay` passes `mq.lock`, an attribute and so a value, to `unlock`'s `VAR`
  parameter.
- 14.4.1 (use): `full` is read before it is ever set.
- 14.3.1: `SYNCH_SIGNAL` for `SYNC_SIGNAL`, `m.v` for `m,v` twice, and
  `NEEDS ::=` for `NEEDS :=`. The waiting queues are declared as queues of the
  dummy request types but hold activations (`INSERT (m.squeue, ME)`,
  `FIRST (m.squeue) = ME`), and a revoke dequeues the dummy request instead of
  its activation.
- 14.3.1 also has an error no translator would catch: `receive_REVOKE` checks
  `SIZE(m.msg) < m.len`, copied from `send_REVOKE`, where its own invariant 1
  needs `0 < SIZE(m.msg)`. The run keeps the printed condition.

## Examples that are not run

- 14.1.2, producer and consumer with busy waits. With the priorities as
  printed (consumer 20, producer 10) the consumer spins in `COND_RECEIVE` and,
  by the scheduling rules of 14.2.3, the producer never runs on one processor.
  Swapping the priorities only moves the spin to the producer once the mailbox
  is full. The example needs a second processor; on redc's simulated machine,
  which has one, it loops forever.
- 14.3.3, the expansion of a `WAIT` statement, is the scheme redc follows for
  a `WAIT` with user-defined waiting invocations; it is not a program.
- 14.6, `LOW_IO` on an IBM 360 (`SIO` and `TIO` with a channel address word at
  location 72), is for that machine. On redc's simulated machine `LOW_IO`
  drives the teletype (device 1) and the interrupt controller (device 2).
