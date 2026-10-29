
% three activations of one task share the processor in turns of 10 ms
CAPSULE main EXPORTS NONE;
   EXPOSE ALL FROM NEW EXTERNAL round_robin (10);
   VAR done : MAILBOX[INT](3);
   VAR a, b, c : rr_act;
   VAR x : INT;

   TASK worker(CONST name : STRING[ASCII]) IMPORTS done;
      FOR i : INT(1 .. 5) REPEAT
         WRITELN(name & " step " & CNVT[STRING[ASCII]](i) & " at " & CNVT[STRING[ASCII]](TIME));
         DELAY(4);
      END REPEAT;
      SEND(done, 1);
   END TASK worker;

   CREATE worker("A") NAMED a;
   CREATE worker("B") NAMED b;
   CREATE worker("C") NAMED c;
   FOR i : INT(1 .. 3) REPEAT
      RECEIVE(done, x);
   END REPEAT;
   WRITELN("all done at " & CNVT[STRING[ASCII]](TIME));
   % the scheduler task never ends, so the program stops here
   HALT(0);
END CAPSULE main;
