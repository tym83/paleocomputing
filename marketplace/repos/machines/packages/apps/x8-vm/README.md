[Русская версия](README.ru.md)

# X8 VM — Dijkstra's THE on the Electrologica X8

The machine Dijkstra's group built THE on, at the Technische Hogeschool
Eindhoven in 1965–68: 27-bit words in ones' complement, 32K words of core, a
drum of 512K words, a console teleprinter and a line printer. The system it
runs is THE, reconstructed in X8 machine code (episode 18 of the series):
six layers, processes that cooperate only through semaphores, and the
segment controller that pages the drum.

## What you get

The console teleprinter on the VNC screen. Each line carries the X8's own
time; the machine runs at its real speed, so the teleprinter prints ten
characters a second, as it did. The line printer prints on the same screen.

THE starts its three user programs by itself: the sieve of Eratosthenes
(pm1), the squares (pm2) and a program that needs the drum (pm3), and next
to them Kubernetes on THE: a control loop of six processes running pods on
two nodes. The operator's keyboard is the VNC keyboard. THE understands:

| line | what it does |
|---|---|
| `pm2 <n>` | answers pm2, which asks how many squares to print |
| `k kill <node>` | Kubernetes on THE: node 1 or 2 stops reporting, its pods move |
| `k scale <n>` | Kubernetes on THE: the deployment gets n replicas |

The same lines can be typed for you at start: the `commands` field takes
them separated by `;`, for example `pm2 12;k scale 5`. The first is typed twelve
seconds of machine time after the tape is read, the others three seconds
apart.

## What the cluster must provide

The same as for every machine of this catalog: the `Sidecar` feature gate in
KubeVirt, and the `virt-launcher` image of the platform component
`kubevirt-paleo-launcher`, whose libvirt knows the architecture `x8` and
which carries `qemu-system-x8`.

## How it works

`qemu-system-x8` runs the X8 core of the episode (a transliteration of X8S,
the X8 simulator of the Mathematisch Centrum, 1971) inside QEMU; the CI
requires THE to print in it exactly what it prints in the reference
emulator. The THE tape arrives on the machine's volume and is the kernel:
QEMU presses LS and IP, and CHARON reads the tape through the IP reader. The
tape is refreshed from each release; nothing else is kept on the volume.

Not reproduced: the plotter, the paper tape punch and the second reader;
THE does not use them.
