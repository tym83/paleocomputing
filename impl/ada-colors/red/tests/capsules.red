% capsules (8), EXPOSE, nested subprograms with IMPORTS (3.7)
CAPSULE counters EXPORTS counter, bump, READONLY total;
   TYPE counter : PTR RECORD[n : INT];
   VAR total : INT := 0;
   PROC bump(CONST c : counter) IMPORTS total;
      c.n := c.n + 1;
      total := total + 1;
   END PROC bump;
END CAPSULE counters;

CAPSULE main EXPORTS NONE;
   EXPOSE ALL FROM EXTERNAL counters;
   CAPSULE stackcap EXPORTS stack, init, push, pop;
      CONST size := 100;
      ABBREV elemtype : INT(-1000 .. 1000);
      TYPE stack : RECORD[top : INT(0 .. size),
                          elem : ARRAY INT(1 .. size) OF elemtype];
      PROC init(VAR s : stack);
         s.top := 0;
      END PROC init;
      PROC push(VAR s : stack, CONST e : elemtype);
         s.top := s.top + 1;
         s.elem(s.top) := e;
      END PROC push;
      PROC pop(VAR s : stack, OUT e : elemtype);
         e := s.elem(s.top);
         s.top := s.top - 1;
      END PROC pop;
   END CAPSULE stackcap;
   EXPOSE stack, init, push, pop FROM stackcap;

   VAR s : stack;
   VAR x : INT(-1000 .. 1000);
   VAR c : counter;

   FUNC sum_to(CONST n : INT) => INT;
      VAR acc : INT := 0;
      PROC add(CONST k : INT) IMPORTS acc;
         acc := acc + k;
      END PROC add;
      FOR i : INT(1 .. n) REPEAT
         add(i);
      END REPEAT;
      RETURN acc;
   END FUNC sum_to;

   init(s);
   push(s, 7);
   push(s, 42);
   pop(s, x);
   WRITELN("popped " & CNVT[STRING[ASCII]](x));
   WRITELN("sum_to(100) = " & CNVT[STRING[ASCII]](sum_to(100)));
   ALLOC c PTR := [n : 0];
   bump(c); bump(c); bump(c);
   WRITELN("counter " & CNVT[STRING[ASCII]](c.n) & ", total " & CNVT[STRING[ASCII]](total));
   GUARD
      pop(s, x); pop(s, x);
   BY
      WHEN X_SUBSCRIPT => WRITELN("pop on an empty stack: X_SUBSCRIPT");
   END GUARD;
END CAPSULE main;
