CAPSULE main EXPORTS NONE;
   GENERIC t : TYPE (INT, FLOAT)
      FUNC same(x : t) => t;
         RETURN x;
      END FUNC same;
   WRITELN(same("ab"));
END CAPSULE main;
