#!/usr/bin/env python3
"""Keyboard end to end: type a command into the running system and run it.

The system boots in qemu-system-risc5, a left click puts the caret at the end
of System.Tool, the keyboard types a new line "System.ShowModules", and a
middle click on it runs the command. The check passes only if a new viewer
with the module list appears below System.Tool, so it needs keys to arrive,
to be decoded with Shift, and the system to stay alive after the first key.

Negative control: the same script without the caret click. The keys then have
no focus to go to, nothing is typed, and the check must see no new viewer.

Both runs read the frame buffer straight from guest memory (pmemsave), so no
display is needed.

  python3 qemu/test/keyboard_check.py [QEMU tree]   (default ../.qemu-work)
"""
import json, pathlib, shutil, subprocess, sys

ROOT = pathlib.Path(__file__).resolve().parents[2]
IMPL = ROOT / "impl"
QEMU = pathlib.Path(sys.argv[1] if len(sys.argv) > 1 else ROOT / ".qemu-work").resolve()
WORK = IMPL / "build" / "qkbd"
FB_BASE, FB_W, FB_H = 0xE7F00, 1024, 768
FB_BYTES = FB_W * FB_H // 8
DISK = ROOT / "impl" / "ext" / "disk" / "Oberon-2016-08-02.dsk"
CMD = "System.ShowModules"
# The module list opens as a new viewer in the lower part of the right column.
VIEW_X0, VIEW_X1, VIEW_Y0, VIEW_Y1 = 640, 1024, 600, 768


def abs_val(v, size):
    # inverse of qemu_input_scale_axis(value, 0, 0x7FFF, 0, size)
    for a in range(v * 0x7FFF // size, v * 0x7FFF // size + 64):
        if a * size // 0x7FFF == v:
            return a
    raise ValueError(v)


def qmp(cmd, args=None):
    return json.dumps({"execute": cmd, "arguments": args} if args else {"execute": cmd})


def qcode(ch):
    if ch.isalpha():
        return ch.lower(), ch.isupper()
    return {".": ("dot", False), "\n": ("ret", False)}[ch]


def script(caret, tag):
    # Generous: under emulation without acceleration the boot takes a while,
    # and events sent before the system polls the devices are simply lost.
    out = [(1, qmp("qmp_capabilities")), (30, None)]         # boot

    def ev(*events):
        out.append((0.05, qmp("input-send-event", {"events": list(events)})))

    def move(x, y):
        ev({"type": "abs", "data": {"axis": "x", "value": abs_val(x, FB_W)}},
           {"type": "abs", "data": {"axis": "y", "value": abs_val(y, FB_H)}})

    def click(x, y, button):
        move(x, y)
        for down in (True, False):
            ev({"type": "btn", "data": {"down": down, "button": button}})
            out.append((0.3, None))

    def key(name, down):
        ev({"type": "key", "data": {"down": down, "key": {"type": "qcode", "data": name}}})

    if caret:
        click(900, 557, "left")                              # end of System.Tool
    for ch in "\n" + CMD:
        name, shift = qcode(ch)
        if shift:
            key("shift", True)
        key(name, True)
        key(name, False)
        if shift:
            key("shift", False)
    out.append((1, None))
    click(680, 569, "middle")                                # the typed line
    out.append((4, None))
    out.append((1, qmp("pmemsave", {"val": FB_BASE, "size": FB_BYTES,
                                    "filename": f"/w/fb-{tag}.bin"})))
    out.append((1, qmp("quit")))
    sh = []
    for pause, cmd in out:
        sh.append(f"sleep {pause}")
        if cmd:
            sh.append("echo '" + cmd.replace("'", "'\\''") + "'")
    return "; ".join(sh)


def dark_in_view(raw):
    wpl = FB_W // 32
    n = 0
    for y in range(VIEW_Y0, VIEW_Y1):
        line = raw[(FB_H - 1 - y) * wpl * 4:(FB_H - y) * wpl * 4]
        for x in range(VIEW_X0, VIEW_X1):
            w = int.from_bytes(line[(x // 32) * 4:(x // 32) * 4 + 4], "little")
            n += (w >> (x % 32)) & 1
    return n


def run(caret):
    exe = QEMU / "build" / "qemu-system-risc5"
    if not exe.exists():
        raise SystemExit(f"  ❌ no {exe}; run make -C qemu build first")
    WORK.mkdir(parents=True, exist_ok=True)
    shutil.copy(DISK, WORK / "oberon.dsk")
    words = [int(x, 16) for x in (IMPL / "rtl" / "prom_sd.mem").read_text().split()]
    (WORK / "prom.bin").write_bytes(b"".join(w.to_bytes(4, "little") for w in words))
    tag = "typed" if caret else "control"
    (WORK / f"fb-{tag}.bin").unlink(missing_ok=True)
    cmd = (f"({script(caret, tag)}) | timeout 180 /src/build/qemu-system-risc5 -M oberon "
           f"-bios /w/prom.bin -drive if=none,id=sd0,file=/w/oberon.dsk,format=raw "
           f"-display none -serial none -qmp stdio > /w/qmp.log 2>&1")
    subprocess.run(["docker", "run", "--rm", "-v", f"{QEMU}:/src:ro", "-v", f"{WORK}:/w",
                    "qemu-build:risc5", cmd], check=False)
    fb = WORK / f"fb-{tag}.bin"
    if not fb.exists() or fb.stat().st_size != FB_BYTES:
        print((WORK / "qmp.log").read_text()[-2000:])
        raise SystemExit("  ❌ QEMU returned no frame buffer")
    return dark_in_view(fb.read_bytes())


def main():
    typed = run(caret=True)
    control = run(caret=False)
    print(f"  dark pixels where the module list opens: typed {typed}, "
          f"no caret (control) {control}")
    # Window borders alone give the same count in both runs; the module list
    # adds well over a thousand dark pixels on top of them.
    ok = typed - control > 1500
    print("  ✅ the typed command ran" if ok else
          "  ❌ the keyboard did not deliver the command, or the control is broken")
    return 0 if ok else 1


if __name__ == "__main__":
    sys.exit(main())
