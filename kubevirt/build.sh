#!/bin/sh
# Builds the virt-launcher image with foreign machines (kubevirt/targets.txt).
#
#   kubevirt/build.sh [--kubevirt vX.Y.Z] <image:tag> [docker build arguments...]
#
# The QEMU commit is taken from qemu/Makefile, the same place the checks take
# it from. Otherwise the machine shipped to the cluster is not the one
# verified against the RTL.
#
# The KubeVirt version comes from --kubevirt or KUBEVIRT_VERSION, otherwise
# the first line of kubevirt/versions.txt. The libvirt version and the base
# digest come from there too: they cannot be set by hand, so the launcher is
# never built with mismatched libraries.
set -eu
ROOT=$(cd "$(dirname "$0")/.." && pwd)
VERSIONS="$ROOT/kubevirt/versions.txt"

if [ "${1:-}" = --kubevirt ]; then
  KUBEVIRT_VERSION="${2:?specify the KubeVirt version}"; shift 2
fi
IMAGE="${1:?specify image:tag}"; shift

KUBEVIRT_VERSION="${KUBEVIRT_VERSION:-$(awk '!/^#/ && NF { print $1; exit }' "$VERSIONS")}"
ROW=$(awk -v kv="$KUBEVIRT_VERSION" '!/^#/ && $1 == kv { print $2, $3 }' "$VERSIONS")
LIBVIRT_VERSION=${ROW% *}
LAUNCHER_DIGEST=${ROW#* }
case "$LAUNCHER_DIGEST" in
  sha256:*) ;;
  *) echo "KubeVirt $KUBEVIRT_VERSION is not in kubevirt/versions.txt or its line has no digest" >&2
     exit 1 ;;
esac
echo "KubeVirt: $KUBEVIRT_VERSION ($LAUNCHER_DIGEST), libvirt: $LIBVIRT_VERSION"

QEMU_REF=$(sed -n 's/^QEMU_REF ?= *//p' "$ROOT/qemu/Makefile")
[ -n "$QEMU_REF" ] || { echo "QEMU_REF not found in qemu/Makefile" >&2; exit 1; }
echo "QEMU: $QEMU_REF"

exec docker build -f "$ROOT/kubevirt/Containerfile" \
  --build-arg KUBEVIRT_VERSION="$KUBEVIRT_VERSION" \
  --build-arg LAUNCHER_DIGEST="$LAUNCHER_DIGEST" \
  --build-arg LIBVIRT_VERSION="$LIBVIRT_VERSION" \
  --build-arg QEMU_REF="$QEMU_REF" -t "$IMAGE" "$@" "$ROOT"
