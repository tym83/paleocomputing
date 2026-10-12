% Contrast 2, failure under a lock, in RED. Worker 1 takes the lock and fails
% halfway through an update. A REGION gives its DATA_LOCK back however the body
% ends, an exception included (RM 10.7), so worker 2 gets in at once.
CAPSULE failure EXPORTS NONE;
   VAR d : DATA_LOCK;
   VAR balance : INT := 100;
   VAR done : MAILBOX[INT](2);
   VAR a, b : ACT;
   VAR x : INT;

   PROC log(CONST s : STRING[ASCII]);
      WRITELN("[" & CNVT[STRING[ASCII]](TIME) & " ms] " & s);
   END PROC log;

   TASK worker(CONST id : INT) IMPORTS d, balance, done;
      DELAY(id);
      GUARD
         REGION d DO
            log("worker " & CNVT[STRING[ASCII]](id) & " holds the lock");
            DELAY(5);
            IF id = 1 THEN
               RAISE X_RANGE;
            END IF;
            balance := balance + 10;
         END REGION;
      BY
         WHEN X_RANGE => log("worker 1 failed inside the region");
      END GUARD;
      SEND(done, id);
   END TASK worker;

   CREATE worker(1) NAMED a;
   CREATE worker(2) NAMED b;
   RECEIVE(done, x);
   RECEIVE(done, x);
   log("both workers are through, balance " & CNVT[STRING[ASCII]](balance)
       & ": the region released the lock for the failed one");
END CAPSULE failure;
