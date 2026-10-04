#!/bin/sh
# Staging copy of the catalog repositories, with symlinks dereferenced.
#
# The machine library is attached to an application by a symlink
# (charts/retro-machine -> ../../../library/retro-machine), like cozy-lib in
# Cozystack itself. But `flux push artifact` does not put symlinks into the
# archive, and the catalog unpacker in the cluster skips them
# (tapmaterializer_artifact.go: "an app artifact needs only files"). Published
# as is, the chart would reach the cluster without the library and without the
# hook. So a copy is published where the files themselves replace the links.
#
#   stage.sh <destination-dir> [repository...]   (all by default)
set -eu
out=${1:?specify the destination directory}; shift
root=$(cd "$(dirname "$0")/.." && pwd)
[ $# -gt 0 ] || set -- $(cd "$root/repos" && ls)
mkdir -p "$out"
for r in "$@"; do
  rm -rf "${out:?}/$r"
  cp -RL "$root/repos/$r" "$out/$r"
  echo "  $r → $out/$r"
done
