# Six labs in your browser

At first I doubted the cluster could be run in a browser at all. The Oberon machine in the labs of the previous article already ran in a tab: it is Wirth's actual circuit, translated to C++ and compiled to WebAssembly. But it had no radio, and a cluster needs three machines that hear each other. So the browser machine got the same nRF24L01+ transceiver model as the QEMU one, and learned to hand the frames it sends to the outside and to take in other machines' frames. Each machine runs in a background thread of its own, and the page takes their frames and hands them to the others, that is, the page itself is the air. It can also lose a given share of frames, cut a single machine off the air and read Kube's messages, checking their signatures, which is why a cluster table built from the air appears on its right.

A serial port was needed too, so that machines learn their roles at power-on, as in the cloud. The control plane receives the commands `Kube.Start`, `KubeNet.Serve kube 00c0ffee00c0ffee` and `Kube.Ensure web 4 Ticker`, and the nodes `KubeNet.Join` with their names, so nothing has to be typed. `Kube.Ensure` is there for a reason, but more on that in the sixth lab.

Speed turned out to be a task of its own. In WebAssembly Wirth's circuit executes under a million instructions a second per machine, that is, dozens of times slower than the 25 MHz board. Kube, meanwhile, counts time in machine seconds: a heartbeat every second, a timeout of five. Had I kept the machines' clocks honest, the cluster would take several minutes to form, and the lab with a node switched off would take about five minutes. So the page runs the machines' clocks ten times faster than their instructions, and the machines believe they run at 2.5 MHz. Their seconds pass at a pace the eye can follow, and the protocol does not care: it has no idea how many instructions fit into a second.

Background tabs held another unexpected trap: the browser slows timers in them sharply, and the cluster nearly froze. So the machines now spin their own loop and do not depend on the page's timers. The last trap was input. The page types a command into a machine with keys and mouse clicks, and at first it did so in one go. That is about eleven million instructions, which with the fast clock is over four seconds of machine time during which the machine does not hear the air. After every button press the control plane declared both nodes NotReady, and all that saved it was that eviction stops in FullDisruption. Now input goes in small portions interleaved with the machine's work, and the air is delivered in between.

Each lab checks itself and shows a tick when what it describes has really happened on the air. You cannot press a button and get a tick: the check looks at heartbeats and assignments, not at what you did.

[Open the lab](https://tym83.github.io/paleocomputing/oberon/kube.html)

![All six labs in a row, sped up eight times. The cluster forms, new code rolls out, a node is switched off, the air is jammed, an intruder tries four ways, the control plane is restarted](../img/en-kube-lab.gif)

## 1. The cluster forms by itself

Nothing to do but wait. The machines boot, and the control plane's screen shows the module `Boot` running the commands that came over the serial port. Kube installs three controllers, starts listening to the air and creates the deployment `web` with four pods, and a couple of seconds later the lines "node node1 Ready" and "node node2 Ready" appear in the log.

![The control plane's screen. Everything in the log below the system's version line was done by the commands at start; nobody pressed a single key](../img/en-screen-plane.png)

Meanwhile the nodes show the kubelet receiving its assignment and starting the pods of the Ticker module.

![The screen of node1. The kubelet joined the air, received an assignment with two pods, loaded the Ticker module and called its Start for each. The last lines are the output of Ticker.Show: how many seconds each pod has lived](../img/en-screen-node1.png)

On the right of the page the cluster table fills in. For each node it shows when it was last heard, which pods it says it runs, and which are bound to it. If those two columns differ, the cluster has not converged yet, or something has gone wrong.

![The cluster table built from the air. The page asks Kube nothing; it just listens to heartbeats and assignments](../img/en-panel-cluster.png)

## 2. Roll out new code

Press the button **web 4 Ticker2**. The page types `Kube.Apply web 4 Ticker2 ~` on the control plane and runs it with a middle click, as a person would. Kube creates a new ReplicaSet and starts moving pods one at a time. The check passes the rollout when every pod runs the new image, and only if during all that time the number of pods never fell below four or rose above five. It counts from heartbeats, that is, from what the nodes actually ran.

![The air during the rollout. The control plane sends the specs of new pods with the image Ticker2, and the nodes report in their heartbeats that they started them](../img/en-panel-air-rollout.png)

When the rollout is over, press **Ticker2.Show** on a node, and it shows the new version counting. The whole story is in the node's log: the Ticker v1 pods stopped, the Ticker v2 pods started, and the new pods have ids different from the old ones.

![A node's screen after the rollout. Every old pod got Stop, every new one Start, and Ticker2.Show lists the new pods](../img/en-screen-node2-ticker2.png)

## 3. A node dies

Press **Power off** above the screen of a node that runs pods. Its screen goes dark, its heartbeats stop, and after five machine seconds the control plane marks the node NotReady, and two seconds later moves its pods to the remaining one. Switch the node back on, and it boots, joins the air and becomes Ready, but nobody gives its pods back: like the real scheduler, Kube does not move running pods to a node that came later. New pods from scaling up, however, will go to it as the least loaded node.

![The node is off. It is red in the table and has not been heard for a while, and all pods already run on the second node](../img/en-06-moved.png)

## 4. The air dies

Press **Switch the air off** and wait half a minute. All nodes go NotReady at once, but Kube decides that the link broke, not the nodes, and moves nothing. Switch the air back on, and a couple of seconds later the same pods run on the same nodes. The lab passes only if not one assignment changed during the outage or after it.

![The air is off. Both nodes are NotReady, but the assignments are unchanged: Kube understood this is a lost link](../img/en-07-air-off.png)

The most interesting part here is to open "what is going on" under the lab and read about the 74 reassignments the first version made in twenty seconds of outage. And if you like, switch the air off for a couple of seconds, shorter than the timeout, and see that nothing at all happens.

## 5. An intruder

The section "An intruder on the air" has four buttons. Each sends, on behalf of a stranger, the assignment "run nothing" to the node that runs pods, and does so right after a genuine assignment from the control plane, so that the forgery is the last thing the node heard. The first button tags it as another cluster's, the second signs it with the wrong key, the third replays a genuine assignment recorded earlier. The node ignores all three and keeps running its pods.

The fourth button signs the forgery with the real cluster key and a fresh counter. That is the control case, and the node obeys, stopping its pods. Without it the lab would prove nothing: what if the node simply listens to nobody but the control plane? A second later the control plane sends its next assignment, and the pods come back, because the protocol carries the full state, not commands.

![The intruder panel after the fourth attempt: the node obeyed the assignment signed with the key. It ignored the three forgeries before it, and each time the page said so right here](../img/en-panel-intruder.png)

The forgeries are visible in the air log too, by the way: the page checks signatures itself and marks messages with a foreign tag or a bad signature.

## 6. The control plane restarts

Switch the control plane off and, a few seconds later, back on. It boots, runs its commands once more, reads its store from disk, and not one pod moves. The nodes kept running their last assignment all along, and the control plane, once back, gave them one timeout to report, and they all did.

It was this lab that found the last bug before publication. The commands at start first had `Kube.Apply web 4 Ticker`, and after a restart the deployment went back to Ticker, undoing the rollout from the second lab. The QEMU tests did not notice, because they restarted the control plane before any rollout. Here, where a person rolls out a new version by hand, the right thing is to keep what they did, so the commands now hold `Kube.Ensure`, which creates a deployment only if there is none yet. In the cloud, on the contrary, the order form is the source of truth, and `Kube.Apply` stayed there.

![All six labs done](../img/en-11-labs-done.png)

## What else to try

The page does more than the labs. With the loss slider you can spoil the air, say, lose 30 percent of frames, and see that pods do not move anywhere. Push the losses much higher, and sooner or later five heartbeats in a row will go missing and Kube will take a live node for a dead one; that is the price of a timeout. **Cut off the air** isolates a machine without switching it off, and you can watch the cut-off node keep running its pods although the control plane has already handed them to others. That is the very case of a pod running in two places, and Kubernetes lives with it in just the same way. In the command field you can type any Oberon command, for example `Kube.Apply api 2 Ticker ~` to create a second deployment, or you can click right into a machine's screen and work in it by hand. The middle button there is a click with Alt.
