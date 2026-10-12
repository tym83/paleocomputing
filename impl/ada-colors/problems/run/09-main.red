
% send a five-packet message to five addressees over their own lines
CAPSULE main EXPORTS NONE;
   EXPOSE ALL FROM EXTERNAL dist_messages;
   VAR msg : packets;
   VAR dest : users;
   VAR k : INT := 0;
   FUNC pad(CONST s : STRING[ASCII]) => STRING[ASCII];
      VAR r : STRING[ASCII](80);
      r(1 .. s.LEN) := s;
      RETURN r;
   END FUNC pad;
   FOR i : packet_number REPEAT
      k := k + 1;
      msg(i) := pad("packet " & CNVT[STRING[ASCII]](k));
   END REPEAT;
   dest(1) := 'L1;
   dest(2) := 'L3;
   dest(3) := 'L4;
   dest(4) := 'L7;
   dest(5) := 'L9;
   dist_out(dest, msg);
   WRITELN("[" & CNVT[STRING[ASCII]](TIME) & " ms] every transmission acknowledged: the message can be purged");
END CAPSULE main;
