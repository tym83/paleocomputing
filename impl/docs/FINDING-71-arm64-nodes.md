[Русская версия](FINDING-71-arm64-nodes.ru.md)

# Finding 71. The Wirth machine on arm64 nodes: three holes visible only on a live node

The `virt-launcher` image with the RISC5 machine was built for amd64 only. On
a cluster of arm64 nodes it would not have started a single virtual machine,
and not only Oberon: our launcher replaces the stock one for everyone. Now the
release images are multi-architecture, and the end-to-end check on kind runs
on both architectures, on native runners.

## Two architectures that are easy to confuse

* **The machine architecture** is RISC5, emulated by QEMU. It does not depend
  on the hardware.
* **The node architecture** is amd64 or arm64, the real processor of the
  server. The emulator and libvirt are ordinary programs and must be built for
  each node processor.

The first is listed in `kubevirt/targets.txt`, the second in
`kubevirt/platforms.txt`.

## What turned up along the way

The launcher build for arm64 succeeded right away: the bases (the stock
`virt-launcher` of both KubeVirt versions and CentOS Stream 9) are also
released for arm64. The image content check (emulator, machine, architecture
in libvirt, `chk`) was green. That turned out not to be enough. The
end-to-end check on kind under arm64 stopped three times:

1. **The image with the ROM and disk was amd64 only.** The volume population
   job could not pull `oberon-run` ("no match for platform in manifest"), and
   the machine was left without files. `oberon-lab` and `oberon-web` had the
   same gap.
2. **The `emsdk` image is released for amd64 only.** The `oberon-web` build
   for arm64 failed on its first command ("exec format error"). The output of
   that stage is WebAssembly and static files, which do not depend on the
   node's processor: the stage now runs on the builder's processor
   (`FROM --platform=$BUILDPLATFORM`), and only the thin nginx layer is built
   for arm64.
3. **On arm64, KubeVirt always declares UEFI firmware.** libvirt turns the
   AAVMF loader and NVRAM into `-machine oberon,…,pflash0=…,pflash1=…`. The
   Wirth machine has no flash memory, and QEMU exited right after starting.
   On amd64 this is not visible: there KubeVirt boots BIOS by default and
   does not declare firmware. The hook sidecar now removes the loader, the
   NVRAM and the `firmware` attribute; the machine takes its own firmware from
   the passport (the `firmware` role).

None of the three is visible to a static check or to an image content check:
only a live node of the right architecture shows them.

## What was verified

`kubevirt-e2e.yml`, KubeVirt v1.8.4 and v1.9.0 × amd64 and arm64, native
GitHub runners: the `oberon-vm` machine from the catalog, the screen via
`virtctl vnc` matched the reference, `dark_pixels=18607` on all four.

## Protection on other architectures

If among the nodes where KubeVirt runs virtual machines
(`kubevirt.io/schedulable=true`) there is a node of an architecture the image
is not built for (`s390x`, `ppc64le`), the platform component leaves the
launcher alone: state `Unsupported`, the stock launcher. The list of image
architectures is the `# arch:` line in the component's table, written by
`gen-launcher-table.py` from `kubevirt/platforms.txt`. Verified against the
fake API (`launcher_test.py`) with a negative control: without the protection,
two cases turn red.

## How the release works

Each architecture is built on a native runner under the tag `<tag>-<arch>`;
`tools/image-index.sh` merges the builds into one index under the release tag,
refuses if any architecture from the list is missing from the index, and
signs the index. Building libvirt and QEMU for a foreign processor under
emulation would take hours, hence native runners rather than
`--platform linux/amd64,linux/arm64` on one.
