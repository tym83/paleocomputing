[Русская версия](README.ru.md)

# workbench

A meta-application: the user installs one thing and gets an environment of
several parts: a machine with labs and a manual for it.

## How it works

The parts are not duplicated. The parent chart renders `HelmRelease` objects for
the same components of the repository, by artifact reference:

```
paleocomputing-machines-default-oberon-lab
paleocomputing-machines-default-handbook
```

The artifact name is built as `<source>-<variant>-<component>` with dots
replaced by hyphens. This is the only composition method found in the platform
itself: this is how `harbor` is built.

The standard Cozystack validator does not check such references: it looks only
at `chartRef` in `ApplicationDefinition`. So the catalog has its own check
(`tools/check.py`) that compares the meta-application references with the
components declared in the source, and separately makes sure that shifting the
prefix leaves them dangling.

## Why not a second source variant

A variant in `PackageSource` looks like a natural place for "a set installed
together". But the artifact name includes the variant name, and
`ApplicationDefinition` refers to exactly one name. A second variant would send
all catalog references to non-existent artifacts. All hundred sources of the
platform itself have exactly one variant.

| parameter | default | what it does |
|---|---|---|
| `machine` | `true` | machine with the labs |
| `manual` | `true` | manual next to it |
| `host` / `manualHost` | `""` | external host names of the parts |
| `artifactPrefix` | `paleocomputing-machines-default` | prefix of artifact names |
