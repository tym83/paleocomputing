
% three packets as the line handler would leave them, and their queue entries
CAPSULE main EXPORTS NONE;
   EXPOSE ALL FROM EXTERNAL data_conversion;
   VAR q : ptr_queue_entry;
   PROC show(READONLY p : packet) IMPORTS q;
      message_handler(p, q);
      WRITELN("queue entry: " & q.classification & " " & q.precedence
         & " addressee " & CNVT[STRING[ASCII]](q.addressee) & " length " & CNVT[STRING[ASCII]](q.packet_length)
         & " packet " & CNVT[STRING[ASCII]](q.packet_number));
   END PROC show;
   VAR a : packet(5);
   VAR b : packet(40);
   VAR c : packet(255);
   a.classification := 'secret; a.precedence := 'flash; a.addressee := 1234;
   a.message(1) := 'O; a.message(2) := 'K;
   b.classification := 'unclassified; b.precedence := 'routine; b.addressee := 7;
   c.classification := 'x6; c.precedence := 'unknown; c.addressee := 2047;
   show(a);
   show(b);
   show(c);
END CAPSULE main;
