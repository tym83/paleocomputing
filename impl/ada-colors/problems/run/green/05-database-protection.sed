# Changes that make GREEN contract problem 5 (1979) translate.
#
# schematic parts of the listing: REQUEST_CODE is "...", the access matrix and
# MAX_SHARING are comments that swallow the semicolons, CHOOSE is "assumed"
s/^   type REQUEST_CODE is \.\.\.;$/   type REQUEST_CODE is (READ_DATA, WRITE_DATA);/
s/^   ACCESS_TABLE : RIGHTS_TABLE := -- global access matrix;$/   ACCESS_TABLE : RIGHTS_TABLE;  -- global access matrix, filled by the program/
s/^      MAX_SHARING : constant INTEGER := -- some constant;$/      MAX_SHARING : constant INTEGER := 3;/
s/^                    PREEMPT, EXCL : BOOLEAN);$/&\
\
      -- CHOOSE: the first user of the set\
      function CHOOSE(S : USER_LIST) return USER_NAME is\
      begin\
         for X in USER_NAME'FIRST .. USER_NAME'LAST loop\
            if S(X) then\
               return X;\
            end if;\
         end loop;\
         return USER_NAME'FIRST;\
      end CHOOSE;\
\
      function PENDING_REQUESTS return BOOLEAN is\
      begin\
         for P in PRIO'FIRST .. PRIO'LAST loop\
            if REQUEST_COUNT(P) > 0 then\
               return TRUE;\
            end if;\
         end loop;\
         return FALSE;\
      end PENDING_REQUESTS;/
# PREEMPTED_DS is a variable in the visible part of task USER_PROCESS, which
# RM79 9.1 does not allow; it becomes a package variable indexed by user
/^      PREEMPTED_DS : DS_LIST;$/d
s/^                       of PRIO;$/&\
   PREEMPTED_DS : array (USER_NAME'FIRST .. USER_NAME'LAST) of DS_LIST;\
   procedure SHUT_DOWN;  -- stops the data-set tasks at the end of the test/
s/USER_PROCESS(X)\.PREEMPTED_DS(ME) := TRUE;/PREEMPTED_DS(X)(ME) := TRUE;/
s/if PREEMPTED_DS(X) then/if PREEMPTED_DS(ME)(X) then/
s/PREEMPTED_DS(X) := FALSE;/PREEMPTED_DS(ME)(X) := FALSE;/
# the rights are named PREEMPT_OK in the enumeration and PREEMPTION_OK here
s/MY_RIGHTS(PREEMPTION_OK)/MY_RIGHTS(PREEMPT_OK)/
# EXCLUSIVE and SHARED assign to their in parameter PREEMPT, a constant
# (RM79 6.3); a local copy carries the downgraded request
s/^         ACCEPTED  : BOOLEAN;$/&\
         MAY_PREEMPT : BOOLEAN := PREEMPT;/
s/^               PREEMPT := FALSE;$/               MAY_PREEMPT := FALSE;/
s/(ACCEPTED,WHO,PREEMPT);/(ACCEPTED,WHO,MAY_PREEMPT);/
# WAIT_SHARED is called without its argument WHO
s/^               WAIT_SHARED(PRIORITY(WHO));$/               WAIT_SHARED(PRIORITY(WHO))(WHO);/
# the else part of REQUEST holds only comments; a sequence of statements
# needs a statement
s/^            -- since it has been achieved by the reservation requests$/&\
            null;/
# 'COUNT of an entry family needs the member: TEST_EXCLUSIVE(P)'COUNT
s/or TEST_EXCLUSIVE'COUNT = 0 =>/or TEST_EXCLUSIVE(P)'COUNT = 0 =>/
# ASK refuses a request only when the set is held exclusively or by
# MAX_SHARING users, so an exclusive request is granted while readers hold
# the set. Run without this change, user 4 writes while users 1 and 2 read
s/^         if MODE = IN_EXCLUSIVE or N_USERS = MAX_SHARING then$/         if MODE = IN_EXCLUSIVE or N_USERS = MAX_SHARING or (EXCL and N_USERS > 0) then/
# the guard of WAIT_SHARED opens whenever the set has a user, also in
# exclusive mode: its two conditions are meant to hold together
s/^                     or (not (N_USERS = 0 and PRIORITY_FOR_EXCLUSIVE$/                     and (not (N_USERS = 0 and PRIORITY_FOR_EXCLUSIVE/
# DATA_SET takes RELEASE only after a RESERVE has arrived, so a FREE with no
# other request pending waits forever; and a user queued on WAIT_EXCLUSIVE
# holds DATA_SET in a select that has no RELEASE, so the holder's FREE can
# never let it in. Run without these changes, user 1's FREE at 0.6 s hangs
# until another user's request comes at 2 s, user 1 never writes, and after
# 2.2 s every user is stuck. RELEASE (and new reservations)
# are also taken while requests are pending, and the loop waits for work
# only when none are
s/^         accept RESERVE(P : PRIO) do$/         if not PENDING_REQUESTS then\
         select\
         accept RESERVE(P : PRIO) do/
/^   task body DATA_SET is$/,$s/^         end;$/         end;\
         or\
            accept RELEASE(WHO : USER_NAME) do\
               USERS(WHO) := FALSE;\
            end;\
            N_USERS := N_USERS - 1;\
            if MODE = IN_EXCLUSIVE then\
               MODE := IN_SHARED;\
            end if;\
         end select;\
         end if;/
s/^               end select;$/               or\
                  accept RELEASE(WHO : USER_NAME) do\
                     USERS(WHO) := FALSE;\
                  end;\
                  N_USERS := N_USERS - 1;\
                  if MODE = IN_EXCLUSIVE then\
                     MODE := IN_SHARED;\
                  end if;\
                  REQUEST_COUNT(P) := REQUEST_COUNT(P) + 1;  -- still pending\
               or\
                  accept RESERVE(P : PRIO) do\
                     REQUEST_COUNT(P) := REQUEST_COUNT(P) + 1;\
                  end;\
                  REQUEST_COUNT(P) := REQUEST_COUNT(P) + 1;  -- still pending\
               end select;/
# the package never initiates the data-set tasks
/^package body DATA_SET_PROTECTION_MODULE is$/,$s/^end DATA_SET_PROTECTION_MODULE;$/   procedure SHUT_DOWN is\
   begin\
      abort DATA_SET(DS_NAME'FIRST .. DS_NAME'LAST);\
   end SHUT_DOWN;\
\
begin\
   for U in USER_NAME'FIRST .. USER_NAME'LAST loop\
      PREEMPTED_DS(U) := (DS_NAME'FIRST .. DS_NAME'LAST => FALSE);\
   end loop;\
   initiate DATA_SET(DS_NAME'FIRST .. DS_NAME'LAST);\
end DATA_SET_PROTECTION_MODULE;/
# "read command" and "execute command" are comments: the commands come from
# TERMINALS (problems/run/green/05-units.grn), and DS_SET, which nothing in
# the listing keeps, records the sets the user holds
s/^restricted(TEXT_IO)$/restricted(TEXT_IO, TERMINALS)/
s/^      DS_SET : DS_LIST := (DS_NAME'FIRST \.\. DS_NAME'LAST => FALSE);$/&\
      CMD, D : INTEGER;\
      P      : BOOLEAN;/
s/^   begin  -- body of USER_PROCESS$/      procedure SAY(S : STRING) is\
      begin\
         PUT(INTEGER(SYSTEM'CLOCK \/ SECONDS * 1000.0), 5); PUT(" ms  user");\
         PUT(INTEGER(ME), 2); PUT(": "); PUT(S);\
      end SAY;\
\
&/
s/^            -- read command$/            TERMINALS.NEXT_COMMAND(INTEGER(ME), CMD, D, P);/
s/^            -- execute command$/            case CMD of\
               when 1 =>\
                  SAY("asks to write"); PUT(NEWLINE);\
                  EXCLUSIVE(DS_NAME(D), P);\
                  DS_SET(DS_NAME(D)) := TRUE;\
                  SAY("writes"); PUT(NEWLINE);\
               when 2 =>\
                  SAY("asks to read"); PUT(NEWLINE);\
                  SHARED(DS_NAME(D), P);\
                  DS_SET(DS_NAME(D)) := TRUE;\
                  SAY("reads"); PUT(NEWLINE);\
               when 3 =>\
                  FREE(DS_NAME(D));\
                  DS_SET(DS_NAME(D)) := FALSE;\
                  SAY("frees"); PUT(NEWLINE);\
               when others =>\
                  exit;\
            end case;/
# the messages to the terminal get the time, the user and a new line
s/^               PUT("data set is busy");$/               SAY("data set is busy"); PUT(NEWLINE);/
s/^               PUT("preemption refused");$/               SAY("preemption refused"); PUT(NEWLINE);/
s/^               PUT("access violation");$/               SAY("access violation"); PUT(NEWLINE);/
s/^                        PUT("you have been preempted from data set : ");$/                        SAY("you have been preempted from data set :");/
s/^                        PUT(X);$/                        PUT(INTEGER(X), 2); PUT(NEWLINE);/
s/^                     PUT("killed!");$/                     SAY("killed!"); PUT(NEWLINE);/
# USERS, the set of users of a data set, is read before anything is assigned
# to it; reading a variable without a value raises NO_VALUE_ERROR (RM79 11.1)
s/^      USERS   : USER_LIST;$/      USERS   : USER_LIST := (others => FALSE);/
