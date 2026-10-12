# Changes that make GREEN contract problem 7 (1979) translate.
#
# BASIC_PERIOD is declared INTEGER := 60*SECONDS, but SECONDS is of the
# floating-point type TIME (RM79 9.6), an integer literal does not multiply it,
# and the period is later added to START_TIME, a TIME
s/^   BASIC_PERIOD     : constant INTEGER := 60\*SECONDS;/   BASIC_PERIOD     : constant TIME := 60.0*SECONDS;/
# "array(NODE) of" gives the index by a type mark, which in RM79 3.6 makes an
# unconstrained array: each object must bring its bounds. HIS_TABLE and the
# other tables are declared without bounds, and the "others" in their initial
# aggregates has no bounds to fill. The listing writes the constrained form,
# array(NODE'FIRST .. NODE'LAST), for NEIGHBOR a few lines later
s/^   type ALL_INFO   is array(NODE) of NODE_INFO;/   type ALL_INFO   is array(NODE'FIRST .. NODE'LAST) of NODE_INFO;/
s/^   type ROUTE_INFO is array(NODE) of EXTENDED_NODE;/   type ROUTE_INFO is array(NODE'FIRST .. NODE'LAST) of EXTENDED_NODE;/
# the simulated network (problems/run/green/07-net.grn) uses the node types
/^end NETWORK_INFO;$/r problems/run/green/07-net.grn
# The program is one node, with ME left as a comment ("-- index of the
# node-id of this node", which also comments out the semicolon) and its
# neighbours as "...". To run a network, the node becomes a member of a task
# family, one member per node, and ME is the member's index; the neighbours
# start unknown and come up as links are established
s/^restricted(NETWORK_INFO)$/restricted(NETWORK_INFO, NET_SIM)\
package NETWORK is\
   task NODE_PROGRAM(1 .. 4);\
end NETWORK;\
\
package body NETWORK is/
s/^procedure MAIN is$/task body NODE_PROGRAM is/
s/^   ME : constant NODE := -- index of the node-id of this node;$/   ME : constant NODE := NODE_PROGRAM'INDEX;/
s/^   NEIGHBOR     : array(NODE'FIRST .. NODE'LAST) of BOOLEAN := \.\.\.;/   NEIGHBOR     : array(NODE'FIRST .. NODE'LAST) of BOOLEAN := (NODE'FIRST .. NODE'LAST => FALSE);/
s/^   NEIGHBOR_DEL : array(NODE'FIRST .. NODE'LAST) of INTEGER := \.\.\.;/   NEIGHBOR_DEL : array(NODE'FIRST .. NODE'LAST) of INTEGER := (NODE'FIRST .. NODE'LAST => 0);/
# LIBRARY has a specification only; its body (problems/run/green/07-library.grn)
# needs TABLE and UPDATE_TABLE, so it comes after their specifications
/^   task TABLE is$/,/^   end TABLE;$/{
/^   end TABLE;$/r problems/run/green/07-library.grn
}
# the body calls LIBRARY.READ_NEIGHBOR_NODE, which LIBRARY does not declare
s/LIBRARY\.READ_NEIGHBOR_NODE/LIBRARY.READ_NEIGHBOR_TABLE/
# UPDATE_TABLE ends each period in a select of ESTABLISH_LINK and BREAK_LINK
# with no else part, so it waits there until a link comes up or goes down, and
# the periodic exchange of tables stops on a quiet network. Run without this
# change, node 1 never learns a route to nodes 3 and 4. An else part lets the
# period run on
/^   task body UPDATE_TABLE is$/,/^   end UPDATE_TABLE;$/s/^         end select;$/         else\
            null;\
         end select;/
s/^begin  -- MAIN$/begin  -- NODE_PROGRAM/
s/^end;$/end NODE_PROGRAM;\
end NETWORK;/
