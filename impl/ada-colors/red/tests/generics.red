% generics (11.3): implicit instances, NEEDS, task and procedure parameters
CAPSULE main EXPORTS NONE;
   GENERIC t : TYPE NEEDS :=(t,t)
      PROC swap(VAR a, b : t);
         CONST c := a;
         a := b;
         b := c;
      END PROC swap;

   GENERIC t : TYPE
      FUNC max_of(CONST a, b : t) => t;
         IF a > b THEN
            RETURN a;
         END IF;
         RETURN b;
      END FUNC max_of;

   GENERIC p : PROC
      PROC twice [p];
         p;
         p;
      END PROC twice;

   GENERIC w : TASK
      TASK supervise [w] (CONST n : INT) IMPORTS done;
         VAR a : ACT;
         FOR i : INT(1 .. n) REPEAT
            CREATE w NAMED a;
            DELAY_UNTIL_INACTIVE(a);
         END REPEAT;
         SEND(done, n);
      END TASK supervise;

   VAR i, j : INT(1 .. 10);
   VAR s1, s2 : STRING[ASCII](3);
   VAR done : MAILBOX[INT](1);
   VAR sup : ACT;
   VAR got : INT;

   PROC hello;
      WRITELN("hello");
   END PROC hello;

   TASK beep;
      WRITELN("beep");
   END TASK beep;

   i := 1; j := 9;
   swap(i, j);
   s1 := "abc"; s2 := "xyz";
   swap(s1, s2);
   WRITELN(CNVT[STRING[ASCII]](i) & " " & CNVT[STRING[ASCII]](j) & " " & s1 & " " & s2);
   WRITELN(CNVT[STRING[ASCII]](max_of(3, 7)) & " " & max_of("pear", "plum"));
   twice[hello];
   CREATE supervise[beep](3) NAMED sup;
   RECEIVE(done, got);
   WRITELN("supervised " & CNVT[STRING[ASCII]](got));
END CAPSULE main;
