% KUBE-HA/RED -- the same control loop, with the API server run as a Tandem
% process pair (see os/pairs.red) instead of a replicated store.
%
% The primary API server checkpoints every change of its store (and of the
% watcher list) to the backup before it tells the watchers; the backup takes
% over on a missing heartbeat, takes the name API and lists the whole store to
% every watcher. Writes that were queued in the dead primary's mailbox are
% lost, and no client is told: the controllers are level triggered, so their
% next resync sees the world as it is and asks again. Expectations (pods asked
% for but not seen yet) expire on a quiet resync, as in Kubernetes.
%
% The same shapes as in Kubernetes, in RED's own terms:
%   API server        a task that alone owns the object store
%   watch stream      a mailbox: the API server sends every change to the
%                     mailboxes of the controllers that watch that kind
%   informer cache    each controller keeps its own copy of the objects
%   reconcile         WAIT for an event, or a DELAY that forces a resync:
%                     level triggered, a missed event is repaired on the next pass
%   optimistic write  an update carries the resource version it was based on;
%                     a stale one is refused and the controller tries again later
%   node lease        kubelets send heartbeats; the node controller marks a node
%                     NotReady when they stop and deletes its pods
% Nothing is shared between tasks except mailboxes. Time is virtual, in ms.

CAPSULE kube_ha EXPORTS NONE;

   % ---- objects ------------------------------------------------------------------
   CONST k_deploy := 1;
   CONST k_rs := 2;
   CONST k_pod := 3;
   CONST k_node := 4;
   CONST k_lease := 5;

   CONST pending := 0;
   CONST running := 1;
   CONST ready := 1;
   CONST not_ready := 2;

   CONST nobj := 64;
   CONST nnodes := 3;

   % one shape for every kind; unused fields stay 0
   %   deploy: replicas, version          rs: owner (deploy), replicas, version
   %   pod: owner (rs), node, phase, version   node: phase, beat (last heartbeat)
   ABBREV obj : RECORD[kind, id, rv, owner, replicas, version, node, phase, beat, gone : INT];
   ABBREV cache : ARRAY INT(1 .. nobj) OF obj;

   CONST op_create := 1;
   CONST op_update := 2;
   CONST op_delete := 3;
   CONST op_event := 4;
   CONST op_watch := 5;
   CONST op_beat := 6;
   CONST op_list := 7;
   CONST op_get := 8;
   CONST op_relist := 9;      % sent by a new primary: overwrite the cache entry
   CONST op_ckpt := 10;       % primary -> backup: the store entry after a change
   CONST op_ckwatch := 11;    % primary -> backup: a watcher registered
   CONST op_hb := 12;         % primary -> backup: heartbeat

   ABBREV msg : RECORD[op, port, kinds : INT, o : obj];

   CONST p_api := 1;
   CONST p_deploy := 2;
   CONST p_rs := 3;
   CONST p_sched := 4;
   CONST p_nodes := 5;
   CONST p_user := 6;
   CONST p_kubelet := 7;       % kubelet of node n listens on port p_kubelet + n - 1
   CONST p_api2 := 10;         % the API server backup
   CONST nports := 10;

   VAR ports : ARRAY INT(1 .. nports) OF MAILBOX[msg](256);
   VAR acts : ARRAY INT(1 .. nports) OF ACT;
   VAR api_route : INT := p_api;
   VAR crash_armed : BOOL := FALSE;   % fault injection, see the boot sequence
   VAR names : DATA_LOCK;

   ABNORMAL FUNC api => INT IMPORTS names, READONLY api_route;
      VAR p : INT;
      REGION names DO
         p := api_route;
      END REGION;
      RETURN p;
   END FUNC api;

   PROC take_name(CONST p : INT) IMPORTS names, api_route;
      REGION names DO
         api_route := p;
      END REGION;
   END PROC take_name;

   FUNC blank(CONST kind : INT) => obj;
      RETURN [kind : kind, id : 0, rv : 0, owner : 0, replicas : 0, version : 0, node : 0,
              phase : 0, beat : 0, gone : 0];
   END FUNC blank;

   FUNC mk(CONST op, port : INT, CONST o : obj) => msg;
      RETURN [op : op, port : port, kinds : 0, o : o];
   END FUNC mk;

   FUNC kind_name(CONST k : INT) => STRING[ASCII];
      CASE k
         WHEN k_deploy => RETURN "deployment";
         WHEN k_rs => RETURN "replicaset";
         WHEN k_pod => RETURN "pod";
         WHEN k_node => RETURN "node";
         ELSE => RETURN "lease";
      END CASE;
   END FUNC kind_name;

   FUNC str(CONST n : INT) => STRING[ASCII];
      RETURN CNVT[STRING[ASCII]](n);
   END FUNC str;

   PROC log(CONST s : STRING[ASCII]);
      WRITELN("[" & str(TIME) & " ms] " & s);
   END PROC log;

   % ---- the API server -------------------------------------------------------------
   TASK apiserver(CONST me : INT, CONST start_role : INT, CONST partner : INT)
         IMPORTS ports, acts, crash_armed;
      VAR store : cache;
      VAR watchers : ARRAY INT(1 .. nports) OF INT;   % a bit set of kinds per port
      VAR next_id : INT := 0;
      VAR next_rv : INT := 0;
      VAR conflicts : INT := 0;
      VAR m : msg;
      VAR role : INT := start_role;
      VAR paired : BOOL := partner > 0;

      PROC broadcast(CONST o : obj, CONST op : INT) IMPORTS ports, watchers;
         FOR p : INT(1 .. nports) REPEAT
            IF (watchers(p) DIV (2 ** o.kind)) MOD 2 = 1 THEN
               SEND(ports(p), mk(op, me, o));
            END IF;
         END REPEAT;
      END PROC broadcast;

      % a change of the store reaches the backup before anyone else (NonStop rule)
      PROC changed(CONST o : obj) IMPORTS ports, store, next_id, next_rv, paired;
         store(o.id) := o;
         IF o.id > next_id THEN
            next_id := o.id;
         END IF;
         IF o.rv > next_rv THEN
            next_rv := o.rv;
         END IF;
         IF paired THEN
            SEND(ports(partner), mk(op_ckpt, me, o));
         END IF;
         broadcast(o, op_event);
      END PROC changed;

      FOR p : INT(1 .. nports) REPEAT
         watchers(p) := 0;
      END REPEAT;
      FOR i : INT(1 .. nobj) REPEAT
         store(i) := blank(0);
      END REPEAT;
      WHILE role = 2 REPEAT
         WAIT
            WHEN RECEIVE(ports(me), m) =>
               IF m.op = op_ckpt THEN
                  store(m.o.id) := m.o;
                  IF m.o.id > next_id THEN
                     next_id := m.o.id;
                  END IF;
                  IF m.o.rv > next_rv THEN
                     next_rv := m.o.rv;
                  END IF;
               ELSEIF m.op = op_ckwatch THEN
                  watchers(m.port) := m.kinds;
               END IF;
            WHEN DELAY(35) =>
               log("api server backup: no heartbeat, taking over the name API");
               role := 1;
               paired := FALSE;
               take_name(me);
               FOR i : INT(1 .. next_id) REPEAT
                  IF store(i).gone = 0 THEN
                     broadcast(store(i), op_relist);
                  END IF;
               END REPEAT;
         END WAIT;
      END REPEAT;
      WHILE TRUE REPEAT
         WAIT
            WHEN RECEIVE(ports(me), m) =>
               CASE m.op
                  WHEN op_watch =>
                     watchers(m.port) := m.kinds;
                     IF paired THEN
                        VAR w : msg := m;
                        w.op := op_ckwatch;
                        SEND(ports(partner), w);
                     END IF;
                     FOR i : INT(1 .. next_id) REPEAT
                        IF store(i).gone = 0 AND (m.kinds DIV (2 ** store(i).kind)) MOD 2 = 1 THEN
                           SEND(ports(m.port), mk(op_event, me, store(i)));
                        END IF;
                     END REPEAT;
                  WHEN op_create =>
                     m.o.id := next_id + 1;
                     m.o.rv := next_rv + 1;
                     changed(m.o);
                     IF crash_armed AND m.o.kind = k_pod AND m.o.version = 2 THEN
                        crash_armed := FALSE;
                        log("api server primary loses power right after storing pod " & str(m.o.id)
                            & "; the writes still in its mailbox are gone");
                        EXTERMINATE(acts(me));
                     END IF;
                  WHEN op_update, op_delete =>
                     IF store(m.o.id).rv /= m.o.rv OR store(m.o.id).gone = 1 THEN
                        conflicts := conflicts + 1;
                     ELSE
                        m.o.rv := next_rv + 1;
                        IF m.op = op_delete THEN
                           m.o.gone := 1;
                        END IF;
                        changed(m.o);
                     END IF;
                  WHEN op_beat =>
                     % a lease: renewed in place, sent only to lease watchers
                     store(m.o.id).beat := TIME;
                     BEGIN
                        VAR l : obj := store(m.o.id);
                        l.kind := k_lease;
                        broadcast(l, op_event);
                     END;
                  WHEN op_get =>
                     SEND(ports(m.port), mk(op_event, me, store(m.o.id)));
                  WHEN op_list =>
                     FOR i : INT(1 .. next_id) REPEAT
                        IF store(i).gone = 0 AND store(i).kind = k_pod THEN
                           SEND(ports(m.port), mk(op_event, me, store(i)));
                        END IF;
                     END REPEAT;
                     SEND(ports(m.port), mk(op_list, me, blank(0)));
                  ELSE =>
               END CASE;
            WHEN DELAY(10) =>
               IF paired THEN
                  SEND(ports(partner), mk(op_hb, me, blank(0)));
               END IF;
         END WAIT;
      END REPEAT;
   END TASK apiserver;

   PROC watch(CONST port : INT, CONST kinds : INT) IMPORTS ports;
      VAR m : msg := mk(op_watch, port, blank(0));
      m.kinds := kinds;
      SEND(ports(api), m);
   END PROC watch;

   PROC write(CONST op : INT, CONST o : obj) IMPORTS ports;
      SEND(ports(api), mk(op, 0, o));
   END PROC write;

   % an informer: keep the cache current from one event; TRUE if it was new
   ABNORMAL FUNC absorb(VAR c : cache, CONST o : obj) => BOOL;
      VAR fresh : BOOL := c(o.id).id = 0;
      IF o.rv > c(o.id).rv THEN
         c(o.id) := o;
      END IF;
      RETURN fresh;
   END FUNC absorb;

   % an event: a relist from a new primary replaces the cached object outright
   ABNORMAL FUNC take(VAR c : cache, CONST m : msg) => BOOL;
      VAR fresh : BOOL := c(m.o.id).id = 0;
      IF m.op = op_relist THEN
         c(m.o.id) := m.o;
         RETURN fresh;
      END IF;
      RETURN absorb(c, m.o);
   END FUNC take;

   PROC clear(VAR c : cache);
      FOR i : INT(1 .. nobj) REPEAT
         c(i) := blank(0);
      END REPEAT;
   END PROC clear;

   % ---- deployment controller: one replica set per template version ----------------
   TASK deploy_ctl IMPORTS ports;
      VAR c : cache;
      VAR m : msg;
      VAR fresh : BOOL;
      VAR asked : ARRAY INT(1 .. nobj) OF INT;   % version whose replica set was requested
      clear(c);
      FOR i : INT(1 .. nobj) REPEAT
         asked(i) := 0;
      END REPEAT;
      watch(p_deploy, 2 ** k_deploy + 2 ** k_rs);
      WHILE TRUE REPEAT
         WAIT
            WHEN RECEIVE(ports(p_deploy), m) => fresh := take(c, m);
            WHEN DELAY(20) =>
               FOR i : INT(1 .. nobj) REPEAT
                  asked(i) := 0;
               END REPEAT;
         END WAIT;
         FOR d : INT(1 .. nobj) REPEAT
            IF c(d).kind = k_deploy AND c(d).gone = 0 THEN
               VAR found : BOOL := FALSE;
               FOR r : INT(1 .. nobj) REPEAT
                  IF c(r).kind = k_rs AND c(r).gone = 0 AND c(r).owner = d THEN
                     IF c(r).version = c(d).version THEN
                        found := TRUE;
                        IF c(r).replicas /= c(d).replicas THEN
                           VAR o : obj := c(r);
                           o.replicas := c(d).replicas;
                           write(op_update, o);
                           log("deployment " & str(d) & ": scale replicaset " & str(r) & " to "
                               & str(o.replicas));
                        END IF;
                     ELSEIF c(r).replicas > 0 THEN
                        VAR o : obj := c(r);
                        o.replicas := 0;
                        write(op_update, o);
                        log("deployment " & str(d) & ": old replicaset " & str(r) & " scaled to 0");
                     END IF;
                  END IF;
               END REPEAT;
               IF NOT found AND asked(d) /= c(d).version THEN
                  VAR o : obj := blank(k_rs);
                  asked(d) := c(d).version;
                  o.owner := d;
                  o.replicas := c(d).replicas;
                  o.version := c(d).version;
                  write(op_create, o);
                  log("deployment " & str(d) & ": new replicaset for version " & str(o.version));
               END IF;
            END IF;
         END REPEAT;
      END REPEAT;
   END TASK deploy_ctl;

   % ---- replica set controller: as many live pods as replicas ----------------------
   TASK rs_ctl IMPORTS ports;
      VAR c : cache;
      VAR m : msg;
      VAR expect : ARRAY INT(1 .. nobj) OF INT;   % pods created but not yet seen
      clear(c);
      FOR i : INT(1 .. nobj) REPEAT
         expect(i) := 0;
      END REPEAT;
      watch(p_rs, 2 ** k_rs + 2 ** k_pod);
      WHILE TRUE REPEAT
         WAIT
            WHEN RECEIVE(ports(p_rs), m) =>
               IF take(c, m) AND m.o.kind = k_pod AND expect(m.o.owner) > 0 THEN
                  expect(m.o.owner) := expect(m.o.owner) - 1;
               END IF;
            WHEN DELAY(20) =>
               FOR i : INT(1 .. nobj) REPEAT
                  expect(i) := 0;
               END REPEAT;
         END WAIT;
         FOR r : INT(1 .. nobj) REPEAT
            IF c(r).kind = k_rs AND c(r).gone = 0 THEN
               VAR have : INT := 0;
               FOR p : INT(1 .. nobj) REPEAT
                  IF c(p).kind = k_pod AND c(p).gone = 0 AND c(p).owner = r THEN
                     have := have + 1;
                     IF have > c(r).replicas THEN
                        write(op_delete, c(p));
                        log("replicaset " & str(r) & ": delete pod " & str(p));
                        c(p).gone := 1;
                     END IF;
                  END IF;
               END REPEAT;
               IF have + expect(r) < c(r).replicas THEN
                  log("replicaset " & str(r) & ": " & str(have) & " of " & str(c(r).replicas)
                      & " pods, creating " & str(c(r).replicas - have - expect(r)));
               END IF;
               FOR k : INT(have + expect(r) + 1 .. c(r).replicas) REPEAT
                  VAR o : obj := blank(k_pod);
                  o.owner := r;
                  o.version := c(r).version;
                  write(op_create, o);
                  expect(r) := expect(r) + 1;
               END REPEAT;
            END IF;
         END REPEAT;
      END REPEAT;
   END TASK rs_ctl;

   % ---- scheduler: bind each pending pod to the ready node with fewest pods ---------
   TASK scheduler IMPORTS ports;
      VAR c : cache;
      VAR m : msg;
      VAR fresh : BOOL;
      clear(c);
      watch(p_sched, 2 ** k_pod + 2 ** k_node);
      WHILE TRUE REPEAT
         WAIT
            WHEN RECEIVE(ports(p_sched), m) => fresh := take(c, m);
            WHEN DELAY(20) =>
         END WAIT;
         FOR p : INT(1 .. nobj) REPEAT
            IF c(p).kind = k_pod AND c(p).gone = 0 AND c(p).node = 0 THEN
               VAR best : INT := 0;
               VAR best_load : INT := nobj;
               FOR n : INT(1 .. nobj) REPEAT
                  IF c(n).kind = k_node AND c(n).gone = 0 AND c(n).phase = ready THEN
                     VAR load : INT := 0;
                     FOR q : INT(1 .. nobj) REPEAT
                        IF c(q).kind = k_pod AND c(q).gone = 0 AND c(q).node = n THEN
                           load := load + 1;
                        END IF;
                     END REPEAT;
                     IF load < best_load THEN
                        best := n;
                        best_load := load;
                     END IF;
                  END IF;
               END REPEAT;
               IF best > 0 THEN
                  VAR o : obj := c(p);
                  o.node := best;
                  write(op_update, o);
                  c(p).node := best;      % optimistic; a relist corrects it if the write is lost
                  log("scheduler: pod " & str(p) & " -> node " & str(c(best).owner));
               END IF;
            END IF;
         END REPEAT;
      END REPEAT;
   END TASK scheduler;

   % ---- node controller: leases, NotReady, eviction --------------------------------
   TASK node_ctl IMPORTS ports;
      VAR c : cache;
      VAR m : msg;
      VAR fresh : BOOL;
      VAR quiet : BOOL := FALSE;
      VAR draining : BOOL;

      PROC note(CONST m : msg) IMPORTS c;
         VAR fresh : BOOL;
         IF m.o.kind = k_lease OR m.o.kind = k_node THEN
            % freshness is when this controller saw the lease renewed (or the node
            % listed anew), not the time written in it: a control plane outage
            % then costs no node
            IF m.o.kind = k_lease OR c(m.o.id).id = 0 OR m.op = op_relist THEN
               c(m.o.id).beat := TIME;
            END IF;
            c(m.o.id).kind := k_node;
            c(m.o.id).owner := m.o.owner;
            c(m.o.id).id := m.o.id;
            IF m.o.rv > c(m.o.id).rv THEN
               c(m.o.id).rv := m.o.rv;
               c(m.o.id).phase := m.o.phase;
            END IF;
         ELSE
            fresh := take(c, m);
         END IF;
      END PROC note;

      clear(c);
      watch(p_nodes, 2 ** k_node + 2 ** k_lease + 2 ** k_pod);
      WHILE TRUE REPEAT
         WAIT
            WHEN RECEIVE(ports(p_nodes), m) => note(m);
            WHEN DELAY(10) =>
         END WAIT;
         % take in everything already queued before deciding anything
         draining := TRUE;
         WHILE draining REPEAT
            WAIT
               WHEN RECEIVE(ports(p_nodes), m) => note(m);
               WHEN DELAY(0) => draining := FALSE;
            END WAIT;
         END REPEAT;
         % a lease renewed again brings the node back
         FOR n : INT(1 .. nobj) REPEAT
            IF c(n).kind = k_node AND c(n).phase = not_ready AND TIME - c(n).beat <= 30 THEN
               VAR o : obj := c(n);
               o.phase := ready;
               write(op_update, o);
               c(n).phase := ready;
               log("node controller: node " & str(c(n).owner) & " renews its lease, Ready again");
            END IF;
         END REPEAT;
         % when every node goes silent at once, it is the control plane that was
         % away, not the nodes: evict nothing (Kubernetes calls it full disruption)
         BEGIN
            VAR live, silent : INT := 0;
            FOR n : INT(1 .. nobj) REPEAT
               IF c(n).kind = k_node AND c(n).phase = ready THEN
                  live := live + 1;
                  IF TIME - c(n).beat > 30 THEN
                     silent := silent + 1;
                  END IF;
               END IF;
            END REPEAT;
            IF silent > 0 AND silent = live THEN
               IF NOT quiet THEN
                  log("node controller: all " & str(live) & " nodes silent at once, no eviction");
               END IF;
               quiet := TRUE;
            ELSE
               quiet := FALSE;
            END IF;
         END;
         FOR n : INT(1 .. nobj) REPEAT
            IF NOT quiet AND c(n).kind = k_node AND c(n).phase = ready AND TIME - c(n).beat > 30 THEN
               VAR o : obj := c(n);
               o.phase := not_ready;
               o.kind := k_node;
               write(op_update, o);
               c(n).phase := not_ready;
               log("node controller: node " & str(c(n).owner) & " is NotReady, evicting its pods");
               FOR p : INT(1 .. nobj) REPEAT
                  IF c(p).kind = k_pod AND c(p).gone = 0 AND c(p).node = n THEN
                     write(op_delete, c(p));
                     c(p).gone := 1;
                  END IF;
               END REPEAT;
            END IF;
         END REPEAT;
      END REPEAT;
   END TASK node_ctl;

   % ---- kubelet: runs the pods bound to its node, renews its lease ----------------
   TASK kubelet(CONST n : INT, CONST node_id : INT) IMPORTS ports;
      VAR c : cache;
      VAR m : msg;
      VAR me : INT := p_kubelet + n - 1;
      VAR fresh : BOOL;
      clear(c);
      watch(me, 2 ** k_pod);
      WHILE TRUE REPEAT
         WAIT
            WHEN RECEIVE(ports(me), m) => fresh := take(c, m);
            WHEN DELAY(10) =>
               VAR lease : obj := blank(k_lease);
               lease.id := node_id;
               SEND(ports(api), mk(op_beat, me, lease));
         END WAIT;
         FOR p : INT(1 .. nobj) REPEAT
            IF c(p).kind = k_pod AND c(p).gone = 0 AND c(p).node = node_id AND c(p).phase = pending THEN
               VAR o : obj := c(p);
               o.phase := running;
               write(op_update, o);
               c(p).phase := running;
               log("kubelet " & str(n) & ": pod " & str(p) & " (version " & str(o.version) & ") running");
            END IF;
         END REPEAT;
      END REPEAT;
   END TASK kubelet;

   % ---- the user ---------------------------------------------------------------------
   PROC show IMPORTS ports;
      VAR m : msg;
      VAR going : BOOL := TRUE;
      SEND(ports(api), mk(op_list, p_user, blank(0)));
      WHILE going REPEAT
         RECEIVE(ports(p_user), m);
         IF m.op = op_list THEN
            going := FALSE;
         ELSEIF m.o.kind = k_pod THEN
            log("  pod " & str(m.o.id) & "  rs " & str(m.o.owner) & "  version " & str(m.o.version)
                & "  node-id " & str(m.o.node) & "  phase " & str(m.o.phase));
         END IF;
      END REPEAT;
   END PROC show;

   ABNORMAL FUNC get(CONST id : INT) => obj IMPORTS ports;
      VAR o : obj := blank(0);
      VAR m : msg;
      o.id := id;
      SEND(ports(api), mk(op_get, p_user, o));
      RECEIVE(ports(p_user), m);
      RETURN m.o;
   END FUNC get;

   CONST web := 4;            % the three nodes take ids 1 to 3
   VAR d : obj := blank(k_deploy);
   CREATE apiserver(p_api, 1, p_api2) NAMED acts(p_api);
   CREATE apiserver(p_api2, 2, p_api) NAMED acts(p_api2);
   FOR n : INT(1 .. nnodes) REPEAT
      VAR o : obj := blank(k_node);
      o.owner := n;
      o.phase := ready;
      write(op_create, o);
   END REPEAT;
   CREATE deploy_ctl NAMED acts(p_deploy);
   CREATE rs_ctl NAMED acts(p_rs);
   CREATE scheduler NAMED acts(p_sched);
   CREATE node_ctl NAMED acts(p_nodes);
   FOR n : INT(1 .. nnodes) REPEAT
      CREATE kubelet(n, n) NAMED acts(p_kubelet + n - 1);
   END REPEAT;

   log("user: create deployment web, 4 replicas");
   d.replicas := 4;
   d.version := 1;
   write(op_create, d);
   DELAY(60);
   show;

   log("user: roll out version 2");
   crash_armed := TRUE;
   d := get(web);
   d.version := 2;
   write(op_update, d);
   DELAY(150);
   show;
   HALT(0);
END CAPSULE kube_ha;
