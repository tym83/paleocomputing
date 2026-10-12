% Contrast 3, readers and a writer, on THE's semaphores only: the solution of
% Courtois, Heymans and Parnas (CACM 1971). Readers share the data, the first
% reader in locks the writer out and the last one out lets it in. Readers read
% together, and a reader who comes after a waiting writer still goes first: the
% writer can starve. Fairness is not in the semaphores; it is in how they are used.
CAPSULE readers_the EXPORTS NONE;
   VAR sem : ARRAY INT(1 .. 2) OF MAILBOX[INT](8);
   CONST s_mutex := 1;        % guards readcount
   CONST s_w := 2;            % the data: one writer, or the readers as a group
   VAR readcount : INT := 0;
   VAR value : INT := 0;
   VAR done : MAILBOX[INT](4);
   VAR acts : ARRAY INT(1 .. 4) OF ACT;
   VAR x : INT;

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

   TASK reader(CONST id, at : INT) IMPORTS readcount, value, done;
      VAR seen : INT;
      DELAY(at);
      P(s_mutex);
      readcount := readcount + 1;
      IF readcount = 1 THEN
         P(s_w);
      END IF;
      V(s_mutex);
      seen := value;
      DELAY(10);
      P(s_mutex);
      readcount := readcount - 1;
      IF readcount = 0 THEN
         V(s_w);
      END IF;
      V(s_mutex);
      log("reader " & CNVT[STRING[ASCII]](id) & " read " & CNVT[STRING[ASCII]](seen));
      SEND(done, id);
   END TASK reader;

   TASK writer(CONST at : INT) IMPORTS value, done;
      DELAY(at);
      P(s_w);
      DELAY(10);
      value := 1;
      V(s_w);
      log("writer wrote 1");
      SEND(done, 0);
   END TASK writer;

   V(s_mutex);
   V(s_w);
   CREATE reader(1, 0) NAMED acts(1);
   CREATE reader(2, 1) NAMED acts(2);
   CREATE writer(2) NAMED acts(3);
   CREATE reader(3, 3) NAMED acts(4);
   FOR i : INT(1 .. 4) REPEAT
      RECEIVE(done, x);
   END REPEAT;
   log("all done: readers overlapped, and reader 3 overtook the waiting writer");
END CAPSULE readers_the;
