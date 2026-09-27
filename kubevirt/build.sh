#!/bin/sh
# Сборка образа virt-launcher с машиной RISC5.
#
#   kubevirt/build.sh [--kubevirt vX.Y.Z] <образ:тег> [аргументы docker build...]
#
# Коммит QEMU берётся из qemu/Makefile — того же места, откуда его берут
# проверки. Иначе в кластер уезжает не та машина, что сверена с RTL.
#
# Версия KubeVirt — из --kubevirt или KUBEVIRT_VERSION, иначе первая строка
# kubevirt/versions.txt. Версия libvirt к ней берётся оттуда же: руками её
# не задать, чтобы не собрать launcher с чужими библиотеками.
set -eu
ROOT=$(cd "$(dirname "$0")/.." && pwd)
VERSIONS="$ROOT/kubevirt/versions.txt"

if [ "${1:-}" = --kubevirt ]; then
  KUBEVIRT_VERSION="${2:?укажите версию KubeVirt}"; shift 2
fi
IMAGE="${1:?укажите образ:тег}"; shift

KUBEVIRT_VERSION="${KUBEVIRT_VERSION:-$(awk '!/^#/ && NF { print $1; exit }' "$VERSIONS")}"
LIBVIRT_VERSION=$(awk -v kv="$KUBEVIRT_VERSION" '!/^#/ && $1 == kv { print $2 }' "$VERSIONS")
[ -n "$LIBVIRT_VERSION" ] || {
  echo "KubeVirt $KUBEVIRT_VERSION нет в kubevirt/versions.txt" >&2; exit 1; }
echo "KubeVirt: $KUBEVIRT_VERSION, libvirt: $LIBVIRT_VERSION"

QEMU_REF=$(sed -n 's/^QEMU_REF ?= *//p' "$ROOT/qemu/Makefile")
[ -n "$QEMU_REF" ] || { echo "в qemu/Makefile не найден QEMU_REF" >&2; exit 1; }
echo "QEMU: $QEMU_REF"

exec docker build -f "$ROOT/kubevirt/Containerfile" \
  --build-arg KUBEVIRT_VERSION="$KUBEVIRT_VERSION" \
  --build-arg LIBVIRT_VERSION="$LIBVIRT_VERSION" \
  --build-arg QEMU_REF="$QEMU_REF" -t "$IMAGE" "$@" "$ROOT"
