% RED solution to DoD-1 contract test problem 7:
%   Adaptive Routing Algorithm for a Node within a Data Switching Network
% Source: RED Rationale, Intermetrics, Inc., March 1979, Appendix B.2.7
%         (images pb-42example1.jpg, pb-42example2.jpg). Transcribed from the
%         page images. Inconsistent identifiers in the original (mynode,
%         m_node vs. my_node; dist vs. distance) are kept as printed.
%
% PURPOSE: Test for language suitability for multicomputer and communications
% applications.
%
% PROBLEM: Develop the program for a multiprocessor within one node of a data
% switching network to maintain the tables of distances, minimum delay time,
% and routing for the following adaptive routing algorithm. Each node keeps a
% table of distances (minimum number of hops) and a table of minimum delay
% times between itself and all other nodes. Both tables are maintained through
% table exchanges that occur only between neighbor nodes (distance one). Each
% node keeps a routing table that routes through the neighbor achieving the
% minimum delay time. In parallel, at the same periodic rate, separate
% processes compute the minimum delay times to neighbors and read in the
% neighbors' updated distance and delay tables. Initially a node knows only
% the distance (one) and delay to each neighbor; all others are infinite. When
% a link is broken or established, a separate process at each of the two nodes
% corrects the tables. Whenever a distance exceeds the number of nodes in the
% network, the distance and delay are considered infinite and the node
% unreachable. The number of nodes, the neighbors of the node, and the update
% interval are compile-time constants.
%
% ASSUMPTIONS: None as far as hardware is concerned. The actual interchange
% between nodes is done by given library routines.
% ---------------------------------------------------------------------------

CAPSULE network EXPORTS routing,
            node,distance,node_time,node_entry,node_table;


EXPOSE bytes, words, seconds, milliseconds, hours FROM configuration;

% Assume that there are a maximum of 64 nodes.
CONST numnodes := 64;

% Node is a number from 1 to numnodes.
ABBREV node: INT(1..numnodes);

%  DISTANCE is a number that contains the maximum distance to
% any node.
ABBREV distance: INT(1..numnodes);

%  NODE_TIME is the time to get to a given node.
% Assume leq 24 hours, in ticks.

ABBREV node_time: INT(0..24*HOURS);

% A node_entry is described by a record the parts of which are
% the distance, the time, and the route--i.e., the node to which
% something should be sent.

TYPE node_entry:  PTR
        RECORD
        [dist:DISTANCE,
         delay:NODE_TIME,
         route:NODE];

% A node_table is a table that gives the distances to all the other
% tables.  Copies of these tables are sent among the various nodes.

ABBREV node_table:  ARRAY NODE OF NODE_ENTRY;

% This is OUR node_table.  It is initialized by being sent in when the
% ROUTING procedure is called, which starts up the TASKS.

VAR my_table: NODE_TABLE;

% The variable MY_NODE tells us which NODE we are.

VAR my_node: NODE;

% MAIL between the nodes is in the form of a record which contains
% a NODE_TABLE and the NODE identification of the sender.

TYPE mail: PTR RECORD [sent_table:NODE_TABLE, sender:NODE];

% For each node, there is a mailbox, by which one can send
% that node a copy of one's table.  We have an array of such MAILBOXes here.

VAR node_mail: ARRAY NODE OF MAILBOX[MAIL](numnodes);

% Each DELAY_TIME we send a copy of our table to each of the other nodes.
% We assume every 5 minutes.

CONST delay_time := 5*MINUTES;

% This DATA_LOCK variable keeps us from updating the table whilest we
% obtain a copy of it to send around.  Otherwise, we could have inconsistent
% data being sent.

VAR d: DATA_LOCK;

TASK send_table IMPORTS ALL;

    WHILE TRUE REPEAT
        VAR m:MAIL;

        % Fill the parts of the mail with our current table,
        % and also who is sending it.  Avoid mutual access while
        % changing table.  [If my_table changes during our efforts
        % to send everyone a copy of the current table, the old
        % one will be sent, not the new.]

        % Do not allow updates to the table while we copy its contents.
        REGION d DO
                m.sent_table.all := my_table.all;
                m.sender := mynode;
        END REGION;

        % Send this mail to one's neighbors.
        FOR n:NODE REPEAT
                % Neighbors have a distance of 1 exactly.
                IF my_table(n).distance = 1 THEN
                        SEND (node_mail(n),m);
                END IF;
        END REPEAT;

        % Now wait for a bit.
        DELAY (delay_time);
    END REPEAT;
    END TASK send_table;

TASK receive_table IMPORTS ALL;
    VAR s:NODE;
    VAR s_table:NODE_TABLE;

    PROC update IMPORTS ALL;
        VAR t:NODE_TIME;

        % The distance to the neighbor in question.
        t := my_table(s).delay;

        % See if a better routing can be obtained by using
        % the sender as the routing?
        FOR n:NODE REPEAT
                % Look only at those destination nodes that are not
                % the current node (MY_NODE) and that are not neighbors.
                % The current node will have distance = 0 and neighbors
                % will have distance = 1.

                IF my_table(n).DISTANCE >= 2 THEN
                        % Is it better to go through the sender?
                        IF s_table(n).delay + t < my_table(n).delay THEN
                            % One further to dest. from here than for
                            % neighbor.
                            my_table(n).distance := s_table(n).distance + 1;
                            % New delay.
                            my_table(n).delay := s_table(n).delay + t;
                            % Routing is through this neighbor.
                            my_table(n).route := s;
                        END IF;
                END IF;
            END REPEAT;
    END PROC update;

    WHILE TRUE REPEAT
        VAR m:MAIL;
        RECEIVE (node_mail(my_node), m);
            % Extract portions of message.
            s := m.sender;
            s_table := m.sent_table;

            % Do not perhaps send table while updating it.
            REGION d DO
                    update;
            END REGION;
    END REPEAT;
    END TASK receive_table;


PROC routing(t:NODE_TABLE,n:NODE)
   IMPORTS send_a, receive_a, my_table, m_node;
   % Initialize tables, remember what node we are.
   % N.B.  We assume that the initial table is marked with all
   % neighbors as having distance 1, self as distance 0, and all others
   % as having distance set to the number of nodes (i.e., "infinity").
   % The delay times to neighbors will be considered accurate.
   my_table := t;

   % Also, we are told who we are.
   my_node := n;

   % Set up TASK to send copies of our table (whenever changed)
   CREATE send_table NAMED send_a;

   % And TASK to receive copies of other nodes' tables.
   CREATE receive_table NAMED receive_a;

   END PROC routing;

   END CAPSULE network;
