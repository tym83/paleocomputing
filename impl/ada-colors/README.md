[Русская версия](README.ru.md)

# RED and GREEN

The two finalists of the US DoD-1 language competition of 1979, rebuilt from
their documents. GREEN won and became Ada; RED (Intermetrics) disappeared.
The episode is described in [`17-episode-red-green.md`](../../17-episode-red-green.md).

| Directory | What is there |
|---|---|
| `rt/` | The C runtime both compilers link with. Its scheduler follows the RED rules exactly and its clock is virtual, so every run prints the same thing |
| `red/boot/` | The Python bootstrap for RED (genesis only) |
| `red/redc/` | redc, a RED compiler written in RED. `red/seed/redc.c` is what the last redc made of itself |
| `red/tests/` | RED tests with expected output |
| `green/` | The same for GREEN: bootstrap, greenc written in GREEN, seed, tests, the 1979 INTRO examples |
| `os/` | PAIRS, a Tandem NonStop style kernel in RED |
| `kube/` | The Kubernetes control loop in RED, as a process pair, and in GREEN |
| `labs/` | Eleven exercises with a checker |
| `problems/` | The ten DoD contract problems: notes and comparison; `run/` makes 1979 originals runnable |
| `ada83/` | The same situations in Ada 83, for GNAT `-gnat83` |
| `notes/` | The RED grammar, a GREEN digest, history, GREEN findings |

```sh
make                   # redc from its seed, twice; the C must be identical
make genesis           # the first step, from the Python bootstrap
red/tests/run.sh
make -C green fixpoint test genesis
os/run.sh              # PAIRS and the three Kubernetes loops
labs/check.sh 03 look
```

You need a C compiler, make, Python 3 (genesis only) and perl (for timeouts).
The 1979 originals in `problems/original/` are not in git; `problems/README.md`
says where they come from.
