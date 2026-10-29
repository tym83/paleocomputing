[Русская версия](README.ru.md)

# RED, GREEN, BLUE and YELLOW

The two finalists of the US DoD-1 language competition of 1979, rebuilt from
their documents. GREEN won and became Ada; RED (Intermetrics) disappeared.
BLUE (SofTech) and YELLOW (SRI International), the two designs dropped after
the first phase in 1978, are rebuilt too, from DTIC ADB950587.
The episode is described in [`17-episode-red-green.md`](../../17-episode-red-green.md).

| Directory | What is there |
|---|---|
| `rt/` | The C runtime both compilers link with. Its scheduler follows the RED rules exactly and its clock is virtual, so every run prints the same thing |
| `red/boot/` | The Python bootstrap for RED (genesis only) |
| `red/redc/` | redc, a RED compiler written in RED. `red/seed/redc.c` is what the last redc made of itself |
| `red/tests/` | RED tests with expected output |
| `red/manual/` | The examples of chapter 14 of the RED manual, the low-level facilities: user-defined schedulers, monitors, MAILBOX defined in the language; transcribed as printed and run |
| `green/` | The same for GREEN: bootstrap, greenc written in GREEN, seed, tests, the 1979 INTRO examples |
| `blue/` | BLUE (SofTech, 1978): bootstrap, bluec written in BLUE, seed, tests, and the programs of its specification, Appendix C's I/O modules running on simulated LT33 teletypes |
| `yellow/` | YELLOW (SRI International, 1978): bootstrap, yellowc written in YELLOW, seed, tests, and the tutorial programs of its report |
| `os/` | PAIRS, a Tandem NonStop style kernel in RED; Dijkstra's THE system in RED, BLUE and YELLOW and its semaphore core in GREEN; Kubernetes on top of THE in all four; `contrast/`: three problems in each language and on THE's semaphores |
| `kube/` | The Kubernetes control loop in RED, as a process pair, and in GREEN, BLUE and YELLOW |
| `labs/` | Exercises with a checker: twelve on RED, seven on BLUE, eight on YELLOW |
| `problems/` | The ten DoD contract problems: notes and comparison; `run/` makes 1979 originals runnable |
| `ada83/` | The same situations in Ada 83, for GNAT `-gnat83` |
| `notes/` | The RED grammar, a GREEN digest, history, GREEN findings |

```sh
make                   # redc from its seed, twice; the C must be identical
make genesis           # the first step, from the Python bootstrap
red/tests/run.sh
red/manual/run/run.sh  # the examples of chapter 14 of the RED manual
make -C green fixpoint test genesis
problems/run/run.sh    # the contract problems, RED and GREEN (needs greenc)
os/run.sh              # PAIRS, THE and the three Kubernetes loops
labs/check.sh 03 look
```

You need a C compiler, make, Python 3 (genesis only) and perl (for timeouts).
Where the 1979 originals in `problems/original/` and `red/manual/original/`
come from is in `problems/README.md` and `red/manual/README.md`.
