#!/bin/sh
# Проверка содержимого собранного образа virt-launcher.
#
#   kubevirt/check_image.sh <образ@дайджест | образ:тег>
#
# Содержимое, а не факт сборки: машина в образе должна знать chk — ради этого
# образ и пересобирается. Одна и та же проверка идёт при выпуске (publish.yml)
# и на каждом PR, трогающем образ (launcher.yml), — поэтому она здесь, а не
# копией в двух процессах.
#
# Какие машины в образе обязаны быть — kubevirt/targets.txt: каждый эмулятор
# отвечает и знает свою машину, а libvirt знает каждую архитектуру.
set -eu
export LC_ALL=C   # библиотеки читаются как байты, не как текст
ref="${1:?укажите образ}"
ROOT=$(cd "$(dirname "$0")/.." && pwd)
tmp=$(mktemp -d)
trap 'rm -rf "$tmp"' EXIT

# ⚠ Если libvirt в kubevirt/versions.txt не тот, что в штатном образе, наша
# библиотека ляжет рядом со штатной под другим именем, а не вместо неё, — и
# образ соберётся без единой ошибки (находка 60).
libs=$(docker run --rm --entrypoint sh "$ref" -c 'ls /usr/lib64/libvirt.so.0.*')
echo "$libs"
[ "$(echo "$libs" | wc -l)" -eq 1 ] \
  || { echo "❌ libvirt не совпал со штатным: пара в kubevirt/versions.txt неверна"; exit 1; }

# Строки таблиц libvirt — отдельные строки C в библиотеках: имя архитектуры
# в libvirt.so, машина по умолчанию — в драйвере QEMU. Смотрим их снаружи,
# своими инструментами: в образе может не оказаться grep.
docker run --rm --entrypoint cat "$ref" "$libs" | tr '\0' '\n' > "$tmp/libvirt.strings"
docker run --rm --entrypoint cat "$ref" \
  /usr/lib64/libvirt/connection-driver/libvirt_driver_qemu.so | tr '\0' '\n' > "$tmp/qemu.strings"

archs=$(awk '!/^#/ && NF { print $1 }' "$ROOT/kubevirt/targets.txt")
[ -n "$archs" ] || { echo "❌ в kubevirt/targets.txt нет архитектур"; exit 1; }

for arch in $archs; do
  machine=$(awk -v a="$arch" '!/^#/ && $1 == a { print $4 }' "$ROOT/kubevirt/targets.txt")
  echo "── $arch (машина $machine)"
  docker run --rm --entrypoint "/usr/local/bin/qemu-system-$arch" "$ref" -machine help \
    > "$tmp/machines" || { echo "❌ в образе нет или не запускается qemu-system-$arch"; exit 1; }
  awk -v m="$machine" '$1 == m { found = 1 } END { exit !found }' "$tmp/machines" \
    || { cat "$tmp/machines"; echo "❌ qemu-system-$arch не знает машину $machine"; exit 1; }
  grep -qx "$arch" "$tmp/libvirt.strings" \
    || { echo "❌ libvirt в образе не знает архитектуру $arch — патч не лёг"; exit 1; }
  grep -qx "$machine" "$tmp/qemu.strings" \
    || { echo "❌ драйвер QEMU в libvirt не знает машину $machine для $arch"; exit 1; }
  echo "  ✅ эмулятор, машина, архитектура в libvirt"
done

# Свойство chk — у машины Вирта, ради него образ и пересобирается.
if echo "$archs" | grep -qx risc5; then
  docker run --rm --entrypoint /usr/local/bin/qemu-system-risc5 "$ref" \
    -machine oberon,help | tee "$tmp/props"
  grep -q '^ *chk=' "$tmp/props" || { echo "❌ у машины нет свойства chk"; exit 1; }
fi

docker run --rm --entrypoint sh "$ref" -c 'test -x /usr/bin/onDefineDomain' \
  || { echo "❌ в образе нет перехватчика"; exit 1; }

# Без раскладки QEMU с -vnc не стартует, а консоль дашборда — это VNC.
docker run --rm --entrypoint sh "$ref" -c 'test -s /usr/local/share/qemu/keymaps/en-us' \
  || { echo "❌ в образе нет раскладок клавиатуры для VNC"; exit 1; }

echo "✅ образ $ref: машины ($(echo $archs)), chk, перехватчик, раскладки и libvirt на месте"
