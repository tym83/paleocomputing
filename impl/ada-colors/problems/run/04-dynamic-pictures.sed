# Changes that make RED contract problem 4 (1979) translate.
# a capsule has no imports list (it is a closed scope that takes what it
# needs by EXPOSE); display and blink, the screen the problem assumes, are
# simulated inside the capsule below, and so are the joysticks and buttons
s/^CAPSULE graphics        IMPORTS display, blink/CAPSULE graphics EXPORTS simulate_objects, set_joy_stick, press_reset, press_start;/
/^        EXPORTS simulate_objects;$/d
# the configuration capsule comes from problems/run/configuration.red
s/^EXPOSE seconds, bytes, milliseconds FROM CONFIGURATION;/EXPOSE seconds, bytes, milliseconds FROM EXTERNAL configuration;/
# with locations as pointers, do_reset makes loc and start the same record,
# so moving an object moves its starting point too, and check_crash compares
# two pointers that are never equal: the objects could never collide. A
# location is a record
s/^TYPE locn: PTR$/TYPE locn:/
# v_dir is INT(1..2) but is compared with forward = 3: no object could ever
# move forward. Its range follows the constants
s/^                        v_dir: INT(1..2),/                        v_dir: INT(3..4),/
# the joystick registers are simulated memory, set by set_joy_stick
s/^VAR joy_sticks:  ARRAY OBJECTS OF VELOCITY_INFO LOCATION (1000);/VAR joy_sticks:  ARRAY OBJECTS OF VELOCITY_INFO;/
# the procedures index objs by o, so o is one of the OBJECTS, not an OBJECT
# (a pointer); read_joy_stick never sets its OUT parameter, and its LOW_IO
# reads the simulated registers
s/^PROC read_joy_stick (o:OBJECT, OUT v:VELOCITY_INFO);/PROC read_joy_stick (o:OBJECTS, OUT v:VELOCITY_INFO) IMPORTS joy_sticks;/
s/^    LOW_IO (objs(o).dev, 0, joy_sticks(o));/    v := joy_sticks(o);/
s/^PROC check_crash (o:OBJECT) IMPORTS objs,crash_mailbox;/PROC check_crash (o:OBJECTS) IMPORTS objs, crash_mailbox, d;/
s/^PROC get_new_locn(o:OBJECT) IMPORTS objs;/PROC get_new_locn(o:OBJECTS) IMPORTS objs, d;/
s/^TASK move_object (o:OBJECT);/TASK move_object (o:OBJECTS);/
s/^VAR crash_mailbox: MAILBOX\[OBJECT\](1);/VAR crash_mailbox: MAILBOX[OBJECTS](1);/
s/^                VAR o:OBJECT;/                VAR o:OBJECTS;/
# do_reset uses objs without importing it
s/^PROC do_reset;/PROC do_reset IMPORTS objs;/
# obs for objs; and the priority of an activation can be set only once it is
# created (the same slip as in problem 8)
s/^        SET_PRIORITY (objs(o).a, PRIORITY(ME) - 1);//
s/^        CREATE move_object (o) NAMED obs(o).a;/        CREATE move_object (o) NAMED objs(o).a;\
        SET_PRIORITY (objs(o).a, PRIORITY(ME) - 1);/
# areset and awatch are never declared; the button mailboxes are moved out
# where the simulated buttons can reach them
s/^PROC simulate_objects   IMPORTS areset,awatch,crash_mailbox;/PROC simulate_objects IMPORTS crash_mailbox, reset_mailbox, start_mailbox, delay_time;/
s/^VAR reset_mailbox: MAILBOX\[BOOL\](1) LOCATION (INTERRUPT reset_int_addr);//
s/^VAR start_mailbox: MAILBOX\[BOOL\](1) LOCATION (INTERRUPT start_int_addr);//
# a reset message is a BOOL and a crash message an object: the two RECEIVEs
# have their variables swapped
s/^            WHEN RECEIVE (reset_mailbox,o)/            WHEN RECEIVE (reset_mailbox,i)/
s/^            WHEN RECEIVE (crash_mailbox,i)/            WHEN RECEIVE (crash_mailbox,o)/
# the simulated screen, joysticks and buttons, before their first use
s/^VAR d:DATA_LOCK;$/VAR reset_mailbox: MAILBOX[BOOL](1);\
VAR start_mailbox: MAILBOX[BOOL](1);\
\
FUNC name_of (o: OBJECTS) => STRING[ASCII];\
    IF o = 'o1 THEN RETURN "o1"; END IF;\
    RETURN "o2";\
    END FUNC name_of;\
\
PROC show (o: OBJECTS, READONLY what: STRING[ASCII]) IMPORTS objs;\
    WRITELN ("[" \& CNVT[STRING[ASCII]](TIME) \& " ms] " \& name_of(o) \& what \& " at ("\
        \& CNVT[STRING[ASCII]](objs(o).loc.h) \& ", " \& CNVT[STRING[ASCII]](objs(o).loc.v) \& ")");\
    END PROC show;\
\
PROC display (o: OBJECTS); show (o, ""); END PROC display;\
PROC blink (o: OBJECTS); show (o, " blinks"); END PROC blink;\
\
PROC set_joy_stick (o: OBJECTS, hd, hs, vd, vs: INT) IMPORTS joy_sticks;\
    joy_sticks(o).h_dir := hd;\
    joy_sticks(o).h_speed := hs;\
    joy_sticks(o).v_dir := vd;\
    joy_sticks(o).v_speed := vs;\
    END PROC set_joy_stick;\
\
PROC press_reset IMPORTS reset_mailbox; SEND (reset_mailbox, TRUE); END PROC press_reset;\
PROC press_start IMPORTS start_mailbox; SEND (start_mailbox, TRUE); END PROC press_start;\
\
&/
# the objects are never allocated and have no starting positions (their
# devices stay unset: only LOW_IO used them)
s/^END CAPSULE graphics;/FOR o: OBJECTS REPEAT ALLOC objs(o) PTR; ALLOC joy_sticks(o) PTR; END REPEAT;\
objs('o1).start.h := 10; objs('o1).start.v := 50;\
objs('o2).start.h := 40; objs('o2).start.v := 50;\
\
&/
