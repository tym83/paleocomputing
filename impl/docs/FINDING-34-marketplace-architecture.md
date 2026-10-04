[Русская версия](FINDING-34-marketplace-architecture.ru.md)

# Finding 34. A catalog following the `cozymarketplace` design: what the mechanics allow and where their edge is

The "Forgotten Systems" catalog was rebuilt for the architecture from the
`cozystack/community` design: `design-proposals/cozymarketplace` (@kvaps) and
`cozymarketplace-supplementary` (@IvanHunters). Both are already merged into `main`.

Checked on a real `cozypkg` built from source and on the platform's real
types: not against the text of the design but against the code.

## What turned out to be already written

The design describes the future in places, but three things exist in the code right now:

* `cozypkg search --index <dir|oci>`: reading the meta-index;
* `cozypkg tap <name>`: resolving a short name via the index;
* `cozypkg validate <repo>`: offline checking of a third-party repository.

Checked live: `cozypkg search` showed our three entries, and
`cozypkg tap forgotten-systems-machines` resolved the short name to
`oci://…/forgotten-systems-machines:v0.1.0`, **pinning the version from the index
entry**, exactly as described in the design. After that it failed only on the absence of
`flux` in `PATH`, that is, the whole discovery chain works.

## 1. The index entry schema is closed: types can be expressed only with tags

`cmd/cozypkg/cmd/index.go` parses an entry via `yaml.UnmarshalStrict`.
There are exactly eight fields: `name`, `ociRef`, `version`, `description`, `homepage`,
`maintainer`, `tags`, `signing{identity,issuer}`.

Mutation: I added `kind: Image` to an entry, and parsing the index **failed entirely**:

```
forgotten-systems-images.yaml: error unmarshaling JSON: ... unknown field "kind"
```

Consequence: declaring an "entry type" as a separate field is impossible, and that is not a matter
of taste. The only extensible place is `tags`, and `filterEntries` searches precisely
by name, description and tags. That is exactly why entry types in the catalog are made
with tags.

## 2. KubeVirt's list of architectures is closed

In the CRD of the `KubeVirt` resource, the field `architectureConfiguration` has exactly four
branches: `amd64`, `arm64`, `ppc64le` (marked deprecated) and `s390x`. Each has
`machineType`, `emulatedMachines`, `ovmfPath`.

A fifth architecture cannot be added without changing KubeVirt itself; a catalog package
all the more cannot: the `KubeVirt` resource belongs to the platform.

The conclusion for the "virtual architectures" task: an architecture that never existed in
silicon arrives not as a KubeVirt architecture but as a boot image with
an emulator inside, or as a container with an emulator. The second path is cheaper: it needs
neither cluster-level trust nor a ready-made image.

## 3. Golden image metadata is written and read by nobody

`packages/system/vm-default-images/templates/dv.yaml` attaches six annotations to every
`DataVolume`: `os-family`, `os-name`, `os-version`,
`architecture`, `description`, `name`.

Nobody reads them. A search over the whole tree (`*.go`, `*.ts`, `*.tsx`, `*.yaml`)
excluding the template that writes them gives **zero** matches. Both
consumers take only the PVC name:

* `pkg/registry/core/option/providers.go`, `imageProvider`: `OptionItem{Value:
  strings.TrimPrefix(name, "vm-default-images-")}`;
* the console, `SourceField.tsx`: `pvc.metadata.name.slice(PREFIX.length)`.

Practical consequence: marking an image as "arm64" or giving it a description
is technically possible, but it is not visible in the selection interface: only the name is there.
For the catalog this matters: an image with an emulator is indistinguishable from
an ordinary one except by name.

This is not our bug; it is worth filing an issue upstream.

## 4. Golden image names are a flat cluster-wide namespace

The images live in `cozy-public` under the flat name `vm-default-images-<name>`.
A third-party package publishing an image can silently overwrite a platform image,
for the whole cluster. There is no check for this upstream.

The catalog has its own safeguard: a mandatory prefix (`namePrefix`, by
default `fs-`), a comparison of the final names against the list of the platform's sixteen images,
and a refusal on a match or on a duplicate within its own list. All three branches
were checked with mutations; it was also checked separately that the safeguard is not too broad: a name with
the same prefix but not matching passes.

## 5. A component without an `install` block is not installed as a release

`internal/operator/package_reconciler.go`: "Skip components without Install
section". A component without `install` materialises as an `ExternalArtifact` and
remains available for reference from an `ApplicationDefinition`, but does not get
its own release.

That is the pattern for applications: connecting a repository should not deploy
anything by itself. Components with `install` (catalog descriptions, image publishing)
are installed once.

## 6. A second source variant would send the whole catalog into the void

The artifact name is formed as `<source>-<variant>-<component>`
(`internal/marketplace/naming`), and `ApplicationDefinition.release.chartRef`
refers to exactly one name. A second variant in the `PackageSource` would create a second
set of artifacts that nobody refers to, while the catalog's references would remain
tied to the first.

Checked: **all one hundred** of the platform's own sources have exactly one variant.

That is why the "multi-part environment" is made not as a second variant but as a
meta-application: a parent chart renders `HelmRelease` objects for components of the same
repository. This is the only composition method found in the platform:
it is how `harbor` is assembled (`packages/apps/harbor/templates/harbor.yaml`).

## 7. The application description has no place for documentation

`ApplicationDefinitionDashboard` contains `Singular`, `Plural`, `Name`,
`SingularResource`, `Weight`, `Description`, `Icon`, `Category`, `Tags`,
`Tabs`, `KeysOrder`, `Module`. There is no field for a link to a guide.

So documentation here is an ordinary part of the environment: the `handbook` component
serves it itself and is installed alongside the application. It works even without building an image:
the pages can be set directly in the values, and then the course book comes up on
stock unprivileged nginx.

A side detail that cost some debugging: multi-line free text cannot
be put into a YAML literal block: each of its lines lands in the document at its own
indentation level. The pages are encoded via `toJson`. Checked with a mutation:
line breaks survive the placement, and markup inside the text is escaped rather than
executed.

## What the Cozystack validator does not check

`cozypkg validate` looks at the repository structure and the `chartRef` in
`ApplicationDefinition`. It does not reach two things, and they are covered by our own
checks:

* **the meta-application's references**: the `chartRef` values inside `HelmRelease` objects rendered by
  the parent chart. If a name drifts, the meta-application will silently install nothing;
* **divergence of the application's schema** in the catalog from the chart's schema. Eliminated at
  the root: the schemas are not written by hand; `tools/gen-appdefs.py` takes them straight from
  `values.schema.json`.

In total 35 checks, 9 of them mutations. It was checked separately that the suite can
go red: a deliberate breakage of the artifact prefix gives `passed 34, failed 1` and
exit code 1.

## Status

Three repositories: machines, languages, images. The standard validator: zero errors for
each. The images have one warning, and it is intentional: the component is
privileged, and the operator must see that.

Nothing has been published: the registry, images and signatures are marked `REPLACE-ME`.
