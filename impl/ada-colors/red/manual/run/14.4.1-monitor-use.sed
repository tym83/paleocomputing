# Changes that make the monitor example of 14.4.1 translate.
# full is read before it is ever set (X_INIT in RED): the buffer starts empty
s/^   VAR full : BOOL;$/   VAR full : BOOL := FALSE;/
