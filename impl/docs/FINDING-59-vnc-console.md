[Русская версия](FINDING-59-vnc-console.ru.md)

# Finding 59. The machine was running in the cluster, but nobody had seen its screen

A tenant installs OberonVM from the catalog, the machine boots, and that is it. The
Cozystack dashboard opens the virtual machine console over VNC, and so does `virtctl
vnc`. The Oberon console was empty.

## Why

The hook stripped everything that needs a PCI bus out of the machine description, and
along with the devices it removed `graphics`. The emulator was started with
`-display none`:

```
... -display none -no-user-config -nodefaults ...
```

But `graphics` is not a device on the bus. It is a way to show the screen: libvirt
turns it into `-vnc unix:<socket>`, and KubeVirt attaches the console to that socket.
The socket lives in a directory that KubeVirt prepares in advance:

```
/var/run/kubevirt-private/<machine uid>/virt-vnc
```

The directory existed in the pod, empty: KubeVirt was waiting for a screen that did
not exist.

Wirth's machine has a built-in video card: the framebuffer is a memory region that the
QEMU target already exposes as the console. It needs no `video` device, and there
still is none.

## How it was verified

Inside the pod of a running machine, next to it, a test domain was set up: a copy of
the description on a copy of the disk, plus

```
<graphics type='vnc'><listen type='socket' socket='/tmp/t-vnc'/></graphics>
```

1. libvirt accepted the description: `graphics` with `video none` is allowed.
2. QEMU did not start: `could not find keymap file for language 'en-us'`.
   Only a single binary was put into the launcher image, with no keyboard keymaps,
   and VNC does not start without a keymap. The keymaps are right in the QEMU
   sources, `pc-bios/keymaps/`.
3. With a keymap (for the experiment, via `-L` pointing at a custom directory) the
   machine started, the socket appeared, `query-vnc` shows `enabled: true`, and a
   screenshot through the same console shows the Oberon V5 system with the
   `System.Log` and `System.Tool` windows (`qemu-cluster-vnc.png`).

## What changed

* The hook keeps `graphics type="vnc"` together with the socket address and removes
  other kinds of display (SPICE).
* The launcher image ships the keymaps in `/usr/local/share/qemu/keymaps/`; the image
  content check at release requires `en-us`.
* The hook test checks that VNC remains with the KubeVirt socket and that SPICE is
  gone; against the old hook it fails exactly on VNC. The previous check "everything
  that needs PCI is removed" treated `graphics` as a PCI device, and that was the
  wrong assumption.

## Common thread

The machine "worked" by every sign we looked at: the pod was running, the domain was
`running`, the framebuffer was non-empty. None of them answered the user's question:
"where is the screen?". Verification has to follow the path a person will take.

## Addendum: the user path has been walked

After the release with the fix, the machine `wirth-chk` was installed from the catalog
again. The emulator in the cluster is started like this:

```
-vnc vnc=unix:/var/run/kubevirt-private/<uid>/virt-vnc,audiodev=audio1
-machine chk=on
```

The screen was captured not from inside the pod but through the KubeVirt API `vnc`
subresource, the same one that opens the dashboard console, and **with tenant
permissions** (`virtctl vnc --proxy-only` with the tenant kubeconfig plus
`kubevirt/vnc_snapshot.py`):

```
RFB 003.008 name='QEMU (tenant-sandbox_oberon-vm-oberon-vm-wirth-chk)' 1024x768 dark_pixels=18607
```

18607 dark pixels is exactly the reference screen of a booted Oberon from Finding 48.
The `qemu-cluster-vnc.png` screenshot was replaced with this one.

Along the way: the `virtctl vnc` proxy accepts one connection and exits. The first
attempt checked the port with `nc -z` and used up the connection that way.
