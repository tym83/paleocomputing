% Lab 6. The ACT scheduler (10.2): the highest priority runs first, FIFO within a priority.
CAPSULE main EXPORTS NONE;
   VAR a, b, c : ACT;
   TASK say(CONST s : STRING[ASCII]);
      WRITELN(s);
   END TASK say;
   SET_PRIORITY(ME, 100);
   CREATE say("a") NAMED a;
   CREATE say("b") NAMED b;
   CREATE say("c") NAMED c;
   SET_PRIORITY(a, 10);
   SET_PRIORITY(b, 10);
   SET_PRIORITY(c, 10);
   SET_PRIORITY(ME, 0);
   DELAY(1);
END CAPSULE main;
