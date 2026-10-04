[Русская версия](FINDING-65-platform-launcher.ru.md)

# Finding 65. A platform component holds the launcher, and the machine family is data

Until now, the cluster's virt-launcher image was switched by a human: an edit
of `customizeComponents` on the `cozy-kubevirt/kubevirt` resource. A manual
edit has three problems:

* it is global: **every** virtual machine in the cluster starts on this
  image, not only the foreign-architecture ones;
* it must match the KubeVirt version exactly (Finding 44), and after a
  Cozystack upgrade that moves KubeVirt to another version it silently stays
  in place and breaks every machine in the cluster;
* it replaced the whole argument list of virt-controller, which means it also
  pinned the export image, the port and the log level.

## What was done

**The machine family is data.** `kubevirt/targets.txt` lists the
architectures: name, word size, byte order, default machine, and whether
there is PCI. From it are generated the QEMU targets in the image, the libvirt
patches (`patch_libvirt.py` builds them from the table rows instead of a
hardcoded RISC5) and the image checks (`check_image.sh`). A new architecture
is a row in the table, not an edit in four places. The image is named after
the family: `virt-launcher:<kubevirt>-paleo-<release>`, next to the former
`-risc5-` on the same digest.

**A fourth catalog repository, `platform`.** It holds one component,
`kubevirt-paleo-launcher`: a loop that keeps the launcher paired with the
KubeVirt version.

* Its own entry in `spec.customizeComponents.patches`: a JSON Patch of three
  operations: a `test` of the container name, a `test` that `args[0]` is
  `--launcher-image`, and a `replace` of `args[1]` alone. All other arguments
  stay as virt-operator assembled them. If the argument layout ever changes,
  the `test` fails and virt-operator refuses to apply the patch loudly instead
  of substituting the image in place of some other argument; the pass also
  checks the layout on the live virt-controller itself and removes the patch
  on a mismatch.
* The patch list in the CRD is atomic: server-side apply would take ownership
  of all of it. Hence read-modify-write with a precondition on
  `resourceVersion`: on a conflict the pass is repeated on a fresh read, and
  other parties' entries are kept as they were and in the same order.
* If the KubeVirt version is in the table, the patch is in place; if not,
  there is no patch (the stock launcher: foreign machines do not start, all
  others work); if the read is in doubt, nothing is written. If the desired
  state is already in place, nothing is written.
* A single instance (a Deployment with one replica): there must be one writer.
* Permissions: a Role in `cozy-kubevirt` with `resourceNames: [kubevirt]`, no
  ClusterRole. Removal: a `pre-delete` hook that removes the patch.
* The "KubeVirt version → image" table is generated from
  `kubevirt/versions.txt` (`tools/gen-launcher-table.py`), `check.py`
  compares it with the source, and publishing regenerates it for the release
  tag. The catalog job waits for the launcher job, so the table cannot refer
  to an image that does not exist.

## Checks

`tools/launcher_test.py`: 38 cases against a fake API with a real
`resourceVersion` precondition: add, leave alone, remove, keep other parties'
patches, refuse when in doubt, delete only its own; the negative control is
that the fake rejects a stale resource version. It runs from `check.py`, that
is, before every catalog publication as well.

## What to check live

There has been no run in a cluster yet. To do: install the component in
`workshop`, where the manual patch is currently in place; confirm that it
replaced that patch with its own (rather than adding a second one), that
`virt-controller` got the same image, that the machine comes up, and that
removing the component brings back the stock launcher. Keep in mind the race
from Finding 58: machines started during the image switch window may get the
previous image.
