[Русская версия](FINDING-42-kubevirt-hook.ru.md)

# Finding 42. Wirth's machine starts from a description produced by a KubeVirt hook

The chain is closed. The domain description that KubeVirt produces for an **ordinary** VM
(architecture x86_64, machine q35, domain type `kvm`, disks and network on PCI,
serial ports, a guest agent channel, a random number source)
was run through our hook and fed to the real libvirt:

```
Domain 'default_testvm' started
```

The machine that started is the real Oberon: the framebuffer **matched byte for byte** with
the buffer of the same system on the real circuit description. 98 304 bytes, 18 607 dots.

## No KubeVirt fork was needed at all

`OnDefineDomain` is a standard extension point. Moreover, there is no need to write our own image
either: the hook is supplied **as a script in a ConfigMap** and executed by the standard
`sidecar-shim` wrapper. It requires only one thing: an executable named
`onDefineDomain` that prints the modified description.

The emulator is brought in by a volume declared with `sharedComputePath`: KubeVirt mounts
such a volume **both into the hook and into the container where libvirt runs**.

## Two refusals, each one justified

**The domain type.** KubeVirt declares `kvm`, expecting an ordinary VM with
hardware acceleration. For a foreign architecture there is none: instructions are
translated on the fly. libvirt checks and rejects:

```
unsupported configuration: Emulator does not support virt type 'kvm'
```

**Devices.** Replacing the disk and network is not enough: `No PCI buses available` also comes
for the serial ports, channels and random number source that KubeVirt
adds itself. Everything has to be removed and explicit stubs put in.

Both were found because the description was fed to a live libvirt rather than checked
by eye.

## State of the chain

| layer | our own | confirmed by |
|---|---|---|
| QEMU | ✅ our target | 1.5 million instructions step by step, screen byte for byte |
| libvirt | ✅ 6-line patch | the domain is defined and runs |
| KubeVirt | ❌ **not needed** | the hook was tested on a live libvirt |
| Cozystack | ❌ not needed | `imageRegistry` on the KubeVirt resource |

**Only libvirt requires our own build.** In practice: our own
`virt-launcher` image and switching the registry by configuration.

## What does not exist yet

A full run in the cluster: it needs the `Sidecar` feature gate enabled in the
KubeVirt resource and a built `virt-launcher` image with the patched libvirt. The
transformation itself was tested on the real libvirt, and the machine starts from it and
runs, so what remains untested is only the packaging, not the substance.
