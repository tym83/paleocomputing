% Lab 5. A REGION gives its DATA_LOCK back however the body ends, even by an exception.
CAPSULE main EXPORTS NONE;
   VAR d : DATA_LOCK;
   VAR count : INT := 0;
   VAR done : MAILBOX[INT](2);
   VAR a, b : ACT;
   TASK worker(CONST id : INT) IMPORTS d, count, done;
      FOR i : INT(1 .. 4) REPEAT
         GUARD
            REGION d DO
               count := count + 1;
               IF i = 2 THEN
                  RAISE X_RANGE;
               END IF;
               DELAY(1);
            END REGION;
         BY
            WHEN X_RANGE => WRITELN("worker " & CNVT[STRING[ASCII]](id) & ": exception inside the region");
         END GUARD;
      END REPEAT;
      SEND(done, id);
   END TASK worker;
   VAR x : INT;
   CREATE worker(1) NAMED a;
   CREATE worker(2) NAMED b;
   RECEIVE(done, x);
   RECEIVE(done, x);
   WRITELN("count " & CNVT[STRING[ASCII]](count));
END CAPSULE main;
