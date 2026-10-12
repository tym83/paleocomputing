# Changes that make RED contract problem 9 (1979) translate.
# the link processes come from problems/run/09-units.red
s/^CAPSULE dist_messages EXPORTS dist_out,user,users,packets;/CAPSULE dist_messages EXPORTS ALL; EXPOSE ALL FROM EXTERNAL links;/
