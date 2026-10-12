
% Node 1 of a five-node network. Its neighbours 2 (delay 10) and 3 (delay 4)
% are played here: they send their tables once a minute. Node 4 is next to
% both (5 from node 2, 20 from node 3), node 5 is behind node 4. At minute 12
% the link from node 3 to node 4 gets faster, and the route follows it. The
% solution has no process for a broken or new link, which the problem asks
% for, and update takes only a shorter delay, so a route that gets slower is
% never noticed.
CAPSULE main EXPORTS NONE;
   EXPOSE ALL FROM EXTERNAL network;
   CONST far := 24*hours;
   VAR t, t2, t3 : node_table;
   VAR m : mail;

   PROC init(VAR x : node_table);
      FOR i : node REPEAT
         x(i).dist := numnodes;
         x(i).delay := far;
         x(i).route := i;
      END REPEAT;
   END PROC init;

   PROC entry(VAR x : node_table, CONST n : node, CONST dist : distance, CONST dl : node_time);
      x(n).dist := dist;
      x(n).delay := dl;
      x(n).route := n;
   END PROC entry;

   PROC show IMPORTS my_table;
      FOR n : INT(4 .. 5) REPEAT
         WRITELN("[" & CNVT[STRING[ASCII]](TIME DIV minutes) & " min] node 1 to node " & CNVT[STRING[ASCII]](n)
            & ": distance " & CNVT[STRING[ASCII]](my_table(n).dist)
            & ", delay " & CNVT[STRING[ASCII]](my_table(n).delay)
            & ", via node " & CNVT[STRING[ASCII]](my_table(n).route));
      END REPEAT;
   END PROC show;

   PROC neighbours IMPORTS m, t2, t3, node_mail;
      ALLOC m PTR;
      m.sent_table := t2;
      m.sender := 2;
      SEND(node_mail(1), m);
      ALLOC m PTR;
      m.sent_table := t3;
      m.sender := 3;
      SEND(node_mail(1), m);
   END PROC neighbours;

   init(t);
   entry(t, 1, 0, 0);
   entry(t, 2, 1, 10);
   entry(t, 3, 1, 4);
   init(t2);
   entry(t2, 2, 0, 0);
   entry(t2, 1, 1, 10);
   entry(t2, 4, 1, 5);
   entry(t2, 5, 2, 6);
   init(t3);
   entry(t3, 3, 0, 0);
   entry(t3, 1, 1, 4);
   entry(t3, 4, 1, 20);
   entry(t3, 5, 2, 21);
   routing(t, 1);
   FOR minute : INT(1 .. 15) REPEAT
      IF minute = 12 THEN
         entry(t3, 4, 1, 2);
         entry(t3, 5, 2, 3);
      END IF;
      DELAY_UNTIL(minute * minutes);
      neighbours;
      DELAY(1);
      IF minute = 1 OR minute = 15 THEN
         show;
      END IF;
   END REPEAT;
   HALT(0);
END CAPSULE main;
