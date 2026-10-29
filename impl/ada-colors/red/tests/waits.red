% user-defined waiting invocations (14.3): a counting semaphore whose
% acquire can stand in a WAIT next to the built-in ones
CAPSULE semaphores EXPORTS sem, new_sem, release, acquire_ST, acquire_REQUEST, acquire_TEST,
                           acquire_COMPLETE, acquire_REVOKE;
   TYPE acquire_ST : INT(0 .. 0);          % a dummy, as in the manual's mailboxes
   TYPE sem : PTR RECORD[count : INT, lock : DATA_LOCK, n : INT, q : ARRAY INT(1 .. 10) OF ACT];

   PROC new_sem(VAR s : sem, CONST count : INT);
      ALLOC s PTR;
      s.count := count;
      s.n := 0;
   END PROC new_sem;

   PROC wake_first(CONST s : sem);
      IF s.n > 0 AND s.count > 0 THEN
         SYNC_SIGNAL(s.q(1));
      END IF;
   END PROC wake_first;

   PROC drop(CONST s : sem, CONST a : ACT);
      VAR j : INT := 0;
      FOR i : INT(1 .. s.n) REPEAT
         IF s.q(i) /= a THEN
            j := j + 1;
            s.q(j) := s.q(i);
         END IF;
      END REPEAT;
      s.n := j;
   END PROC drop;

   PROC release(CONST s : sem);
      REGION s.lock DO
         s.count := s.count + 1;
         wake_first(s);
      END REGION;
   END PROC release;

   PROC acquire_REQUEST(VAR q : acquire_ST, CONST s : sem);
      REGION s.lock DO
         s.n := s.n + 1;
         s.q(s.n) := ME;
      END REGION;
   END PROC acquire_REQUEST;

   ABNORMAL FUNC acquire_TEST(VAR q : acquire_ST, CONST s : sem) => BOOL;
      RETURN s.count > 0 AND s.q(1) = ME;
   END FUNC acquire_TEST;

   PROC acquire_COMPLETE(VAR q : acquire_ST, CONST s : sem);
      REGION s.lock DO
         s.count := s.count - 1;
         drop(s, ME);
         wake_first(s);
      END REGION;
   END PROC acquire_COMPLETE;

   PROC acquire_REVOKE(VAR q : acquire_ST, CONST s : sem);
      REGION s.lock DO
         drop(s, ME);
         wake_first(s);
      END REGION;
   END PROC acquire_REVOKE;
END CAPSULE semaphores;

CAPSULE main EXPORTS NONE;
   EXPOSE ALL FROM EXTERNAL semaphores;
   VAR s : sem;
   VAR m : MAILBOX[INT](1);
   VAR t1, t2, t3 : ACT;

   PROC say(READONLY who : STRING[ASCII], READONLY what : STRING[ASCII]);
      WRITELN(who & " " & what & " at " & CNVT[STRING[ASCII]](TIME));
   END PROC say;

   TASK waiter(CONST who : STRING[ASCII], CONST patience : INT) IMPORTS s;
      WAIT
         WHEN acquire(s) => say(who, "got the semaphore");
         WHEN DELAY(patience) => say(who, "gave up");
      END WAIT;
   END TASK waiter;

   TASK listener IMPORTS s, m;
      VAR x : INT;
      WAIT
         WHEN acquire(s) => say("listener", "got the semaphore");
         WHEN RECEIVE(m, x) => say("listener", "received " & CNVT[STRING[ASCII]](x));
      END WAIT;
   END TASK listener;

   new_sem(s, 0);
   CREATE waiter("patient", 100) NAMED t1;
   CREATE waiter("hasty", 20) NAMED t2;
   CREATE listener NAMED t3;
   DELAY(5);
   SEND(m, 42);
   DELAY(25);
   release(s);
   DELAY_UNTIL_INACTIVE(t1);
   release(s);
   DELAY(1);
   say("main", "has count " & CNVT[STRING[ASCII]](s.count) & " and waiting " & CNVT[STRING[ASCII]](s.n));
END CAPSULE main;
