#!/bin/sh
# Checks the contents of a built virt-launcher image.
#
#   kubevirt/check_image.sh <image@digest | image:tag>
#
# The contents, not the fact that it built: the machine in the image must know
# chk, which is why the image is rebuilt at all. The same check runs on release
# (publish.yml) and on every PR touching the image (launcher.yml), so it lives
# here rather than as a copy in two workflows.
#
# Which machines the image must carry is in kubevirt/targets.txt: each
# emulator responds and knows its machine, and libvirt knows each architecture.
set -eu
export LC_ALL=C   # libraries are read as bytes, not text
ref="${1:?specify the image}"
ROOT=$(cd "$(dirname "$0")/.." && pwd)
tmp=$(mktemp -d)
trap 'rm -rf "$tmp"' EXIT

# ⚠ If the libvirt in kubevirt/versions.txt differs from the stock image's, our
# library lands next to the stock one under another name instead of replacing
# it, and the image builds without a single error (finding 60).
libs=$(docker run --rm --entrypoint sh "$ref" -c 'ls /usr/lib64/libvirt.so.0.*')
echo "$libs"
[ "$(echo "$libs" | wc -l)" -eq 1 ] \
  || { echo "❌ libvirt does not match the stock one: the pair in kubevirt/versions.txt is wrong"; exit 1; }

# libvirt table entries are separate C strings in the libraries: the
# architecture name in libvirt.so, the default machine in the QEMU driver. We
# inspect them from outside with our own tools: the image may lack grep.
docker run --rm --entrypoint cat "$ref" "$libs" | tr '\0' '\n' > "$tmp/libvirt.strings"
docker run --rm --entrypoint cat "$ref" \
  /usr/lib64/libvirt/connection-driver/libvirt_driver_qemu.so | tr '\0' '\n' > "$tmp/qemu.strings"

archs=$(awk '!/^#/ && NF { print $1 }' "$ROOT/kubevirt/targets.txt")
[ -n "$archs" ] || { echo "❌ kubevirt/targets.txt lists no architectures"; exit 1; }

for arch in $archs; do
  machine=$(awk -v a="$arch" '!/^#/ && $1 == a { print $4 }' "$ROOT/kubevirt/targets.txt")
  echo "── $arch (machine $machine)"
  docker run --rm --entrypoint "/usr/local/bin/qemu-system-$arch" "$ref" -machine help \
    > "$tmp/machines" || { echo "❌ qemu-system-$arch is missing from the image or does not run"; exit 1; }
  awk -v m="$machine" '$1 == m { found = 1 } END { exit !found }' "$tmp/machines" \
    || { cat "$tmp/machines"; echo "❌ qemu-system-$arch does not know machine $machine"; exit 1; }
  grep -qx "$arch" "$tmp/libvirt.strings" \
    || { echo "❌ libvirt in the image does not know architecture $arch: the patch did not apply"; exit 1; }
  grep -qx "$machine" "$tmp/qemu.strings" \
    || { echo "❌ the libvirt QEMU driver does not know machine $machine for $arch"; exit 1; }
  echo "  ✅ emulator, machine, architecture in libvirt"
done

# The chk property belongs to the Wirth machine; it is why the image is rebuilt.
if echo "$archs" | grep -qx risc5; then
  docker run --rm --entrypoint /usr/local/bin/qemu-system-risc5 "$ref" \
    -machine oberon,help | tee "$tmp/props"
  grep -q '^ *chk=' "$tmp/props" || { echo "❌ the machine has no chk property"; exit 1; }
fi

docker run --rm --entrypoint sh "$ref" -c 'test -x /usr/bin/onDefineDomain' \
  || { echo "❌ the hook is missing from the image"; exit 1; }

# Without a keymap QEMU with -vnc does not start, and the dashboard console is VNC.
docker run --rm --entrypoint sh "$ref" -c 'test -s /usr/local/share/qemu/keymaps/en-us' \
  || { echo "❌ the image has no keyboard keymaps for VNC"; exit 1; }

echo "✅ image $ref: machines ($(echo $archs)), chk, hook, keymaps and libvirt in place"
