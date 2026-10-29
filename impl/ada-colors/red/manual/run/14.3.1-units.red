% QUEUE[a], which the example assumes (14.3.1): queues are initially empty and
% have INSERT, REMOVE, FIRST (the first element, left in place), SIZE, and
% DEQUEUE (removes a specified value). A queue holds up to 64 elements.
CAPSULE queues EXPORTS QUEUE, INSERT, REMOVE, FIRST, SIZE, DEQUEUE;
   GENERIC a : SUBTYPE
      TYPE QUEUE [a] : PTR RECORD[n : INT, items : ARRAY INT(1 .. 64) OF a];

   GENERIC a : SUBTYPE
      PROC INSERT(VAR q : QUEUE[a], CONST x : a);
         IF q = NIL THEN
            ALLOC q PTR;
            q.n := 0;
         END IF;
         q.n := q.n + 1;
         q.items(q.n) := x;
      END PROC INSERT;

   GENERIC a : SUBTYPE
      ABNORMAL FUNC SIZE(READONLY q : QUEUE[a]) => INT;
         IF q = NIL THEN
            RETURN 0;
         END IF;
         RETURN q.n;
      END FUNC SIZE;

   GENERIC a : SUBTYPE
      ABNORMAL FUNC FIRST(READONLY q : QUEUE[a]) => a;
         RETURN q.items(1);
      END FUNC FIRST;

   GENERIC a : SUBTYPE
      PROC REMOVE(VAR q : QUEUE[a], VAR x : a);
         x := q.items(1);
         FOR i : INT(2 .. q.n) REPEAT
            q.items(i - 1) := q.items(i);
         END REPEAT;
         q.n := q.n - 1;
      END PROC REMOVE;

   GENERIC a : SUBTYPE
      PROC DEQUEUE(VAR q : QUEUE[a], CONST x : a);
         VAR j : INT := 0;
         IF q = NIL THEN
            RETURN;
         END IF;
         FOR i : INT(1 .. q.n) REPEAT
            IF q.items(i) /= x THEN
               j := j + 1;
               q.items(j) := q.items(i);
            END IF;
         END REPEAT;
         q.n := j;
      END PROC DEQUEUE;
END CAPSULE queues;

