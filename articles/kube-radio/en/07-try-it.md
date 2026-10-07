# How to try it yourself

There are four ways, from very simple, where nothing needs installing, to your own cloud. Everything below is open: the sources are in the repository [tym83/paleocomputing](https://github.com/tym83/paleocomputing), Kube's code in `impl/kube`, and a detailed description with measurements in `impl/kube/README.md`.

## In a browser

Open the [cluster lab](https://tym83.github.io/paleocomputing/oberon/kube.html) and wait half a minute. Nothing needs installing; everything runs in the tab, and the server only serves files. The page is happiest in a recent Chrome or Firefox on a computer with several cores, since each of the three machines takes a core of its own. Keep the tab in view: in the background the browser slows the page down, and the cluster, though it does not stop, lives noticeably slower.

To run the same page locally, clone the repository and start any static server in `impl/web`, for example `python3 -m http.server 8765`, then open `http://127.0.0.1:8765/kube.html`. And if you need no browser at all, the same three-machine cluster runs in Node.js with `node impl/web/kube-test.mjs`. It boots three machines on Wirth's actual circuit, waits for the cluster to form, and checks from the air that all pods run and all signatures are valid.

## In QEMU on your computer

You need Docker, git and make. First build our machine model in QEMU. The build runs in a container, so QEMU's dependencies stay out of your system, but it takes about ten minutes:

```sh
git clone https://github.com/tym83/paleocomputing
cd paleocomputing
make -C qemu build
```

The system disk, with Kube, KubeNet, the workloads and the commands-at-start module already compiled onto it, is easiest to take from the published image. Each machine needs its own copy of the disk, grown to eight megabytes so the system has room to write its store:

```sh
docker create --name payload ghcr.io/tym83/paleocomputing/oberon-run:v0.1.21
docker cp payload:/opt/oberon/payload/prom.bin .
docker cp payload:/opt/oberon/payload/oberon.dsk .
docker rm payload
for m in plane node1 node2; do cp oberon.dsk $m.dsk; truncate -s 8M $m.dsk; done
```

Next comes the air: a Docker network with a relay in it:

```sh
docker network create kube-air
docker run -d --name relay --network kube-air -v "$PWD/qemu/radio:/r" \
  qemu-build:risc5 'python3 -u /r/relay.py'
```

And three machines, each with its commands at start. The string after `commands=` is exactly what the machine runs after booting, the commands separated by semicolons:

```sh
run() {
  docker run -d --name $1 --network kube-air -p 127.0.0.1:$2:5900 \
    -v "$PWD/.qemu-work:/src:ro" -v "$PWD:/w" -w /w qemu-build:risc5 \
    "/src/build/qemu-system-risc5 -machine 'oberon,radio=air,commands=$3' \
     -bios prom.bin -drive if=none,id=sd0,file=$1.dsk,format=raw -vnc :0 \
     -chardev udp,id=air,host=relay,port=7524,localaddr=0.0.0.0,localport=7524"
}
KEY=00c0ffee00c0ffee
run plane 5900 "Kube.Start;KubeNet.Serve kube $KEY;Kube.Ensure web 4 Ticker"
run node1 5901 "KubeNet.Join node1 kube $KEY"
run node2 5902 "KubeNet.Join node2 kube $KEY"
```

The machines' screens are on VNC ports 5900, 5901 and 5902. Booting in software emulation takes up to a minute; after that the control plane's log shows the nodes Ready, and the nodes show their pods started. Oberon's mouse has three buttons, and the middle one runs the command it points at, so `Kube.Get` in any window of the control plane shows all objects, and `Ticker.Show` on a node shows its pods. To roll out a new version, write `Kube.Apply web 4 Ticker2 ~` on the control plane and middle-click that line.

![The control plane in QEMU after a restart. The store came back from disk, `Kube.Ensure` among the commands at start saw that the deployment exists and left it alone, and `Kube.Get` shows the same pods on the same node. The shot was taken by an automated check; nobody typed anything](../img/qemu-plane.png)

![Node node-b in QEMU. It joined first and got all four pods: like the real scheduler, Kube does not move running pods to a node that came later](../img/qemu-node-b.png)

You can listen to the air from the side, as the tests do. The listener joins the relay as one more machine, sends nothing, and prints every message with its signature checked:

```sh
docker run --rm -it --network kube-air -v "$PWD/qemu/radio:/r" \
  qemu-build:risc5 'python3 -u /r/listen.py relay --key 00c0ffee00c0ffee'
```

And then you can break things. `docker stop node2` switches a node off, `docker stop relay` jams the air, and `docker start` brings either back. The same folder holds `inject.py`, which can play the intruder.

The checks in the repository start the cluster in exactly this way, only automatically. After building QEMU and the tools (`make -C impl tools`) you can run them yourself: `python3 qemu/test/kube_dr_check.py` checks every failure from the table above, `python3 qemu/test/kube_boot_check.py` the cluster forming from commands at start alone, and `python3 qemu/test/kube_load_check.py --nodes 4` measures load. Keep in mind that each Oberon machine takes a whole core, since its loop never idles, so eight nodes on a laptop will measure the laptop rather than the cluster.

When you are done, the containers go with `docker rm -f plane node1 node2 relay` and the network with `docker network rm kube-air`.

## In your own KubeVirt

An Oberon machine also runs in plain KubeVirt, without Cozystack. It needs our virt-launcher image, which knows the RISC5 architecture, and KubeVirt's ability to attach hooks to virtual machines switched on. How to do that is described in detail in the [guide](https://github.com/tym83/paleocomputing/blob/main/kubevirt/GUIDE.md), together with an example VirtualMachine. A cluster needs three such machines, a relay as an ordinary pod with a UDP service, and the commands at start in the machine's annotation, which the hook passes on to QEMU. That is exactly what the Cozystack catalog does for you, so without Cozystack the easiest way is to look at what its charts in the `marketplace` folder create.

## In Cozystack

If you have Cozystack, plug in our catalog once with `cozypkg`:

```sh
cozypkg tap oci://ghcr.io/tym83/paleocomputing/machines:v0.1.21
cozypkg add paleocomputing.machines
```

The cluster administrator has two duties here: to switch on the Sidecar feature gate in KubeVirt and to install our virt-launcher image matching your KubeVirt version. The details are on the [project page](https://tym83.github.io/paleocomputing/cozystack/).

After that, users see a Paleocomputing section in the dashboard, with OberonVM, OberonAir and OberonKube in it. A Kube cluster is ordered with one form or one resource:

```yaml
apiVersion: apps.cozystack.io/v1alpha1
kind: OberonKube
metadata:
  name: farm
spec:
  nodes: 3
  key: 00c0ffee00c0ffee
  deployments: web 4 Ticker; api 2 Ticker2
```

From this order the catalog creates an air, a control plane machine and three nodes, and the cluster forms by itself. Any machine's screen opens with `virtctl vnc` under the tenant's own rights; the machine names are shown in the dashboard. Deleting the order deletes all its parts.

You can also build a cluster by hand from separate machines. Then create an `OberonAir`, and in each `OberonVM` name that air in `air`, set the role in `kubeRole` (`plane` for the control plane and `node` for the nodes), the node name in `kubeNode` and the same key in `kubeKey`. This is more fun if you want, say, to put two clusters with different keys on one air and watch them not get in each other's way.
