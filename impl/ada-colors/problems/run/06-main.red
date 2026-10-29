
% the operator console: commands arrive as 80-column cards on SYS_IN
CAPSULE main EXPORTS NONE;
   EXPOSE d FROM EXTERNAL process_control;
   GUARD
      d;
   BY
      WHEN X_FILE => WRITELN("end of the operator" & 'APOS & "s cards");
   END GUARD;
   HALT(0);
END CAPSULE main;
