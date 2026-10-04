[Русская версия](FINDING-40-libvirt.ru.md)

# Finding 40. libvirt asks the emulator itself for the architecture

The experiment was set up on the test machine: libvirt 10.0.0, our `qemu-system-risc5`, a domain
`oberon`. There was one question: can a new architecture be plugged in without patching
anything?

**It cannot.** But the boundary turned out not to be where it was expected, and that changes the plan.

## What the two experiments showed

**Declaring the architecture under its own name**: refused while parsing the domain
description:

```
error: unsupported configuration: Unknown architecture risc5
```

As expected: `virArchFromString` goes through its table and rejects an unfamiliar
name.

**Posing as a familiar architecture** (`arch="riscv32"`, our emulator): refused
deeper, already while probing the binary:

```
internal error: Unknown QEMU arch risc5
Failed to probe capabilities for /usr/bin/qemu-system-risc5
```

This is the main point: **libvirt does not trust the domain description; it asks the
emulator itself** via QMP and gets `risc5` from it, the name under which the target
is registered in QEMU's own QAPI enumeration. It cannot be substituted in the description.

Along the way: the binary has to live where the security rules allow it to be executed
(`/usr/bin`), otherwise the refusal comes back as "permission denied" and masks the real
cause.

## How big the libvirt patch is

Small. An architecture is registered in three places:

| | |
|---|---|
| `src/util/virarch.h` | a value in the enumeration, of which there are currently 67 |
| `src/util/virarch.c` | a row in `virArchData[]`: name, word size, byte order |
| `src/qemu/qemu_capabilities.c` | the default machine in `preferredMachines[]` |

About five lines in total. The last table is guarded by a check that its length matches
the enumeration, so it cannot be forgotten: the build will not pass.

## What this means for the chain

| layer | does it need our own | why |
|---|---|---|
| QEMU | ✅ our target | otherwise there is nothing to execute RISC5 |
| **libvirt** | ✅ **a ~5-line patch** | the architecture is asked of the binary |
| KubeVirt | ❌ **not needed** | the `OnDefineDomain` hook is standard |
| Cozystack | ❌ not needed | `imageRegistry` on the KubeVirt resource |

That is, **only libvirt** requires our own build, not KubeVirt and not the platform.
In practice this means our own `virt-launcher` image, which is where libvirt lives,
and switching the registry by configuration, without forking anything.

## A note on upstream

We cannot contribute the patch to libvirt: their rules reject contributions involving
a language model, and Claude is named explicitly (the finding is recorded separately). So this
is our own build. The GPL allows it.

On the other hand, the patch itself is trivial and contains nothing inventive: three entries in
tables. If upstreaming is ever needed, a human can write it in half an hour, and our
work will remain the specification and the proof that it works.
