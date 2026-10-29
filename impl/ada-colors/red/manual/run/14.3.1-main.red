
% the defined MAILBOX at work: a slow consumer, a producer that blocks on a
% full mailbox, a WAIT that takes the defined receive or a timeout, and the
% conditional operations and slot counts
CAPSULE main EXPORTS NONE;
   EXPOSE ALL FROM EXTERNAL mailboxes;
   VAR m : MAILBOX [INT] (2);
   VAR p, c : ACT;
   VAR x : INT;
   VAR b : BOOL;

   PROC say(READONLY what : STRING[ASCII]) IMPORTS m;
      WRITELN(what & " at " & CNVT[STRING[ASCII]](TIME) & ", full " & CNVT[STRING[ASCII]](full_slots(m))
              & ", empty " & CNVT[STRING[ASCII]](empty_slots(m)));
   END PROC say;

   TASK producer IMPORTS m;
      FOR i : INT(1 .. 4) REPEAT
         send(m, i);
         say("sent " & CNVT[STRING[ASCII]](i));
      END REPEAT;
   END TASK producer;

   TASK consumer IMPORTS m;
      VAR v : INT;
      FOR i : INT(1 .. 5) REPEAT
         WAIT
            WHEN receive(m, v) => say("received " & CNVT[STRING[ASCII]](v));
            WHEN DELAY(25) => say("nothing within 25 ms");
         END WAIT;
         DELAY(10);
      END REPEAT;
   END TASK consumer;

   cond_receive(m, x, b);
   WRITELN("cond_receive on an empty mailbox: " & CNVT[STRING[ASCII]](b));
   CREATE producer NAMED p;
   CREATE consumer NAMED c;
   DELAY_UNTIL_INACTIVE(c);
   cond_send(m, 7, b);
   cond_send(m, 8, b);
   cond_send(m, 9, b);
   WRITELN("third cond_send on a mailbox of two: " & CNVT[STRING[ASCII]](b));
   say("main");
END CAPSULE main;
