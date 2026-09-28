#!/bin/bash
# Компилирует все исходники PO2013 компилятором конфигурации (по умолчанию F) и
# выводит места, где открытому массиву передаётся массив, для которого нельзя
# построить дескриптор. Код не исполняется — нужен только разбор.
set -u
cfg="${1:-F}"; P="$(cd "$(dirname "$0")/.." && pwd)"; D="$P/build/tc/scan$cfg"
rm -rf "$D"; mkdir -p "$D"; cd "$D"
ORD=$(cd "$P" && python3 tools/modorder.py 2>/dev/null)
ok=0; bad=0
for m in $ORD; do
  case "$m" in *.Orig|BootLoad) continue;; esac   # загрузчик живёт до системы
  cp "$P/ext/po2013-src/$m.Mod" .
  # Norebo при ненайденном импорте уходит в вечный цикл — таймаут обязателен
  NOREBO_PATH="$D:$P/build/tc/$cfg/s1" perl -e 'alarm 15; exec @ARGV' \
    "$P/ext/norebo/norebo.bin" ORP.Compile $m.Mod/s >> scan.log 2>&1
  # .rsc убираем из пути: иначе собранные здесь Kernel/Modules/Files заслонят
  # модули самой среды Norebo, и следующий запуск компилятора не загрузится
  # (LED(2) и вечный цикл в Modules). Импорту нужны только .smb.
  if [ -f "$m.rsc" ]; then mv "$m.rsc" "$m.rsx"; ok=$((ok+1)); else bad=$((bad+1)); echo "    не собран: $m"; fi
done
echo "  $cfg: собрано модулей $ok, не собрано $bad"
grep -B2 "descriptor" scan.log || true
