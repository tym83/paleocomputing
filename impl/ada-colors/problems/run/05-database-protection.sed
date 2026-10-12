# Changes that make RED contract problem 5 (1979) translate.
# restriction is exported but never declared; handle_availability, the type of
# the second parameter of the exported overloads, is not exported, so nobody
# outside can call them; add_dataset (below) is new
s/^CAPSULE database_protection EXPORTS exclusive, shared, free_ds,/CAPSULE database_protection EXPORTS ALL;/
/^        set_preemption, set_maximum_users,$/d
/^        dataset_name, preemption, maxusers,$/d
/^        numusers, restriction, exclusively, priority, user,$/d
/^        x_no_such_dataset, x_not_allowed_access, x_no_exclusive_priority,$/d
/^        x_clusively_used, x_too_many_users, x_not_using_dataset;$/d
# the configuration capsule comes from problems/run/configuration.red
s/^EXPOSE bytes, words, seconds, milliseconds, hours FROM configuration;/EXPOSE bytes, words, seconds, milliseconds, hours FROM EXTERNAL configuration;/
# the count of current users starts at 0 and is tested against 0
s/^ABBREV numusers: INT(1..maxusers);/ABBREV numusers: INT(0..maxusers);/
# every procedure does d := search_for_dataset(name) and changes d. With
# dataset a record, d is a copy, and no reservation ever reaches db: the
# module protects nothing. A dataset becomes a pointer to its record
s/^ABBREV dataset:$/TYPE dataset: PTR/
# the solution "does not consider the problem of inserting datasets", so db
# holds none and every call raises x_no_such_dataset; add_dataset puts one in
s/^% Utility routine to search for datasets.$/PROC add_dataset (name: DATASET_NAME, maxu: NUMUSERS) IMPORTS db, d_lock;\
    REGION d_lock DO\
        FOR i:INT(1..dbsize) REPEAT\
            IF db(i) = NIL THEN\
                ALLOC db(i) PTR := [n: name, p: 'no_exclusive_priority,\
                    exc: 'not_exclusively_used, maximum_users: maxu,\
                    allowed_users: NIL, allowed_num: 0, current_users: NIL, current_num: 0];\
                RETURN;\
            END IF;\
        END REPEAT;\
    END REGION;\
    END PROC add_dataset;\
\
&/
# an empty slot of db is NIL now
s/^        IF db(i).n = name THEN RETURN db(i); END IF;/        IF db(i) \/= NIL THEN IF db(i).n = name THEN RETURN db(i); END IF; END IF;/
# USER_LIST is never declared: a list is a USER, its first cell
s/READONLY list:USER_LIST/READONLY list:USER/
s/VAR list:USER_LIST/VAR list:USER/
# search_for_data_set for search_for_dataset
s/search_for_data_set (name)/search_for_dataset (name)/
# the components are p, exc, maximum_users and current_users; the code also
# calls them preemption, exclusivity, exclusively, maximum_num and current_user
s/d\.preemption/d.p/g
s/d\.exclusivity/d.exc/g
s/d\.exclusively/d.exc/g
s/d\.maximum_num/d.maximum_users/g
s/d\.current_user\]/d.current_users]/g
# the literal is 'raise_exception
s/WHEN  *'raise_exceptions =>/WHEN 'raise_exception =>/
# sh1 for shared (the transcription marks it OCR?, the page image reads sh1)
s/ sh1(name, pr);.*/ shared(name, pr);/
# the waiting shared retries on x_no_exclusive_priority, which shared never
# raises, and not on x_clusively_used, which it does: kept as printed, so a
# waiting shared reader gives up at once when a writer holds the dataset.
# It uses delay_time without importing it
s/^        IMPORTS d_lock;$/        IMPORTS delay_time;/
# set_preemption uses d_lock without importing it
s/^ PROC set_preemption (name:DATASET_NAME, pre:PREEMPTION);/ PROC set_preemption (name:DATASET_NAME, pre:PREEMPTION) IMPORTS d_lock;/
