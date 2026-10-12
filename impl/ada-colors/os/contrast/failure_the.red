% Contrast 2, failure under a lock, on THE's semaphores only. P(mutex) ... V(mutex)
% are two separate statements; when the process fails between them, the V never
% happens and the semaphore stays at zero. THE assumed its processes did not
% fail: Dijkstra's paper calls the early focus on "a perfect installation" its
% first major mistake. Worker 2 waits for ever.
CAPSULE failure_the EXPORTS NONE;
   VAR sem : ARRAY INT(1 .. 1) OF MAILBOX[INT](8);
   CONST s_mutex := 1;
   VAR balance : INT := 100;
   VAR through : INT := 0;
   VAR a, b : ACT;

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

   TASK worker(CONST id : INT) IMPORTS balance, through;
      DELAY(id);
      GUARD
         P(s_mutex);
         log("worker " & CNVT[STRING[ASCII]](id) & " holds the semaphore");
         DELAY(5);
         IF id = 1 THEN
            RAISE X_RANGE;
         END IF;
         balance := balance + 10;
         V(s_mutex);
      BY
         WHEN X_RANGE => log("worker 1 failed between P and V");
      END GUARD;
      through := through + 1;
   END TASK worker;

   V(s_mutex);
   CREATE worker(1) NAMED a;
   CREATE worker(2) NAMED b;
   DELAY(100);
   log(CNVT[STRING[ASCII]](through) & " of 2 workers through, balance " & CNVT[STRING[ASCII]](balance)
       & ": worker 2 still waits in P, the semaphore stays at zero");
   HALT(0);
END CAPSULE failure_the;
