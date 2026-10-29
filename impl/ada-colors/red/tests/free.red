% FREE (4.4.3): a dynamic variable is reclaimed only when no other pointer
% refers to it; otherwise X_FREE, so a dangling pointer cannot arise
CAPSULE main EXPORTS NONE;
   TYPE cell : PTR RECORD[v : INT, next : cell];
   VAR p, q : cell;
   VAR m : MAILBOX[cell](2);
   VAR holder : ACT;
   VAR go : MAILBOX[INT](1);

   PROC try_free(READONLY what : STRING[ASCII]) IMPORTS p;
      GUARD
         FREE(p);
         IF p = NIL THEN
            WRITELN(what & ": freed, p is NIL");
         END IF;
      BY
         WHEN X_FREE => WRITELN(what & ": X_FREE");
      END GUARD;
   END PROC try_free;

   PROC keep_and_free IMPORTS p;
      CONST local := p;
      try_free("while a procedure holds a copy");
   END PROC keep_and_free;

   PROC keep_and_fail IMPORTS p;
      CONST local := p;
      RAISE X_RANGE;
   END PROC keep_and_fail;

   TASK keeper(CONST c : cell) IMPORTS go;
      VAR x : INT;
      RECEIVE(go, x);
   END TASK keeper;

   ALLOC p PTR := [v : 1, next : NIL];
   q := p;
   try_free("another variable refers to it");
   q := NIL;
   try_free("no other pointer");

   ALLOC p PTR := [v : 2, next : NIL];
   ALLOC q PTR := [v : 3, next : p];
   try_free("a list node refers to it");
   q.next := NIL;
   keep_and_free;
   try_free("after that procedure returned");

   ALLOC p PTR := [v : 4, next : NIL];
   GUARD
      keep_and_fail;
   BY
      WHEN X_RANGE => WRITELN("a procedure holding a copy ended by X_RANGE");
   END GUARD;
   try_free("after it ended by an exception");

   ALLOC p PTR := [v : 5, next : NIL];
   SEND(m, p);
   try_free("a message in a mailbox refers to it");
   RECEIVE(m, q);
   q := NIL;
   CREATE keeper(p) NAMED holder;
   try_free("a waiting task holds it as a parameter");
   SEND(go, 1);
   DELAY_UNTIL_INACTIVE(holder);
   try_free("after that task ended");
END CAPSULE main;
