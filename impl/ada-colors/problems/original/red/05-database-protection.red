% RED solution to DoD-1 contract test problem 5: A Database Protection Module
% Source: RED Rationale, Intermetrics, March 1979, Appendix B.2.5
%         (images pb-30example1.jpg, pb-30example2.jpg, iment.com transcription)
%
% PURPOSE: demonstrate how complex synchronization mechanisms can be
% constructed on user level.
% PROBLEM: a DBMS module controls access to given data areas. A user (or
% running process) indicates whether he requires exclusive access to a
% data-set or is willing to share it (e.g. for reading), and can release
% a data-set it no longer uses. (The exact operation forms given in the
% problem text are not reproduced in the Rationale transcription.) It
% shall be possible to specify, by executable statement, by declaration
% at scope entry, or at compile time: whether exclusive reservation has
% priority over shared; how many users may share a resource; which users
% may execute which kind of access; whether preemption is possible and,
% if not, whether an exception is raised on an attempt to use the
% preemption parameter; whether users have different priorities; whether
% the requester waits for availability or gets an exception for evasive
% action. 'User' may also mean 'running process'. Code the module in the
% complete form needed for a library; provide cleanups on preemption.
% ASSUMPTIONS: none about hardware.
% GUIDELINES: one general module, or generic facilities creating modules
% with a subset of the functionality at instantiation - implementor's
% option.
% ----------------------------------------------------------------------

CAPSULE database_protection EXPORTS exclusive, shared, free_ds,
        set_preemption, set_maximum_users,
        dataset_name, preemption, maxusers,
        numusers, restriction, exclusively, priority, user,
        x_no_such_dataset, x_not_allowed_access, x_no_exclusive_priority,
        x_clusively_used, x_too_many_users, x_not_using_dataset;


EXPOSE bytes, words, seconds, milliseconds, hours FROM configuration;

% The name of the dataset is a string.
ABBREV dataset_name: STRING [ASCII](80);

% PREEMPTION controls whether or not the dataset can be preempted for
% exclusive use when others are already using it.
ABBREV preemption: ENUM ['exclusive_priority, 'no_exclusive_priority];

% Arbitrarily assume as many as 100 users.
CONST maxusers := 100;

% The number of users allowed to use, or currently using, a dataset.
ABBREV numusers: INT(1..maxusers);

% Whether or not currently exclusively used by only one user.
ABBREV exclusively: ENUM['exclusively_used, 'not_exclusively_used];

% A priority for various users.
ABBREV priority:  INT(1..maxusers);

% A user is a record with the ACTivation variable and the priority.
TYPE user:  PTR
        RECORD [u: ACT,
                pri: PRIORITY,
                next: USER];


% A dataset is controlled by  a record.
ABBREV dataset:
        RECORD [n: DATASET_NAME,
                p: PREEMPTION,
                exc: EXCLUSIVELY,
                maximum_users: NUMUSERS,
                allowed_users: USER,
                allowed_num: NUMUSERS,
                current_users: USER,
                current_num: NUMUSERS];

% Assume 100 datasets, and put them in an array.  This solution does
% not consider the problem of inserting and deleting datasets.

CONST dbsize := 100;    % The number of datasets in the database.
VAR db: ARRAY INT(1..dbsize) OF DATASET;

% Exceptions, raised by various routines.

EXCEPTION
        x_no_such_dataset,
        x_not_allowed_access,
        x_no_exclusive_priority,
        x_clusively_used,
        x_too_many_users,
        x_not_using_dataset;

% We can call routines either to wait until the dataset is available
% or to return immediately raising the exception.

ABBREV handle_availability: ENUM ['raise_exception, 'wait_availability];

% How long to wait until trying again if we are in 'wait_availability
% mode.

CONST delay_time := 2*seconds;

% The datalock used to prevent mutual execution of the routines
% that modify the dataset access record.

VAR d_lock: DATA_LOCK;


% Utility routine to search for datasets.

FUNC search_for_dataset (name:DATASET_NAME) => dataset
        IMPORTS dbsize, db;
    % Search for dataset.
    FOR i:INT(1..dbsize) REPEAT
        IF db(i).n = name THEN RETURN db(i); END IF;
        END REPEAT;

    % dataset not found: Raise an exception.
    RAISE x_no_such_dataset;
    END FUNC search_for_dataset;


% INLIST checks to see if a ACT is in a USER_LIST;

FUNC inlist (a:ACT, READONLY list:USER_LIST) => BOOL;

    VAR tem: USER := list;
    WHILE tem /= NIL REPEAT
        IF tem.u = a THEN RETURN TRUE; END IF;
        tem := tem.next;
        END REPEAT;
    RETURN FALSE;
    END FUNC inlist;

% REMOVE_FROM_LIST removes a user from the list, raising an
% exception if the user is not there.

PROC remove_from_list (a:ACT, VAR list:USER_LIST, VAR n:NUMUSERS);

    VAR tem, prev: USER;
    tem := list;                % start search at head
    WHILE tem /= NIL AND tem.u /= a REPEAT
        prev := tem;            % remember last cell to allow deletion
        tem := tem.next;
        END REPEAT;

    IF tem = NIL THEN RAISE x_not_using_dataset;  END IF;
     %have a valid cell, delete it from list
    IF tem = list THEN list := tem.next;
            ELSE prev.next := tem.next;
        END IF;
    n := n - 1;
    END PROC remove_from_list;


% EXCLUSIVE is the main user procedure for making an exclusive
% reservation.  We use overloading to create various versions of it.
%  This version passes any exceptions back to the user directly

PROC exclusive (name:DATASET_NAME, pr:PRIORITY) IMPORTS d_lock;

        VAR d: DATASET;
        d := search_for_data_set (name);        % find right dataset

    REGION d_lock DO
        % See if allowed_users restricted for this dataset.
        IF d.allowed_num /= 0 AND
           NOT inlist (ME, d.allowed_users) THEN
                RAISE x_not_allowed_access;
        END IF;

        % See if someone is using it at the moment.
        IF d.current_num /= 0 THEN
                IF d.preemption /= 'exclusive_priority THEN
                                RAISE x_no_exclusive_priority;
                END IF;
        END IF;

        % Revoke access for other users, replacing current list
        % by a new single element
        ALLOC d.current_users PTR := [u:ME, pri:pr, next:NIL];
        d.current_num := 1;

        d.exclusivity := 'exclusively_used;
    END REGION;
  END PROC exclusive;


% This version of EXCLUSIVE allows the user to control how he
% wants availability problems handled.  The second argument
% specifies whether an exception will be passed directly up
% or whether the routine should delay, looping internally until
% the request can be granted.  Both versions of EXCLUSIVE are
% exported from the capsule

PROC exclusive (name:DATASET_NAME, av:HANDLE_AVAILABILITY, pr:priority)
                        IMPORTS delay_time;
    CASE av
        WHEN  'raise_exceptions => exclusive (name, pr);
        WHEN 'wait_availability =>
          keep_trying
          WHILE TRUE REPEAT
                GUARD
                        exclusive (name, pr);
                        EXIT keep_trying;       % sucess!  leave...
                BY
                        WHEN x_not_allowed_access,x_no_exclusive_priority =>
                            % Wait before retrying.
                            DELAY (delay_time);
                        ELSE => RERAISE;
                END GUARD;
          END REPEAT keep_trying;
      END CASE;
   END PROC exclusive;


% SHARED allows the user to request shared access to a dataset.  As with
% Exclusive, there are two overload versions provided: one which simply
% passes errors thru, the other allowing a timed retry loop.

PROC shared (name: DATASET_NAME, pr:PRIORITY) IMPORTS d_lock;
    VAR d:dataset;
    d := search_for_dataset (name);
    REGION d_lock DO
        IF d.exclusivity = 'exclusively_used THEN
                RAISE x_clusively_used; END IF;
        IF d.allowed_num /= 0 AND NOT inlist(ME, d.allowed_users) THEN
                RAISE x_not_allowed_access; END IF;
        IF d.current_num >= d.maximum_num THEN
                RAISE x_too_many_users; END IF;
        IF NOT inlist (ME, d.current_users) THEN
                VAR tem: USER;
                  % create new user cell & link into list
                ALLOC tem PTR := [u:ME, pri:pr, next:d.current_user];
                d.current_users := tem;
                d.current_num := d.current_num + 1;
        END IF;
    END REGION;
  END PROC shared;


% This overload provides control over handling of availability conflicts

PROC shared (name:DATASET_NAME, av:HANDLE_AVAILABILITY, pr:priority)
        IMPORTS d_lock;
    CASE av
        WHEN 'raise_exceptions => sh1(name, pr);   % OCR? "sh1" as printed; shared intended
        WHEN 'wait_availability =>
          keep_trying
          WHILE TRUE REPEAT
                GUARD
                        shared (name, pr);
                        EXIT keep_trying;       % sucess.  leave loop
                BY
                        WHEN x_not_allowed_access,x_no_exclusive_priority =>
                            DELAY (delay_time);     % pause, then retry
                        ELSE => RERAISE;
                END GUARD;
          END REPEAT keep_trying;
      END CASE;
   END PROC shared;


PROC free_ds (name:DATASET_NAME) IMPORTS d_lock;
    VAR d:DATASET;
    d := search_for_dataset (name);
    REGION d_lock DO
        remove_from_list (ME, d.current_users, d.current_num);
        IF d.exclusively = 'exclusively_used THEN
                d.exclusively := 'not_exclusively_used;
         END IF;
    END REGION;
  END PROC free_ds;


% The parameters in the data set can be set via various user-level
% procedures.  We have provided two illustrative examples.....

 PROC set_preemption (name:DATASET_NAME, pre:PREEMPTION);
        VAR d:DATASET;
        d := search_for_dataset (name);
        REGION d_lock DO  d.p := pre;   END REGION;
    END PROC set_preemption;

 PROC set_maximum_users (name:DATASET_NAME, newmax: NUMUSERS)
                IMPORTS d_lock;
        VAR d: DATASET;
        d := search_for_dataset (name);
        REGION d_lock DO
            d.maximum_users := newmax;          % ok if > current_users
        END REGION;
    END PROC set_maximum_users;

END CAPSULE database_protection;
