% INITIALIZE and FINALIZE (13.3): at the beginning and the end of the life of
% every data item of a new type, however its scope is left
CAPSULE tracked EXPORTS res, show, :=;
   TYPE res : RECORD[id : INT];
   VAR serial : INT := 0;
   PROC INITIALIZE(VAR r : res) IMPORTS serial;
      serial := serial + 1;
      r.id := serial;
      WRITELN("  init " & CNVT[STRING[ASCII]](r.id));
   END PROC INITIALIZE;
   PROC FINALIZE(VAR r : res);
      WRITELN("  final " & CNVT[STRING[ASCII]](r.id));
   END PROC FINALIZE;
   FUNC show(CONST r : res) => STRING[ASCII];
      RETURN CNVT[STRING[ASCII]](r.id);
   END FUNC show;
END CAPSULE tracked;

CAPSULE main EXPORTS NONE;
   EXPOSE ALL FROM EXTERNAL tracked;
   TYPE link : PTR res;
   VAR keep : link;

   PROC block_scope;
      VAR a : res;
      WRITELN("  using " & show(a));
   END PROC block_scope;

   PROC by_exception;
      VAR b : res;
      RAISE X_RANGE;
   END PROC by_exception;

   PROC by_return(CONST stop : BOOL);
      VAR c : res;
      IF stop THEN
         RETURN;
      END IF;
      WRITELN("  not reached");
   END PROC by_return;

   PROC formals(CONST k : res, OUT o : res);
      WRITELN("  in the procedure");
   END PROC formals;

   FUNC make => res;
      VAR r : res;
      RETURN r;
   END FUNC make;

   VAR outer, got : res;
   VAR p : link;

   WRITELN("a procedure's variable:");
   block_scope;
   WRITELN("left by an exception:");
   GUARD
      by_exception;
   BY
      WHEN X_RANGE => WRITELN("  X_RANGE handled");
   END GUARD;
   WRITELN("left by RETURN:");
   by_return(TRUE);
   WRITELN("a loop body, twice:");
   FOR i : INT(1 .. 2) REPEAT
      VAR d : res;
      WRITELN("  iteration " & CNVT[STRING[ASCII]](i));
   END REPEAT;
   WRITELN("CONST and OUT formals:");
   formals(outer, got);
   WRITELN("a function result:");
   got := make;
   WRITELN("a dynamic variable freed:");
   ALLOC p PTR;
   FREE(p);
   WRITELN("a dynamic variable no longer referenced, collected at the next ALLOC:");
   ALLOC p PTR;
   p := NIL;
   ALLOC keep PTR;
   WRITELN("the program ends:");
END CAPSULE main;
