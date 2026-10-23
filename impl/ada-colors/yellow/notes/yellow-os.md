# YELLOW for THE and Kubernetes: what it could not say

The programs of phase 2 put YELLOW to the work RED and GREEN already do in `os/` and `kube/`:

| Program | What it is | Against the RED/GREEN run |
|---|---|---|
| `os/the_yellow.yel` | Dijkstra's THE system, six levels | the RED run, but for two lines of the same millisecond in the other order |
| `os/the_kube_yellow.yel` | Kubernetes controllers as level 4 programs on THE | exactly the RED run |
| `kube/kube_yellow.yel` | the API server, watches, controllers, kubelets | the same pods on the same nodes as the GREEN run. Lines of one millisecond come in another order (SEND runs the woken process first), node 2 is found NotReady at 140 ms rather than 160 (the clock ticks every quiet stream each 20 ms), and the kubelet reports its own power loss |
| `os/contrast/*_yellow.yel` | timeouts, failure under a lock, readers and a writer | timeouts as in RED, decided by the waiter; failure: a monitor behaves like RED's REGION, a semaphore like THE's P and V; readers: Hoare's monitor, readers overlap and none overtakes a waiting writer |

Everything here was written in YELLOW as the Report defines it and translated by yellowc. Where
YELLOW (or this translator) has no word for something the RED or GREEN version uses, the
workaround is named in the program and listed here.

## What YELLOW has no word for

- **No timeout on WAIT, and no waiting on two things at once.** RED's WAIT takes a mailbox or a
  DELAY, whichever comes first; GREEN puts a delay alternative in a select. A YELLOW process
  waits on one signal, for as long as it takes. Every timeout here is a separate process that
  watches the clock and SENDs the signal: the watchdog of `contrast/timeout_yellow.yel`, the
  clock of `kube/kube_yellow.yel` that puts a Tick in every quiet watch stream, the clock of
  `the_kube_yellow.yel` that wakes all controllers. Unlike THE, where the watchdog must
  fabricate an item, the woken YELLOW waiter finds its condition still false and decides by
  itself to stop waiting.
- **No messages.** There are no mailboxes and no rendezvous: a process talks to another only
  through a monitor. Every queue (the console of THE, the watch streams) is a monitor written
  for the purpose.
- **No counting semaphore.** The SEMAPHORE of XIV.XI.1 is binary (CLAIM, RELEASE,
  CONDITIONAL_CLAIM). THE's counting semaphores became monitors with a count and two signals
  (Hoare's bounded buffer), which is what Hoare proposed monitors for.
- **No array of monitors, and no handle on a process.** A module TEMPLATE gives as many monitors
  as there are INSTANCEs, but each has a name, not an index: a watch stream per port, a buffer
  per tape reader, a wake-up per controller are eight, four and six named instances, and the
  caller picks one with a SELECT on the number (`Deliver`, `Next`, `PutIn`, `Wake`). Activating a
  process gives nothing back either: to stop kubelet 2, the kubelet writes its own
  PROCESS_IDENTITY where the user can find it.
- **No way to end a program with processes running.** A scope ends when its processes end
  (X.E.1), and there is no HALT. Controllers that loop for ever are asked to stop (a flag and a
  last wake-up), or are ended by RAISE_PROCESS_TERMINATION.
- **No text values.** There is no string concatenation; a line is written in pieces with the
  prelude's overloaded `Write`.

## What YELLOW does differently, on purpose

- **An exception leaves a monitor; it does not release a semaphore.** A monitor procedure that
  fails gives the monitor up, as RED's REGION gives up its lock. CLAIM ... RELEASE are two
  statements, like THE's P and V, and a failure between them leaves the semaphore claimed for
  good (`contrast/failure_yellow.yel`). `the_kube_yellow.yel` therefore cuts a node's power
  between two passes of its kubelet, as the RED version does.
- **PROPAGATE_EXCEPTION leaves its own block.** A handler sees an exception raised in an inner
  block or a called routine, not one raised beside it. The failing part of
  `failure_yellow.yel` is a block of its own for that reason.
- **Hoare's SEND.** The waiter gets the monitor at once and the sender waits, so a waiter tests
  its condition with IF, not WHILE. WAIT's rank orders the waiters: THE's console answers in
  ticket order because each process waits with its ticket as rank, and SEND wakes the smallest.
- **A segment controller is a monitor.** Where THE gives every process a private semaphore to
  wait for the segment controller's answer, a monitor lets the asking process do the work under
  exclusion, and the monitor's entry queue is the queue of requests.

## Where yellowc falls short of the Report

- **Arrays of signals.** The Report does not forbid `ARRAY (... OF SIGNAL)` in a monitor, and
  yellowc accepts one, but it does not tie the components to their monitor: a WAIT on one does
  not let the monitor go, and the program stops in a deadlock. The programs here use template
  instances instead. (Simple SIGNAL variables are tied to their monitor as they should be.)
- **Order of modules.** X.G puts "no lexical ordering restriction" on the composite
  declarations of a scope: a module may import what a later module exports. yellowc resolves
  imports in text order, so a module can name only modules declared before it. In THE this
  happens to be Dijkstra's hierarchy read as a rule of the translator: the segment controller
  (level 1) can call the console only because the console's mailbox is declared first, as a
  level 0 mechanism.
