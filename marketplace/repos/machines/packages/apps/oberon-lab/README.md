[Русская версия](README.ru.md)

# oberon-lab

The 1986 Oberon system on Niklaus Wirth's real Verilog: interactive labs and a
manual, plus runs of the labs that need a toolchain.

The application consists of two parts, and each is enabled separately.

**The web part** (`web: true`) serves nine browser labs and an eight-chapter
manual. The CPU is compiled to WASM and the server serves static files: no
simulator or compiler is needed on the cluster side.

**A toolchain run** (`runner: true`) is a one-off job. The learner supplies a
change (a CPU description, a test, a compiler module); the job applies it to
the project tree, builds it and returns a verdict. This is impossible in the
browser: it needs Verilator and a rebuild.

## Parameters

| parameter | default | what it does |
|----------|--------------|-----------|
| `web` | `true` | serve the labs and the manual |
| `replicas` | `1` | number of web replicas |
| `host` | `""` | external host name; empty means no Ingress |
| `ingressClassName` | `""` | Ingress class; empty means the cluster default |
| `runner` | `false` | run a lab as a job |
| `task` | `isa` | which one: `isa`, `compiler` or `check` |
| `patch` | `[]` | change files: `path` and `content` |
| `images.web` | — | static files image |
| `images.runner` | — | image with Verilator and the build |
| `runnerResources` | `2` / `2Gi` | job resources |

## Example: your own CPU instruction

```yaml
runner: true
task: isa
patch:
  - path: rtl/RISC5.v
    content: |
      ...modified CPU description...
  - path: tests/t1_mine.s
    content: |
      ; test of the new instruction
      ...
```

The job builds the core and runs 298 directed tests, an encoding sweep and the
decoder equivalence check. A non-zero exit code means the change broke
something.

## What is not here

The images are not published: `images` intentionally points to
`ghcr.io/tym83/paleocomputing/` so that the chart cannot be applied blindly.
Substitute your own registry.
