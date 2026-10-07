[Русская версия](15-episode-kube.ru.md)

# Episode: Kube, a Kubernetes control plane inside Oberon

Status: working. Kube runs on the Norebo command line, in the real Oberon
system on the RTL of Wirth's machine, in our QEMU target and in an `OberonVM`
in Cozystack. The code is in [`impl/kube/`](impl/kube/), the problems found on
the way are in [finding 86](impl/docs/FINDING-86-qemu-keyboard-byte-load.md).

## Why bother

Kubernetes is usually explained through its scale: thousands of nodes, an API
server, etcd, dozens of controllers, millions of lines of Go. Behind all of it
there is one small idea. You do not tell the system what to do; you write down
what you want to exist, and a set of independent loops keeps comparing what
exists with what was asked for and closes the gap one step at a time. If a pod
dies, nobody has to notice it and restart it: the next pass of the loop simply
sees one pod too few and creates one.

That idea does not need a cluster. It fits into a single module of about three
hundred lines, and it fits naturally into Oberon, a system that one person can
read from the processor up in a few evenings. Kube puts the core of Kubernetes
on that machine, built by the machine's own compiler, so that the whole path
from "I want three replicas" to "three pods are running" can be followed line by
line, with nothing hidden under a framework.

It is also a test of the platform. A program of ten thousand characters that
someone types into the system, saves, compiles and runs is the first serious
work for the keyboard and the disk of our virtual machine, and both turned out
to have defects that a booting system never touched.

## What Kube is

Kube is a minimal control plane written in Oberon-07
([`impl/kube/Kube.Mod`](impl/kube/Kube.Mod)). It has an object store with three
kinds of objects, Deployments, ReplicaSets and Pods, and three controllers:

* the **deployment controller** keeps exactly one ReplicaSet for every
  Deployment and copies the wanted number of replicas and the image into it;
* the **replicaset controller** counts the pods a ReplicaSet owns and creates
  or deletes pods until the count equals `replicas`;
* the **node controller** does the work of the scheduler and the kubelet: it
  puts every unscheduled pod on the least loaded node and then moves it from
  Pending to Running.

The nodes `node-a`, `node-b` and `node-c` are simulated: they are names, and a
pod "runs" on a node because the node controller wrote the node's name into it.
The image is a label as well. Nothing is executed; what is real is the control
loop, which is the part of Kubernetes that makes it Kubernetes.

## How it maps onto Oberon

The mapping turned out to be close, because Oberon already has the one thing a
control plane needs: a central loop that calls background work.

| Kubernetes | Oberon |
|---|---|
| etcd, the object store | the `store` array of records, 256 slots |
| the API and kubectl | commands run with a middle click: `Kube.Apply`, `Kube.Get`, `Kube.DeletePod` |
| a controller's reconcile loop | an `Oberon.Task` in the background ring, next to the system garbage collector |
| kube-controller-manager | `Oberon.Loop`, which calls the tasks of the ring between user events |
| ownerReferences | the `owner` field: a pod is owned by a ReplicaSet, a ReplicaSet by a Deployment |
| cluster nodes | simulated `node-a/b/c` |

`Kube.Start` installs the three controllers as three separate tasks with a
period of 50 ms, in the same ring where the system's garbage collector runs.
From then on `Oberon.Loop` calls them whenever the user is not typing or
clicking, just as kube-controller-manager runs its controllers in a real
cluster. The controllers do not call each other. Each one looks only at the
objects of its own kind and changes only what it owns, and the result of one
pass becomes the input of another controller on its next pass. That is exactly
how the Kubernetes controllers cooperate, through the shared state and not
through messages.

Each controller is level-triggered: it does not react to an event such as "a
pod was deleted", it looks at the current state and corrects it. This is why a
deleted pod comes back without any special code for deletion. The replicaset
controller does not know that anything was deleted; it sees two pods where
three are wanted.

## How to run it

On the command line, in Norebo, an emulator of Wirth's RISC5 without a screen.
There is no `Oberon.Loop` there, so the demo turns the loop by hand:

```sh
cd impl
kube/check.sh
```

The script compiles `Kube.Mod` with the Oberon compiler and runs `Kube.Demo`,
which declares a deployment of three, deletes a pod and then scales the
deployment down to one:

```
== apply deployment web, replicas=3 ==
deployment web  replicas=3  image=nginx
  replicaset web-rs  desired=3
    pod web-rs-0 @node-a Running
    pod web-rs-1 @node-b Running
    pod web-rs-2 @node-c Running
== delete pod web-rs-0, reconcile ==
deployment web  replicas=3  image=nginx
  replicaset web-rs  desired=3
    pod web-rs-3 @node-a Running
    pod web-rs-1 @node-b Running
    pod web-rs-2 @node-c Running
== scale deployment web to 1, reconcile ==
deployment web  replicas=1  image=nginx
  replicaset web-rs  desired=1
    pod web-rs-2 @node-c Running
```

The replacement pod gets a new name, `web-rs-3`, and lands on `node-a`, because
after the deletion that node is the least loaded one.

In the real Oberon system, with windows, on the RTL of Wirth's machine:

```sh
cd impl
kube/system.sh        # build/kube/kube_rtl.png, one to two minutes
```

Here the system compiles `Kube.Mod` by itself, and the reconcile is done by the
background tasks, not by the script. The screenshot is
[`impl/kube/kube-in-oberon.png`](impl/kube/kube-in-oberon.png).

In a live system the commands are run with the middle mouse button (on a
two-button mouse or over VNC it is Alt with a left click):

| command | what it does |
|---|---|
| `Kube.Start` | installs the three controllers |
| `Kube.Apply web 3 nginx` | declares a deployment, or changes the replicas of an existing one |
| `Kube.Get` | prints the tree of deployments, replicasets and pods into the log |
| `Kube.DeletePod "web-rs-0"` | deletes a pod; the next tick recreates it under a new name |
| `Kube.Stop` | removes the controllers; the objects stay |
| `Kube.Run 5` | turns the loop five times by hand, for Norebo |

The pod name in `DeletePod` is in quotes because the Oberon text scanner ends a
name at a hyphen. Without quotes, `Kube.DeletePod web-rs-3` looked for a pod
called `web`, found none, and silently did nothing; this was found while
testing in QEMU and fixed.

## What was verified

| where | what happened |
|---|---|
| Norebo (`kube/check.sh`) | apply 3, delete a pod and see it recreated as `web-rs-3`, scale to 1 |
| the RTL of Wirth's machine (`kube/system.sh`) | the system compiles `Kube.Mod` itself, three controllers are installed, three pods run; `Kube.DeletePod "web-rs-0"` deletes a pod and the next tick recreates it as `web-rs-3` |
| our QEMU target, locally | the module text, 10,212 characters, was typed into the Oberon editor through keyboard events, then saved, compiled inside the system and run; scaling to 1 and to 4 reconciled, and the new pods went to the least loaded nodes |
| Cozystack, a sandbox tenant on the workshop cluster | an `OberonVM` from the catalog; the module was typed over VNC (`virtctl vnc`), saved, compiled inside the system; three controllers, three pods Running |

The last row is the point of the exercise: a Kubernetes control plane written
in a language from 1986, compiled by that language's own compiler, running in
a virtual machine that is itself managed by Kubernetes.

## The road to Cozystack

On the RTL the module reaches the disk by a script that writes it into the
disk image. In a cloud machine that is not an option: the only way in is the
keyboard over VNC. So the module had to be typed, and typing ten thousand
characters into a machine that had so far only been booted and clicked found
five problems. All of them are described in
[finding 86](impl/docs/FINDING-86-qemu-keyboard-byte-load.md) and fixed in
PR #67.

**1. The first key press hung the machine.** In QEMU every device is reached
through I/O ports, and our target declared its ports as accepting only whole
32-bit words. The Oberon keyboard driver, however, reads the key code with a
single-byte load, because the code is a byte. QEMU rejected that access, so
the key never left the queue, the "a key is waiting" flag stayed raised, and
the system read the same key forever. On the real board the low address bits
are ignored and a byte read works, which is why the step-by-step comparison
with the RTL did not catch it: booting never touches the keyboard. The ports
now accept accesses of any size.

**2. Fast input was lost.** Wirth's keyboard controller has a 16-byte queue,
which is plenty for a human typist. A program sending keys over VNC or through
QEMU's control interface is much faster, and one key with Shift takes six bytes
of the queue. At 680 characters per second only 5,359 of the 10,212 characters
arrived. The queue is now 4096 bytes, and a key is put into it whole or not at
all: half a key, for example a release without its prefix, would leave the
system believing that Shift is still held. A larger queue only absorbs bursts,
though. The machine handles keys more slowly than a script can send them, so
the sender has to pace itself; with 5 ms between characters not one was lost.

**3. The editor drops keys at the bottom of a window.** When the caret reaches
the last visible line of a viewer, the Oberon editor loses some key presses and
glues lines together, always at the same line and at any speed. This is how the
editor behaves, and QEMU has nothing to do with it. The workaround is to insert
the lines in reverse order at the top of the text, so the caret never moves
down to the edge.

**4. The sandbox ran an old launcher.** Changes are tested in the sandbox under
the `dev` image tag before a release. That tag is rewritten by every test
build, while cluster nodes pull images with the `IfNotPresent` policy: a node
that already has an image with that tag never asks the registry again. So the
sandbox kept running the emulator from an earlier build, without the keyboard
fix, and the fix looked as if it did not work. The published launcher table and
the machine passport now refer to the images by digest, the hash of the exact
content, so a node fetches exactly the build that was published.

**5. A saved file silently disappeared.** The disk of a cloud machine was the
shipped image, about 1 MB. The Oberon file system places new files in sectors
past the end of that image, and QEMU refuses writes beyond the end of a raw
disk file. A larger file was therefore lost on save, and its directory entry
pointed at nothing. The machine passport now declares the disk size, 8 MiB,
and the job that prepares the volume grows the disk to that size with zeros,
without touching what is already on it. A disk created by an earlier release
is grown the same way.

None of these were visible before, because nobody had used the machine for
work. The keyboard had been tested with a few letters, and the disk had only
ever been read.

## What is next

Both pieces of work that stood here are done: real nodes, several Oberon
machines that talk over Wirth's radio, and rollouts that move pods to a new
ReplicaSet one at a time. They are the
[next episode](16-episode-kube-radio.md).
