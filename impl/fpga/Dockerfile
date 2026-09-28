# Открытый поток для Lattice ECP5: yosys -> nextpnr-ecp5 -> ecppack.
#
# Почему Debian, а не ночная сборка OSS CAD Suite: ночные релизы живут
# ограниченное время и удаляются, а пакеты Debian и снимок образа по дайджесту
# остаются. Плюс образ многоархитектурный — на arm64 поток идёт без эмуляции.
#
# Версии прибиты. Если в trixie пакет обновится, установка упадёт громко —
# это и нужно: тихая смена инструмента сдвигает fmax, а смотреть на сдвиг
# без знания его причины бессмысленно. Поднимать версии — отдельным коммитом
# вместе с перемером results.md.
FROM debian:trixie-slim@sha256:a99cfc517144bc59b1978475ec53b46ecabec7e43635402ee5b77cc54cd1b20a

RUN apt-get update -qq \
 && apt-get install -y --no-install-recommends \
      make python3-minimal \
      yosys=0.52-2 \
      nextpnr-ecp5=0.7-1+b3 \
      fpga-trellis=1.4-2+b5 \
      openfpgaloader=0.13.1-1 \
 && rm -rf /var/lib/apt/lists/*

WORKDIR /work
