% Lab 4. WAIT takes whichever invocation can complete first: a message or a timeout.
CAPSULE main EXPORTS NONE;
   VAR m : MAILBOX[INT](1);
   VAR late : ACT;
   VAR v : INT;
   VAR m0 : MAILBOX[INT](0);
   TASK sender(CONST after : INT) IMPORTS m;
      DELAY(after);
      SEND(m, after);
   END TASK sender;
   CREATE sender(30) NAMED late;
   WAIT
      WHEN SEND(m0, 1) => WRITELN("sent");
      WHEN RECEIVE(m, v) => WRITELN("message after " & CNVT[STRING[ASCII]](v) & " ms");
      WHEN DELAY(50) => WRITELN("timeout at " & CNVT[STRING[ASCII]](TIME) & " ms");
   END WAIT;
END CAPSULE main;
