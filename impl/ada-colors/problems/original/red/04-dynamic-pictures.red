% RED solution to DoD-1 contract test problem 4: Dynamic Pictures
% Source: RED Rationale, Intermetrics, March 1979, Appendix B.2.4
%         (images pb-22example1.jpg, pb-22example2.jpg, iment.com transcription)
%
% PURPOSE: show how a graphic display of a dynamic situation can be
% programmed.
% PROBLEM: draw a grid of e.g. 10 horizontal and 10 vertical lines (or a
% simplified map). Within it show two movable objects distinguished by
% color or shape. Speed and direction of each object are controlled by a
% joystick. A reset button brings the objects to predefined positions, a
% start button makes them move. If the objects collide they blink and,
% after some seconds, return to their homing position (equivalent to
% RESET).
% ASSUMPTIONS: START and RESET are connected to the interrupt mechanism
% (different interrupts per button). Joysticks are passive and must be
% read explicitly: two 16-bit registers, one per coordinate, each byte
% holding a right-adjusted six-bit deflection; only reasonable
% combinations occur.
% GUIDELINES: algorithms independent of display hardware (vector
% generator vs. random-point display with 10-bit precision); hardware
% dependencies clearly identified and localized; output is complete once
% coordinates are deposited as integers in the appropriate buffers;
% emergency reaction by software interrupt or exceptions, designer's
% choice.
% ----------------------------------------------------------------------

CAPSULE graphics        IMPORTS display, blink
        EXPORTS simulate_objects;


EXPOSE seconds, bytes, milliseconds FROM CONFIGURATION;
% CONFIGURATION is a capsule that contains information about
% the computer and its operating system.

% A locn is given by its horizontal and vertical components.
% We assume that the units of resolution are 100 each way.

CONST h_resolution := 100;
CONST v_resolution := 100;

% A locn consists of its horizontal and vertical components.
TYPE locn: PTR
        RECORD [h: INT (1..h_resolution),
                v: INT (1..v_resolution)];

% The objects (of which there are 2):
TYPE objects: ENUM['o1, 'o2];


TYPE device: INT(1..2);
% The joy sticks are assumed known by these device numbers to
% the operating system.  These are stored in the OBJECT record
% and are used in the READ_JOY_STICK procedure.

% Velocity information comes in from the READ_JOY_STICK procedure
% as a pointer to the following record.  Note that the REP construction
% specifies how this is represented.
TYPE velocity_info: PTR
                RECORD [h_dir: INT(1..2),
                        h_speed: INT(1..64),
                        v_dir: INT(1..2),
                        v_speed: INT(1..64)]
        REP SIZE(4*BYTES),
                RECORD [h_dir: SIZE(8),
                        h_speed: SIZE(8),
                        v_dir: SIZE(8),
                        v_speed: SIZE(8)];

VAR joy_sticks:  ARRAY OBJECTS OF VELOCITY_INFO LOCATION (1000);
% For each joy stick, the operating system puts the velocity
% information into a 2-byte region of memory.  We assume that
% these regions begin at locn 1000 in the machine.

CONST left := 1;
CONST right := 2;
CONST forward := 3;
CONST reverse_direction := 4;

% An OBJECT is a record containing the locn and the VELocity_info
% of the object, STARTing position, device number for the joy stick,
% and the ACTivation variable for the task that runs the object.

TYPE object: PTR
        RECORD [loc: locn,
                vel: VELOCITY_INFO,
                dev: DEVICE,
                start: locn,
                a: ACT];

% Allocate fixed space for the objects.
VAR objs: ARRAY OBJECTS of OBJECT;

% Mutual exclusion.

VAR d:DATA_LOCK;

CONST delay_time := 2*seconds;  % For blinking the objects.

PROC read_joy_stick (o:OBJECT, OUT v:VELOCITY_INFO);
    % This procedure uses the RED low level input/output
    % to read from the joy stick.  We assume that the
    % routine LOW_IO will read from a device into the
    % area associated with the joy stick in memory.

    LOW_IO (objs(o).dev, 0, joy_sticks(o));

    % Delay for a while.
    DELAY (1*MILLISECONDS);
    END PROC read_joy_stick;


PROC suspend_objects IMPORTS objs;
% Exterminates all the processes associated with the objects.
    FOR o: OBJECTS REPEAT
        EXTERMINATE (objs(o).a);
        END REPEAT;
    END PROC suspend_objects;

PROC do_reset;
    FOR o:OBJECTS REPEAT
        % Move back to starting locn.
        objs(o).loc := objs(o).start;

        % Display the object.
        display(o);
    END REPEAT;
  END PROC do_reset;

PROC blink_objects;
    FOR o: OBJECTS REPEAT
        % Blink the object.
        blink(o);
    END REPEAT;
  END PROC blink_objects;

% When something is discovered to have crashed, we signal the main TASK
% with a message.  Since the main TASK has higher priority, it takes
% over and effects the blinking and the reset.

VAR crash_mailbox: MAILBOX[OBJECT](1);

PROC check_crash (o:OBJECT) IMPORTS objs,crash_mailbox;
    % Prevent mutual execution of this with changing the locn.
    REGION d DO
    FOR o1: OBJECTS REPEAT
        IF o /= o1 AND objs(o).loc = objs(o1).loc THEN
                SEND (crash_mailbox,o); END IF;
    END REPEAT;
    END REGION;

  END PROC check_crash;

PROC get_new_locn(o:OBJECT) IMPORTS objs;
    VAR v:VELOCITY_INFO;
    VAR l:locn;

    % Current locn of this object.
    l := objs(o).loc;

    % Read the joy stick associated with this object.
    read_joy_stick (o, v);

    IF v.h_dir = right THEN
        l.h := l.h + v.h_speed;
      ELSE
        l.h := l.h - v.h_speed;
    END IF;
    IF v.v_dir = forward THEN
        l.v := l.v + v.v_speed;
      ELSE
        l.v := l.v - v.v_speed;
    END IF;

    REGION d DO
        % Store new locn of this object.
        objs(o).loc := l;
    END REGION;
    END PROC get_new_locn;

% This TASK [one for each object], reads the velocity information
% from the joy stick, updates the locn accordingly, re-displays
% the object, and then checks for a crash.
% Part of this code could, if desired, contain a data lock to make
% certain that one object was not having its position changed concurrently
% with another--i.e., to make sure that "lucky escapes" from crashes were
% not avoided.  We did not add this code on the grounds that some
% asynchronism is in fact desired in the problem specification.

TASK move_object (o:OBJECT);
%   -----------
    % We assume that we read the state of each object every second.
    CONST delay_time := 1*seconds;

    WHILE TRUE REPEAT
        DELAY (delay_time);

        % read information from joy stick and compute new
        % locn as a function of old position and velocity vector.
        get_new_locn(o);

        % display the object at its new locn.
        display (o);

        % And check for the crash.
        check_crash(o);

    END REPEAT;
  END TASK move_object;

PROC do_start IMPORTS objs;
    FOR o: OBJECTS REPEAT

        % Give these TASKS less priority than the sprouting TASK,
        % in order that the monitor can readily gain control.
        SET_PRIORITY (objs(o).a, PRIORITY(ME) - 1);
        CREATE move_object (o) NAMED obs(o).a;

        END REPEAT;
    END PROC do_start;


PROC simulate_objects   IMPORTS areset,awatch,crash_mailbox;
%    ----------------


% This is the main procedure of the capsule, and is exported.
% Assume reset interrupt hardware address is 100.
CONST reset_int_addr := 100;
% Assume start interrupt hardware address is 102.
CONST start_int_addr := 102;

% These mailboxes are set to receive the interrupts that occur
% when the reset, start buttons are pushed, respectively.  The
% are references below.
VAR reset_mailbox: MAILBOX[BOOL](1) LOCATION (INTERRUPT reset_int_addr);
VAR start_mailbox: MAILBOX[BOOL](1) LOCATION (INTERRUPT start_int_addr);


        % reset and start up at the beginning.
        do_reset;
        do_start;

        % Now wait for a reset, start, or crash to happen.
        WHILE TRUE REPEAT
                VAR o:OBJECT;
                VAR i:BOOL;
        WAIT
            WHEN RECEIVE (reset_mailbox,o)
                    =>
                        % Stop moving the objects.
                        suspend_objects;
                        % Reset them their positions.
                        do_reset;
            WHEN RECEIVE (start_mailbox,i)
                    =>
                        do_start;  % Basically activates the object
                                   % processes.
            WHEN RECEIVE (crash_mailbox,i)
                    =>
                        suspend_objects;        % stop moving

                        blink_objects;          % Now blink for a while

                        DELAY (delay_time);     % let it blink

                        do_reset;       % Now reset to the beginning.

        END WAIT;
        END REPEAT;

  END PROC simulate_objects;

END CAPSULE graphics;
