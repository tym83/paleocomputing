#!/usr/bin/env bash
#
# Build the series' static site into _site/.
#
# One source for every file:
#   site/**       — the series pages (our own, edited by hand)
#   impl/web/**   — the lab, the book and the built machine
#
# ⚠ There are no more copies of impl/web/ in site/oberon/, and none may be added.
# Such a copy once went stale silently: the book and the lab were translated into
# English, the site kept the old version, and /oberon/book/en/ served a 404. Two
# places of which only one gets updated is the same trap as everywhere else in
# this repository, only a quiet one: the pages did open.
#
# impl/web/index.html is the machine launch page; on the site it lives as
# run.html, because /oberon/ is taken by the project page from site/.
#
# Usage: tools/build-site.sh [destination-directory]
set -euo pipefail
cd "$(dirname "$0")/.."
out=${1:-_site}

# Development files are not served: the lab runner and the book generator.
DEV='\.mjs$|(^|/)mkbook\.py$'

# copy_tree <from> <to> [exclusion regex]
copy_tree() {
  local src=$1 dst=$2 skip=${3:-} rel
  ( cd "$src" && find . -type f ) | sed 's|^\./||' | sort | while read -r rel; do
    if [ -n "$skip" ] && printf '%s\n' "$rel" | grep -Eq "$skip"; then continue; fi
    mkdir -p "$dst/$(dirname "$rel")"
    cp "$src/$rel" "$dst/$rel"
  done
}

mkdir -p "$out/oberon"
copy_tree site "$out" '^oberon/'
cp site/oberon/index.html "$out/oberon/index.html"
copy_tree impl/web "$out/oberon" "$DEV|^index\.html$"
cp impl/web/index.html "$out/oberon/run.html"

# Required contents. An empty file counts as missing too: the built wasm can
# come out zero-sized, and once it already did.
need="index.html style.css ru/index.html ru/oberon/index.html cozystack/index.html ru/cozystack/index.html
      oberon/index.html oberon/run.html oberon/lab.html oberon/embed.html oberon/checks.html
      oberon/i18n.js oberon/labs.js oberon/labs.en.js
      oberon/machine.js oberon/oberonfs.js
      oberon/risc5.js oberon/risc5.wasm oberon/risc5-chk.js oberon/risc5-chk.wasm
      oberon/bench.js oberon/bench-worker.js oberon/bench_bounds.json
      oberon/bench_bounds_b.bin oberon/bench_bounds_e.bin oberon/oberon.dsk oberon/oberon.dsk.gz
      oberon/prom_sd.mem oberon/embed.js oberon/worker.js oberon/worker-core.js
      oberon/book/index.html oberon/book/en/index.html"
miss=0
for f in $need; do
  if [ -s "$out/$f" ]; then printf '  ✅ %s\n' "$f"; else printf '  ❌ missing or empty: %s\n' "$f"; miss=1; fi
done
[ "$miss" = 0 ] || { echo "site incomplete"; exit 1; }

# Local link check. Its absence is exactly what produced the live 404: the pages
# were laid out, but /oberon/book/en/ led nowhere.
python3 - "$out" <<'PY'
import os, re, sys, urllib.parse
root = sys.argv[1]
ref = re.compile(r'(?:href|src)\s*=\s*["\']([^"\']+)["\']', re.I)
bad = []
for dirpath, _, files in os.walk(root):
    for name in files:
        if not name.endswith('.html'):
            continue
        path = os.path.join(dirpath, name)
        with open(path, encoding='utf-8', errors='replace') as fh:
            text = fh.read()
        for raw in ref.findall(text):
            if re.match(r'^(https?:|mailto:|data:|#|//)', raw):
                continue
            # An address assembled at runtime (`book/${LANG...}`) cannot be checked.
            if '${' in raw or '{{' in raw:
                continue
            target = urllib.parse.unquote(raw.split('#')[0].split('?')[0])
            if not target:
                continue
            base = root if target.startswith('/') else dirpath
            dest = os.path.normpath(os.path.join(base, target.lstrip('/')))
            if os.path.isdir(dest):
                dest = os.path.join(dest, 'index.html')
            if not os.path.exists(dest):
                bad.append(f"{os.path.relpath(path, root)} → {raw}")
if bad:
    print("  ❌ broken local links:")
    for b in bad:
        print("    " + b)
    sys.exit(1)
print("  ✅ local links")
PY

echo "  site built in $out/ ($(find "$out" -type f | wc -l | tr -d ' ') files)"
