# Оберон в своём KubeVirt — без Cozystack

*English: [GUIDE.md](GUIDE.md)*

Машина RISC5 Вирта работает на обычном KubeVirt. Ничего не форкается: KubeVirt,
его оператор и ваши виртуалки остаются штатными. CI доказывает это на каждом
изменении: `kubevirt-e2e.yml` поднимает кластер kind с каждой поддержанной
версией KubeVirt, ставит машину так же, как описано здесь, и сверяет экран с
эталоном побитно (находка 67).

Пользователям Cozystack эта страница не нужна — всё это делает каталог
(`site/cozystack/`).

## Что нужно

| | |
|---|---|
| KubeVirt | версия из [`versions.txt`](versions.txt): **v1.8.4** или **v1.9.0**. Образ launcher обязан совпадать с версией кластера в точности (находка 44) |
| Узлы | **linux/amd64** — опубликованные образы launcher собраны только под amd64. KVM не нужен: чужая архитектура всё равно исполняется программно |
| Инструменты | `kubectl`, `helm` 3, `jq`, `git`, `python3`; `virtctl` той же версии, что KubeVirt (подресурс VNC версионирован) |
| Хранилище | любой StorageClass с `ReadWriteOnce` |

## Что меняется в кластере

Две настройки на весь кластер, обе обратимы:

1. **Признак `Sidecar`** в ресурсе KubeVirt. Машина описывается через штатный
   перехватчик `OnDefineDomain`, а он работает сторонним контейнером.
2. **Образ `virt-launcher`**. Наш — это штатный образ той же версии KubeVirt с
   двумя добавками: libvirt, пересобранный с патчем примерно в десять строк,
   который учит его архитектуре `risc5`, и эмулятор `qemu-system-risc5`.
   Остальные виртуалки на нём работают как прежде — обычная Ubuntu грузится на
   этом образе в проверке каждого выпуска.

Всё прочее — своё у каждой машины: ConfigMap с перехватчиком, том с ПЗУ и
диском, задача наполнения и `VirtualMachine`.

## 1. Включить признак Sidecar

```sh
KV_NS=kubevirt   # пространство имён, где стоит KubeVirt

kubectl -n $KV_NS get kubevirt kubevirt -o json \
  | jq '.spec.configuration.developerConfiguration.featureGates |= ((. // []) + ["Sidecar"] | unique)' \
  | kubectl replace -f -
```

На узлах без `/dev/kvm` KubeVirt нужен ещё
`spec.configuration.developerConfiguration.useEmulation: true` — к Оберону это
отношения не имеет, обычным виртуалкам там он нужен так же.

## 2. Подменить virt-launcher

Образы публикуются на каждый выпуск и каждую версию KubeVirt:

```
ghcr.io/tym83/paleocomputing/virt-launcher:<версия KubeVirt>-paleo-<выпуск>
```

например `virt-launcher:v1.8.4-paleo-v0.1.15`. Они подписаны процессом выпуска;
проверить перед использованием:

```sh
cosign verify ghcr.io/tym83/paleocomputing/virt-launcher:v1.8.4-paleo-v0.1.15 \
  --certificate-oidc-issuer https://token.actions.githubusercontent.com \
  --certificate-identity https://github.com/tym83/paleocomputing/.github/workflows/publish.yml@refs/heads/main
```

Подмена — одна запись в `spec.customizeComponents.patches` ресурса KubeVirt:
она заменяет значение после `--launcher-image` в аргументах `virt-controller`, и
больше ничего. Пишите её тем же скриптом, что компонент Cozystack и CI: он
сохраняет уже имеющиеся у вас правки, не трогает `virt-controller` с
незнакомой раскладкой аргументов и чисто убирает свою запись.

```sh
git clone --depth 1 -b v0.1.15 https://github.com/tym83/paleocomputing
cd paleocomputing

KV_VERSION=$(kubectl -n $KV_NS get kubevirt kubevirt -o jsonpath='{.status.observedKubeVirtVersion}')
echo "$KV_VERSION ghcr.io/tym83/paleocomputing/virt-launcher:$KV_VERSION-paleo-v0.1.15" > /tmp/launchers.txt

# Необязательно: сюда скрипт пишет своё состояние.
kubectl -n $KV_NS create configmap kubevirt-paleo-launcher-status

export KUBECTL=kubectl KUBEVIRT_NAMESPACE=$KV_NS LAUNCHER_TABLE=/tmp/launchers.txt
R=marketplace/repos/platform/packages/system/kubevirt-paleo-launcher/files/reconcile.sh
# Первый проход пишет запись (состояние Applying), следующий видит, что
# virt-controller перекатился (состояние Applied).
until sh $R once && [ "$(kubectl -n $KV_NS get cm kubevirt-paleo-launcher-status -o jsonpath='{.data.state}')" = Applied ]; do sleep 10; done
```

Пока новый под `virt-controller` не может стартовать, состояние остаётся
`Rolling`, и цикл ждёт: для перекатки нужно место ещё под один под
`virt-controller` рядом со старым.

`KUBECTL` вызывается как есть, с текущим контекстом kubeconfig. Для другого
контекста укажите в нём обёртку в две строки, которая запускает
`kubectl --context <имя> "$@"`.

Если ресурс KubeVirt у вас под GitOps, положите ту же запись туда:

```yaml
spec:
  customizeComponents:
    patches:
      - resourceType: Deployment
        resourceName: virt-controller
        type: json
        patch: >-
          [{"op":"test","path":"/spec/template/spec/containers/0/name","value":"virt-controller"},
           {"op":"test","path":"/spec/template/spec/containers/0/args/0","value":"--launcher-image"},
           {"op":"replace","path":"/spec/template/spec/containers/0/args/1",
            "value":"ghcr.io/tym83/paleocomputing/virt-launcher:v1.8.4-paleo-v0.1.15"}]
```

⚠ **Обновление KubeVirt**: launcher обязан идти следом. Меняйте тег на новую
версию KubeVirt тем же изменением или сначала уберите запись. launcher чужой
версии ломает все виртуалки на узле, а не только Оберон. В Cozystack за этим
следит компонент платформы, здесь — вы.

Поды, созданные, пока аренду лидера держит старый `virt-controller`, получают
штатный launcher. Машина Оберона, стартовавшая в это окно, не сможет описать
домен, и KubeVirt повторит запуск; поднимется, когда лидером станет новый.

## 3. Поставить машину

Машина — Helm-чарт из каталога, ставится обычным Helm. В дереве исходников он
смотрит на образ `dev` с ПЗУ и диском, поэтому сначала прибейте его к выпуску:

```sh
python3 marketplace/tools/pin-images.py --release v0.1.15

helm install wirth marketplace/repos/machines/packages/apps/oberon-vm \
  --namespace oberon --create-namespace \
  --set storageClass=<ваш StorageClass>
```

| значение | по умолчанию | |
|---|---|---|
| `storageClass` | `replicated` | класс тома в 1Gi под ПЗУ и диск |
| `hardware` | `base` | `chk` — процессор с аппаратной проверкой границ массива |
| `memory` | `128Mi` | 128Mi…1Gi; сама машина видит 16 МБ |
| `running` | `true` | `false` останавливает машину, диск остаётся |

Что создаёт чарт для релиза `wirth`: ConfigMap `oberon-vm-wirth-hook`, том
`oberon-vm-wirth-payload`, задачу `oberon-vm-wirth-fill-<хэш>`, которая копирует
`prom.bin` и `oberon.dsk` из `ghcr.io/tym83/paleocomputing/oberon-run` на том, и
`VirtualMachine oberon-vm-wirth`. Пока задача не закончила, перехватчик
отказывается описывать домен, и машина перезапускается с нарастающей паузой —
так и задумано.

```sh
kubectl -n oberon wait vm/oberon-vm-wirth --for=condition=Ready --timeout=20m
```

## 4. Посмотреть на экран

```sh
virtctl -n oberon vnc oberon-vm-wirth
```

откроет ваш VNC-клиент. Если его нет, запустите прокси и подключите любой
клиент к `127.0.0.1:5900`:

```sh
virtctl -n oberon vnc oberon-vm-wirth --proxy-only --port 5900
```

Прокси принимает **одно** подключение и выходит (находка 59).

Появится рабочий стол системы Оберон со строкой журнала `Oberon V5 NW 14.4.2013`
и окном `System.Tool`. Мышь абсолютная — указатель идёт за вашим. Средний
щелчок по имени команды выполняет её: попробуйте `System.ShowModules` в окне
инструментов (находка 39).

Переключиться на процессор с проверкой границ:

```sh
helm upgrade wirth marketplace/repos/machines/packages/apps/oberon-vm -n oberon \
  --reuse-values --set hardware=chk
virtctl -n oberon restart oberon-vm-wirth
```

## Убрать

```sh
helm uninstall wirth -n oberon
# назад к штатному launcher; те же переменные, что в шаге 2, таблица тоже
KUBECTL=kubectl KUBEVIRT_NAMESPACE=$KV_NS LAUNCHER_TABLE=/tmp/launchers.txt sh $R uninstall
```

Признак Sidecar можно оставить; уберите из списка, если он больше никому не
нужен.

## Сначала попробовать на kind

[`e2e.sh`](e2e.sh) — сценарий CI, он же запускается руками: kind, KubeVirt,
подмена launcher, машина, сверка экрана. Образ launcher он ждёт в локальном
Docker; опубликованный подходит:

```sh
docker pull ghcr.io/tym83/paleocomputing/virt-launcher:v1.8.4-paleo-v0.1.15
python3 marketplace/tools/pin-images.py --release v0.1.15
export KUBEVIRT_VERSION=v1.8.4 LAUNCHER_IMAGE=ghcr.io/tym83/paleocomputing/virt-launcher:v1.8.4-paleo-v0.1.15
for s in tools cluster kubevirt launcher machine screen; do kubevirt/e2e.sh $s || break; done
kubevirt/e2e.sh down
```

Только на хосте amd64 — по той же причине, что выше.

## Другая версия KubeVirt или своя сборка

Версии не из `versions.txt` нужен свой launcher: libvirt в нём обязан быть
ровно той версии, что в штатном образе. Добавьте строку в `versions.txt`
(комментарий там объясняет, где взять версию libvirt и дайджест) и соберите:

```sh
kubevirt/build.sh --kubevirt v1.9.0 registry.example.com/virt-launcher:v1.9.0-paleo --push
kubevirt/check_image.sh registry.example.com/virt-launcher:v1.9.0-paleo
```

`--platform linux/arm64` передаётся в `docker build` для узлов arm64; такое
сочетание не проверялось.

## Как это устроено

[README.md](README.md) — перехватчик и почему патч нужен только libvirt;
[`../qemu/libvirt/`](../qemu/libvirt/) — сам патч;
[`../qemu/GUIDE.ru.md`](../qemu/GUIDE.ru.md) — та же машина в обычном QEMU.
Находки в `impl/docs/`: 44 (совпадение версий), 48 (Sidecar), 58 (аренда
лидера), 59 (VNC), 60 (версии libvirt), 64 (чарт машины), 65 (компонент
launcher), 67 (проверка на kind).
