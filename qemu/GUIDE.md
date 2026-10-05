# Oberon in plain QEMU

*Русская версия: [GUIDE.ru.md](GUIDE.ru.md)*

`qemu-system-risc5` is our own QEMU target for Wirth's RISC5 machine. It is
not in upstream QEMU; this directory grafts it onto a pinned QEMU commit. It
runs the unmodified Oberon System: the framebuffer after boot matches the RTL
machine byte for byte (finding 38), keyboard and mouse behave as on the RTL
(finding 39), floating point is checked against the reference `risc-fp.c`
(`make fp`).

## Build

You need Docker (or Podman aliased as `docker`), `git` and `make`. The QEMU
build dependencies stay in a container:

```sh
git clone https://github.com/tym83/paleocomputing
cd paleocomputing
make -C qemu build
```

This clones QEMU at `QEMU_REF` (pinned in [`Makefile`](Makefile)) into
`.qemu-work/`, grafts the target with [`graft.sh`](graft.sh) and builds it in a
Debian container. The result is `.qemu-work/build/qemu-system-risc5`.

* It is a **Linux** binary for your CPU architecture, linked against Debian
  trixie. On another Linux, or on macOS, run it inside the same container —
  see below.
* The tree is configured once. A `.qemu-work/build` left from an older
  checkout keeps its old options (an early one had no VNC: `-vnc: invalid
  option`); remove `.qemu-work/build` to reconfigure.
* On macOS with Colima only your home directory is shared with containers:
  keep the checkout (or `QEMU_SRC=...`) under `~`.

Your own toolchain works too: take QEMU at the same commit, run
`qemu/graft.sh <qemu tree>`, then

```sh
./configure --target-list=risc5-softmmu --enable-vnc --enable-pixman
ninja -C build qemu-system-risc5
```

Released QEMU versions do not build: the target follows the header layout of
the pinned commit (`hw/core/`, `system/`), which 10.2 and older do not have.

## ROM and disk

The machine needs two files: the boot ROM `prom.bin` (2 KB) and the Oberon
System disk image `oberon.dsk`. Both come from this repository:

```sh
python3 -c "import struct; \
  ws=[int(x,16) for x in open('impl/rtl/prom_sd.mem').read().split()]; \
  open('prom.bin','wb').write(b''.join(struct.pack('<I',w) for w in ws))"
cp impl/ext/disk/Oberon-2016-08-02.dsk oberon.dsk
```

or from the published image, ready made:

```sh
docker create --name oberon-payload ghcr.io/tym83/paleocomputing/oberon-run:v0.1.18
docker cp oberon-payload:/opt/oberon/payload/prom.bin .
docker cp oberon-payload:/opt/oberon/payload/oberon.dsk .
docker rm oberon-payload
```

The machine writes to `oberon.dsk`: keep a copy if you want to start over.

Grow the image before the first run. The shipped image is about 1 MB, and the
Oberon file system places new files in sectors past its end, while QEMU refuses
writes beyond the end of a raw disk file. On a disk of the original size a
larger saved file is silently lost and leaves a directory entry that points
nowhere (finding 86). Growing the file adds zeros at the end and keeps the
content; 8 MB is the size the catalog machine uses:

```sh
truncate -s 8M oberon.dsk
```

## Run

```sh
qemu-system-risc5 -machine oberon -bios prom.bin \
  -drive if=none,id=sd0,file=oberon.dsk,format=raw \
  -vnc :0
```

and connect a VNC viewer to `127.0.0.1:5900`. The screen is 1024×768, black
on white. Our build has no windowing display (no GTK or SDL), so the screen
is VNC only.

Inside the build container, from the repository root:

```sh
docker run --rm -p 127.0.0.1:5900:5900 \
  -v "$PWD/.qemu-work:/src" -v "$PWD:/work" -w /work \
  qemu-build:risc5 \
  '/src/build/qemu-system-risc5 -machine oberon -bios prom.bin -drive if=none,id=sd0,file=oberon.dsk,format=raw -vnc :0'
```

| option | |
|---|---|
| `-machine oberon,chk=on` | the processor with the hardware array bounds check (CHK); the stock system runs on both |
| `-bios prom.bin` | the boot ROM |
| `-drive if=none,id=sd0,...` | the SD card; the board looks it up by id `sd0` |
| `-vnc :0` | screen, keyboard and mouse |

Memory is fixed by the board: the whole 24-bit address space below the I/O
page, just under 16 MB. `-m` is not needed.

The mouse is absolute; a middle click on a command name executes it — try
`System.ShowModules` in the tool window.

The keyboard works over VNC, Shift included, and so do key events sent through
the QEMU monitor protocol (QMP `input-send-event`); before finding 86 the first
key press hung the system. A program that types a long text should leave a few
milliseconds between characters: the machine handles keys more slowly than a
script can send them, and the 4096-byte keyboard queue only absorbs bursts. The
Oberon editor itself drops keys when the caret reaches the bottom line of a
viewer, so long texts are easier to insert bottom-up at the top of the text.

To check that the run is the real thing without looking: connect
[`../kubevirt/vnc_snapshot.py`](../kubevirt/vnc_snapshot.py) instead of a
viewer. After boot it prints `dark_pixels=18607`, the same number as the RTL
machine. Booting takes up to a minute in software emulation; an earlier
snapshot shows a boot stage and a different number:

```sh
python3 kubevirt/vnc_snapshot.py 127.0.0.1 5900 screen.ppm
```

## Under libvirt

libvirt asks the emulator for its architecture and rejects one it does not
know, so it needs the patch in [`libvirt/`](libvirt/) — about ten lines,
generated from [`../kubevirt/targets.txt`](../kubevirt/targets.txt). A working
domain definition is in [`../kubevirt/test-in-image.sh`](../kubevirt/test-in-image.sh);
the image built by [`../kubevirt/build.sh`](../kubevirt/build.sh) has the
patched libvirt and the emulator together, and runs it.

In Kubernetes: [`../kubevirt/GUIDE.md`](../kubevirt/GUIDE.md).

## Checks

| | |
|---|---|
| `make -C qemu check` | the instruction decoder passes QEMU's own generator |
| `make -C qemu diff` | QEMU against the model taken from the real RTL, instruction by instruction |
| `make -C qemu fp` | floating point against `risc-fp.c` |
