% Lab 3. A mailbox of size n lets a sender run n messages ahead; size 0 is a rendezvous.
CAPSULE main EXPORTS NONE;
   CONST size := 3;
   VAR m : MAILBOX[INT](size);
   VAR pr : ACT;
   TASK producer IMPORTS m;
      FOR i : INT(1 .. 5) REPEAT
         WRITELN("send " & CNVT[STRING[ASCII]](i));
         SEND(m, i);
      END REPEAT;
   END TASK producer;
   VAR v : INT;
   CREATE producer NAMED pr;
   DELAY(1);
   FOR i : INT(1 .. 5) REPEAT
      RECEIVE(m, v);
      WRITELN("        got " & CNVT[STRING[ASCII]](v));
   END REPEAT;
END CAPSULE main;
