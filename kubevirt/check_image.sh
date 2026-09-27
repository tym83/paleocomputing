#!/bin/sh
# Проверка содержимого собранного образа virt-launcher.
#
#   kubevirt/check_image.sh <образ@дайджест | образ:тег>
#
# Содержимое, а не факт сборки: машина в образе должна знать chk — ради этого
# образ и пересобирается. Одна и та же проверка идёт при выпуске (publish.yml)
# и на каждом PR, трогающем образ (launcher.yml), — поэтому она здесь, а не
# копией в двух процессах.
set -eu
ref="${1:?укажите образ}"
props=$(mktemp)
trap 'rm -f "$props"' EXIT

docker run --rm --entrypoint /usr/local/bin/qemu-system-risc5 "$ref" \
  -machine oberon,help | tee "$props"
grep -q '^ *chk=' "$props" || { echo "❌ у машины нет свойства chk"; exit 1; }

docker run --rm --entrypoint sh "$ref" -c 'test -x /usr/bin/onDefineDomain' \
  || { echo "❌ в образе нет перехватчика"; exit 1; }

# Без раскладки QEMU с -vnc не стартует, а консоль дашборда — это VNC.
docker run --rm --entrypoint sh "$ref" -c 'test -s /usr/local/share/qemu/keymaps/en-us' \
  || { echo "❌ в образе нет раскладок клавиатуры для VNC"; exit 1; }

# ⚠ Если libvirt в kubevirt/versions.txt не тот, что в штатном образе, наша
# библиотека ляжет рядом со штатной под другим именем, а не вместо неё, — и
# образ соберётся без единой ошибки (находка 60).
libs=$(docker run --rm --entrypoint sh "$ref" -c 'ls /usr/lib64/libvirt.so.0.*')
echo "$libs"
[ "$(echo "$libs" | wc -l)" -eq 1 ] \
  || { echo "❌ libvirt не совпал со штатным: пара в kubevirt/versions.txt неверна"; exit 1; }

echo "✅ образ $ref: chk, перехватчик, раскладки и libvirt на месте"
