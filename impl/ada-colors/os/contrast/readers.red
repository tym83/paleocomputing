% Contrast 3, readers and a writer, in RED. The data is shared and guarded by a
% DATA_LOCK; a REGION is exclusive, so even readers take turns. Readers come at
% 0, 1 and 3 ms, the writer at 2 ms; a read or a write takes 10 ms. Waiting
% tasks get the lock in the order they came (RM 10.2).
CAPSULE readers EXPORTS NONE;
   VAR d : DATA_LOCK;
   VAR value : INT := 0;
   VAR done : MAILBOX[INT](4);
   VAR acts : ARRAY INT(1 .. 4) OF ACT;
   VAR x : INT;

   PROC log(CONST s : STRING[ASCII]);
      WRITELN("[" & CNVT[STRING[ASCII]](TIME) & " ms] " & s);
   END PROC log;

   TASK reader(CONST id, at : INT) IMPORTS d, value, done;
      VAR seen : INT;
      DELAY(at);
      REGION d DO
         seen := value;
         DELAY(10);
      END REGION;
      log("reader " & CNVT[STRING[ASCII]](id) & " read " & CNVT[STRING[ASCII]](seen));
      SEND(done, id);
   END TASK reader;

   TASK writer(CONST at : INT) IMPORTS d, value, done;
      DELAY(at);
      REGION d DO
         DELAY(10);
         value := 1;
      END REGION;
      log("writer wrote 1");
      SEND(done, 0);
   END TASK writer;

   CREATE reader(1, 0) NAMED acts(1);
   CREATE reader(2, 1) NAMED acts(2);
   CREATE writer(2) NAMED acts(3);
   CREATE reader(3, 3) NAMED acts(4);
   FOR i : INT(1 .. 4) REPEAT
      RECEIVE(done, x);
   END REPEAT;
   log("all done: the lock serialised everyone, readers included");
END CAPSULE readers;
