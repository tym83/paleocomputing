#!/usr/bin/env python3
"""Runs a command with a time limit (macOS has no timeout)."""
import subprocess, sys
t = float(sys.argv[1])
try:
    r = subprocess.run(sys.argv[2:], timeout=t, capture_output=True, text=True)
    sys.stdout.write(r.stdout[-2000:]); sys.stderr.write(r.stderr[-2000:])
    sys.exit(r.returncode)
except subprocess.TimeoutExpired as e:
    out = (e.stdout or b"")[-1000:]
    print(f"⏱ HUNG: exceeded {t}s", file=sys.stderr)
    if out: print("last output:", out.decode(errors="replace"), file=sys.stderr)
    sys.exit(124)
