[Русская версия](FINDING-32-lab-container.ru.md)

# Finding 32. Labs that the browser is not enough for, as a batch job

## The idea

Labs 1–9 live in the browser and need nothing but the page.
The rest run up against tooling: editing the processor requires rebuilding the
Verilog, editing the compiler requires rebuilding the compiler itself. That is
impossible in the browser.

But it is not interactive work either. It is **a batch workload**: an edit goes in,
a verdict comes out. Such a thing does not have to live on the student's machine: it runs
the same way locally and as a job in a cluster.

## What was done

`deploy/Containerfile`: an image on `debian:trixie-slim` with Verilator, a C++
toolchain, Python and Node. 863 MB, almost all of it tooling; the project
tree itself is about 13 MB (the `build/` directory does not go into the image, otherwise it would drag
in a hundred megabytes of unrelated artifacts).

`deploy/lab.sh`: the entry point. The edit is supplied as the `/work` directory: files from there
are overlaid on top of the tree. Neither git nor network access is required.

```
lab check       full check
lab isa         isa assignment: your own instruction in the processor
lab compiler    compiler assignment: your own built-in procedure
```

`deploy/k8s/lab-job.yaml`: the same thing as a Job: the edit arrives
as a `ConfigMap`, an `initContainer` lays the keys back out into paths
(`ConfigMap` key names cannot contain slashes), `backoffLimit: 0`, since repeating a lab's
verdict is pointless.

## A side effect: independent confirmation of reproducibility

The image has **Verilator 5.032**, while the workstation has 5.052. All 298
directed checks, the sweep of 375 776 encoding forms and the 20 480 decoder
equivalence combinations pass identically on both versions.

This was not planned, but it turned out more useful than the container itself: until now all
our numbers had been obtained with one simulator of one version. Now a second one
confirms them.

## The lab cycle is checked from both sides

`make image-check` requires exactly two outcomes:

* on a clean tree the lab **must pass**;
* with a deliberately broken processor edit (`AND` and `ANN` swapped in
  `aluRes`) it **must fail**.

The second half is no less important than the first: a verdict that is always green checks
nothing. The broken edit is caught in two places at once: by the directed
test of logical operations and by the semantic differential (118 and 68 failures
in two files).

The target is not part of `make check`: it requires Docker, which may not be available.

## Rakes I stepped on

**Docker on macOS does not see directories outside the shared paths.** The first run
silently reported "no edits in `/work`", although the file was there on the host: the temporary
directory was outside the list that Docker Desktop passes through. I moved the working
directory inside the project tree.

**`find` without parentheses.** The expression `-type f -name '*.v' -o -type f -name '*.s'`
is parsed differently from how it reads: `-o` binds more loosely than it seems. Parentheses
are mandatory.

## What is missing

This is **not a Cozystack package** but an ordinary Kubernetes Job. For it to become
a catalog application, it needs a Helm chart with parameters (which lab, where
the edit comes from, where the verdict goes) and a place in the marketplace: that is
the next step of the platform, not this one.

The image has not been published anywhere and has not been run in a cluster. The manifest has
`ghcr.io/REPLACE-ME/oberon-lab:dev`, deliberately, so that nobody mistakes it for
something ready to apply.
