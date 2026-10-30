# Changes that make GREEN contract problem 10 (1979) translate.
#
# The solution is written as "task PACKET_TO_QUEUE is <declarations> begin ...
# end", a task body without the word body and without a task specification
# (RM79 9.1). Worse, the packet and queue-entry formats are declared inside that
# task, yet LINE_HANDLER.BUFFER_POOL holds packets of that type and
# QUEUE_HANDLER.GET_A_QUEUE returns queue entries of it: no unit outside the task
# can name those types, so the two handlers cannot be written. The declarations
# move into a library package PACKET_FORMATS that the handlers and the task share.
s/^restricted(LINE_HANDLER, QUEUE_HANDLER)$/package PACKET_FORMATS is/
/^task PACKET_TO_QUEUE is$/d
# the handlers the problem assumes (problems/run/green/10-handlers.grn) come
# after the formats they use
/^   end QUEUE_ENTRY_TYPE;$/{
a\
end PACKET_FORMATS;
r problems/run/green/10-handlers.grn
}
# the task proper, with its variables, in a package body; a library unit
# cannot be a task here, since the main program is a procedure
s/^   PKT_INDEX : PACKET_NUMBER;$/restricted(PACKET_FORMATS, LINE_HANDLER, QUEUE_HANDLER)\
package PACKET_CONVERSION is\
   task PACKET_TO_QUEUE;\
end PACKET_CONVERSION;\
\
package body PACKET_CONVERSION is\
\
task body PACKET_TO_QUEUE is\
   use PACKET_FORMATS;\
&/
/^end PACKET_TO_QUEUE;$/a\
end PACKET_CONVERSION;
# Left as printed, because representation specifications are read and ignored
# here: the addressee takes bits 5..15, eleven bits, while ADDRESS is
# 0 .. 1023, ten bits; and LENGTH is 0 .. 256, which does not fit the eight
# bits 0 .. 7 given to LGTH. The character literals "T", "S" ... are right:
# RM79 writes a character literal in double quotes (2.5).
# A name made visible by a use clause never hides another declaration (RM79
# 8.4): the literal PRIORITY of PACKET_TYPE does not hide the subtype PRIORITY
# of STANDARD, and is named PACKET_TYPE.PRIORITY
s/^            when PRIORITY => CUR_QE.PREC := "P";$/            when PACKET_TYPE.PRIORITY => CUR_QE.PREC := "P";/
