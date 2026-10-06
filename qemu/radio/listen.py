#!/usr/bin/env python3
"""A passive station on the air: prints every radio packet it hears.

It joins the relay like a machine (a hello every few seconds) and never sends a
frame. Each frame is the channel and a 32-byte radio payload; the payload starts
with the 8-byte SCC header (valid, dadr, sadr, typ, len as a 4-byte integer),
then up to 24 bytes of data.

Kube's messages (KubeNet) are decoded: 60H heartbeat and 61H assignment, both
[node name, 8 bytes][n][n pod ids]. Others are printed as typ and length.

    python3 qemu/radio/listen.py [relay host] [--port 7524] [--json]

Tests import `frames()` to measure a cluster from outside, without touching it.
"""
import argparse
import json
import socket
import time

HELLO = bytes([0xFF])
KUBE = {0x60: "heartbeat", 0x61: "assign"}


def decode(frame: bytes) -> dict:
    p = frame[1:]
    typ, length = p[3], int.from_bytes(p[4:8], "little")
    msg = {"t": time.time(), "ch": frame[0], "dadr": p[1], "sadr": p[2], "typ": typ, "len": length}
    data = p[8:8 + min(length, 24)]
    if typ in KUBE and len(data) >= 9:
        n = min(data[8], 15)
        msg.update(kind=KUBE[typ], node=data[:8].rstrip(b"\0").decode("latin-1"), ids=list(data[9:9 + n]))
    return msg


def frames(host: str, port: int = 7524, local_port: int = 0):
    """Yields decoded frames forever; joins the relay first."""
    s = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)
    s.bind(("0.0.0.0", local_port))
    s.settimeout(1.0)
    last = 0.0
    while True:
        if time.monotonic() - last > 5:
            try:
                s.sendto(HELLO, (host, port))
            except OSError:
                pass    # the relay is not up yet, or gone for a while: try again
            last = time.monotonic()
        try:
            data, _ = s.recvfrom(2048)
        except socket.timeout:
            continue
        if len(data) == 33:
            yield decode(data)


def main() -> None:
    ap = argparse.ArgumentParser()
    ap.add_argument("host", nargs="?", default="127.0.0.1")
    ap.add_argument("--port", type=int, default=7524)
    ap.add_argument("--json", action="store_true")
    a = ap.parse_args()
    t0 = time.time()
    for m in frames(a.host, a.port):
        if a.json:
            print(json.dumps(m), flush=True)
        elif "kind" in m:
            print(f"{m['t'] - t0:8.2f}  {m['kind']:9}  {m['node']:8}  {m['ids']}", flush=True)
        else:
            print(f"{m['t'] - t0:8.2f}  typ {m['typ']:#04x}  len {m['len']}  {m['sadr']} -> {m['dadr']}", flush=True)


if __name__ == "__main__":
    main()
