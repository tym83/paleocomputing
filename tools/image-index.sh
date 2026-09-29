#!/bin/sh
# Склеить сборки образа по архитектурам в один индекс и подписать его.
#
#   tools/image-index.sh <образ> <база тега> <тег> [ещё тег...]
#
# Сборки лежат под `<база тега>-<арх.>` — по архитектуре на строку
# kubevirt/platforms.txt (publish.yml собирает их на родных раннерах).
# Индекс получает все перечисленные теги; каждая архитектура из списка обязана
# в нём оказаться, иначе — отказ: узел этой архитектуры не получил бы образа.
# Подписывается дайджест индекса — его проверяет cosign verify по тегу.
set -eu
ROOT=$(cd "$(dirname "$0")/.." && pwd)
image=${1:?образ}; base=${2:?база тега}; shift 2
[ $# -ge 1 ] || { echo "укажите хотя бы один тег индекса" >&2; exit 1; }

want=$(awk '!/^#/ && NF { print $1 }' "$ROOT/kubevirt/platforms.txt" | sort -u)
[ -n "$want" ] || { echo "в kubevirt/platforms.txt нет архитектур" >&2; exit 1; }
sources=$(for a in $want; do printf '%s:%s-%s ' "$image" "$base" "$a"; done)
tags=$(for t in "$@"; do printf -- '-t %s:%s ' "$image" "$t"; done)

# shellcheck disable=SC2086 # списки тегов и источников — намеренно словами
docker buildx imagetools create $tags $sources

first="$image:$1"
# Подписи происхождения и SBOM лежат в индексе как манифесты с платформой
# unknown — это не архитектуры.
have=$(docker buildx imagetools inspect "$first" --raw \
  | jq -r '[.manifests[] | .platform.architecture | select(. != "unknown")] | unique | .[]')
[ "$have" = "$want" ] || { echo "в индексе $(echo $have), ждали $(echo $want)" >&2; exit 1; }

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
echo "индекс $image@$digest: $(echo $want)"
