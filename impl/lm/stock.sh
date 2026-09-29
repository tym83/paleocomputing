#!/bin/bash
# Стоковая нагрузка на трёх ядрах: компилятор Оберона собирает сам себя
# (ORS, ORB, ORG, ORP) — как в make selfhost. Сверяются такты всего прогона и
# побайтовое равенство объектных файлов: ядро другое, код обязан быть тем же.
set -e
P="$(cd "$(dirname "$0")/.." && pwd)"; NB="$P/ext/norebo"
MODS="ORS.Mod ORB.Mod ORG.Mod ORP.Mod"
args=""; for m in $MODS; do args="$args $m/s"; done
# ⚠ bash 3.2 на macOS: ассоциативных массивов нет, поэтому пары «имя:каталог»
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
    i, c = map(int, re.search(r"выполнено на RTL: (\d+) инструкций, (\d+) тактов", t).groups())
    h = "".join(hashlib.md5((b / f"stock_{e}" / f"{m}.rsc").read_bytes()).hexdigest()
                for m in ("ORS", "ORB", "ORG", "ORP"))
    res[e] = (i, c, h)
base = res["rtl"]
print("  компилятор собирает себя (ORS, ORB, ORG, ORP), весь прогон:")
for e, (i, c, h) in res.items():
    print(f"    {e:10s} инструкций {i:>12,}  тактов {c:>12,}  ускорение {base[1] / c:.4f}×  "
          f"код {'тот же ✅' if h == base[2] else 'ДРУГОЙ ❌'}")
ok = all(v[2] == base[2] and v[0] == base[0] for v in res.values())
sys.exit(0 if ok else 1)
PY
