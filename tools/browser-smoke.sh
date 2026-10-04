#!/usr/bin/env bash
#
# Smoke test of the built site in a real browser.
#
# The static checks (page-test.mjs) twice let a dead lab through: first a
# variable declared twice, then an unclosed <script>, which the browser, per
# the specification, simply does not run. Both breakages are visible only
# where a browser executes the page. So here the site is opened in headless
# Chrome, and the dumped DOM is searched for what the page script was
# supposed to render.
#
# Usage: tools/browser-smoke.sh <built site directory>
set -euo pipefail
site=${1:?give the built site directory}
chrome=${CHROME:-}
for c in google-chrome google-chrome-stable chromium chromium-browser \
         "/Applications/Google Chrome.app/Contents/MacOS/Google Chrome"; do
  [ -n "$chrome" ] && break
  command -v "$c" >/dev/null 2>&1 && chrome=$c
  [ -x "$c" ] && chrome=$c
done
[ -n "$chrome" ] || { echo "❌ Chrome not found (set CHROME=...)"; exit 1; }

port=${PORT:-8791}
python3 -m http.server "$port" --bind 127.0.0.1 --directory "$site" >/dev/null 2>&1 &
srv=$!
prof=$(mktemp -d)
trap 'kill $srv 2>/dev/null; rm -rf "$prof"' EXIT
sleep 1

# The machine computes in a worker thread, and the page never goes "quiet", hence
# a hard --timeout rather than --virtual-time-budget, and a watchdog on top.
dom() {
  perl -e 'alarm 30; exec @ARGV' "$chrome" --headless=new --disable-gpu --no-first-run --no-sandbox \
    --user-data-dir="$prof" --timeout=12000 --dump-dom "http://127.0.0.1:$port/$1" 2>/dev/null || true
}

bad=0
say() { if [ "$1" = ok ]; then echo "  ✅ $2"; else echo "  ❌ $2"; bad=1; fi; }

# How many labs there should be: counted from the same labs.js that went to the site.
labs=$(python3 -c "import re,sys;print(len(re.findall(r'^  id: \d+', open(sys.argv[1]).read(), re.M)))" \
  "$site/oberon/labs.js")
# Every page with a machine sets data-script-ok="1" at the end of its module:
# the mark appears only if the module ran to the end.
for page in "oberon/run.html" "oberon/checks.html" "oberon/embed.html" \
            "oberon/lab.html" "oberon/lab.html?lang=ru"; do
  out=$(dom "$page")
  if printf '%s' "$out" | grep -q 'data-script-ok="1"'; then
    say ok "$page: page script ran to the end"
  else
    say no "$page: page script did not run"
  fi
  case "$page" in
    oberon/lab.html*)
      got=$(printf '%s' "$out" | python3 -c "
import re,sys
s=sys.stdin.read()
m=re.search(r'<select[^>]*id=\"pick\"[^>]*>(.*?)</select>', s, re.S)
print(len(re.findall('<option', m.group(1))) if m else 0)")
      [ "$got" = "$labs" ] && say ok "$page: the list has all $labs labs" \
                           || say no "$page: the list has $got of $labs"
      ;;
  esac
done

exit $bad
