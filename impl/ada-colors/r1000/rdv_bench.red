% The same measurements in RED on our runtime: a procedure call, a round trip
% through two mailboxes of size 0 (RED's rendezvous: the sender waits for the
% receiver), the same round trip with buffered mailboxes, and the life of a
% task. RED's clock is virtual, so stamp.py timestamps the BEGIN and END lines.
CAPSULE main EXPORTS NONE;
   CONST n := 200000;
   CONST n_tasks := 20000;
   VAR counter : INT := 0;
   VAR req0, rep0 : MAILBOX[INT](0);
   VAR req1, rep1 : MAILBOX[INT](1);
   VAR a, s0, s1 : ACT;

   PROC bump(VAR x : INT);
      x := x + 1;
   END PROC bump;

   TASK echo0 IMPORTS req0, rep0;
      VAR v : INT;
      FOR i : INT(1 .. n) REPEAT
         RECEIVE(req0, v);
         SEND(rep0, v + 1);
      END REPEAT;
   END TASK echo0;

   TASK echo1 IMPORTS req1, rep1;
      VAR v : INT;
      FOR i : INT(1 .. n) REPEAT
         RECEIVE(req1, v);
         SEND(rep1, v + 1);
      END REPEAT;
   END TASK echo1;

   TASK short;
   END TASK short;

   WRITELN("BEGIN EMPTY_LOOP " & CNVT[STRING[ASCII]](n));
   FOR i : INT(1 .. n) REPEAT
      counter := counter + 1;
   END REPEAT;
   WRITELN("END EMPTY_LOOP");

   WRITELN("BEGIN CALL " & CNVT[STRING[ASCII]](n));
   FOR i : INT(1 .. n) REPEAT
      bump(counter);
   END REPEAT;
   WRITELN("END CALL");

   CREATE echo0 NAMED s0;
   WRITELN("BEGIN MAILBOX0_ROUND_TRIP " & CNVT[STRING[ASCII]](n));
   FOR i : INT(1 .. n) REPEAT
      SEND(req0, counter);
      RECEIVE(rep0, counter);
   END REPEAT;
   WRITELN("END MAILBOX0_ROUND_TRIP");

   CREATE echo1 NAMED s1;
   WRITELN("BEGIN MAILBOX1_ROUND_TRIP " & CNVT[STRING[ASCII]](n));
   FOR i : INT(1 .. n) REPEAT
      SEND(req1, counter);
      RECEIVE(rep1, counter);
   END REPEAT;
   WRITELN("END MAILBOX1_ROUND_TRIP");

   WRITELN("BEGIN TASK_LIFE " & CNVT[STRING[ASCII]](n_tasks));
   FOR i : INT(1 .. n_tasks) REPEAT
      CREATE short NAMED a;
      DELAY_UNTIL_INACTIVE(a);
   END REPEAT;
   WRITELN("END TASK_LIFE");
   WRITELN("BENCH DONE " & CNVT[STRING[ASCII]](counter));
END CAPSULE main;
