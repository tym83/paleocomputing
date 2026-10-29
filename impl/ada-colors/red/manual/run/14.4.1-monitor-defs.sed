# Changes that make the monitor types of 14.4.1 translate.
# EXTERNAL is a reserved word (2.3, 8.1), so a record component cannot be called external
s/\([^A-Za-z_]\)external\([^A-Za-z_]\)/\1outside\2/g
s/\[external,/[outside,/
# delay passes mq.lock, an attribute, which is a value (4.5.3), so unlock
# cannot take it as VAR; unlock only reads it
s/PROC unlock (VAR m : monitor_lock);/PROC unlock (READONLY m : monitor_lock);/
