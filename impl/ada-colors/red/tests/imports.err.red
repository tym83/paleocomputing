CAPSULE main EXPORTS NONE;
   VAR hidden : INT := 1;
   PROC peek;
      hidden := 2;
   END PROC peek;
   peek;
END CAPSULE main;
