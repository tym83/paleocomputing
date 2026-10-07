[Русская версия](README.ru.md)

# Forgotten Systems: a pluggable catalog for Cozystack

The catalog collects what is not and will not be in the main Cozystack
application set: emulators of machines that were never released, systems that
stayed as projects, and languages for which no implementation was ever written.
Each such thing is a deployable environment you can work with, not an archive
you first have to build.

The catalog follows the `cozymarketplace` design from `cozystack/community`
(`design-proposals/cozymarketplace` and `-supplementary`). Nothing is invented
on top: everything here maps onto mechanics that are already written.

## What is here

```
index/          meta-index: one entry per repository
repos/machines    machines: emulators, lab assignments, manuals
repos/languages   language environments
repos/images      boot images of machines for KubeVirt
tools/          catalog description generator and checks
```

## The unit of installation is a repository

The key decision of the project: the operator connects not a single package but
a whole repository. The point is that the things inside are built and tested
together. A repository is one OCI artifact, and its tag is its version: an
update means moving to another tag, a rollback means returning to the previous
one.

That is why there are three repositories rather than one: machines, languages
and images have different trust levels and a different fate on update.

Connecting goes the standard way:

```
cozypkg tap oci://ghcr.io/tym83/paleocomputing/machines:v0.1.21   # connect the repository
cozypkg add paleocomputing.machines                            # install from it (without add there are no applications in the tenant catalog)
```

You can also use the short name through the meta-index:

```
cozypkg search --index index                                   # what is available at all
cozypkg tap --index index paleocomputing-machines              # the same connection
```

The short name is resolved through the meta-index and **pinned to the version
from the entry**, the very one the publishing gate checked and signed. Without
`--index` (or `COZYPKG_INDEX`) there is nowhere to look up the short name: the
shared community index does not have these entries yet.

An update is a repeated `cozypkg tap` with a new tag, not an in-place tag edit:
the list of components lives in `PackageSource` and does not follow the tag
(finding 46).

### Platform

The fourth repository, `platform`, is not a tenant application but a cluster
level without which the catalog's foreign machines do not start. Its component
`kubevirt-paleo-launcher` keeps the virt-launcher image paired with the KubeVirt
version (finding 65). It is privileged: it is installed with the operator's
explicit consent.

```
cozypkg tap oci://ghcr.io/tym83/paleocomputing/platform:<version>
cozypkg add paleocomputing.platform --allow-privileged
```

⚠ Changing the launcher is a workload update for KubeVirt: with
`workloadUpdateMethods: [LiveMigrate, Evict]` (the Cozystack default) it moves
**all** virtual machines of the cluster onto the new image (finding 49). So
when automatic workload updates are enabled, the component neither installs nor
changes its patch without explicit consent: the value
`allowWorkloadUpdate: true` or the annotation
`paleocomputing.io/allow-workload-update=true` on the KubeVirt resource; until
then its state is `NeedsConsent`. Removing the patch does not wait for consent.

The machine family grows with data, not code: a new architecture is a line in
`kubevirt/targets.txt` (the QEMU target, libvirt patches and image checks are
built from it), a new KubeVirt version is a line in `kubevirt/versions.txt`
(the platform component's table is built from it too).

## How the needed entry types are expressed

The meta-index entry schema is closed: parsing uses strict `UnmarshalStrict`,
and an extra field breaks it entirely. There are exactly eight fields: `name`,
`ociRef`, `version`, `description`, `homepage`, `maintainer`, `tags`,
`signing`.

So an "entry type" cannot be declared as a separate field. The only extensible
place is `tags`, and `cozypkg search` matches exactly on name, description and
tags. That is how the types are expressed here: `machine`, `language`, `image`,
`environment`, `documentation`, `privileged`.

### Images

`repos/images` publishes boot images into the shared `cozy-public` namespace,
where the image selection field of a virtual machine's disk sees them. This is
the only part of the catalog that needs cluster-level trust; the component is
marked privileged, and the Cozystack validator warns about it.

### Language environments

`repos/languages` provides one parameterized chart: an image with the language
implementation plus sources placed next to it. Two modes: a persistent
environment reachable over HTTP, and a one-off run.

Cozystack has no FaaS substrate, so scale-to-zero is not promised here. The
property "nothing spins idle" comes from the one-off run mode.

### Virtual architectures

The list of architectures in KubeVirt is closed: `architectureConfiguration`
has exactly four branches: `amd64`, `arm64`, `ppc64le` (deprecated) and
`s390x`. A fifth cannot be added without changing KubeVirt itself, and a
catalog package cannot do that.

Hence two working paths, both present in the catalog:

* **an image with an emulator inside**: the machine in the cluster is ordinary,
  what is unusual is what it imitates (`repos/images`, the `emulates` field);
* **a container with an emulator**: needs neither cluster-level trust nor a
  ready boot image (`repos/machines`, this is how `oberon-lab` is built).

### How to add a machine

A catalog machine is a passport, not a chart. The templates are shared
(`packages/library/retro-machine`), and so is the hook; OberonVM is the first
passport, and everything can be seen from it.

1. **The emulator goes into the launcher image.** A QEMU target in the tree and
   a line in `kubevirt/targets.txt`: `--target-list`, libvirt patches and image
   checks are built from it. The platform component brings the new image to the
   cluster on its own.
2. **Machine files go into their own image.** ROM, disks, everything the
   emulator needs at startup: the image only carries them, the fill job copies
   them onto the volume.
3. **The passport** `apps/<machine>/machine.yaml` following
   `library/retro-machine/machine.schema.json`: the architecture and machine as
   libvirt knows them; the path to the emulator; files with roles (`firmware` is
   updated from the release, `disk` is placed once and then belongs to the
   user, and may declare a `size` that the fill job grows it to with zeros);
   how each file is passed to QEMU; hardware variants as `-machine`
   properties.
4. **The application** `apps/<machine>/`: `Chart.yaml`, the form
   (`values.yaml`, `values.schema.json`), the `charts/retro-machine` link to the
   library and a single template `{{ include "retro-machine.render" . }}`. Plus
   an entry in the source and in the catalog descriptions, like any application.

What catches a mistake: `check.py` checks the passport against the schema and
the form, renders the chart and requires a `VirtualMachine`, a volume as part of
the release and a fill job that does not touch an existing disk except to
grow it to the passport size;
`kubevirt/hook_test.py` runs the hook on two passports, the second one
fictional, to show that a new machine needs no code changes. A copy without
symlinks is published (`tools/stage.sh`): flux does not put symlinks into the
artifact.

### Meta-applications

An environment of several parts is installed as one thing: the parent chart
renders `HelmRelease` objects for components of the same repository. The parts
are not duplicated; they are ordered by reference to the artifact. This is the
only composition method found in the platform itself (this is how `harbor` is
built).

A second variant in `PackageSource` does not work for this: the artifact name
includes the variant name, and `ApplicationDefinition` refers to exactly one
name, so a second variant would send all catalog references into the void. All
hundred sources of the platform have exactly one variant.

### Documentation alongside the application

The catalog application description has no field for documentation: `dashboard`
has `description`, `icon`, `category`, `tags`, and that is all. There is nowhere
to give the dashboard a link to a manual.

So the manual here is an ordinary part of the environment: the `handbook`
component, which serves it itself and is installed next to the application.
Either your own image with ready documentation or pages directly in the values;
then nothing needs to be built.

## Checks

```
make check        # same as python3 tools/check.py
```

Fifty-nine checks, twelve of them negative controls (mutations): the thing
being checked is broken on purpose, and the check must turn red. A check that
cannot fail checks nothing.

The same checks run in CI before every publication: `.github/workflows/publish.yml`,
job `catalog`, the catalog checks step, after `cozypkg validate` and before
pushing. A release is started manually from main after pushing the tag
(`gh workflow run publish.yml --ref main -f tag=vX.Y.Z`), see finding 57.

The standard Cozystack validator checks the structure and references in
`ApplicationDefinition`. Our own checks cover two places it does not reach:
meta-application references to components, and divergence between the catalog
schema and the chart schema. Schemas are never written by hand at all:
`make gen` builds the catalog descriptions directly from the
`values.schema.json` of the corresponding charts.

`--helm-lint` is intentionally off: helm 4 treats an icon path like
`/logos/foo.svg` as an error, although that is Cozystack's own convention. On
the platform's own charts (nats, redis, kafka, mongodb) helm 4 complains in
exactly the same way.

## Release order

A tag is set only after the change has passed a live tenant. Errors that only
the cluster found (a deadlock in the volume fill, the tenant network policy,
symlinks that never reached the cluster) otherwise cost a release each.

1. The change goes into a branch; `gh workflow run publish.yml --ref <branch> -f tag=dev`
   pushes everything under the `dev` tag (a versioned release only from main).
2. During testing the sandbox points at `dev`: the `machines` and `platform`
   catalogs are reconnected with the `dev` tag. The cluster launcher is shared
   by all tenants, so after the release the cluster goes back to the release tag.
   The published catalog refers to the launchers and the machine file images by
   digest as well as tag. Every `dev` build rewrites the tag, and nodes pull
   with `IfNotPresent`, so a tag alone left a node on the build it saw first
   (finding 86).
3. `tools/sandbox-e2e.sh`, in one run as a tenant: install a machine, wait for
   it to start, check the `VirtualMachine`, the launcher, `chk=on`, the screen
   through the console (reference: 18607 dark pixels), restart, delete and make
   sure nothing is left.
4. A green run means merge, tag, `gh workflow run publish.yml --ref main -f tag=vX.Y.Z`.

What is checked where. `kubevirt-e2e.yml` in CI brings up kind with every
KubeVirt version from `kubevirt/versions.txt`, installs the launcher through the
platform component and a machine from the catalog, and compares the screen with
the reference (finding 67), on every request, without access to a cluster. The
sandbox is needed for what kind does not have: Cozystack tenant network
policies, LINSTOR, tenant permissions and the dashboard. Its scenarios
(`tools/sandbox-e2e.sh`, `tools/sandbox-platform-e2e.sh`) are run by hand on
purpose: in CI they would require storing administrator keys of the shared
cluster.

## What is not here

Building boot images of machines is separate work; here there are only the
mechanics of publishing them. The lab images are built and signed in GitHub
Actions (`.github/workflows/publish.yml`); signing is keyless: the build
process itself is the identity, and anyone can verify it.
