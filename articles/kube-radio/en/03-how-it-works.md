# How Kube is built

## Where it started

The first version of Kube was a toy, and I said so honestly in a separate episode of the series. It was one Oberon module holding an object store and three controllers, for deployments, ReplicaSets and nodes. The nodes were just three names, `node-a`, `node-b` and `node-c`, and a pod counted as running because a controller had written a node's name into it. Nothing ran anywhere. But that version showed very clearly that the heart of Kubernetes is not containers but reconcile loops, and that those loops fit Oberon beautifully.

Here is why they fit. Oberon already has exactly what a control plane needs, a central loop that calls background work. `Kube.Start` installs the three controllers as three `Oberon.Task`s with a period of 50 milliseconds, in the same ring where the system's garbage collector runs. From then on `Oberon.Loop` calls them whenever the user is not typing or moving the mouse. The controllers do not call each other and send each other nothing. Each looks only at objects of its own kind and changes only what it owns, and the result of its pass becomes the input of another controller on its next pass. That is exactly how the controllers of real Kubernetes cooperate: through shared state, not messages.

To call it a cluster, two things were missing. Nodes, meaning several machines and a way for them to talk. And rollouts, meaning one version of an application replacing another without a gap. At first I thought nodes were a dead end, since Wirth's machine has no network. Then I reread the book and found the radio in it.

## Three messages, each in one frame

The protocol, which I called KubeNet, has three messages. All of them go to everyone at once, since a radio cannot pick a receiver anyway, and each fits into one frame.

A heartbeat is sent by a node every second. It holds the node's name and the ids of the pods that actually run on it right now. An assignment is sent by the control plane every second to every live node, with the ids of the pods bound to that node. And a spec, also from the control plane, says which image the pod with a given id has. The control plane sends one spec per tick, starting with pods that do not run yet.

Why one frame and not a proper message of any length? `SCC` can send packets of up to half a kilobyte by cutting them into frames. But the air has no collision avoidance, and if two stations start sending long packets at once, their frames get interleaved at every receiver, which cannot tell whose frame is whose. One could invent air arbitration, queues and retransmissions, but that would be exactly the road along which networks arrived at the complexity I wanted to get away from. So every message fits into 24 bytes of data.

This is how they are spent in a heartbeat or an assignment: a byte of the cluster tag, six bytes of node name, a byte of pod count, up to ten bytes of pod ids, two bytes of counter and four bytes of signature. Exactly 24. All of Kube's odd limits follow from this: a node name is at most six characters, a pod id is one byte, and a node runs at most ten pods, because no more fit into a heartbeat and the scheduler will not bind more.

The most important property of the protocol is that it is level-triggered. A node runs exactly what its last assignment says, rather than a series of "start" and "stop" commands. If an assignment is lost, another one with the same content comes a second later, and nothing needs repair. If a heartbeat is lost, the control plane waits for the next one. No acknowledgements, retransmissions or sequence numbers for reliability: all of the reliability comes from each message carrying the full state rather than a change. On an air that loses a third of its packets, this protocol works without a single false alarm, and I measured that.

![The air in the lab. Hearts are node heartbeats, arrows are assignments from the control plane, the pencil marks pod specs. A rollout is under way here, and the control plane is telling the nodes about new pods with the image Ticker2](../img/en-03b-air-log.png)

## A pod is a module

In real Kubernetes a pod's image is a file-system archive with a program inside, which the kubelet pulls from a registry and runs in an isolated container. Oberon has none of that, but it has something that works similarly and much faster. A pod's image in Kube is the name of an Oberon module on the node.

When the kubelet learns of a new pod, it calls `Modules.Load` with the image name. If the module is not loaded yet, the system finds its compiled file on disk, loads it into memory, links it with every module it imports, checks the keys of their interfaces and runs its body. Then the kubelet finds the module's `Start` command and calls it. When the pod is to go away, the kubelet calls the same module's `Stop`.

Oberon commands take no parameters, so a pod's id cannot be passed directly. For that there is a tiny module, `Pods`, with two variables, the id and the image. The kubelet sets them before the call, and the workload module reads them. Not pretty, but very much in Oberon's spirit: a module's global variable is a legitimate way to pass context here, because exactly one command runs at any moment and there can be no races.

`Ticker` and `Ticker2`, two versions of a teaching workload, keep a seconds counter for each pod they start, and `Ticker.Show` prints which pods run on this machine and how many seconds each has lived. They make rollouts easy to watch: the node's log shows the version 1 pods stopping and the version 2 pods starting.

If there is no module of that name on the node, `Start` cannot be called, and the kubelet simply leaves the pod out of its heartbeat. The control plane sees that the pod is assigned but not running, and it stays Pending. In Kubernetes that is what a pod with an image that could not be pulled looks like.

## The store on disk

In Kubernetes the whole state of the cluster lives in etcd, and a restarted control plane reads it back from there. In Kube the role of etcd is played by an array of 256 records in the control plane machine's memory, and so that it survives a restart, a background task writes it to disk whenever it changes.

It is written to two files in turn, `Kube.Store0` and `Kube.Store1`, each with a generation number and a checksum. If power fails in the middle of a write, only one file is damaged, and the other, of the previous generation, stays whole. At start `Kube.Start` reads both and takes the newer of the whole ones. The files are rewritten in place rather than created anew, and that too is Oberon's requirement: its file system frees the space of replaced files only at the next boot, and creating a new file for every change would simply run the disk out under an active cluster.

After a restart the control plane gives every node one heartbeat timeout to report before it counts them as NotReady. Kubernetes does the same after its node controller restarts. The start of that grace period, by the way, had to move from the moment the store is read to the moment the control plane starts listening to the air. In the cloud, a person had time to type something over VNC between those two commands, the timeout ran out, and every pod moved although none had stopped.

## Rollouts, and two bugs Kubernetes knows well

`Kube.Apply web 6 Ticker2` on a running `web 6 Ticker` changes the image. The deployment controller creates a new ReplicaSet and starts moving pods one at a time. First one pod with the new image is added. When its kubelet reports it running, there is one pod more than wanted, and the old ReplicaSet removes one of its pods. This repeats until the old ReplicaSet is empty, and then it is deleted.

It looks simple, but two bugs surfaced on the way, and both turned out to be old acquaintances of Kubernetes.

The first is about stopping a pod. When the control plane deletes a pod from the store, the pod still runs on its node until the kubelet hears the next assignment, up to a second later. Meanwhile the controller already sees one pod fewer and adds a new one. As a result, for a moment eight pods ran where seven were allowed. Real Kubernetes behaves the same way, and only recent versions gave the Deployment a field that makes it wait for old pods to stop completely. In Kube I made that the default: pods the nodes still report but the store no longer has count as being stopped, and while there are any, no new pod is added.

The second is about pod ids. A node knows a pod only by its one-byte id. At first a new pod got the lowest free id, which often was the id of the very old pod it had just replaced. The kubelet saw a familiar id in the assignment and decided nothing had changed. The store said Ticker2 was running, and Ticker kept running on the node. Kubernetes never reuses a pod's UID for exactly this reason. Now Kube's ids go round, and the check after every rollout requires that no id of an old pod runs any longer.

![The rollout is over: all four pods run the new image, and during the rollout there were never fewer than four pods nor more than five. The page counted that from heartbeats, not from what the control plane says](../img/en-04-rolled.png)

## The failures clusters are built for

A cluster exists to survive failures, and I decided to test that the way I would test a real one. A separate test starts a control plane and two nodes and judges them only from the air. For that a passive listener joins the relay, never transmits, records every heartbeat and every assignment and checks their signatures. The test never asks Kube anything; it looks only at what actually happened on the air.

When a node is switched off, after five seconds of silence the control plane marks it NotReady, and two seconds later moves its pods to the other node. About eight seconds in all. When the control plane is switched off, the nodes keep running their last assignment; there is nobody to tell them otherwise. When it boots again, the store comes back from disk and not one assignment changes. If the nodes lack a module, its pods stay Pending. If 30 percent of packets are lost for a minute, no node goes NotReady and no pod moves.

The timeout was three seconds at first. On an air losing 30 percent, three heartbeats in a row went missing several times a minute, the control plane declared the node dead and moved pods that had never gone anywhere. With five seconds the false alarms stopped, and the price was slower recovery from a real failure, seven seconds instead of four. Kubernetes makes the same trade at another scale: the kubelet reports every ten seconds, and the control plane waits forty to fifty.

The most instructive case was losing the air. When the relay stops for twenty seconds, every node goes silent at once. A control plane that simply trusts its timeouts decides that every node has died and tries to move every pod, with nowhere to move them. When the air comes back, the nodes wake up one by one, the first one back receives everyone else's pods, then the second takes some of them back, and so on. In the first try, twenty seconds of outage changed 74 assignments. The nodes kept working the whole time and noticed nothing, while the cluster staged a disaster for itself.

Kubernetes knows this trap and calls it a fully disrupted zone. If every node goes NotReady, it stops evicting pods, reasoning that all nodes dying at once is far less likely than a lost link. Kube does the same when all nodes, or at least 55 percent of three or more, go NotReady. But it did not work at once; it took two details that only a failed check revealed.

Nodes do not go NotReady at the same moment; their heartbeats are up to a second apart. So the first node to go silent lost its pods before the others went silent and the outage became visible. Now a node's pods move only after it has been NotReady for two seconds, and by then the others have gone silent too. Kubernetes waits five minutes for this by default. And nodes come back one by one as well: the first one back ended the disruption while the others had not reported yet, and their pods moved at once. Now the silent nodes get one more timeout to report after the disruption ends, as Kubernetes does too when it resets the nodes' timers as a zone leaves full disruption. With those two details, twenty seconds without the air change not a single assignment.

## Strangers on the air

Once, in the sandbox, two clusters ended up on one air, and both had a node of the same name. A node of one cluster kept starting and stopping its pods: it obeyed the assignments of both control planes in turn. So a byte with the cluster's tag, computed from its name, was added to the start of every message, and a node began to ignore messages with a foreign tag.

But a tag proves nothing; anyone can send it. So next came the signature with the cluster key and the counter against replays I described in the glossary. The failure test checks this too. Right after a genuine assignment to a node, it sends, on behalf of a stranger, "run nothing" in three ways: tagged as another cluster, unsigned, and as a genuine assignment recorded earlier. The node ignores all three. The same message honestly signed with the key and with a fresh counter, the node obeys, and that is the control case without which the check would prove nothing.

## How much it takes

A separate load test starts a control plane and two to eight nodes, three pods per node, and measures from the air how fast the cluster converges and how fast it recovers from losing a node. At every size the cluster converges in about three seconds and recovers from a lost node in about six, which is the five-second timeout plus a second until the next assignment. There was not a single false NotReady. On eight nodes the air carries about fifteen frames a second, while the nRF24L01+ at the speed Wirth set allows more than a hundred times that, so this cluster runs into a limit not of the radio but of the fact that every Oberon machine occupies a whole host core: Oberon's loop never idles.

## Two bugs in our QEMU

To make all of this work, two bugs had to be fixed not in Kube but in our machine model in QEMU, and I would not have found either without the cluster. The `MOD` operation after a multiplication sometimes returned the wrong half of the product, so the store's checksum never matched, which meant the store was never written. And a machine that had once lost its relay stopped hearing the air for good, because QEMU's UDP channel quietly dropped its reader after a failed read. Both findings are described in the repository, and they are a good example of why I love running real programs on an emulator: booting the system touched neither bug.

## Commands at start, and OberonKube

The last step was about convenience, but without it nothing else would make sense. Nobody will start a cluster a second time if it needs commands typed over VNC on every machine. I needed each machine to know at start who it is, the way a cloud VM learns its role from cloud-init.

QEMU now takes a string of commands for the machine to run at start and puts it on the serial port, as if typed at a console. A small module, `Boot`, reads the string and runs the commands one by one, each with its parameters. It is called at the very end of the body of `System`, the module loaded at system start, and `System` itself is rebuilt from the image's own sources with that single line added, so its interface, and the key every other module checks, stays the same.

And here the cluster taught one more lesson. The commands at start run at every start, not just the first. If `Kube.Apply web 4 Ticker` is among them, then after every restart of the control plane the deployment returns to its first-boot version, and a rollout made since is quietly undone. It was the browser lab, by the way, not the QEMU tests, that found this. Now there is `Kube.Ensure`, which creates a deployment only if there is none.

In Cozystack all of this came together in one catalog application, `OberonKube`. A user writes how many nodes they need, a cluster key and a list of deployments, and the catalog creates the air, the control plane machine and the nodes, and gives each machine the commands for its role. The cluster forms by itself. The machines of one air also try to land on different hosts, so that losing a host costs as few nodes as possible.
