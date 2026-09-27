#!/bin/sh
# Сборка образа virt-launcher с чужими машинами (kubevirt/targets.txt).
#
#   kubevirt/build.sh [--kubevirt vX.Y.Z] <образ:тег> [аргументы docker build...]
#
# Коммит QEMU берётся из qemu/Makefile — того же места, откуда его берут
# проверки. Иначе в кластер уезжает не та машина, что сверена с RTL.
#
# Версия KubeVirt — из --kubevirt или KUBEVIRT_VERSION, иначе первая строка
# kubevirt/versions.txt. Версия libvirt и дайджест основы берутся оттуда же:
# руками их не задать, чтобы не собрать launcher с чужими библиотеками.
set -eu
ROOT=$(cd "$(dirname "$0")/.." && pwd)
VERSIONS="$ROOT/kubevirt/versions.txt"

if [ "${1:-}" = --kubevirt ]; then
  KUBEVIRT_VERSION="${2:?укажите версию KubeVirt}"; shift 2
fi
IMAGE="${1:?укажите образ:тег}"; shift

KUBEVIRT_VERSION="${KUBEVIRT_VERSION:-$(awk '!/^#/ && NF { print $1; exit }' "$VERSIONS")}"
ROW=$(awk -v kv="$KUBEVIRT_VERSION" '!/^#/ && $1 == kv { print $2, $3 }' "$VERSIONS")
LIBVIRT_VERSION=${ROW% *}
LAUNCHER_DIGEST=${ROW#* }
case "$LAUNCHER_DIGEST" in
  sha256:*) ;;
  *) echo "KubeVirt $KUBEVIRT_VERSION нет в kubevirt/versions.txt или у строки нет дайджеста" >&2
     exit 1 ;;
esac
echo "KubeVirt: $KUBEVIRT_VERSION ($LAUNCHER_DIGEST), libvirt: $LIBVIRT_VERSION"

QEMU_REF=$(sed -n 's/^QEMU_REF ?= *//p' "$ROOT/qemu/Makefile")
[ -n "$QEMU_REF" ] || { echo "в qemu/Makefile не найден QEMU_REF" >&2; exit 1; }
echo "QEMU: $QEMU_REF"

exec docker build -f "$ROOT/kubevirt/Containerfile" \
  --build-arg KUBEVIRT_VERSION="$KUBEVIRT_VERSION" \
  --build-arg LAUNCHER_DIGEST="$LAUNCHER_DIGEST" \
  --build-arg LIBVIRT_VERSION="$LIBVIRT_VERSION" \
  --build-arg QEMU_REF="$QEMU_REF" -t "$IMAGE" "$@" "$ROOT"
