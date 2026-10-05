#!/usr/bin/env python3
"""Radio end to end: two Oberon machines talk over Wirth's Net.

Project Oberon networks its stations through an nRF24L01+ radio (SCC.Mod) and
the Net protocol on top of it. Here two qemu-system-risc5 machines and the
relay (qemu/radio/relay.py) run in containers on one Docker network:

  1. machine A takes the name alice (System.SetUser reads it from the keyboard)
     and starts the Net server;
  2. machine B starts its server and runs `Net.SendMsg alice Hello over the air`:
     a name request goes out, A answers, B sends the message, A acknowledges;
  3. the message must appear in A's System.Log.

Negative control: the relay stops and B sends again. B already knows A, so
it transmits at once, and nothing may reach A's log: the radio is the only
path between the machines.

The Net module comes from the Project Oberon 2013 sources, compiled with
Norebo against the symbol files of the disk image and installed on it.

  python3 qemu/test/radio_check.py [QEMU tree]   (default ../.qemu-work)
"""
import json, pathlib, shutil, socket, subprocess, sys, tempfile, time, uuid

ROOT = pathlib.Path(__file__).resolve().parents[2]
IMPL = ROOT / "impl"
sys.path.insert(0, str(IMPL / "tools"))
from oberonfs import Image                       # noqa: E402

QEMU = pathlib.Path(sys.argv[1] if len(sys.argv) > 1 else ROOT / ".qemu-work").resolve()
NOREBO = IMPL / "ext" / "norebo"
DISK = IMPL / "ext" / "disk" / "Oberon-2016-08-02.dsk"
FB_BASE, FB_W, FB_H = 0xE7F00, 1024, 768
LOG = (640, 1024, 12, 250)                       # System.Log: x0, x1, y0, y1


def norebo(cwd, *args):
    env = {"NOREBO_PATH": f"{cwd}:{NOREBO}/Norebo:{NOREBO}/Oberon:{NOREBO}/build2",
           "PATH": "/usr/bin:/bin"}
    return subprocess.run([str(NOREBO / "norebo.bin"), *args], cwd=cwd, env=env,
                          capture_output=True, text=True).stdout


def build_disk(work):
    """The stock image with Net compiled against its own symbol files."""
    comp, inst = work / "compile", work / "install"
    comp.mkdir(), inst.mkdir()
    img = Image(DISK)
    files = img.files()
    for m in ("Viewers", "TextFrames", "MenuViewers", "Display", "Fonts", "Texts",
              "Oberon", "Input", "Files", "Kernel", "FileDir", "Modules", "SCC"):
        (comp / f"{m}.smb").write_bytes(img.read(files[f"{m}.smb"]))
    shutil.copy(IMPL / "ext" / "po2013-src" / "Net.Mod", comp)
    out = norebo(comp, "ORP.Compile", "Net.Mod/s")
    if "new symbol file" not in out:
        raise SystemExit("  ❌ Net.Mod did not compile:\n" + out)
    # Installing needs Norebo's own module interfaces, so a separate directory.
    for f in ("Net.rsc", "Net.smb"):
        shutil.copy(comp / f, inst)
    for m in ("VDisk", "VFileDir", "VFiles", "VDiskUtil"):
        shutil.copy(NOREBO / "Norebo" / f"{m}.Mod", inst)
    norebo(inst, "ORP.Compile", "VDisk.Mod/s", "VFileDir.Mod/s", "VFiles.Mod/s", "VDiskUtil.Mod/s")
    shutil.copy(DISK, inst / "disk.dsk")
    norebo(inst, "VDiskUtil.InstallFiles", "disk.dsk", "Net.rsc", "=>", "Net.rsc",
           "Net.smb", "=>", "Net.smb")
    if "Net.rsc" not in Image(inst / "disk.dsk").files():
        raise SystemExit("  ❌ Net.rsc did not reach the disk image")
    for name in ("a", "b"):
        shutil.copy(inst / "disk.dsk", work / f"{name}.dsk")
        with open(work / f"{name}.dsk", "r+b") as f:
            f.truncate(8 * 1024 * 1024)          # room for the files Oberon writes
    words = [int(x, 16) for x in (IMPL / "rtl" / "prom_sd.mem").read_text().split()]
    (work / "prom.bin").write_bytes(b"".join(w.to_bytes(4, "little") for w in words))
    shutil.copy(ROOT / "qemu" / "radio" / "relay.py", work)


class QMP:
    def __init__(self, port):
        for _ in range(60):
            try:
                self.s = socket.create_connection(("127.0.0.1", port))
                break
            except OSError:
                time.sleep(1)
        self.f = self.s.makefile("rw")
        self._read()
        self.cmd("qmp_capabilities")

    def _read(self):
        while True:
            m = json.loads(self.f.readline())
            if "event" not in m:
                return m

    def cmd(self, name, **args):
        self.f.write(json.dumps({"execute": name, "arguments": args} if args else
                                {"execute": name}) + "\n")
        self.f.flush()
        r = self._read()
        if "error" in r:
            raise RuntimeError(r)
        return r

    def events(self, *ev):
        self.cmd("input-send-event", events=list(ev))

    def click(self, x, y, button="left"):
        def ax(v, size):
            for a in range(v * 0x7FFF // size, v * 0x7FFF // size + 64):
                if a * size // 0x7FFF == v:
                    return a
        self.events({"type": "abs", "data": {"axis": "x", "value": ax(x, FB_W)}},
                    {"type": "abs", "data": {"axis": "y", "value": ax(y, FB_H)}})
        for down in (True, False):
            self.events({"type": "btn", "data": {"down": down, "button": button}})
            time.sleep(0.3)

    def type(self, text):
        base = {" ": "spc", "\n": "ret", ".": "dot", "/": "slash", "~": "grave_accent"}
        for ch in text:
            shift = ch.isupper() or ch == "~"
            q = base.get(ch, ch.lower())
            if shift:
                self.events({"type": "key", "data": {"down": True, "key": {"type": "qcode", "data": "shift"}}})
            for down in (True, False):
                self.events({"type": "key", "data": {"down": down, "key": {"type": "qcode", "data": q}}})
            if shift:
                self.events({"type": "key", "data": {"down": False, "key": {"type": "qcode", "data": "shift"}}})
            time.sleep(0.02)

    def log_dark(self, work, tag):
        name = f"fb-{tag}.bin"
        self.cmd("pmemsave", val=FB_BASE, size=FB_W * FB_H // 8, filename=f"/w/{name}")
        time.sleep(0.5)
        raw = (work / name).read_bytes()
        x0, x1, y0, y1 = LOG
        wpl, n = FB_W // 32, 0
        for y in range(y0, y1):
            line = raw[(FB_H - 1 - y) * wpl * 4:(FB_H - y) * wpl * 4]
            for x in range(x0, x1):
                w = int.from_bytes(line[(x // 32) * 4:(x // 32) * 4 + 4], "little")
                n += (w >> (x % 32)) & 1
        return n


def docker(*args, check=True):
    return subprocess.run(["docker", *args], check=check, capture_output=True, text=True).stdout


def main():
    exe = QEMU / "build" / "qemu-system-risc5"
    if not exe.exists():
        raise SystemExit(f"  ❌ no {exe}; run make -C qemu build first")
    work = pathlib.Path(tempfile.mkdtemp(prefix="radio-", dir=str(IMPL / "build")))
    build_disk(work)
    net = f"oberon-air-{uuid.uuid4().hex[:8]}"
    names = {k: f"{net}-{k}" for k in ("relay", "a", "b")}
    docker("network", "create", net)
    try:
        docker("run", "-d", "--name", names["relay"], "--network", net, "--network-alias", "relay",
               "-v", f"{work}:/w", "qemu-build:risc5", "python3 -u /w/relay.py")
        ports = {}
        for m in ("a", "b"):
            docker("run", "-d", "--name", names[m], "--network", net, "-p", "127.0.0.1::4444",
                   "-v", f"{QEMU}:/src:ro", "-v", f"{work}:/w", "-w", "/w", "qemu-build:risc5",
                   f"/src/build/qemu-system-risc5 -machine oberon,radio=air -bios prom.bin "
                   f"-drive if=none,id=sd0,file={m}.dsk,format=raw -display none "
                   f"-chardev udp,id=air,host=relay,port=7524,localaddr=0.0.0.0,localport=7524 "
                   f"-qmp tcp:0.0.0.0:4444,server,wait=off")
            ports[m] = int(docker("port", names[m], "4444").strip().rsplit(":", 1)[1])
        a, b = QMP(ports["a"]), QMP(ports["b"])
        time.sleep(30)                           # boot

        a.click(900, 557)                        # end of System.Tool
        a.type("\nSystem.SetUser ~\nNet.StartServer")
        a.click(680, 569, "middle")              # SetUser now reads the name from the keyboard
        a.type("alice/x\n")
        a.click(680, 581, "middle")
        time.sleep(2)
        before = a.log_dark(work, "a0")

        b.click(900, 557)
        b.type("\nNet.StartServer\nNet.SendMsg alice Hello over the air\nNet.SendMsg alice Second")
        b.click(680, 569, "middle")
        b.click(680, 581, "middle")
        time.sleep(10)
        after = a.log_dark(work, "a1")

        docker("stop", "-t", "1", names["relay"])
        b.click(680, 593, "middle")              # the same partner, no air any more
        time.sleep(10)
        control = a.log_dark(work, "a2")
    finally:
        for n in names.values():
            docker("rm", "-f", n, check=False)
        docker("network", "rm", net, check=False)

    got = after - before
    leaked = control - after
    print(f"  dark pixels in alice's log: {before} before, {after} after the message, "
          f"{control} after a send with the relay stopped")
    # One line of text in the log is a couple of hundred dark pixels.
    ok = got > 100 and leaked == 0
    print("  ✅ the message crossed the air, and nothing without it" if ok else
          "  ❌ the message did not arrive, or arrived without the air")
    if ok:
        shutil.rmtree(work, ignore_errors=True)
    else:
        print(f"  frames kept in {work}")
    return 0 if ok else 1


if __name__ == "__main__":
    sys.exit(main())
