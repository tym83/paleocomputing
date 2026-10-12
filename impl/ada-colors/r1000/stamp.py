#!/usr/bin/env python3
"""Copy standard input to standard output, each line prefixed by the
monotonic second it arrived at."""
import sys
import time

for line in sys.stdin:
    sys.stdout.write(f"{time.monotonic():.6f} {line}")
    sys.stdout.flush()
