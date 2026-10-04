[Русская версия](FINDING-41-libvirt-runs-oberon.ru.md)

# Finding 41. libvirt runs Wirth's machine

The domain is defined, started and running under libvirt. Inside is the real Oberon:
the domain's framebuffer **matched byte for byte** with the buffer of the same system on
the real circuit description under Verilator. 98 304 bytes, 18 607 black dots.

```
<type arch='risc5' machine='oberon'>hvm</type>
<emulator>/usr/local/bin/qemu-system-risc5</emulator>
```

Checked separately: the domain under libvirt and the same emulator launched directly
give **a byte-identical** screen. That is, libvirt distorts nothing; it
just launches.

## What the target was missing

libvirt crashed on a null pointer while probing the emulator. The cause was found by
probing the binary with the same requests: `query-cpu-definitions` answered with a refusal,
"CPU models are not supported by this target".

The refusal was honest: Wirth's machine has neither core generations nor features that
can be enabled. But libvirt is not designed for it. It is cheaper to answer than to patch
someone else's code, all the more so because we do have a model: it is called `risc5-cpu` and is already
registered as an object type.

**A subtlety:** not one function had to be defined but both of those in the stub
(`stubs/qmp-cpu.c`). The linker pulls in the whole object file if even one of its
symbols remains un-overridden; the riscv target does the same.

## What had to be disabled in the domain description

libvirt adds default devices, and they need a PCI bus:

```
XML error: No PCI buses available
```

Wirth's machine has no PCI, no USB, no sound bus. In the description they are disabled
explicitly: `<controller type="usb" model="none"/>`, `<memballoon model="none"/>`,
`<video><model type="none"/></video>`. The ROM and the disk image are supplied directly
via `<qemu:commandline>`: the machine has no conventional firmware.

## Two traps that cost time

**A permission denial masked the real cause.** The emulator was outside the paths
allowed by the security rules, and libvirt said "permission denied" instead of what
was actually happening. Twice: first because of the path, then because of AppArmor.

**I wrote the framebuffer address as a decimal number and computed it wrong:**
950528 instead of 950016 (`0xE7F00`). A miss of 512 bytes, exactly four rows of the
screen. The picture looked right, but the comparison showed 5776 differences, and I
managed to suspect the mouse, the capture point and libvirt itself.

What is instructive: **the byte-for-byte comparison found an error the eye did not see
at all**. A four-row shift on a 1024×768 snapshot is not noticeable, and yet the picture
was the wrong one.

## State of the chain

| layer | our own | confirmed by |
|---|---|---|
| QEMU | ✅ our target | 1.5 million instructions step by step, screen byte for byte |
| libvirt | ✅ 6-line patch | the domain is defined, starts, runs |
| KubeVirt | ❌ not needed | the `OnDefineDomain` hook is standard |
| Cozystack | ❌ not needed | `imageRegistry` on the KubeVirt resource |

Only libvirt requires our own build. The next step is a KubeVirt hook
that will substitute the domain description and the emulator path.
