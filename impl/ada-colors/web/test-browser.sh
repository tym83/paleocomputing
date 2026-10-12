#!/usr/bin/env bash
# Runs every example of the RED and GREEN page in headless Chrome and compares
# the output with a native run of the same program, byte for byte, and with the
# committed .out file where there is one.
#
# Usage: impl/ada-colors/web/test-browser.sh   (needs `make` and green/build/greenc)
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
for e in examples:
    cc = "green/build/greenc" if e["lang"] == "green" else "build/redc"
    c = subprocess.run([cc], input=e["source"].encode(), capture_output=True).stdout
    (tmp / "p.c").write_bytes(c)
    subprocess.run(["cc", "-std=gnu11", "-O1", "-w", "-Irt", str(tmp / "p.c"), "rt/paleo.c",
                    "-o", str(tmp / "p"), "-lpthread", "-lm"], check=True)
    r = subprocess.run(["perl", "-e", "alarm shift; exec @ARGV", "60", str(tmp / "p")],
                       stdin=subprocess.DEVNULL, stdout=subprocess.PIPE, stderr=subprocess.STDOUT)
    native[e["path"]] = {"code": r.returncode, "out": r.stdout.decode()}
(tmp / "native.json").write_text(json.dumps(native))
PY

node web/results.mjs "$chrome" "http://127.0.0.1:$port/red/?test=1" "${TIMEOUT_MS:-600000}" > "$tmp/results.json" || true

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
