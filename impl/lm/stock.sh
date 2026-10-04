#!/bin/bash
# Stock workload on three cores: the Oberon compiler builds itself
# (ORS, ORB, ORG, ORP), as in make selfhost. Compared: cycles of the whole run and
# byte-for-byte equality of object files: the core differs, the code must be the same.
set -e
P="$(cd "$(dirname "$0")/.." && pwd)"; NB="$P/ext/norebo"
MODS="ORS.Mod ORB.Mod ORG.Mod ORP.Mod"
args=""; for m in $MODS; do args="$args $m/s"; done
# ⚠ bash 3.2 on macOS has no associative arrays, hence "name:directory" pairs
for v in rtl:obj_nb rtl-fast:obj_nbf rtl-fast2:obj_nbr; do
  e=${v%%:*}; bin="$P/build/${v##*:}/norebo_tb"
  d="$P/build/lm/stock_$e"; rm -rf "$d"; mkdir -p "$d"; cd "$d"
  NOREBO_PATH="$d:$NB/Norebo:$NB/Oberon:$NB/build2" "$bin" ORP.Compile $args > log.txt 2>&1
done
python3 - "$P/build/lm" <<'PY'
import hashlib, pathlib, re, sys
b = pathlib.Path(sys.argv[1])
res = {}
for e in ("rtl", "rtl-fast", "rtl-fast2"):
    t = (b / f"stock_{e}" / "log.txt").read_text()
    i, c = map(int, re.search(r"executed on RTL: (\d+) instructions, (\d+) cycles", t).groups())
    h = "".join(hashlib.md5((b / f"stock_{e}" / f"{m}.rsc").read_bytes()).hexdigest()
                for m in ("ORS", "ORB", "ORG", "ORP"))
    res[e] = (i, c, h)
base = res["rtl"]
print("  the compiler builds itself (ORS, ORB, ORG, ORP), whole run:")
for e, (i, c, h) in res.items():
    print(f"    {e:10s} instructions {i:>12,}  cycles {c:>12,}  speedup {base[1] / c:.4f}×  "
          f"code {'same ✅' if h == base[2] else 'DIFFERENT ❌'}")
ok = all(v[2] == base[2] and v[0] == base[0] for v in res.values())
sys.exit(0 if ok else 1)
PY
