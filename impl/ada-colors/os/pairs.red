% PAIRS -- a message kernel in the style of Tandem NonStop, written in RED (1979).
%
% Processes share no memory: each owns a mailbox (its port) and talks to the
% others only by messages, as under Guardian (Bartlett, "A NonStop Kernel",
% SOSP 1981). A service runs as a process pair on two processors: the primary
% sends every change of its state to the backup as a checkpoint BEFORE it
% replies; the backup watches the primary's heartbeat with a timed WAIT and,
% when it stops, takes over the service's name and starts a new backup.
% Clients number their requests and retry on a timeout, so a request is done
% exactly once whatever moment the primary dies at.
%
% The run is deterministic: the RED scheduler is followed exactly and the clock
% is virtual. Time is in milliseconds.

CAPSULE pairs EXPORTS NONE;

   % ---- messages -------------------------------------------------------------
   CONST k_request := 1;      % transfer amount from account a to account b
   CONST k_reply := 2;
   CONST k_ckpt := 3;         % checkpoint: the effect of one request
   CONST k_beat := 4;         % heartbeat from primary to backup
   CONST k_state := 5;        % state transfer to a new backup
   CONST k_query := 6;        % read the balance of account a

   CONST nports := 16;
   CONST naccounts := 4;
   CONST nclients := 2;
   CONST ncpus := 3;

   ABBREV port_no : INT(1 .. nports);
   ABBREV msg : RECORD[kind, src, seq, a, b, amount, result : INT];

   % ---- the hardware and the message system ---------------------------------
   VAR ports : ARRAY INT(1 .. nports) OF MAILBOX[msg](32);
   VAR procs : ARRAY INT(1 .. nports) OF ACT;
   VAR proc_cpu : ARRAY INT(1 .. nports) OF INT(0 .. ncpus - 1);
   VAR cpu_up : ARRAY INT(0 .. ncpus - 1) OF BOOL;
   VAR next_port : INT(1 .. nports + 1) := 1;

   % the name $BANK and the port of its current primary
   VAR bank_route : INT(0 .. nports) := 0;
   VAR names : DATA_LOCK;

   % fault injection: the primary loses power right after checkpointing this request
   VAR crash_after : INT := 5;
   VAR done : MAILBOX[INT](8);

   FUNC mkmsg(CONST kind, src, seq, a, b, amount, result : INT) => msg;
      RETURN [kind : kind, src : src, seq : seq, a : a, b : b, amount : amount, result : result];
   END FUNC mkmsg;

   PROC log(CONST s : STRING[ASCII]);
      WRITELN("[" & CNVT[STRING[ASCII]](TIME) & " ms] " & s);
   END PROC log;

   ABNORMAL FUNC new_port(CONST cpu : INT) => INT IMPORTS next_port, proc_cpu;
      CONST p := next_port;
      next_port := next_port + 1;
      proc_cpu(p) := cpu;
      RETURN p;
   END FUNC new_port;

   PROC register(CONST p : INT) IMPORTS names, bank_route;
      REGION names DO
         bank_route := p;
      END REGION;
   END PROC register;

   ABNORMAL FUNC resolve => INT IMPORTS names, READONLY bank_route;
      VAR p : INT;
      REGION names DO
         p := bank_route;
      END REGION;
      RETURN p;
   END FUNC resolve;

   % a processor fails: every process on it stops at once
   PROC halt_cpu(CONST cpu : INT) IMPORTS procs, proc_cpu, cpu_up;
      cpu_up(cpu) := FALSE;
      log("CPU " & CNVT[STRING[ASCII]](cpu) & " loses power");
      FOR p : INT(1 .. nports) REPEAT
         IF proc_cpu(p) = cpu AND ACTIVE(procs(p)) THEN
            EXTERMINATE(procs(p));
         END IF;
      END REPEAT;
   END PROC halt_cpu;

   % ---- the $BANK process pair -------------------------------------------------
   CONST primary := 1;
   CONST backup := 2;

   TASK bank(CONST me : INT, CONST start_role : INT, CONST start_partner : INT)
         IMPORTS ports, procs, proc_cpu, cpu_up, crash_after;
      VAR role : INT := start_role;
      VAR partner : INT := start_partner;
      VAR bal : ARRAY INT(1 .. naccounts) OF INT;
      VAR last_seq : ARRAY INT(1 .. nclients) OF INT;
      VAR last_res : ARRAY INT(1 .. nclients) OF INT;
      VAR m : msg;
      VAR res : INT;
      VAR cpu : INT := proc_cpu(me);

      PROC apply(CONST x : msg) IMPORTS bal, last_seq, last_res;
         IF x.result = 1 THEN
            bal(x.a) := bal(x.a) - x.amount;
            bal(x.b) := bal(x.b) + x.amount;
         END IF;
         last_seq(x.src) := x.seq;
         last_res(x.src) := x.result;
      END PROC apply;

      PROC start_backup IMPORTS partner, bal, last_seq, last_res, ports, cpu_up, READONLY cpu;
         VAR spare : INT := -1;
         FOR c : INT(0 .. ncpus - 1) REPEAT
            IF cpu_up(c) AND c /= cpu AND spare < 0 THEN
               spare := c;
            END IF;
         END REPEAT;
         IF spare < 0 THEN
            log("no spare CPU: $BANK runs unpaired");
            partner := 0;
            RETURN;
         END IF;
         partner := spawn_bank(spare, backup, me);
         log("$BANK backup started on CPU " & CNVT[STRING[ASCII]](spare)
             & ", port " & CNVT[STRING[ASCII]](partner));
         FOR i : INT(1 .. naccounts) REPEAT
            SEND(ports(partner), mkmsg(k_state, 0, 0, i, 0, bal(i), 0));
         END REPEAT;
         FOR c : INT(1 .. nclients) REPEAT
            SEND(ports(partner), mkmsg(k_state, c, last_seq(c), 0, 0, 0, last_res(c)));
         END REPEAT;
      END PROC start_backup;

      FOR i : INT(1 .. naccounts) REPEAT
         bal(i) := 100;
      END REPEAT;
      FOR c : INT(1 .. nclients) REPEAT
         last_seq(c) := 0;
         last_res(c) := 0;
      END REPEAT;
      WHILE TRUE REPEAT
         IF role = primary THEN
            WAIT
               WHEN RECEIVE(ports(me), m) =>
                  IF m.kind = k_query THEN
                     SEND(ports(m.src), mkmsg(k_reply, 0, 0, m.a, 0, bal(m.a), 1));
                  ELSEIF m.kind = k_request AND m.seq <= last_seq(m.src) THEN
                     log("$BANK: request " & CNVT[STRING[ASCII]](m.seq) & " of client "
                         & CNVT[STRING[ASCII]](m.src) & " is a retry, answered from the checkpoint");
                     SEND(ports(m.src), mkmsg(k_reply, 0, m.seq, 0, 0, 0, last_res(m.src)));
                  ELSEIF m.kind = k_request THEN
                     res := 0;
                     IF bal(m.a) >= m.amount THEN
                        res := 1;
                     END IF;
                     m.result := res;
                     apply(m);
                     IF partner > 0 THEN
                        SEND(ports(partner), mkmsg(k_ckpt, m.src, m.seq, m.a, m.b, m.amount, res));
                     END IF;
                     crash_after := crash_after - 1;
                     IF crash_after = 0 THEN
                        log("$BANK primary checkpointed request " & CNVT[STRING[ASCII]](m.seq)
                            & " of client " & CNVT[STRING[ASCII]](m.src) & " and has not replied yet");
                        halt_cpu(cpu);
                     END IF;
                     SEND(ports(m.src), mkmsg(k_reply, 0, m.seq, 0, 0, 0, res));
                  END IF;
               WHEN DELAY(10) =>
                  IF partner > 0 THEN
                     SEND(ports(partner), mkmsg(k_beat, 0, 0, 0, 0, 0, 0));
                  END IF;
            END WAIT;
         ELSE
            WAIT
               WHEN RECEIVE(ports(me), m) =>
                  IF m.kind = k_ckpt THEN
                     apply(m);
                  ELSEIF m.kind = k_state AND m.src = 0 THEN
                     bal(m.a) := m.amount;
                  ELSEIF m.kind = k_state THEN
                     last_seq(m.src) := m.seq;
                     last_res(m.src) := m.result;
                  END IF;
               WHEN DELAY(35) =>
                  log("$BANK backup on CPU " & CNVT[STRING[ASCII]](cpu)
                      & " hears no heartbeat: takes over as primary");
                  role := primary;
                  register(me);
                  start_backup;
            END WAIT;
         END IF;
      END REPEAT;
   END TASK bank;

   ABNORMAL FUNC spawn_bank(CONST cpu : INT, CONST role : INT, CONST partner : INT) => INT
         IMPORTS procs, next_port, proc_cpu;
      CONST p := new_port(cpu);
      CREATE bank(p, role, partner) NAMED procs(p);
      RETURN p;
   END FUNC spawn_bank;

   % ---- clients ------------------------------------------------------------------
   TASK client(CONST me : INT, CONST id : INT) IMPORTS ports, done;
      VAR m : msg;
      VAR replied : BOOL;
      FOR seq : INT(1 .. 6) REPEAT
         replied := FALSE;
         WHILE NOT replied REPEAT
            CONST dest := resolve;
            SEND(ports(dest), mkmsg(k_request, me, seq, id, id + 1 + (seq MOD 2), 10 * seq, 0));
            WAIT
               WHEN RECEIVE(ports(me), m) =>
                  replied := TRUE;
               WHEN DELAY(50) =>
                  log("client " & CNVT[STRING[ASCII]](id) & ": no reply to request "
                      & CNVT[STRING[ASCII]](seq) & ", retrying");
            END WAIT;
         END REPEAT;
         DELAY(3);
      END REPEAT;
      SEND(done, id);
   END TASK client;

   % ---- boot ---------------------------------------------------------------------
   VAR got : INT;
   VAR m : msg;
   VAR c1, c2, p0, b0 : INT;
   VAR total : INT := 0;
   FOR c : INT(0 .. ncpus - 1) REPEAT
      cpu_up(c) := TRUE;
   END REPEAT;
   c1 := new_port(2);
   c2 := new_port(2);
   p0 := spawn_bank(0, primary, 4);
   b0 := spawn_bank(1, backup, 3);
   register(p0);
   log("$BANK primary on CPU 0 (port " & CNVT[STRING[ASCII]](p0) & "), backup on CPU 1 (port "
       & CNVT[STRING[ASCII]](b0) & ")");
   CREATE client(c1, 1) NAMED procs(c1);
   CREATE client(c2, 2) NAMED procs(c2);
   RECEIVE(done, got);
   RECEIVE(done, got);
   FOR a : INT(1 .. naccounts) REPEAT
      SEND(ports(resolve), mkmsg(k_query, c1, 0, a, 0, 0, 0));
      RECEIVE(ports(c1), m);
      total := total + m.amount;
      log("account " & CNVT[STRING[ASCII]](a) & ": " & CNVT[STRING[ASCII]](m.amount));
   END REPEAT;
   log("total " & CNVT[STRING[ASCII]](total) & " (money is neither lost nor made)");
   HALT(0);
END CAPSULE pairs;
