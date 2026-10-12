# Changes that make RED contract problem 6 (1979) translate.
# A new type without parameters has a single subtype (RM 4.4.2), so mes('b0..'b1)
# is illegal; the subtypes are written as ENUM subtypes of one abbreviation.
s/^TYPE mes: ENUM\['b0, 'b1, 'done\];/ABBREV mes: ENUM['b0, 'b1, 'done];/
s/^ABBREV mes1: mes('b0..'b1);/ABBREV mes1: ENUM['b0, 'b1, 'done]('b0..'b1);/
s/^ABBREV mescontrol: mes('done..'done);/ABBREV mescontrol: ENUM['b0, 'b1, 'done]('done..'done);/
# buffer and buffers are types; the tasks use buffers as a variable that is never declared
s/^TYPE buffer: STRING\[ASCII\](80);/ABBREV buffer: STRING[ASCII](80);/
s/^TYPE buffers: ARRAY mes1 OF buffer;/VAR buffers: ARRAY mes1 OF buffer;/
# the loop name is misspelled at its end
s/END REPEAT keep_outputing;/END REPEAT keep_outputting;/
# d declares aa, ba, ca and creates under cc and bb
s/VAR aa, ba, ca: ACT;/VAR aa, bb, cc: ACT;/
# the units the problem says are "assumed to be present" come from problems/run/06-units.red
s/^PROC d IMPORTS ma,mb,a,b,c,outstr,inchwl,mcontrol;/PROC d IMPORTS ma, mb, mcontrol;/
s/^TASK b IMPORTS ma,mb,mr,buffers;/TASK b IMPORTS ma, mb, mc, buffers;/
s/^CAPSULE process_control EXPORTS d;/CAPSULE process_control EXPORTS d; EXPOSE ALL FROM EXTERNAL units;/
# the output of task c goes where its comment is, in a human oriented form
s/^         % output the data in r in a "human oriented form"/         WRITELN("output: " \& r(1 .. 8));/
# the input device: it reports every completed read on mr (the problem assumes it)
s/^VAR mr:  MAILBOX\[inputflag\](0);/&\
TASK device IMPORTS mr; WHILE TRUE REPEAT DELAY(1); SEND(mr, 'ok); END REPEAT; END TASK device;/
s/^  CREATE c NAMED cc;.*/  VAR dd: ACT;\
  CREATE device NAMED dd;\
&/
# the operator takes 10 ms to type a card (READLN of 1979 waited for a person)
s/^        READLN (command);/        DELAY(10);\
&/
