   % a producer and a slower consumer pass three lines through the buffer
   EXPOSE send, receive FROM line_buffer;
   VAR p, c : ACT;

   TASK producer;
      FOR i : INT(1 .. 3) REPEAT
         send("line " & CNVT[STRING[ASCII]](i) & "  ");
         WRITELN("sent line " & CNVT[STRING[ASCII]](i) & " at " & CNVT[STRING[ASCII]](TIME));
      END REPEAT;
   END TASK producer;

   TASK consumer;
      VAR l : line;
      FOR i : INT(1 .. 3) REPEAT
         DELAY(10);
         receive(l);
         WRITELN("received " & l & "at " & CNVT[STRING[ASCII]](TIME));
      END REPEAT;
   END TASK consumer;

   CREATE producer NAMED p;
   CREATE consumer NAMED c;
END CAPSULE main;
