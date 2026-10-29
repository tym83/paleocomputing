# Changes that make GREEN contract problem 8 (1979) translate.
#
# CLOCK is declared in the visible part of SCHEDULER, but its body is written
# inside the body of SCHEDULING_TASK, where it declares a second, local CLOCK:
# the package's CLOCK has no body. The body and the time it reads move to the
# package body
/^      TIME_NOW: TIME := 0;$/d
/^      function CLOCK return TIME is$/,/^      end CLOCK;$/d
s/^   task body SCHEDULING_TASK is$/   TIME_NOW: TIME := 0;\
\
   function CLOCK return TIME is\
   begin\
      return TIME_NOW;\
   end CLOCK;\
\
&/
# The clock interrupt is given as "for TICK use at -- interrupt address for
# tick;", where the comment swallows the semicolon. Interrupts are not
# simulated: TICK becomes an entry of the task's visible part, called once a
# second by HARDWARE_CLOCK, a task added to the package body
s/^      for TICK use at -- interrupt address for tick;$/      -- for TICK use at ...;  (the address is not given)/
/^      entry TICK;$/d
s/^      entry WAIT(TASK_ID'FIRST .. TASK_ID'LAST);$/&\
      entry TICK;/
s/^begin  -- initialization of SCHEDULER$/   task HARDWARE_CLOCK;\
\
   task body HARDWARE_CLOCK is\
   begin\
      loop\
         delay 1.0 * SECONDS;\
         SCHEDULING_TASK.TICK;\
      end loop;\
   end HARDWARE_CLOCK;\
\
   procedure SHUT_DOWN is\
   begin\
      abort HARDWARE_CLOCK, SCHEDULING_TASK;\
   end SHUT_DOWN;\
\
&/
s/^   initiate SCHEDULING_TASK;$/   initiate SCHEDULING_TASK, HARDWARE_CLOCK;/
# the test program stops the scheduler at the end
s/^   function CLOCK return TIME;$/&\
   procedure SHUT_DOWN;/
# LINK inserts a task before the first element whose START is later, but it
# never makes the predecessor point to it, and when that element is the head
# of the list it leaves DELAY_LIST on the old head: a request earlier than
# every pending one is lost and its task is never released. Run without this
# change, OPERATOR (due at 1) never runs, and when SAMPLER leaves the list the
# stale links lose LOGGER's request as well: only SAMPLER runs
s/^               TIME_TABLE(I).PREVIOUS := TSK;$/&\
               if THIS.PREVIOUS = 0 then\
                  DELAY_LIST := TSK;\
               else\
                  TIME_TABLE(THIS.PREVIOUS).NEXT := TSK;\
               end if;/
# SIGN_ON leaves its accept body with "return", which RM79 5.3 forbids; the
# search loop is left with exit and a flag tells whether a slot was found
s/^               accept SIGN_ON(NAME: STRING; TSK: out TASK_ID) do$/&\
                  declare\
                     FOUND : BOOLEAN := FALSE;\
                  begin/
s/^                        return;$/                        FOUND := TRUE;\
                        exit;/
s/^                  raise TOO_MANY_TASKS;$/                  if not FOUND then\
                     raise TOO_MANY_TASKS;\
                  end if;\
                  end;/
# Every type definition is a distinct type (RM79 3.3): the tables are indexed
# by TASK_ID values, but declared with the INTEGER range 1 .. MAX_TASK
s/^      TIME_TABLE: array(1 .. MAX_TASK) of TASK_STATUS;$/      TIME_TABLE: array(TASK_ID) of TASK_STATUS;/
s/^      NAME_TABLE: array(1 .. MAX_TASK) of TASK_NAME;$/      NAME_TABLE: array(TASK_ID) of TASK_NAME;/
# MAX_TIME is an INTEGER constant, compared and combined with TIME values
s/^               TIME_NOW := (TIME_NOW + 1) mod MAX_TIME;$/               TIME_NOW := (TIME_NOW + 1) mod TIME(MAX_TIME);/
s/^                                    <= MAX_TIME then$/                                    <= TIME(MAX_TIME) then/
