"""Driving a qemu-system-risc5 machine through QMP: clicks, typing, frame buffer.

Shared by the end-to-end tests that need a running Oberon system: the input
goes in as input-send-event, the screen comes back from guest memory with
pmemsave, so no display is needed.
"""
import json, pathlib, socket, subprocess, time

FB_BASE, FB_W, FB_H = 0xE7F00, 1024, 768


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
        base = {" ": "spc", "\n": "ret", ".": "dot", "/": "slash", "~": "grave_accent",
                "-": "minus", '"': "apostrophe", ",": "comma"}
        for ch in text:
            shift = ch.isupper() or ch in '~"'
            q = base.get(ch, ch.lower())
            if shift:
                self.events({"type": "key", "data": {"down": True, "key": {"type": "qcode", "data": "shift"}}})
            for down in (True, False):
                self.events({"type": "key", "data": {"down": down, "key": {"type": "qcode", "data": q}}})
            if shift:
                self.events({"type": "key", "data": {"down": False, "key": {"type": "qcode", "data": "shift"}}})
            time.sleep(0.02)

    def dark(self, work, tag, area):
        name = f"fb-{tag}.bin"
        self.cmd("pmemsave", val=FB_BASE, size=FB_W * FB_H // 8, filename=f"/w/{name}")
        time.sleep(0.5)
        raw = (work / name).read_bytes()
        x0, x1, y0, y1 = area
        wpl, n = FB_W // 32, 0
        for y in range(y0, y1):
            line = raw[(FB_H - 1 - y) * wpl * 4:(FB_H - y) * wpl * 4]
            for x in range(x0, x1):
                w = int.from_bytes(line[(x // 32) * 4:(x // 32) * 4 + 4], "little")
                n += (w >> (x % 32)) & 1
        return n


    def screenshot(self, work, path):
        """The whole screen as a PNG, for looking at a failed run."""
        import struct, zlib
        name = "fb-shot.bin"
        self.cmd("pmemsave", val=FB_BASE, size=FB_W * FB_H // 8, filename=f"/w/{name}")
        time.sleep(0.5)
        raw = (work / name).read_bytes()
        wpl, rows = FB_W // 32, []
        for y in range(FB_H):
            line = raw[(FB_H - 1 - y) * wpl * 4:(FB_H - y) * wpl * 4]
            bits = bytearray()
            for x in range(FB_W):
                w = int.from_bytes(line[(x // 32) * 4:(x // 32) * 4 + 4], "little")
                bits.append(0 if (w >> (x % 32)) & 1 else 255)
            rows.append(b"\0" + bytes(bits))
        def chunk(t, d):
            return struct.pack(">I", len(d)) + t + d + struct.pack(">I", zlib.crc32(t + d))
        png = b"\x89PNG\r\n\x1a\n" + chunk(b"IHDR", struct.pack(">IIBBBBB", FB_W, FB_H, 8, 0, 0, 0, 0))
        png += chunk(b"IDAT", zlib.compress(b"".join(rows))) + chunk(b"IEND", b"")
        pathlib.Path(path).write_bytes(png)


def docker(*args, check=True):
    return subprocess.run(["docker", *args], check=check, capture_output=True, text=True).stdout


