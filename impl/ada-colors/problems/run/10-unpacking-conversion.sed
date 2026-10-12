# Changes that make RED contract problem 10 (1979) translate.
# message_handler's VAR parameter is a ptr_queue_entry, a type the capsule does
# not export, so nobody outside can call it; and the queue entry is filled for
# "another program", which cannot select its components unless the capsule
# exports them (RM 8.2): EXPORTS ALL gives both
s/^CAPSULE data_conversion EXPORTS packet, queue_entry, message_handler;/CAPSULE data_conversion EXPORTS ALL;/
# the configuration capsule comes from problems/run/configuration.red
s/^EXPOSE bytes FROM configuration;/EXPOSE bytes FROM EXTERNAL configuration;/
# GET-A-QUEUE is "assumed" by the problem; it stands here in the capsule, since
# it hands out the capsule's own ptr_queue_entry. RED has no ADDR function, so
# the packet number addr(pckt) is the count of packets handled, from the pool
s/^PROC message_handler (READONLY pckt: packet, VAR pqe: ptr_queue_entry);/VAR packets_handled : INT(0..255) := 0;\
PROC get_a_queue (VAR p : ptr_queue_entry) IMPORTS packets_handled;\
   packets_handled := packets_handled + 1;\
   ALLOC p PTR;\
END PROC get_a_queue;\
\
PROC message_handler (READONLY pckt: packet, VAR pqe: ptr_queue_entry) IMPORTS packets_handled;/
s/pqe.packet_number := addr(pckt);/pqe.packet_number := packets_handled;/
