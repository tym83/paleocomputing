% the low-level facilities of chapter 14: activation states, critical areas,
% the ACT scheduler's synchronizing operations, latches, data lock counts,
% mailbox slot counts and LOW_IO
CAPSULE main EXPORTS NONE;
   VAR m : MAILBOX[INT](2);
   VAR m2 : MAILBOX[INT](5);
   VAR x : INT;
   VAR d : DATA_LOCK;
   VAR l : LATCH;
   VAR w, s, c, k : ACT;
   VAR got : BOOL;
   VAR flag : INT := 0;
   VAR ch : INT;

   PROC show(READONLY what : STRING[ASCII], CONST v : INT);
      WRITELN(what & " " & CNVT[STRING[ASCII]](v));
   END PROC show;

   FUNC yes(CONST b : BOOL) => STRING[ASCII];
      IF b THEN
         RETURN "yes";
      END IF;
      RETURN "no";
   END FUNC yes;

   % 14.2.1: a suspended activation is not eligible to run
   TASK worker IMPORTS flag;
      flag := 1;
      WRITELN("worker ran");
   END TASK worker;

   % 14.3.2: an activation waits for a SYNC_SIGNAL
   TASK sleeper;
      LOW_SYNC_RESET;
      WRITELN("sleeper waits");
      LOW_SYNC_WAIT;
      WRITELN("sleeper signalled at " & CNVT[STRING[ASCII]](TIME));
   END TASK sleeper;

   % 14.2.2: EXTERMINATE waits until the activation is noncritical
   TASK careful;
      CRITICAL;
      WRITELN("careful enters its critical area");
      DELAY(5);
      WRITELN("careful leaves it");
      NONCRITICAL;
      WRITELN("never printed");
   END TASK careful;

   TASK holder IMPORTS d;
      LOCK(d);
      DELAY(10);
      UNLOCK(d);
   END TASK holder;

   WRITELN("NIL_ACT = ME: " & yes(NIL_ACT = ME));

   CREATE worker NAMED w;
   SUSPEND(w);
   DELAY(1);
   WRITELN("after a delay, suspended " & yes(SUSPENDED(w)) & ", flag " & CNVT[STRING[ASCII]](flag));
   UNSUSPEND(w);
   DELAY_UNTIL_INACTIVE(w);
   WRITELN("after UNSUSPEND, flag " & CNVT[STRING[ASCII]](flag));

   CREATE sleeper NAMED s;
   DELAY(3);
   WRITELN("sleeper waiting " & yes(WAITING(s)));
   LOW_SYNC_SIGNAL(s);
   DELAY_UNTIL_INACTIVE(s);

   CREATE careful NAMED c;
   DELAY(1);
   EXTERMINATE(c);
   WRITELN("main asked to exterminate at " & CNVT[STRING[ASCII]](TIME));
   DELAY_UNTIL_INACTIVE(c);
   WRITELN("careful is gone at " & CNVT[STRING[ASCII]](TIME));

   % 14.4.2: EXCESS_LOCKS and OWNER
   CREATE holder NAMED k;
   DELAY(1);
   show("excess locks while held:", EXCESS_LOCKS(d));
   WRITELN("owner is the holder: " & yes(OWNER(d) = k));
   LOCK(d);
   show("excess locks after main got it:", EXCESS_LOCKS(d));
   WRITELN("owner is main: " & yes(OWNER(d) = ME));
   UNLOCK(d);
   show("excess locks when free:", EXCESS_LOCKS(d));

   % 14.4.3: a latch
   COND_LOCK(l, got);
   WRITELN("first COND_LOCK " & yes(got));
   COND_LOCK(l, got);
   WRITELN("second COND_LOCK " & yes(got));
   UNLOCK(l);
   REGION l DO
      WRITELN("a region on a latch");
   END REGION;

   % 14.1.1: slot counts
   SEND(m, 1);
   show("empty slots:", EMPTY_SLOTS(m));
   show("full slots:", FULL_SLOTS(m));

   % 14.1.3: assignment shares the mailbox, equality compares identity
   WRITELN("m = m2 before: " & yes(m = m2));
   m2 := m;
   WRITELN("m = m2 after: " & yes(m = m2));
   RECEIVE(m2, x);
   show("received through m2:", x);
   show("full slots of m now:", FULL_SLOTS(m));

   % 14.6: LOW_IO on the teletype
   ch := 79;
   LOW_IO(1, 1, ch);
   ch := 75;
   LOW_IO(1, 1, ch);
   ch := 10;
   LOW_IO(1, 1, ch);
END CAPSULE main;
