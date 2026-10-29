[English version](README.md)

# RED, GREEN, BLUE и YELLOW

Два финалиста конкурса языков DoD-1 Министерства обороны США 1979 года,
собранные заново по их документам. GREEN победил и стал Адой, RED (Intermetrics)
исчез. BLUE (SofTech) и YELLOW (SRI International), два проекта, выбывшие после
первого этапа в 1978 году, тоже собраны заново, по DTIC ADB950587.
Эпизод описан в [`17-episode-red-green.ru.md`](../../17-episode-red-green.ru.md).

| Каталог | Что там |
|---|---|
| `rt/` | Рантайм на C, с которым собираются оба компилятора. Его планировщик точно следует правилам RED, а часы виртуальные, поэтому каждый запуск печатает одно и то же |
| `red/boot/` | Затравка RED на Python (только для genesis) |
| `red/redc/` | redc, компилятор RED, написанный на RED. `red/seed/redc.c` — то, что последний redc сделал из себя |
| `red/tests/` | Тесты RED с ожидаемым выводом |
| `red/manual/` | Примеры главы 14 руководства по RED, средств нижнего уровня: пользовательские планировщики, мониторы, MAILBOX, определённый средствами языка; переписаны как напечатаны и запускаются |
| `green/` | То же для GREEN: затравка, greenc на GREEN, семя, тесты, примеры INTRO 1979 года |
| `blue/` | BLUE (SofTech, 1978): затравка, bluec на BLUE, семя, тесты и программы из спецификации; модули ввода-вывода приложения C работают на имитированных телетайпах LT33 |
| `yellow/` | YELLOW (SRI International, 1978): затравка, yellowc на YELLOW, семя, тесты и учебные программы из отчёта |
| `os/` | PAIRS, ядро в стиле Tandem NonStop на RED; система THE Дейкстры на RED, BLUE и YELLOW и её семафоры на GREEN; Kubernetes поверх THE на всех четырёх; `contrast/`: три задачи на каждом языке и на семафорах THE |
| `kube/` | Управляющий цикл Kubernetes на RED в виде процессной пары, а также на GREEN, BLUE и YELLOW |
| `labs/` | Упражнения с проверкой: двенадцать на RED, семь на BLUE, восемь на YELLOW |
| `problems/` | Десять контрольных задач DoD: заметки и сравнение; `run/` делает оригиналы 1979 года работающими |
| `ada83/` | Те же ситуации на Аде 83, для GNAT `-gnat83` |
| `notes/` | Грамматика RED, дайджест GREEN, история, находки по GREEN |

```sh
make                   # redc из семени, дважды; файлы C должны совпасть
make genesis           # первый шаг, от затравки на Python
red/tests/run.sh
red/manual/run/run.sh  # примеры главы 14 руководства по RED
make -C green fixpoint test genesis
problems/run/run.sh    # контрольные задачи, RED и GREEN (нужен greenc)
os/run.sh              # PAIRS, THE и три цикла Kubernetes
labs/check.sh 03 look
```

Нужны компилятор C, make, Python 3 (только для genesis) и perl (для таймаутов).
Откуда взяты оригиналы 1979 года в `problems/original/` и `red/manual/original/`,
написано в `problems/README.md` и `red/manual/README.md`.
