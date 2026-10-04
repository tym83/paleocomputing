[Русская версия](FINDING-33-marketplace.ru.md)

# Finding 33. A pluggable catalog for Cozystack

## The concept

A separate application catalog holding things that are not and will never be in
the main one: emulators of architectures that were never released, operating systems
that remained on paper, and languages without an implementation. Each one is not an archive but
a deployable environment.

## What we learned about Cozystack's mechanics

The mechanism for this already exists, and that matters more than the concept itself.

From the platform roadmap: **"Community application marketplace" is planned for
2027 Q1; the design proposals are in `cozystack/community`, open and not
merged**. The console is built on **dynamic discovery via
`ApplicationDefinition`**. There is a precedent for a separate catalog: `ccp`,
a plugin marketplace.

The platform tree contains ready-made mechanics:

* `PackageSource` (`cozystack.io/v1alpha1`): an object that points to
  an OCI repository with packages and lists the components by variant;
* `ApplicationDefinition`: an application description for the console: a values schema,
  a chart reference, a category, a base64 icon, the order of form fields;
* `cozypkg tap <oci-ref>` / `untap`: **connecting and disconnecting a third-party
  source**. Official sources cannot be disconnected: they carry a protective label;
* `cozypkg validate`: a validator specifically for an **external** application repository;
* the `internal/marketplace` package: the mechanics are not a sketch but code.

The chart reference is formed by the rule
`<source>-<variant>-<component>` with dots replaced by hyphens
(`internal/marketplace/naming`). If it does not match, the validator flags it as dangling.

## What was done

The catalog `~/projects/forgotten-systems/marketplace`:

```
sources/forgotten-systems.yaml              PackageSource
packages/apps/oberon-lab/                   application chart
packages/system/oberon-lab-rd/cozyrds/...   ApplicationDefinition
```

The first application is `oberon-lab`. Two parts, enabled separately:

* **web**: the nine browser labs and the course book, static files in an image on
  unprivileged nginx (93.6 MB);
* **job**: a run of a lab that needs Verilator: the edit arrives
  as a `ConfigMap`, an `initContainer` lays it out into paths, a second one copies
  the project tree into a volume, and the working container runs with a read-only root.

`cozypkg validate .`: zero errors, zero warnings.

## Checked for misses

Zero errors by itself means nothing: the validator might simply not have found our
files. I replaced the chart reference name with a nonexistent one, and the validator caught it:

```
[WARNING] ... ApplicationDefinition oberon-lab chartRef "nonsense-does-not-exist"
does not match any <packagesource>-<variant>-<component> defined in this repository
```

So it really does read and link our objects.

The values schema is checked separately: `helm template` with a wrong `task`
must fail.

## A side finding: helm 4 complains about all Cozystack charts

`cozypkg validate --helm-lint` fails on our chart with
`invalid icon URL '/logos/oberon-lab.svg'`. I checked whether this is our defect:

| chart | helm lint errors | of which about the icon |
|------|------------------|-------------------|
| `nats` | 3 | 1 |
| `redis` | 2 | 1 |
| `kafka` | 2 | 1 |
| `mongodb` | 3 | 1 |

**All of Cozystack's own charts fail with the same error.** This is a discrepancy between
helm 4 and the platform's convention: Cozystack deliberately allows a path like
`/logos/foo.svg` into the chart (`hack/update-crd.sh`), while helm 4 requires
a full URL.

A practical consequence for the platform: `--helm-lint` on helm 4 is currently unusable
for checking a catalog, either its own or a third-party one.

## What is missing

The images have not been published anywhere, the catalog has not been pushed to OCI, nothing
has been run in a cluster. `images` and `OCI` deliberately contain `REPLACE-ME`,
so that this cannot be applied without looking.
