#!/usr/bin/env python3
"""The same model in QEMU (qemu-system-risc5): functional comparison only.

QEMU does not model cycles: it translates RISC5 instructions into host code and runs
them as fast as it can. So this gives only the answer to the question "does the
same system on another implementation of the same machine print the same text", and not
a single number about speed.

The scenario is the same as scripts/lm.src for RTL: the lm/mkdisk.sh image (LM.Mod,
LM.Weights and two commands appended to System.Tool), two middle clicks:
compilation inside the system and generation. Input goes through QMP input-send-event,
the screen is a snapshot of the framebuffer from memory (pmemsave), no display. The text
is compared with the reference via the file LM.Out, which the module writes to the system disk.

Commands sit in System.Tool rather than being typed: when this runner was
written, the first key press hung the system in our QEMU (finding 86, fixed
since; qemu/test/keyboard_check.py now types a command end to end).

  python3 lm/qemu_run.py [QEMU tree directory]   (default ../.qemu-work)
"""
import os, pathlib, shutil, subprocess, sys

HERE = pathlib.Path(__file__).resolve().parent
IMPL = HERE.parent
QEMU = pathlib.Path(sys.argv[1] if len(sys.argv) > 1 else IMPL.parent / ".qemu-work").resolve()
WORK = IMPL / "build" / "lm" / "qemu"
FB_BASE, FB_W, FB_H = 0xE7F00, 1024, 768
FB_BYTES = FB_W * FB_H // 8
# The System.Log viewer on the default screen: right column, from the header to the tool
# viewer (coordinates top to bottom, as in the scripts).
LOG_X0, LOG_X1, LOG_Y0, LOG_Y1 = 640, 1024, 12, 250

def abs_val(v, size):
    # inverse of qemu_input_scale_axis(value, 0, 0x7FFF, 0, size)
    for a in range(v * 0x7FFF // size, v * 0x7FFF // size + 64):
        if a * size // 0x7FFF == v:
            return a
    raise ValueError(v)


def qmp(cmd, args):
    import json
    return json.dumps({"execute": cmd, "arguments": args}) if args else json.dumps({"execute": cmd})


def script():
    """Lines for QMP stdin with pauses: (pause seconds, command)."""
    out = [(1, qmp("qmp_capabilities", None)), (6, None)]     # system boot

    def move(x, y):
        out.append((0.05, qmp("input-send-event", {"events": [
            {"type": "abs", "data": {"axis": "x", "value": abs_val(x, FB_W)}},
            {"type": "abs", "data": {"axis": "y", "value": abs_val(y, FB_H)}}]})))

    def click(x, y, b):
        move(x, y)
        for down in (True, False):
            out.append((0.3, qmp("input-send-event", {"events": [
                {"type": "btn", "data": {"down": down, "button": b}}]})))

    out.append((1, None))
    click(690, 569, "middle")
    out.append((5, None))
    click(690, 581, "middle")
    out.append((20, None))
    out.append((1, qmp("pmemsave", {"val": FB_BASE, "size": FB_BYTES, "filename": "/w/fb.bin"})))
    out.append((1, qmp("quit", None)))
    sh = []
    for pause, cmd in out:
        sh.append(f"sleep {pause}")
        if cmd:
            sh.append("echo '" + cmd.replace("'", "'\\''") + "'")
    return "; ".join(sh)


def fb_rows(raw):
    """Framebuffer -> pixel rows top to bottom (as on screen)."""
    wpl = FB_W // 32
    rows = []
    for y in range(FB_H):
        line = raw[(FB_H - 1 - y) * wpl * 4:(FB_H - y) * wpl * 4]
        bits = []
        for i in range(0, len(line), 4):
            w = int.from_bytes(line[i:i + 4], "little")
            bits += [(w >> b) & 1 for b in range(32)]
        rows.append(bits)
    return rows


def pbm_rows(path):
    """PBM in text form (P1), the way soc_tb writes frames."""
    t = path.read_text().split()
    assert t[0] == "P1"
    w, h = int(t[1]), int(t[2])
    px = [int(v) for v in t[3:3 + w * h]]
    return [px[y * w:(y + 1) * w] for y in range(h)]


def to_pbm(rows, path):
    path.write_text(f"P1\n{FB_W} {FB_H}\n" + "\n".join(" ".join(map(str, r)) for r in rows) + "\n")


def main():
    exe = QEMU / "build" / "qemu-system-risc5"
    if not exe.exists():
        raise SystemExit(f"  ❌ {exe} missing: run make -C qemu build first")
    disk = IMPL / "build" / "lm" / "oberon-lm.dsk"
    if not disk.exists():
        subprocess.check_call(["bash", str(HERE / "mkdisk.sh")])
    WORK.mkdir(parents=True, exist_ok=True)
    shutil.copy(disk, WORK / "oberon.dsk")
    # ⚠ The image must be grown in advance. The file system takes new sectors past
    # the end of the reference image (~1 MB); the C emulator and the RTL bench write there
    # via fseek and the file grows by itself, but QEMU's raw drive has a fixed
    # size: writes past the end are rejected, and the system later fails an
    # ASSERT in Files reading the header of a file that does not exist. 8 MB is plenty.
    with open(WORK / "oberon.dsk", "r+b") as f:
        f.truncate(8 * 1024 * 1024)
    words = [int(x, 16) for x in (IMPL / "rtl" / "prom_sd.mem").read_text().split()]
    (WORK / "prom.bin").write_bytes(b"".join(w.to_bytes(4, "little") for w in words))
    (WORK / "fb.bin").unlink(missing_ok=True)
    cmd = (f"({script()}) | timeout 120 /src/build/qemu-system-risc5 -M oberon -bios /w/prom.bin "
           f"-drive if=none,id=sd0,file=/w/oberon.dsk,format=raw -display none -serial none "
           f"-qmp stdio {'-d guest_errors -D /w/qemu.log ' if os.environ.get('LM_QEMU_DEBUG') else ''}"
           f"> /w/qmp.log 2>&1")
    subprocess.run(["docker", "run", "--rm", "-v", f"{QEMU}:/src:ro", "-v", f"{WORK}:/w",
                    "qemu-build:risc5", cmd], check=False)
    fb = WORK / "fb.bin"
    if not fb.exists() or fb.stat().st_size != FB_BYTES:
        print((WORK / "qmp.log").read_text()[-2000:])
        raise SystemExit("  ❌ QEMU did not return the framebuffer")
    rows = fb_rows(fb.read_bytes())
    to_pbm(rows, WORK / "lm_qemu.pbm")
    print(f"  QEMU frame: {WORK / 'lm_qemu.pbm'}")
    # The main comparison is the text: the module also writes it to LM.Out on the system disk.
    sys.stdout.flush()
    rc = subprocess.run([sys.executable, str(HERE / "outcheck.py"), str(WORK / "oberon.dsk")]).returncode
    ref = IMPL / "build" / "lm" / "lm_rtl.pbm"
    if ref.exists():
        rr = pbm_rows(ref)
        diff = sum(rows[y][x] != rr[y][x] for y in range(LOG_Y0, LOG_Y1) for x in range(LOG_X0, LOG_X1))
        full = sum(a != b for ra, rb in zip(rows, rr) for a, b in zip(ra, rb))
        print(f"  vs the RTL frame (make lm-system): System.Log viewer: {diff} pixels "
              f"differ, whole frame: {full}")
    print("  ✅ QEMU printed the same text" if rc == 0 else "  ❌ text differs")
    return rc


if __name__ == "__main__":
    sys.exit(main())
