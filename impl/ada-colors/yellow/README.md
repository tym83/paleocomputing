[Русская версия](README.ru.md)

# YELLOW

The third of the four designs of the 1978 DoD-1 language competition: SRI International's
*Preliminary Design Phase Report and Language Specification* (February 1978), the design that
was told to modify Pascal to fit Ironman. GREEN became Ada, RED was the other finalist; YELLOW
and BLUE were dropped in 1978. It is rebuilt here from the report as reprinted in DTIC
ADB950587, the way RED and GREEN are in the directories next door.

| Directory | What is there |
|---|---|
| `boot/` | The Python bootstrap: it translates the subset the first yellowc was written in (genesis only) |
| `yellowc/` | yellowc, a YELLOW translator written in YELLOW, in files joined in name order; it writes C linked with `../rt` |
| `seed/` | `yellowc.c`: what the last yellowc made of itself |
| `genesis/` | the first yellowc and the C it made of itself, from the bootstrap |
| `lib/prelude.yel` | the implementation's standard prelude (XIV.XIII.1): StandardImplementationPrelude, MathLibrary, TextIO |
| `tests/` | tests with expected output; `*.err.yel` must be rejected with the message in `.out` |
| `corpus/` | the programs of the 1978 tutorial as printed, what the translator says of them, the fixes it forced, and their runs (`corpus/CHANGES.md`) |
| `notes/yellow-digest.md` | the language as reconstructed, with page references and every decision taken where the report is unclear |
| `notes/yellow-os.md` | YELLOW put to THE and Kubernetes (`../os/*_yellow.yel`, `../kube/kube_yellow.yel`, `../labs/yellow/`): what it had no word for, and two shortfalls of yellowc against the Report, now fixed |

```sh
make fixpoint       # yellowc from its seed, twice; the C must be identical
make genesis        # the first step, from the Python bootstrap
make test           # tests/run.sh
corpus/run.sh       # the 1978 programs
./yc prog.yel       # translate a program (after the prelude) and build it
```

You need a C compiler, make, Python 3 (genesis only) and perl (for timeouts).

What YELLOW looks like: Pascal's statements closed by ENDIF, ENDWHILE, ENDFOR; Modula's
modules (closed scopes with IMPORT and EXPORT, OPAQUE and TRANSPARENT), monitors and signals;
a split between types and representations (`INTEGER` is a type, `INTEGER [1..10]` a
representation of it); overloading only by `EXTENDS` and `REPLACES`; module templates
instantiated by substitution; exceptions handled per block, where PROPAGATE_EXCEPTION leaves
the block it is in. Two printed symbols have no ASCII form: `≠` is written `#`, `↑` is `^`.

Of the fifteen programs of the tutorial, five are accepted as printed; the others show the
slips of a text never put through a translator, and three that compile are wrong when run.

YELLOW also runs the operating-system programs of `../os/` and `../kube/`: Dijkstra's THE
system, Kubernetes on top of it, the Kubernetes control loop and the three contrast problems,
built from monitors, signals and module templates. `../labs/yellow/` has eight exercises on
what is particular to the language (`../labs/README.md`).
