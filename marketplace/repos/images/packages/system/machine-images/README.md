[Русская версия](README.ru.md)

# machine-images

Boot images of machines that become visible across the whole cluster, in the
image selection field of a virtual machine's disk.

## Why this is a privileged thing

Images go into the shared `cozy-public` namespace, where every tenant sees
them. Names there are flat: `vm-default-images-<name>`. That is why the
component is marked `install.privileged: true`, and the standard Cozystack
validator emits a warning about it: the operator must see what they are
connecting.

The name prefix (`namePrefix`, `fs-` by default) is mandatory. Without it a
catalog entry will sooner or later overwrite someone else's image for the whole
cluster. The chart checks the resulting names against the list of sixteen
images the platform itself publishes and fails on a match, and also on a
duplicate within its own list.

## About "new architectures for KubeVirt"

The list of architectures in KubeVirt is closed. In the `KubeVirt` resource CRD
the `architectureConfiguration` field has exactly four branches: `amd64`,
`arm64`, `ppc64le` (deprecated) and `s390x`. A fifth entry cannot be added there
without changing KubeVirt itself, and no catalog package can do that.

So an architecture that never existed in silicon arrives here not as a KubeVirt
architecture but as a boot image with its emulator running inside. The machine
in the cluster is ordinary; what is unusual is what it imitates. For such an
image the `emulates` field is filled in, and it ends up in the
`paleocomputing.io/emulates` annotation.

The second way to solve the same task is a container with the emulator (this is
how `oberon-lab` in the machines repository is built). It needs neither
cluster-level trust nor a ready boot image.

| parameter | default | what it does |
|---|---|---|
| `namePrefix` | `fs-` | mandatory prefix for image names |
| `images` | `[]` | images: `name`, `url`, `storage`, `os`, `architecture`, `emulates` |
| `storageClass` | `replicated` | storage class for all images |
