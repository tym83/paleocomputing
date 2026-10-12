# Changes that make RED contract problem 7 (1979) translate.
# the driver plays the neighbour nodes, so it needs node_mail and mail, and it
# reads my_table to show the result; "the actual interchange between nodes is
# done by given library routines", which here are the driver itself
s/^CAPSULE network EXPORTS routing,/CAPSULE network EXPORTS ALL;/
s/^            node,distance,node_time,node_entry,node_table;//
# delay_time is 5*MINUTES, and MINUTES is not among the names exposed
s/^EXPOSE bytes, words, seconds, milliseconds, hours FROM configuration;/EXPOSE bytes, words, seconds, milliseconds, minutes, hours FROM EXTERNAL configuration;/
# a node is at distance 0 from itself ("self as distance 0", says routing), so
# DISTANCE cannot start at 1
s/^ABBREV distance: INT(1..numnodes);/ABBREV distance: INT(0..numnodes);/
# with entries as pointers a copy of the table is a copy of 64 pointers: the
# snapshot sent to the neighbours would share its records with my_table and
# change under them, against the comment in send_table ("the old one will be
# sent, not the new"). The entries are records
s/^TYPE node_entry:  PTR/TYPE node_entry:/
# the component is dist; the code calls it distance (and DISTANCE)
s/)\.distance/).dist/g
s/)\.DISTANCE/).dist/g
# a node_table is an array, not a pointer, so it has no .all; and m is a
# pointer that nobody allocates
s/^                m.sent_table.all := my_table.all;/                ALLOC m PTR;\
                m.sent_table := my_table;/
# mynode and m_node for my_node
s/m.sender := mynode;/m.sender := my_node;/
# the activation variables send_a and receive_a are never declared
s/^PROC routing(t:NODE_TABLE,n:NODE)/VAR send_a, receive_a: ACT;\
\
&/
s/^   IMPORTS send_a, receive_a, my_table, m_node;/   IMPORTS send_a, receive_a, my_table, my_node;/
