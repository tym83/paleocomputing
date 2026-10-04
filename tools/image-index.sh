#!/bin/sh
# Merge the per-architecture image builds into one index and sign it.
#
#   tools/image-index.sh <image> <tag base> <tag> [more tags...]
#
# The builds live under `<tag base>-<arch>`, one architecture per line of
# kubevirt/platforms.txt (publish.yml builds them on native runners).
# The index gets all the listed tags; every architecture from the list must
# end up in it, otherwise we refuse: a node of that architecture would get no image.
# The index digest is signed; that is what cosign verify checks by tag.
set -eu
ROOT=$(cd "$(dirname "$0")/.." && pwd)
image=${1:?image}; base=${2:?tag base}; shift 2
[ $# -ge 1 ] || { echo "give at least one index tag" >&2; exit 1; }

want=$(awk '!/^#/ && NF { print $1 }' "$ROOT/kubevirt/platforms.txt" | sort -u)
[ -n "$want" ] || { echo "kubevirt/platforms.txt lists no architectures" >&2; exit 1; }
sources=$(for a in $want; do printf '%s:%s-%s ' "$image" "$base" "$a"; done)
tags=$(for t in "$@"; do printf -- '-t %s:%s ' "$image" "$t"; done)

# shellcheck disable=SC2086 # tag and source lists are split into words on purpose
docker buildx imagetools create $tags $sources

first="$image:$1"
# Provenance signatures and the SBOM sit in the index as manifests with platform
# unknown; they are not architectures.
have=$(docker buildx imagetools inspect "$first" --raw \
  | jq -r '[.manifests[] | .platform.architecture | select(. != "unknown")] | unique | .[]')
[ "$have" = "$want" ] || { echo "index has $(echo $have), expected $(echo $want)" >&2; exit 1; }

digest=$(docker buildx imagetools inspect "$first" --format '{{json .Manifest}}' | jq -r .digest)
cosign sign --yes "$image@$digest"

if [ -n "${GITHUB_STEP_SUMMARY:-}" ]; then
  {
    echo "### $image ($(echo $want))"
    echo '```'
    for t in "$@"; do echo "$image:$t"; done
    echo "$digest"
    echo '```'
  } >> "$GITHUB_STEP_SUMMARY"
fi
echo "index $image@$digest: $(echo $want)"
