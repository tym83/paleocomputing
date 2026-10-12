% The configuration capsule (RM 12.1) the 1979 solutions expose names from: the
% target is the 8-bit machine of the problems, and the times are those of the
% virtual clock, in milliseconds.
CAPSULE configuration EXPORTS ALL;
   CONST bytes := 8;
   CONST words := 16;
   CONST milliseconds := 1;
   CONST seconds := 1000;
   CONST minutes := 60000;
   CONST hours := 3600000;
END CAPSULE configuration;
