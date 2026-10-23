[Русская версия](README.ru.md)

# BLUE

SofTech's language for the DoD-1 competition, rebuilt from its specification of
15 February 1978 (DTIC ADB950587). BLUE was one of the four designs, with RED,
GREEN and YELLOW, paid for in 1977; in spring 1978 only RED and GREEN went on. Like RED and GREEN here, it has a
translator written in itself, which reproduces itself byte for byte.

| Directory | What is there |
|---|---|
| `boot/` | The Python bootstrap (genesis only): it translates the first bluec, `genesis/bluec.blu` |
| `bluec/` | bluec, a BLUE translator written in BLUE (about 9 600 lines), files read in name order. It emits C for the runtime in `../rt` |
| `seed/bluec.c` | What the last bluec made of itself |
| `tests/` | One program per feature with its expected output; `*.err.blu` must be rejected with the message in `*.err.out` |
| `corpus/` | 17 programs of the 1978 document, transcribed as printed (`orig/`, with page numbers), the changes a translator forced (`fix/*.sed`, each with its reason), drivers (`main/`). `CHANGES.md` lists the misprints |
| `notes/blue-digest.md` | The language as implemented, with page references, and every decision taken where the document is silent or contradicts itself |

The largest corpus program is Appendix C, the standard I/O library of the
document: SAFE_TELETYPE, TELETYPE, BINARY_IO and TEXTUAL_IO, with device driver
paths connected to interrupts. It runs on a simulated PDP-11 with two LT33
teletypes: the first is the console, the second prints on standard output too.

BLUE also runs what RED and GREEN run in `../os` and `../kube`: Dijkstra's THE
system (`os/the.blu`, on BLUE's own semaphores; it prints exactly what the RED
version prints), Kubernetes on THE (`os/the_kube_blue.blu`), the Kubernetes
control loop (`kube/kube_blue.blu`) and the three contrast problems
(`os/contrast/*_blue.blu`). Seven labs in `../labs/blue` show what is BLUE's own.
Section 11 of `notes/blue-digest.md` lists what BLUE said directly, what it said
another way (a timeout is a race of two paths) and what it could not say.

```sh
make fixpoint        # bluec from its seed, twice; the C must be identical
make genesis         # the first step, from the Python bootstrap
tests/run.sh
corpus/run.sh
```

You need a C compiler, make, Python 3 (genesis only) and perl (for timeouts).
The scheduler of `../rt` and its virtual clock make every run print the same.
