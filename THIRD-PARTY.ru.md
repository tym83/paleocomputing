[English version](THIRD-PARTY.md)

# Что здесь чужое и на каких условиях

Наша часть — под Apache-2.0 (файл `LICENSE`). Ниже — всё, что взято готовым.
Условия всех трёх компонентов разрешительные и требуют одного: сохранять
уведомление об авторстве. Оно сохранено.

## Project Oberon — Никлаус Вирт, Юрг Гуткнехт, Пол Рид

* `impl/rtl/` — описание процессора RISC5 и периферии
* `impl/ext/oberon-src/`, `impl/ext/po2013-src/` — исходники системы
* `impl/ext/disk/Oberon-2016-08-02.dsk` — образ системы
* `impl/web/oberon.dsk` — тот же образ для браузера

Источник: [projectoberon.net](http://www.projectoberon.net/).
Текст уведомления: `impl/ext/norebo/license.txt`.

Наша правка: 53 строки в `RISC5.v` — добавленная команда проверки границ, ради
которой затевалось измерение. `Registers.v` переписан с примитивов Xilinx на
поведенческое описание, чтобы модуль собирался открытым инструментарием.

## project-norebo — Peter De Wachter

* `impl/ext/norebo/` — компилятор Оберона, запускаемый из командной строки

Источник: [github.com/pdewacht/project-norebo](https://github.com/pdewacht/project-norebo).
Условия — те же, что у Project Oberon (`impl/ext/norebo/license.txt`).

Наша правка: счётчик тактов и профилировщик в рантайме.

## oberon-risc-emu — Peter De Wachter

* `impl/ext/refemu/` — эталонный эмулятор, против которого идёт пошаговая сверка

Источник: [github.com/pdewacht/oberon-risc-emu](https://github.com/pdewacht/oberon-risc-emu).
Уведомление: `impl/ext/refemu/LICENSE` — перенесено из README упомянутого
репозитория, отдельного файла лицензии там нет.

Наша правка: счётчик тактов и трассировка для дифференциального стенда.

## Библиотека ячеек — Sky130 (SkyWater)

* `impl/syn/lib/sky130_fd_sc_hd__tt_025C_1v80.lib` — оценки площади и частоты

Apache-2.0, берётся из
[OpenROAD-flow-scripts](https://github.com/The-OpenROAD-Project/OpenROAD-flow-scripts).
В репозиторий не кладётся из-за размера (12 МБ) — тянется целью `make lib`,
которую вызывает и `make syn`.

Это настоящий техпроцесс, на нём физически делают чипы.

### Почему не Nangate45

На ней мерилось раньше, и её шапка **прямо запрещает публикацию**: *«provided
pursuant to a License Agreement containing restrictions on its use»*, *«does not
indicate actual or intended publication of this file»*. Из-за этого синтез не
работал из чистого клона.

Смена техпроцесса меняет абсолютные числа (130 нм против 45 нм), но наши
утверждения — относительные дельты, и они переход переживают: цена команды
проверки границ по площади **+1.04 %** против +0.32…0.85 % на Nangate45.
Порядок и знак те же.

## Страница RED и GREEN (`site/red/`)

* `site/red/coi-serviceworker.js`: coi-serviceworker 0.1.7, Guido Zuidhof и
  соавторы, MIT ([github.com/gzuidhof/coi-serviceworker](https://github.com/gzuidhof/coi-serviceworker)).
  Уведомление — первая строка файла. Без изменений.
* `site/red/toolchain.bin`: заголовки, `libc.a`, `libsetjmp.a` и
  `crt1-command.o` из wasi-libc для `wasm32-wasip1-threads` и
  `libclang_rt.builtins.a` из compiler-rt, взятые из
  [wasi-sdk 34](https://github.com/WebAssembly/wasi-sdk/releases/tag/wasi-sdk-34).
  wasi-libc — Apache-2.0 WITH LLVM-exception, Apache-2.0 или MIT, часть из musl —
  MIT; compiler-rt — Apache-2.0 WITH LLVM-exception. Без изменений;
  `impl/ada-colors/web/build.mjs` отбирает файлы и закрепляет загрузки
  контрольной суммой.
* Не в репозитории: страница загружает clang и lld, собранные в WebAssembly,
  [@yowasp/clang](https://www.npmjs.com/package/@yowasp/clang) (ISC; LLVM —
  Apache-2.0 WITH LLVM-exception), с jsDelivr.
