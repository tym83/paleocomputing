[Русская версия](README.ru.md)

# The Wirth machine in KubeVirt, without a fork

The supported extension point `OnDefineDomain`: a third-party container
receives the domain description before launch and returns a modified one.
KubeVirt does not need patching at all.

**Install it yourself, without Cozystack**: step by step in
[GUIDE.md](GUIDE.md) (Russian: [GUIDE.ru.md](GUIDE.ru.md)): the `Sidecar`
feature gate, replacing the launcher, the machine chart with plain Helm, the
screen through `virtctl vnc`.

## Verified live

The description KubeVirt gives an ordinary VM (architecture x86_64, machine
q35, domain type `kvm`, disks and network on PCI) was run through the hook and
fed to a real libvirt:

```
Domain 'default_testvm' started
```

The machine that started is a real Oberon: its framebuffer **matched byte for
byte** the framebuffer of the same system on the real circuit description.
98,304 bytes, 18,607 black pixels.

## What the hook changes

| | from | to |
|---|---|---|
| domain type | `kvm` | `qemu` |
| architecture | `x86_64` | `risc5` |
| machine | `q35` | `oberon` |
| emulator | `/usr/libexec/qemu-kvm` | ours, `/usr/local/bin/qemu-system-risc5` from the `virt-launcher` image |
| devices | disks, network, ports, channels | removed |
| ROM and disk | — | added directly, from the shared volume: `/payload/prom.bin`, `/payload/oberon.dsk` |

**The domain type matters on its own.** KubeVirt declares `kvm` because it
expects an ordinary VM with hardware acceleration. A foreign architecture never
has it: instructions are translated on the fly. libvirt checks this and
rejects it: *"Emulator does not support virt type kvm"*.

**Listing the devices is not enough; all of them must go.** The Wirth machine
has no PCI bus, and libvirt answers *"No PCI buses available"* not only for
the disk and network, but also for the serial ports, guest agent channels and
the random number source that KubeVirt adds on its own.

## Where the emulator and images come from

The emulator sits in the `virt-launcher` image itself, next to the libvirt
that queries it.

The ROM and disk come from a volume declared on the hook with
`sharedComputePath` (`/payload`): KubeVirt mounts such a volume **both into the
hook and into the container where libvirt runs**. That is exactly where the
catalog package puts the images.

## What still needs a custom build

Only **libvirt**: it asks the emulator itself for the architecture and rejects
an unfamiliar one. The patch is about ten lines in five places, lives in
`qemu/libvirt/`, and is verified. In practice this means our own
`virt-launcher` image and switching the registry by a setting; neither KubeVirt
nor Cozystack is forked.

## Build and run in a cluster

The `virt-launcher` image with the patched libvirt and the emulator is built in
CI (`.github/workflows/publish.yml`, job `launcher`, via `build.sh`) with the
tag `virt-launcher:v1.8.4-risc5-<release>`: the KubeVirt version in the tag
must match the cluster's (finding 44). The cluster also needs the `Sidecar`
feature gate enabled.

The catalog machine (`OberonVM`) has been run in the cluster this way,
including with `hardware: chk`, when the hook adds `-machine chk=on`.

The hook lives in two places: here, and as a copy in the catalog package
(`marketplace/repos/machines/packages/apps/oberon-vm/files/`), because Helm does
not read files outside the chart. The copies must match byte for byte; CI
checks this (`.github/workflows/check.yml`, step "Hook").
