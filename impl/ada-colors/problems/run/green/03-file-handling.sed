# Changes that make GREEN contract problem 3 (1979) translate.
#
# FILE_MANAGER counts bytes (BLOCK_SIZE is 1024, BYTE_OFFSET a byte in a
# block), but FILE_IO hands it ELEM'SIZE, which is in bits (RM79 App. A):
# every transfer would copy eight times the element, past its end
s/ELEM'SIZE/(ELEM'SIZE \/ 8)/g
# The writing phase starts at byte LAST_WRITTEN + 1 of the file, while READ
# reads record N at byte N*size: run without this change, every record read
# back is shifted by one byte and comes out wrong
s/^               CURRENT_BLOCK := ((LAST_WRITTEN + 1)\/BLOCK_SIZE) + 1;$/               CURRENT_BLOCK := (LAST_WRITTEN\/BLOCK_SIZE) + 1;/
s/^               OFFSET := (LAST_WRITTEN + 1) mod BLOCK_SIZE;$/               OFFSET := LAST_WRITTEN mod BLOCK_SIZE;/
# READ refuses a record only when it starts past the end of the file, so
# the record just after the last one is read from bytes never written instead
# of raising ILLEGAL_READ (requirement C)
s/^         or RECORD_ADDR > FILE_SIZE then$/         or RECORD_ADDR + N_BYTES > FILE_SIZE then/
# CREATE initiates the file's task inside the body of accept CREATE, which
# RM79 9.5 forbids. The FILE members are initiated with FILE_MANAGER and a
# member is initiated again after DESTROY has closed its file (so it can be
# reused, as the design notes say); DISK_HANDLER, which nothing initiates,
# starts with them
/^                  initiate FILE(FX);$/d
s/^   LAST_KEY: KEY_TYPE := KEY_TYPE'FIRST;$/&\
   REUSE: FILE_INDEX;  -- the member whose file DESTROY closed/
s/^                  FILE(FX)\.CLOSE;$/&\
                  REUSE := FX;/
s/^            end DESTROY;$/&\
            while FILE(REUSE)'ACTIVE loop\
               delay 0.001 * SECONDS;\
            end loop;\
            initiate FILE(REUSE);/
s/^begin -- body of FILE_MANAGER$/&\
   initiate DISK_HANDLER, FILE(FILE_INDEX'FIRST .. FILE_INDEX'LAST);/
# DISK_HANDLER: a record closed by "end;" instead of "end record;", and a
# for loop with an unbalanced parenthesis
457s/^      end;$/      end record;/
s/BLOCK_INDEX'LAST) loop  -- sic: unbalanced ')' as printed/BLOCK_INDEX'LAST loop/
# "the rest of DISK_HANDLER ... is not given": the disk is a byte string, and
# its READ and WRITE copy bytes through a foreign body (RM79 13.9) supplied by
# the runtime; requests are served in the order they come
s/^   FREE_BLOCKS: INTEGER := MAX_BLOCKS;$/&\
   DISK: STRING(1 .. MAX_BLOCKS * BLOCK_SIZE);\
\
   procedure MOVE_BYTES(FROM_ADDR, TO_ADDR, N: INTEGER) is\
   begin\
      pragma INTERFACE(C);\
   end MOVE_BYTES;/
s/^            -- the rest of DISK_HANDLER is$/            accept READ( DATA_ADDR: INTEGER;\
                         B: BLOCK_INDEX;\
                         DISPL: BYTE_OFFSET;\
                         N_BYTES: INTEGER) do\
               MOVE_BYTES(DISK((B - 1) * BLOCK_SIZE + DISPL + 1)'ADDRESS, DATA_ADDR, N_BYTES);\
            end READ;\
         or\
            accept WRITE(DATA_ADDR: INTEGER;\
                         B: BLOCK_INDEX;\
                         DISPL: BYTE_OFFSET;\
                         N_BYTES: INTEGER) do\
               MOVE_BYTES(DATA_ADDR, DISK((B - 1) * BLOCK_SIZE + DISPL + 1)'ADDRESS, N_BYTES);\
            end WRITE;\
            -- the rest of DISK_HANDLER is/
# The listing gives FILE_IO before FILE_MANAGER, which it names, and the
# bodies of DIRECTORY, FILE and DISK_HANDLER as separate subunits after
# FILE_MANAGER, whose stubs greenc does not take. In one compilation FILE_IO
# goes after the specification of FILE_MANAGER, and the statements of
# FILE_MANAGER's body go after the subunits, which become its inner bodies
/^   package body DIRECTORY    is separate;$/d
/^   task    body FILE         is separate;$/d
/^   task    body DISK_HANDLER is separate;$/d
/^ *restricted(FILE_MANAGER)$/{
1,60!d
}
s/^\( *\)separate package body/\1package body/
s/^separate task body/task body/
1,60{
H
d
}
90G
194h
195,238H
194,238d
$G
