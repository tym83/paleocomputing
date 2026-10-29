
% three activations await a pulsed event; a fourth arrives after the signal
% and waits for the next one
CAPSULE main EXPORTS NONE;
   EXPOSE ALL FROM EXTERNAL event_cap;
   VAR e : pevent;
   VAR w : ARRAY INT(1 .. 4) OF ACT;

   TASK waiter(CONST id : INT, CONST start : INT) IMPORTS e;
      DELAY(start);
      await(e);
      WRITELN("waiter " & CNVT[STRING[ASCII]](id) & " continues at " & CNVT[STRING[ASCII]](TIME));
   END TASK waiter;

   CREATE waiter(1, 1) NAMED w(1);
   CREATE waiter(2, 2) NAMED w(2);
   CREATE waiter(3, 3) NAMED w(3);
   CREATE waiter(4, 15) NAMED w(4);
   DELAY(10);
   WRITELN("signal at " & CNVT[STRING[ASCII]](TIME));
   signal(e);
   DELAY(10);
   WRITELN("signal at " & CNVT[STRING[ASCII]](TIME));
   signal(e);
END CAPSULE main;
