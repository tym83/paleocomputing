[Русская версия](FINDING-43-virt-launcher.ru.md)

# Finding 43. Oberon runs inside the virt-launcher image

A `virt-launcher` image was built with a libvirt that knows the RISC5 architecture, and our
emulator inside. A domain was started in it, and inside the domain is the real Oberon
system: the framebuffer **matched byte for byte** with the buffer of the same system on
the real circuit description. 98 304 bytes, 18 607 dots.

This is the very image that KubeVirt starts for every VM. That is,
what was checked is not "possible in principle" but "works where it will have to work".

## The libvirt patch grew to five places

There were four on version 10, there are five on 11.9, and **three of the five were pointed out by the
compiler itself**:

* the machine table is guarded by a check that its length matches the enumeration;
* the case analysis is built with `-Werror=switch-enum`;
* about PCI, libvirt spoke up at runtime.

Not once did they have to be hunted down by hand.

## About PCI: instructive

On libvirt 10 the refusal was "No PCI buses available": libvirt added devices
that need a bus. On 11.9 the refusal is **the opposite**:

```
Machine type 'oberon' supports PCI but no PCI controller added
```

The reason: `qemuDomainSupportsPCI` answers "yes" for an unfamiliar architecture;
the special cases there are only for ARM and RISC-V. We had to state outright that Wirth's machine
has no PCI bus at all.

## A patch that knows how to fail to apply

The script checks each substitution and **stops the build** if the place is not
found. This paid off immediately: the case-analysis branch from 10.x moved to
a different file in 11.9, and the build stopped with a clear message instead of building
libvirt with half the patch.

A patch that silently failed to apply is worse than a missing one: everything builds, but the architecture
is not there, and you look for the cause at runtime.

## Three traps of the base image

**The emulator cannot be brought in prebuilt.** The image is based on CentOS 9, and we built
on Ubuntu: `GLIBC_2.38 not found`. It is built in the same image as libvirt.

**A fresh QEMU needs Python 3.12**; CentOS 9 ships 3.9. It is installed alongside and
specified explicitly: the system one must not be replaced, the package manager depends on it.

**The `strings` check was a no-op**: the image simply has no such utility, and the check
silently returned zero. This came to light with a control experiment: searching for the certainly
present `riscv32` and `aarch64` gave the same zero.

## State of the chain

| layer | our own | confirmed by |
|---|---|---|
| QEMU | ✅ our target | 1.5 million instructions, screen byte for byte |
| libvirt | ✅ patch in 5 places | the domain runs |
| **virt-launcher** | ✅ **our own image** | **Oberon runs inside** |
| KubeVirt | ❌ not needed | the hook is standard |
| Cozystack | ❌ not needed | `imageRegistry` is a setting |

One thing remains: publish the image and run it in the cluster end to end.
