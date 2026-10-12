% THE/KUBE -- the Kubernetes control loop of kube/kube.red, rebuilt as user
% programs (level 4) on top of Dijkstra's THE system (os/the.red, CACM 1968).
%
% The controllers may use only what THE gives its user programs: P and V on
% semaphores, segments (whose pages the segment controller moves between core
% and drum), the console through the message interpreter, and the clock. They
% do not touch RED's mailboxes, WAIT or DATA_LOCK; those stay inside levels 0-2,
% where they implement THE. What changes against kube/kube.red:
%
%   * there is no API server process: the store is segments, guarded by one
%     semaphore. A watch is a wake-up semaphore per controller, and a writer
%     does V on all of them. The wake semaphores saturate at one, so the
%     controllers are level-triggered by construction: a wake says "look
%     again", never "this changed";
%   * P has no timeout and a process waits on one semaphore at a time, so the
%     resync, the heartbeats and the node controller's lease check all come
%     from a clock process at level 0 that wakes everyone every 10 ms, and the
%     operator's command reaches the deployment controller through the same
%     wake semaphore, with the command left in a segment;
%   * a node that dies just stops: nobody owns a message queue that could fill.
%     But it must not die holding the store's semaphore. The first version cut
%     the kubelet off with EXTERMINATE at an arbitrary moment; it held s_store,
%     the V never came, and the whole control plane stopped for good. So power
%     is cut between two passes of the kubelet's loop (see os/contrast/failure*).
%
% Levels 0-2 are those of os/the.red, condensed. Time is virtual (ms).

CAPSULE the_kube EXPORTS NONE;

   PROC log(CONST s : STRING[ASCII]);
      WRITELN("[" & CNVT[STRING[ASCII]](TIME) & " ms] " & s);
   END PROC log;

   FUNC img(CONST n : INT) => STRING[ASCII];
      RETURN CNVT[STRING[ASCII]](n);
   END FUNC img;

   CONST p_interp := 1;
   CONST p_deploy := 2;
   CONST p_sched := 3;
   CONST p_nodes := 4;
   CONST p_kubelet := 5;      % kubelets 5, 6, 7
   CONST p_boot := 8;
   CONST nproc := 8;
   CONST nnodes := 3;
   CONST npods := 8;

   % ==== level 0: semaphores and the clock ======================================
   CONST nsem := 12;
   CONST s_store := 1;        % the store: one writer at a time
   CONST s_wake := 2;         % wake-up semaphores 2..9, one per process
   VAR sem : ARRAY INT(1 .. nsem) OF MAILBOX[INT](8);

   PROC P(CONST s : INT) IMPORTS sem;
      VAR t : INT;
      RECEIVE(sem(s), t);
   END PROC P;

   PROC V(CONST s : INT) IMPORTS sem;
      SEND(sem(s), 0);
   END PROC V;

   % V on a wake-up semaphore: its value saturates at one
   PROC wake(CONST p : INT) IMPORTS sem;
      VAR ok : BOOL;
      IF FULL_SLOTS(sem(s_wake + p - 1)) = 0 THEN
         COND_SEND(sem(s_wake + p - 1), 0, ok);
      END IF;
   END PROC wake;

   PROC wake_all;
      FOR p : INT(p_deploy .. p_kubelet + nnodes - 1) REPEAT
         wake(p);
      END REPEAT;
   END PROC wake_all;

   % the real-time clock interrupt, level 0
   TASK clock;
      WHILE TRUE REPEAT
         DELAY(10);
         wake_all;
      END REPEAT;
   END TASK clock;

   VAR reply : ARRAY INT(1 .. nproc) OF MAILBOX[INT](1);

   % ==== level 1: the segment controller ========================================
   CONST ncore := 3;
   CONST ndrum := 8;
   CONST nseg := 4;
   CONST words := 8;
   CONST rev := 40;

   CONST seg_vocab := 1;
   CONST seg_cluster := 2;    % 1 desired replicas, 2 operator inbox, 3-5 heartbeats, 6-8 node ready
   CONST seg_pods := 3;       % pod i: 0 none, -1 pending, n bound to node n
   CONST seg_running := 4;    % pod i: 1 when its kubelet started it

   ABBREV seg_req : RECORD[op, seg, off, val, who : INT];
   VAR seg_requests : MAILBOX[seg_req](16);
   VAR seg_where : ARRAY INT(1 .. nseg) OF INT;
   VAR core_seg : ARRAY INT(1 .. ncore) OF INT;
   VAR core_word : ARRAY INT(1 .. ncore * words) OF INT;
   VAR drum_free : ARRAY INT(1 .. ndrum) OF BOOL;
   VAR drum_word : ARRAY INT(1 .. ndrum * words) OF INT;
   VAR next_victim : INT := 1;
   VAR transfers : INT := 0;

   PROC seg_read(CONST who, seg, off : INT, VAR val : INT) IMPORTS seg_requests, reply;
      SEND(seg_requests, [op : 1, seg : seg, off : off, val : 0, who : who]);
      RECEIVE(reply(who), val);
   END PROC seg_read;

   PROC seg_write(CONST who, seg, off, val : INT) IMPORTS seg_requests, reply;
      VAR ack : INT;
      SEND(seg_requests, [op : 2, seg : seg, off : off, val : val, who : who]);
      RECEIVE(reply(who), ack);
   END PROC seg_write;

   TASK segment_controller IMPORTS ALL;
      VAR r : seg_req;
      VAR c, d, best : INT;

      FUNC latency(CONST d : INT) => INT;
         RETURN ((d - 1) * (rev DIV ndrum) - TIME MOD rev + 2 * rev) MOD rev;
      END FUNC latency;

      PROC present(CONST s : INT, VAR c : INT) IMPORTS ALL;
         IF seg_where(s) > 0 THEN
            c := seg_where(s);
            RETURN;
         END IF;
         c := 0;
         FOR i : INT(1 .. ncore) REPEAT
            IF c = 0 AND core_seg(i) = 0 THEN
               c := i;
            END IF;
         END REPEAT;
         IF c = 0 THEN
            c := next_victim;
            next_victim := next_victim MOD ncore + 1;
            best := 0;
            FOR k : INT(1 .. ndrum) REPEAT
               IF drum_free(k) THEN
                  IF best = 0 THEN
                     best := k;
                  ELSEIF latency(k) < latency(best) THEN
                     best := k;
                  END IF;
               END IF;
            END REPEAT;
            DELAY(latency(best) + rev DIV ndrum);
            transfers := transfers + 1;
            FOR i : INT(1 .. words) REPEAT
               drum_word((best - 1) * words + i) := core_word((c - 1) * words + i);
            END REPEAT;
            drum_free(best) := FALSE;
            seg_where(core_seg(c)) := -best;
         END IF;
         IF seg_where(s) < 0 THEN
            d := -seg_where(s);
            DELAY(latency(d) + rev DIV ndrum);
            transfers := transfers + 1;
            FOR i : INT(1 .. words) REPEAT
               core_word((c - 1) * words + i) := drum_word((d - 1) * words + i);
            END REPEAT;
            drum_free(d) := TRUE;
         ELSE
            FOR i : INT(1 .. words) REPEAT
               core_word((c - 1) * words + i) := 0;
            END REPEAT;
         END IF;
         core_seg(c) := s;
         seg_where(s) := c;
      END PROC present;

      WHILE TRUE REPEAT
         RECEIVE(seg_requests, r);
         present(r.seg, c);
         IF r.op = 1 THEN
            SEND(reply(r.who), core_word((c - 1) * words + r.off));
         ELSE
            core_word((c - 1) * words + r.off) := r.val;
            SEND(reply(r.who), 0);
         END IF;
      END REPEAT;
   END TASK segment_controller;

   % ==== level 2: the message interpreter ========================================
   ABBREV conv : RECORD[who, m, v : INT];
   VAR conversations : MAILBOX[conv](16);
   VAR keyboard : MAILBOX[INT](8);
   CONST msg_lost := 1;

   PROC say(CONST who, m, arg : INT) IMPORTS conversations, reply;
      VAR ack : INT;
      SEND(conversations, [who : who, m : m, v : arg]);
      RECEIVE(reply(who), ack);
   END PROC say;

   TASK message_interpreter IMPORTS conversations, keyboard, reply;
      VAR cv : conv;
      VAR k, w : INT;
      WHILE TRUE REPEAT
         WAIT
            WHEN RECEIVE(conversations, cv) =>
               seg_read(p_interp, seg_vocab, cv.m, w);
               DELAY(20);
               IF w = 21 THEN
                  log("CONSOLE  node controller: node " & img(cv.v) & " has no heartbeat, its pods go back to the scheduler");
               END IF;
               SEND(reply(cv.who), 0);
            WHEN RECEIVE(keyboard, k) =>
               % "scale to k": interpreted, the command is left in the cluster
               % segment and the deployment controller is woken
               DELAY(20);
               log("CONSOLE  operator to deployment controller: scale to " & img(k));
               seg_write(p_interp, seg_cluster, 2, k);
               wake(p_deploy);
         END WAIT;
      END REPEAT;
   END TASK message_interpreter;

   % ==== level 4: the controllers, as user programs ==============================
   % store access: every read-modify-write holds s_store
   FUNC hb_off(CONST n : INT) => INT;
      RETURN 2 + n;
   END FUNC hb_off;

   FUNC ready_off(CONST n : INT) => INT;
      RETURN 5 + n;
   END FUNC ready_off;

   TASK deployment_controller;
      CONST me := p_deploy;
      VAR desired, cmd, have, w : INT;
      WHILE TRUE REPEAT
         P(s_wake + me - 1);
         P(s_store);
         seg_read(me, seg_cluster, 2, cmd);
         IF cmd > 0 THEN
            seg_write(me, seg_cluster, 1, cmd);
            seg_write(me, seg_cluster, 2, 0);
            log("deployment controller: desired replicas " & img(cmd));
         END IF;
         seg_read(me, seg_cluster, 1, desired);
         have := 0;
         FOR i : INT(1 .. npods) REPEAT
            seg_read(me, seg_pods, i, w);
            IF w /= 0 THEN
               have := have + 1;
            END IF;
         END REPEAT;
         FOR i : INT(1 .. npods) REPEAT
            seg_read(me, seg_pods, i, w);
            IF w = 0 AND have < desired THEN
               seg_write(me, seg_pods, i, -1);
               have := have + 1;
               log("deployment controller: pod " & img(i) & " created");
            END IF;
         END REPEAT;
         V(s_store);
      END REPEAT;
   END TASK deployment_controller;

   TASK scheduler;
      CONST me := p_sched;
      VAR w, best, r : INT;
      VAR load : ARRAY INT(1 .. nnodes) OF INT;
      WHILE TRUE REPEAT
         P(s_wake + me - 1);
         P(s_store);
         FOR n : INT(1 .. nnodes) REPEAT
            load(n) := 0;
         END REPEAT;
         FOR i : INT(1 .. npods) REPEAT
            seg_read(me, seg_pods, i, w);
            IF w > 0 THEN
               load(w) := load(w) + 1;
            END IF;
         END REPEAT;
         FOR i : INT(1 .. npods) REPEAT
            seg_read(me, seg_pods, i, w);
            IF w = -1 THEN
               best := 0;
               FOR n : INT(1 .. nnodes) REPEAT
                  seg_read(me, seg_cluster, ready_off(n), r);
                  IF r = 1 THEN
                     IF best = 0 THEN
                        best := n;
                     ELSEIF load(n) < load(best) THEN
                        best := n;
                     END IF;
                  END IF;
               END REPEAT;
               IF best > 0 THEN
                  seg_write(me, seg_pods, i, best);
                  load(best) := load(best) + 1;
                  log("scheduler: pod " & img(i) & " bound to node " & img(best));
               END IF;
            END IF;
         END REPEAT;
         V(s_store);
      END REPEAT;
   END TASK scheduler;

   VAR powered : ARRAY INT(1 .. nnodes) OF BOOL;

   TASK kubelet(CONST n : INT) IMPORTS READONLY powered;
      CONST me := p_kubelet + n - 1;
      VAR w, run : INT;
      WHILE TRUE REPEAT
         P(s_wake + me - 1);
         IF NOT powered(n) THEN
            log("kubelet " & img(n) & ": power gone, the node stops");
            RETURN;
         END IF;
         P(s_store);
         seg_write(me, seg_cluster, hb_off(n), TIME);
         seg_write(me, seg_cluster, ready_off(n), 1);
         FOR i : INT(1 .. npods) REPEAT
            seg_read(me, seg_pods, i, w);
            IF w = n THEN
               seg_read(me, seg_running, i, run);
               IF run = 0 THEN
                  seg_write(me, seg_running, i, 1);
                  log("kubelet " & img(n) & ": pod " & img(i) & " running");
               END IF;
            END IF;
         END REPEAT;
         V(s_store);
      END REPEAT;
   END TASK kubelet;

   % the node lifecycle controller: a node whose heartbeat it has not seen change
   % for 60 ms (a drum revolution and a half) is not ready, and its pods are
   % unbound. It judges by when it SAW the heartbeat change, not by the time
   % written in it, as the real node lifecycle controller does.
   TASK node_controller;
      CONST me := p_nodes;
      VAR hb, r, w : INT;
      VAR lost : INT;
      VAR last_hb, seen_at : ARRAY INT(1 .. nnodes) OF INT;
      FOR n : INT(1 .. nnodes) REPEAT
         last_hb(n) := -1;
         seen_at(n) := 0;
      END REPEAT;
      WHILE TRUE REPEAT
         P(s_wake + me - 1);
         lost := 0;
         P(s_store);
         FOR n : INT(1 .. nnodes) REPEAT
            seg_read(me, seg_cluster, hb_off(n), hb);
            seg_read(me, seg_cluster, ready_off(n), r);
            IF hb /= last_hb(n) THEN
               last_hb(n) := hb;
               seen_at(n) := TIME;
            END IF;
            IF r = 1 AND TIME - seen_at(n) > 60 THEN
               seg_write(me, seg_cluster, ready_off(n), 0);
               FOR i : INT(1 .. npods) REPEAT
                  seg_read(me, seg_pods, i, w);
                  IF w = n THEN
                     seg_write(me, seg_pods, i, -1);
                     seg_write(me, seg_running, i, 0);
                  END IF;
               END REPEAT;
               lost := n;
            END IF;
         END REPEAT;
         V(s_store);
         IF lost > 0 THEN
            say(me, msg_lost, lost);
            wake_all;
         END IF;
      END REPEAT;
   END TASK node_controller;

   % ==== level 5: the operator ===================================================
   TASK operator IMPORTS keyboard;
      DELAY(250);
      SEND(keyboard, 5);
   END TASK operator;

   % ---- boot ----------------------------------------------------------------------
   VAR a_seg, a_int, a_clk, a_dep, a_sch, a_nod, a_op : ACT;
   VAR a_kl : ARRAY INT(1 .. nnodes) OF ACT;
   VAR w, run : INT;
   VAR on : ARRAY INT(1 .. nnodes) OF INT;

   FOR i : INT(1 .. nseg) REPEAT
      seg_where(i) := 0;
   END REPEAT;
   FOR c : INT(1 .. ncore) REPEAT
      core_seg(c) := 0;
   END REPEAT;
   FOR d : INT(1 .. ndrum) REPEAT
      drum_free(d) := TRUE;
   END REPEAT;
   FOR n : INT(1 .. nnodes) REPEAT
      powered(n) := TRUE;
   END REPEAT;
   V(s_store);
   CREATE segment_controller NAMED a_seg;
   seg_write(p_boot, seg_vocab, msg_lost, 21);
   seg_write(p_boot, seg_cluster, 1, 3);
   FOR n : INT(1 .. nnodes) REPEAT
      seg_write(p_boot, seg_cluster, ready_off(n), 1);
      seg_write(p_boot, seg_cluster, hb_off(n), 0);
   END REPEAT;
   CREATE message_interpreter NAMED a_int;
   CREATE deployment_controller NAMED a_dep;
   CREATE scheduler NAMED a_sch;
   CREATE node_controller NAMED a_nod;
   FOR n : INT(1 .. nnodes) REPEAT
      CREATE kubelet(n) NAMED a_kl(n);
   END REPEAT;
   CREATE operator NAMED a_op;
   CREATE clock NAMED a_clk;
   wake_all;
   DELAY(120);
   log("node 2 loses power");
   powered(2) := FALSE;
   DELAY(400);
   P(s_store);
   FOR n : INT(1 .. nnodes) REPEAT
      on(n) := 0;
   END REPEAT;
   FOR i : INT(1 .. npods) REPEAT
      seg_read(p_boot, seg_pods, i, w);
      seg_read(p_boot, seg_running, i, run);
      IF w > 0 AND run = 1 THEN
         on(w) := on(w) + 1;
      END IF;
   END REPEAT;
   V(s_store);
   log("running pods: node 1 " & img(on(1)) & ", node 2 " & img(on(2)) & ", node 3 " & img(on(3))
       & "; drum transfers " & img(transfers));
   HALT(0);
END CAPSULE the_kube;
