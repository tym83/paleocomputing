#!/bin/sh
# Промежуточная копия репозиториев каталога — с разыменованными ссылками.
#
# Библиотека машин подключается к приложению символьной ссылкой
# (charts/retro-machine -> ../../../library/retro-machine), как cozy-lib у
# самого Cozystack. Но `flux push artifact` ссылки в архив не кладёт, а
# распаковщик каталога в кластере их пропускает (tapmaterializer_artifact.go:
# «an app artifact needs only files»). Опубликованный как есть, чарт приехал
# бы в кластер без библиотеки и без перехватчика. Поэтому публикуется копия,
# где на месте ссылок лежат сами файлы.
#
#   stage.sh <каталог-назначения> [репозиторий...]   (по умолчанию — все)
set -eu
out=${1:?укажите каталог назначения}; shift
root=$(cd "$(dirname "$0")/.." && pwd)
[ $# -gt 0 ] || set -- $(cd "$root/repos" && ls)
mkdir -p "$out"
for r in "$@"; do
  rm -rf "${out:?}/$r"
  cp -RL "$root/repos/$r" "$out/$r"
  echo "  $r → $out/$r"
done
