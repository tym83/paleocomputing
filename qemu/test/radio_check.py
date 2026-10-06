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
import pathlib, shutil, sys, tempfile, time, uuid

ROOT = pathlib.Path(__file__).resolve().parents[2]
IMPL = ROOT / "impl"
sys.path.insert(0, str(IMPL / "tools"))
from install_modules import install_modules      # noqa: E402
from qmp_machine import QMP, docker               # noqa: E402

QEMU = pathlib.Path(sys.argv[1] if len(sys.argv) > 1 else ROOT / ".qemu-work").resolve()
NOREBO = IMPL / "ext" / "norebo"
DISK = IMPL / "ext" / "disk" / "Oberon-2016-08-02.dsk"
LOG = (640, 1024, 12, 250)                       # System.Log: x0, x1, y0, y1


def build_disk(work):
    """The stock image with Net, the same way the oberon-run image gets it."""
    disk = work / "net.dsk"
    shutil.copy(DISK, disk)
    install_modules(disk, [IMPL / "ext" / "po2013-src" / "Net.Mod"], NOREBO, NOREBO / "norebo.bin")
    for name in ("a", "b"):
        shutil.copy(disk, work / f"{name}.dsk")
        with open(work / f"{name}.dsk", "r+b") as f:
            f.truncate(8 * 1024 * 1024)          # room for the files Oberon writes
    words = [int(x, 16) for x in (IMPL / "rtl" / "prom_sd.mem").read_text().split()]
    (work / "prom.bin").write_bytes(b"".join(w.to_bytes(4, "little") for w in words))
    shutil.copy(ROOT / "qemu" / "radio" / "relay.py", work)


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
        before = a.dark(work, "a0", LOG)

        b.click(900, 557)
        b.type("\nNet.StartServer\nNet.SendMsg alice Hello over the air\nNet.SendMsg alice Second")
        b.click(680, 569, "middle")
        b.click(680, 581, "middle")
        time.sleep(10)
        after = a.dark(work, "a1", LOG)

        docker("stop", "-t", "1", names["relay"])
        b.click(680, 593, "middle")              # the same partner, no air any more
        time.sleep(10)
        control = a.dark(work, "a2", LOG)
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
