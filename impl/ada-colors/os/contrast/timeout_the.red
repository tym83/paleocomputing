% Contrast 1, timeouts, on THE's semaphores only (P and V, as in os/the.red).
% P has no timeout, and a process cannot wait on two semaphores at once. In THE
% time comes from the real-time clock at level 0, so a third process watches
% the clock and, when the buffer has been quiet for 30 ms, puts a sentinel item
% in it. The consumer's "timeout" is an item that a watchdog fabricated.
CAPSULE timeout_the EXPORTS NONE;
   VAR sem : ARRAY INT(1 .. 4) OF MAILBOX[INT](8);
   CONST s_full := 1;
   CONST s_empty := 2;
   CONST s_mutex := 3;
   VAR slot : ARRAY INT(1 .. 4) OF INT;
   VAR head, tail : INT := 0;
   VAR last_put : INT := 0;
   VAR a, w : ACT;
   VAR x : INT;
   VAR going : BOOL := TRUE;

   PROC P(CONST s : INT) IMPORTS sem;
      VAR t : INT;
      RECEIVE(sem(s), t);
   END PROC P;

   PROC V(CONST s : INT) IMPORTS sem;
      SEND(sem(s), 0);
   END PROC V;

   PROC log(CONST s : STRING[ASCII]);
      WRITELN("[" & CNVT[STRING[ASCII]](TIME) & " ms] " & s);
   END PROC log;

   PROC put(CONST item : INT) IMPORTS slot, tail, last_put;
      P(s_empty);
      P(s_mutex);
      tail := tail MOD 4 + 1;
      slot(tail) := item;
      last_put := TIME;
      V(s_mutex);
      V(s_full);
   END PROC put;

   TASK producer;
      FOR i : INT(1 .. 2) REPEAT
         DELAY(10);
         put(i);
      END REPEAT;
      DELAY(1000);
   END TASK producer;

   TASK watchdog IMPORTS last_put;
      VAR quiet : BOOL := FALSE;
      WHILE NOT quiet REPEAT
         DELAY(5);                      % the clock interrupt
         P(s_mutex);
         quiet := TIME - last_put >= 30;
         V(s_mutex);
      END REPEAT;
      put(-1);                          % the sentinel
   END TASK watchdog;

   FOR i : INT(1 .. 4) REPEAT
      SEND(sem(s_empty), 0);
   END REPEAT;
   V(s_mutex);
   CREATE producer NAMED a;
   CREATE watchdog NAMED w;
   WHILE going REPEAT
      P(s_full);
      P(s_mutex);
      head := head MOD 4 + 1;
      x := slot(head);
      V(s_mutex);
      V(s_empty);
      IF x < 0 THEN
         log("no item for 30 ms: the watchdog put a sentinel in the buffer");
         going := FALSE;
      ELSE
         log("got item " & CNVT[STRING[ASCII]](x));
      END IF;
   END REPEAT;
   HALT(0);
END CAPSULE timeout_the;
