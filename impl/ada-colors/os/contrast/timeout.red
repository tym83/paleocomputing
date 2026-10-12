% Contrast 1, timeouts, in RED. A producer sends two items and goes silent.
% The consumer waits for "an item or 30 ms": RED's WAIT puts the timeout in the
% hands of the one who waits (RM 10.5).
CAPSULE timeout EXPORTS NONE;
   VAR box : MAILBOX[INT](4);
   VAR a : ACT;
   VAR x : INT;
   VAR going : BOOL := TRUE;

   PROC log(CONST s : STRING[ASCII]);
      WRITELN("[" & CNVT[STRING[ASCII]](TIME) & " ms] " & s);
   END PROC log;

   TASK producer IMPORTS box;
      FOR i : INT(1 .. 2) REPEAT
         DELAY(10);
         SEND(box, i);
      END REPEAT;
      DELAY(1000);
   END TASK producer;

   CREATE producer NAMED a;
   WHILE going REPEAT
      WAIT
         WHEN RECEIVE(box, x) =>
            log("got item " & CNVT[STRING[ASCII]](x));
         WHEN DELAY(30) =>
            log("no item for 30 ms: the consumer itself gives up");
            going := FALSE;
      END WAIT;
   END REPEAT;
   HALT(0);
END CAPSULE timeout;
