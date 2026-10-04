#!/usr/bin/env python3
"""Cuts a few iterations of the sum_a and sum_b loops out of the Ibex core trace.

    trace_cut.py kernels.dis trace_core_00000000.log

The copies from the bench compartment (the first section in the disassembly) are
used, since those are the ones measured. Iterations come from the middle of the
measurement (SKIP matches are skipped) to stay clear of the warm-up.
"""
import re
import sys

SKIP = 50000
SHOW = 3          # iterations per kernel

dis, trace = sys.argv[1], sys.argv[2]

# Loop body addresses: from the target of the backward branch to the branch itself.
kernels, cur, section = {}, None, 0
for line in open(dis):
    if line.startswith("Disassembly of section"):
        section += 1
    m = re.match(r"^([0-9a-f]+) <(\w+)>:", line)
    if m:
        cur = m.group(2) if section == 1 else None
        if cur:
            kernels[cur] = []
        continue
    m = re.match(r"^([0-9a-f]+):\s+(.*)$", line)
    if m and cur:
        kernels[cur].append((int(m.group(1), 16), m.group(2).strip()))

for name, insns in kernels.items():
    back = [(a, t) for a, t in insns if t.startswith("bne")][-1]
    target = int(re.search(r"0x([0-9a-f]+)", back[1]).group(1), 16)
    body = {a for a, _ in insns if target <= a <= back[0]}
    print(f"== {name}: loop body {len(body)} insns "
          f"0x{target:08x}..0x{back[0]:08x}")
    seen, out = 0, []
    with open(trace) as f:
        header = f.readline().rstrip()
        for line in f:
            cols = line.split()
            if len(cols) < 3:
                continue
            try:
                pc = int(cols[2], 16)
            except ValueError:
                continue
            if pc in body:
                seen += 1
                if seen > SKIP and (out or pc == target):
                    out.append(line.rstrip())
                    if len(out) >= SHOW * len(body):
                        break
    print(header)
    print("\n".join(out))
