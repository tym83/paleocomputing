#!/usr/bin/env bash
#
# Дымовая проверка собранного сайта в настоящем браузере.
#
# Статические проверки (page-test.mjs) дважды пропустили мёртвую
# лабораторию: сначала дважды объявленную переменную, потом незакрытый
# <script>, который браузер по спецификации просто не выполняет. Обе поломки
# видны только там, где страницу исполняет браузер. Поэтому здесь сайт
# открывается безголовым Chrome, и в выгруженном DOM ищется то, что скрипт
# страницы обязан был нарисовать.
#
# Использование: tools/browser-smoke.sh <каталог собранного сайта>
set -euo pipefail
site=${1:?укажите каталог собранного сайта}
chrome=${CHROME:-}
for c in google-chrome google-chrome-stable chromium chromium-browser \
         "/Applications/Google Chrome.app/Contents/MacOS/Google Chrome"; do
  [ -n "$chrome" ] && break
  command -v "$c" >/dev/null 2>&1 && chrome=$c
  [ -x "$c" ] && chrome=$c
done
[ -n "$chrome" ] || { echo "❌ Chrome не найден (задайте CHROME=...)"; exit 1; }

port=${PORT:-8791}
python3 -m http.server "$port" --bind 127.0.0.1 --directory "$site" >/dev/null 2>&1 &
srv=$!
prof=$(mktemp -d)
trap 'kill $srv 2>/dev/null; rm -rf "$prof"' EXIT
sleep 1

# Машина считает в рабочем потоке, и «тишины» у страницы не бывает — поэтому
# жёсткий --timeout, а не --virtual-time-budget, и сторож сверху.
dom() {
  perl -e 'alarm 30; exec @ARGV' "$chrome" --headless=new --disable-gpu --no-first-run --no-sandbox \
    --user-data-dir="$prof" --timeout=12000 --dump-dom "http://127.0.0.1:$port/$1" 2>/dev/null || true
}

bad=0
say() { if [ "$1" = ok ]; then echo "  ✅ $2"; else echo "  ❌ $2"; bad=1; fi; }

# Сколько лабораторных должно быть — считаем по тому же labs.js, что уехал на сайт.
labs=$(python3 -c "import re,sys;print(len(re.findall(r'^  id: \d+', open(sys.argv[1]).read(), re.M)))" \
  "$site/oberon/labs.js")
for page in "oberon/lab.html" "oberon/lab.html?lang=ru"; do
  got=$(dom "$page" | python3 -c "
import re,sys
s=sys.stdin.read()
m=re.search(r'<select[^>]*id=\"pick\"[^>]*>(.*?)</select>', s, re.S)
print(len(re.findall('<option', m.group(1))) if m else 0)")
  [ "$got" = "$labs" ] && say ok "$page: в списке все $labs лабораторных" \
                       || say no "$page: в списке $got из $labs — скрипт страницы не отработал"
done

exit $bad
