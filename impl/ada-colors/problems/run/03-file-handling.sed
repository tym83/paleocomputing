# Changes that make RED contract problem 3 (1979) translate.
# the exceptions the problem asks for are not exported, so a user can catch
# them only with ELSE; they are exported here
s/^CAPSULE directory  EXPORTS createfile, write, endwrite, read, destroy;/CAPSULE directory  EXPORTS createfile, write, endwrite, read, destroy,\
        x_create_exists, x_disk_error, x_noexists, x_beingread, x_otherwriter,\
        x_write_size_exceeded, x_endwrite_notwriting, x_destroy_fileused,\
        x_read_illegal_block, x_read_beingwritten;/
# the configuration capsule comes from problems/run/configuration.red
s/^EXPOSE bytes, words, seconds, milliseconds, hours FROM configuration;/EXPOSE bytes, words, seconds, milliseconds, hours FROM EXTERNAL configuration;/
# the published image cuts the exception list after x_create_exists (a gap of
# the page, not of the solution); the rest is completed from the names used
s/^        x_create_exists     % OCR? the rest of this declaration list is cut off/        x_create_exists, x_disk_error, x_noexists, x_beingread,\
        x_otherwriter, x_write_size_exceeded, x_endwrite_notwriting,\
        x_destroy_fileused, x_read_illegal_block, x_read_beingwritten;/
# the disk is simulated: its interrupt mailbox is an ordinary one, and it has
# no length, which a mailbox must have (C.11)
s/^VAR disk_int_mailbox: MAILBOX\[disk_status\] LOCATION (OCTAL ("32"));/VAR disk_int_mailbox: MAILBOX[disk_status](1);\
\
% the simulated disk: 1000 blocks, 5 ms per operation\
VAR disk: ARRAY diskblock OF STRING[ASCII](80*100);\
PROC disk_io (oper: disk_opers, blknum: diskblock, VAR data: BLOCK) IMPORTS disk, disk_int_mailbox;\
    DELAY (5);\
    CASE oper\
        WHEN 'read => data := disk(blknum);\
        WHEN 'write => disk(blknum) := data;\
    END CASE;\
    SEND (disk_int_mailbox, 'ok);\
    END PROC disk_io;/
# the type of the operation is disk_opers, not doper
s/^PROC perform_disk_op (oper: doper, blknum: diskblock, VAR data: BLOCK)/PROC perform_disk_op (oper: disk_opers, blknum: diskblock, VAR data: BLOCK)/
# LOW_IO, the hardware access of chapter 14, is the simulated disk
s/^        LOW_IO ('disk, \[cmd:oper, blk: blknum\], data);/        disk_io (oper, blknum, data);/
# the function is declared as searchdirectory and called as search_directory;
# it imports and is invoked inside its own capsule, which RM 7.2.1 allows only
# an abnormal function;
# endwrite and read also import it, as if it were a variable
s/^FUNC searchdirectory (n:FILENAME) => dir_entry IMPORTS dir_header;/ABNORMAL FUNC search_directory (n:FILENAME) => dir_entry IMPORTS dir_header;/
s/^  END FUNC searchdirectory;/  END FUNC search_directory;/
s/IMPORTS dir_busy,search_directory;/IMPORTS dir_busy;/
# current_free_disk_block is never declared
s/^PROC createfile (n:FILENAME, estsize:FILEBLOCK)/VAR current_free_disk_block: DISKBLOCK := 0;\
\
&/
# the flag values are 'being_written and 'being_read; the code also says
# 'writing and 'reading
s/'writing/'being_written/g
s/'reading/'being_read/g
# the component is flag, the directory head dir_header
s/f\.flags/f.flag/g
s/IF f = dir_head THEN dir_head := f.next;/IF f = dir_header THEN dir_header := f.next;/
# destroy of a missing file ends with f = NIL and selects f.flag: X_NIL, not
# the package's x_noexists. Kept as printed
# read imports mr, which is never declared (it is a name from problem 6)
s/IMPORTS dir_busy,search_directory,mr;/IMPORTS dir_busy;/
