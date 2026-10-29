# Fill-ins for the elisions of the reply example of 14.1.3; the program
# itself is unchanged.
# the subtypes left open
s/^ABBREV sm : \.\.\. ;/ABBREV sm : INT;/
s/^ABBREV sr : \.\.\. ;/ABBREV sr : INT;/
# each sender asks twice instead of forever, and the receiver answers the
# twenty requests by doubling each one
/^TASK sender/,/^END TASK sender/s/^   WHILE TRUE REPEAT$/   FOR k : INT(1 .. 2) REPEAT/
/^TASK receiver/,/^END task receiver/s/^   WHILE TRUE REPEAT$/   FOR k : INT(1 .. 20) REPEAT/
s/^      \.\.\. % compute vm$/      vm := id * 10 + k;/
s/^      \.\.\. % use vr$/      WRITELN("sender " \& CNVT[STRING[ASCII]](id) \& " got " \& CNVT[STRING[ASCII]](vr));/
s/^      \.\.\. % process the message(p.data) and compute the reply(vr)$/      vr := 2 * p.data;/
