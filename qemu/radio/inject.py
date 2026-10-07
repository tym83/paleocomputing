#!/usr/bin/env python3
"""A station that answers the control plane: right after it hears an assignment
for a node, it sends its own frames for that node.

A kubelet reports a fixed time after the plane's assignment, and the plane's
next round puts back whatever the kubelet was told in between. A frame sent at
a random moment was therefore undone before the report in most rounds, and a
test could not tell an ignored frame from an obeyed one. Sent right after the
plane, the frame is what the kubelet holds when it reports.

    inject.py <relay host> <spec as JSON>

spec: {"node": "node-a", "rounds": 3, "frames": [...]}, each frame either
  {"raw": "<hex of a whole frame>"}                     replayed as it was, or
  {"cluster": 20, "key": "<hex>", "ids": [], "ahead": 2}  a signed assignment
                                                          with the counter of
                                                          the plane's frame plus ahead.
"""
import json
import socket
import sys
import time

from halfsiphash import key_of
from listen import decode, sign


def main() -> None:
    host, spec = sys.argv[1], json.loads(sys.argv[2])
    s = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)
    s.bind(("0.0.0.0", 0))
    s.settimeout(1.0)
    s.sendto(bytes([0xFF]), (host, 7524))
    last_hello, done, t0 = time.monotonic(), 0, time.monotonic()
    while done < spec["rounds"] and time.monotonic() - t0 < 30:
        if time.monotonic() - last_hello > 4:
            s.sendto(bytes([0xFF]), (host, 7524))
            last_hello = time.monotonic()
        try:
            data, _ = s.recvfrom(64)
        except socket.timeout:
            continue
        if len(data) != 33:
            continue
        m = decode(data)
        if m.get("kind") != "assign" or m["node"] != spec["node"]:
            continue
        for f in spec["frames"]:
            if "raw" in f:
                out = bytes.fromhex(f["raw"])
            else:
                body = sign(key_of(f["key"]), 0x61, f["cluster"], spec["node"], f["ids"],
                            m["counter"] + f.get("ahead", 2))
                head = bytearray(data[1:9])
                head[4:8] = len(body[:14 + len(f["ids"])]).to_bytes(4, "little")
                out = data[:1] + bytes(head) + body.ljust(24, b"\0")
            s.sendto(out, (host, 7524))
        done += 1
    print(f"injected after {done} assignments", flush=True)


if __name__ == "__main__":
    main()
