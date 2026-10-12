#!/bin/sh
# The files of the browser page that come from the sources: the THE tape and
# the addresses the page reads from core. (x8.js and x8.wasm come from
# `make -C emu web`, with emscripten.)
set -eu
here=$(cd "$(dirname "$0")" && pwd)
python3 "$here/../asm/x8asm.py" "$here/../the/the.elan" -o "$here/the.tape" -s "$here/../build/the.sym"
python3 - "$here/../build/the.sym" "$here/the.json" <<'PY'
import json, sys
want = ['cttab', 'victim', 'scbuse', 'scbmax', 'pcbs', 'pm1sv', 'pm3sv', 'vocsv', 'tsv', 'cur', 'ndrum', 'ksv']
sym = {}
for line in open(sys.argv[1]):
    addr, name = line.split()[:2]
    if name in want and name not in sym:
        sym[name] = int(addr, 8)
missing = [w for w in want if w not in sym]
assert not missing, missing
sym['ncp'] = 8
sym['pcbsize'] = 48
json.dump(sym, open(sys.argv[2], 'w'), indent=1, sort_keys=True)
PY
