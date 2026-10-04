[Русская версия](FINDING-48-full-chain.ru.md)

# Finding 48. Wirth's machine installs from the marketplace in a Cozystack tenant

The chain is closed end to end. A tenant installs an application from the
catalog and gets a working machine with an architecture the platform does not
have:

```
kubectl apply -f - <<EOF
apiVersion: apps.cozystack.io/v1alpha1
kind: OberonVM
metadata: {name: wirth}
spec: {memory: 128Mi}
EOF
```

Inside is a domain `arch='risc5' machine='oberon'` with our emulator, and in it
the 1986 Oberon system. The framebuffer **matched byte for byte** the
framebuffer of the same system running on the real circuit description: 98,304
bytes, 18,607 pixels.

## What was required and what was not

| layer | our own | why |
|---|---|---|
| QEMU | ✅ RISC5 target | otherwise there is nothing to execute |
| libvirt | ✅ ~10-line patch | the architecture is queried from the emulator |
| virt-launcher | ✅ our own image | libvirt lives in it |
| KubeVirt | ❌ | `OnDefineDomain` is a standard extension point |
| hook image | ❌ | the standard wrapper runs a script from a ConfigMap |
| Cozystack | ❌ | the application is an ordinary one |

**Only libvirt is forked**, and the change in it is three table entries plus two
branches that the compiler itself pointed out.

## Two cluster-level prerequisites

A tenant cannot set them, and that is not a flaw but the shape of the thing:

1. **the `Sidecar` feature gate**: without it the hook does not start;
2. **a `virt-launcher` image with patched libvirt**: the architecture must be
   known to it, not to the machine description.

The cluster agrees once, and from then on **any tenant installs any machine
from the catalog**. Like a driver package: the cluster distributes the kernel,
and anyone can use it.

It was verified that this agreement is safe: an ordinary Ubuntu boots on our
image, and the cluster's 50 machines were not affected.

## What it cost

Installing one machine into one tenant exposed **four bugs in a row**, invisible
to all previous runs:

* the application was declared in only one of two places, so there is no
  artifact;
* switching the catalog tag does not update the list of components;
* the volume arrives owned by root, while the image runs as a regular user;
* the fill job is not ordered and is not recreated.

Each looked like success. The common thread is in Finding 47.

Practical conclusion for the whole series: **the last step, the one that looks
like a formality, is the most useful check**. Everything before it checked
parts.
