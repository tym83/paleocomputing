#!/usr/bin/env python3
"""Turn a benchmark run into microseconds per operation.

    parse.py r1000 <_.log> <_.r1000.console>   the emulator run
    parse.py ada   <output of the benchmark>   GNAT: the program's own END times
    parse.py host  <output of the benchmark>   RED: lines timestamped by stamp.py

For the R1000 the time of a test is the difference of the emulator's sim time
(microcycles times 200 ns) read at its BEGIN and END lines. For RED every
output line carries the wall-clock second it arrived at, written by stamp.py.
"""
import re
import sys


def table(rows):
    print("| test | N | total, s | per operation, us |")
    print("|---|---:|---:|---:|")
    for name, n, secs in rows:
        print(f"| {name} | {n} | {secs:.3f} | {secs / n * 1e6:.4f} |")


def r1000(log, console):
    rates = [float(m.group(1)) for m in
             re.finditer(r"sim time: ([0-9.]+)", open(log, errors="replace").read())]
    text = re.sub(r"\x1b\[[0-9;?]*[A-Za-z]", "", open(console, errors="replace").read())
    begins = re.findall(r"BEGIN (\w+) +(\d+)", text)
    # the run.sh script reads the rate three times before the first BEGIN:
    # at the login prompt, after login, and after coding the package
    marks = rates[3:]
    rows = []
    for i, (name, n) in enumerate(begins):
        if 2 * i + 1 >= len(marks):
            break
        rows.append((name, int(n), marks[2 * i + 1] - marks[2 * i]))
    print("R1000 time (emulated microcycles x 200 ns):")
    table(rows)
    print()
    print("Emulator rate readings (real seconds, sim seconds):")
    for m in re.finditer(r"SC real time: ([0-9.]+)\s+sim time: ([0-9.]+)",
                         open(log, errors="replace").read()):
        print(f"  {m.group(1)} {m.group(2)}")


def ada(path):
    rows = []
    n = {}
    for line in open(path):
        m = re.match(r"BEGIN (\w+) +(\d+)", line)
        if m:
            n[m.group(1)] = int(m.group(2))
        m = re.match(r"END (\w+) +(\d+) ms", line)
        if m:
            rows.append((m.group(1), n[m.group(1)], int(m.group(2)) / 1000))
    table(rows)


def host(path):
    rows = []
    begin = None
    for line in open(path):
        t, _, rest = line.rstrip("\n").partition(" ")
        m = re.match(r"BEGIN (\w+) +(\d+)", rest)
        if m:
            begin = (m.group(1), int(m.group(2)), float(t))
        m = re.match(r"END (\w+)", rest)
        if m and begin:
            rows.append((begin[0], begin[1], float(t) - begin[2]))
            begin = None
    table(rows)


if __name__ == "__main__":
    if sys.argv[1] == "r1000":
        r1000(sys.argv[2], sys.argv[3])
    elif sys.argv[1] == "ada":
        ada(sys.argv[2])
    else:
        host(sys.argv[2])
