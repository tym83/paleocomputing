CAPSULE main EXPORTS NONE;
   GENERIC p : PROC (INT)
      PROC call[p];
         WRITELN("call");
      END PROC call;
   PROC q(b : BOOL);
   END PROC q;
   call[q];
END CAPSULE main;
