#!/usr/bin/env bash
# Runs every example of the RED, GREEN, BLUE and YELLOW page in headless Chrome
# and compares the output with a native run of the same program, byte for byte,
# and with the committed .out file where there is one.
#
# Usage: impl/ada-colors/web/test-browser.sh   (ONLY=blue: one language)
#   (needs `make fixpoint` and the fixpoints of green/, blue/ and yellow/)
set -euo pipefail
cd "$(dirname "$0")/.."
root=$(cd ../.. && pwd)
chrome=${CHROME:-}
for c in google-chrome google-chrome-stable chromium chromium-browser \
         "/Applications/Google Chrome.app/Contents/MacOS/Google Chrome"; do
  [ -n "$chrome" ] && break
  command -v "$c" >/dev/null 2>&1 && chrome=$c
  [ -x "$c" ] && chrome=$c
done
[ -n "$chrome" ] || { echo "Chrome not found (set CHROME=...)"; exit 1; }

tmp=$(mktemp -d)
port=${PORT:-8793}
python3 web/serve.py "$root/site" "$port" &
srv=$!
trap 'kill $srv 2>/dev/null; rm -rf "$tmp"' EXIT
sleep 1

# native outputs, the same way os/run.sh makes them
python3 - "$tmp" <<'PY'
import json, re, subprocess, sys, pathlib
tmp = pathlib.Path(sys.argv[1])
src = pathlib.Path("../../site/red/examples.js").read_text()
examples = json.loads(src[src.index("["):src.rindex("]") + 1])
native = {}
cc = {"red": "build/redc", "green": "green/build/greenc", "blue": "blue/build/bluec", "yellow": "yellow/build/yellowc"}
prelude = pathlib.Path("yellow/lib/prelude.yel").read_text()
for e in examples:
    src = (prelude if e["lang"] == "yellow" else "") + e["source"]
    t = subprocess.run([cc[e["lang"]]], input=src.encode(), capture_output=True)
    if t.returncode != 0:
        sys.exit(f"{e['path']}: the native translator failed: {t.stdout.decode()[-300:]}")
    c = t.stdout
    (tmp / "p.c").write_bytes(c)
    subprocess.run(["cc", "-std=gnu11", "-O1", "-w", "-Irt", str(tmp / "p.c"), "rt/paleo.c",
                    "-o", str(tmp / "p"), "-lpthread", "-lm"], check=True)
    r = subprocess.run(["perl", "-e", "alarm shift; exec @ARGV", "60", str(tmp / "p")],
                       input=e.get("input", "").encode(), stdout=subprocess.PIPE, stderr=subprocess.STDOUT)
    native[e["path"]] = {"code": r.returncode, "out": r.stdout.decode()}
(tmp / "native.json").write_text(json.dumps(native))
PY

node web/results.mjs "$chrome" "http://127.0.0.1:$port/red/?test=${ONLY:-1}" "${TIMEOUT_MS:-600000}" > "$tmp/results.json" || true

python3 - "$tmp" <<'PY'
import html, json, re, sys, pathlib
tmp = pathlib.Path(sys.argv[1])
text = (tmp / "results.json").read_text()
if not text:
    print("❌ the page did not finish the examples in time")
    sys.exit(1)
got = json.loads(text)
native = json.loads((tmp / "native.json").read_text())
bad = 0
for r in got:
    n = native[r["path"]]
    r.setdefault("code", None)
    exp = pathlib.Path(r["path"]).with_suffix(".out")
    ok = r["out"] == n["out"] and r["code"] == n["code"]
    if ok and exp.exists():
        ok = r["out"] == exp.read_text()
    print(("  ✅ " if ok else "  ❌ ") + r["path"] + ("" if ok else f" (stage {r['stage']}, exit {r['code']} vs {n['code']})"))
    if not ok:
        bad = 1
        print("    browser: " + repr(r["out"][:400]))
        print("    native:  " + repr(n["out"][:400]))
sys.exit(bad)
PY
