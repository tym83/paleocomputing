[Русская версия](FINDING-44-cluster-run.ru.md)

# Finding 44. The RISC5 virtual machine runs in Kubernetes

A full run in the sandbox: k3s, KubeVirt 1.8.4, our `virt-launcher` image, and
a hook from a ConfigMap. The `oberon` VM is in the **Running** state, and inside
it is a real Oberon system: its framebuffer **matched byte for byte** the
framebuffer of the same system running on the real circuit description.
98,304 bytes, 18,607 pixels.

```
<domain type='qemu'>
  <type arch='risc5' machine='oberon'>hvm</type>
  <emulator>/usr/local/bin/qemu-system-risc5</emulator>
```

## No fork was needed anywhere

| layer | what we did |
|---|---|
| KubeVirt | nothing; `OnDefineDomain` is a standard extension point |
| hook image | not needed; the script comes from a ConfigMap |
| virt-launcher | our own image, substituted via `customizeComponents` |
| Cozystack | nothing |

There was no need to override `imageRegistry`: it changes the registry for
**all** KubeVirt images, and we have only one image of our own.
`customizeComponents.patches` edits the `--launcher-image` argument of
virt-controller, which is targeted and supported.

## Four rejections that only showed up here

All four came from real KubeVirt, not from a hand-written domain description.
They are invisible on the bench, because nobody writes such sections by hand.

**ACPI.** `machine type 'oberon' does not support ACPI`. KubeVirt declares
platform features that Wirth's machine does not have.

**CPU count.** `Maximum CPUs greater than specified machine type
limit 1`. KubeVirt sets a limit for CPU hotplug, and libvirt checks it against
the machine's capabilities.

**sysinfo, followed immediately by the opposite rejection.** I removed the
section entirely, and virt-launcher failed with `Domain sysinfo are not
available`: it reads the section after startup. I put it back, and QEMU
rejected `-smbios`: `Option not supported for this target`.

The two requirements pull in opposite directions, and there is one way to
satisfy both: **keep the `sysinfo` section, but remove the `smbios` mode from
`os`**. libvirt derives the `-smbios` argument from the mode, not from the
section.

This is the best illustration of the rule "remove exactly what gets rejected,
and not a line more". A broad sweep broke something that worked.

**Launcher version.** The image must match the KubeVirt version: the launcher
talks to virt-handler over a versioned protocol. We had installed stable
(1.9.0), while the image was built on 1.8.4, so we had to reinstall KubeVirt at
1.8.4, the same version as in the production cluster.

## What is now proven

The new architecture plugs into KubeVirt **from the outside**, with three
things:

1. a `virt-launcher` image with a libvirt that knows the architecture (a patch
   in 5 places);
2. a hook, a script that rewrites the domain description;
3. a volume with the emulator and images, shared with the libvirt container.

None of the four projects is forked.

## State

Sandbox: tenant `tenant-sandbox`, VM `build` (k3s + KubeVirt inside).
The image is published: `ghcr.io/tym83/paleocomputing/virt-launcher:v1.8.4-risc5`.
