% RED solution to DoD-1 contract test problem 3: A Small File-Handling Package
% Source: RED Rationale, Intermetrics, March 1979, Appendix B.2.3
%         (images pb-14example1.jpg, pb-14example2.jpg, iment.com transcription)
%
% PURPOSE: show how higher-level I/O functions can be constructed and used.
% PROBLEM: a file system. Producers use CREATE(filename, estimated size),
% WRITE(filename, data-area), ENDWRITE(filename). Data are written from a
% single variable to an array of structures; files are sequential, each
% write appends a record. Consumers use READ(filename, record-no,
% data-area). When reading is complete a file may be destroyed with
% DESTROY(filename). Exceptions at least when: creating a file whose name
% exists; writing a nonexistent file; reading a nonexistent file or a
% nonexistent record; destroying a file still in use.
% ASSUMPTIONS: a disk as storage medium.
% GUIDELINES: prevent deadlock of file storage; allow disk operations to
% be scheduled by any schedule (indicate where the scheduler goes); users
% can access nothing but the five operations.
% NOTE (Rationale text): CREATEFILE is used because CREATE is a RED
% reserved word. Many readers, one writer, no readers while writing.
% ----------------------------------------------------------------------

CAPSULE directory  EXPORTS createfile, write, endwrite, read, destroy;

EXPOSE bytes, words, seconds, milliseconds, hours FROM configuration;

% The following entries occur as fields in the
% dir_entry (DIRectory ENTry)

        % The name of the file.  Assumed to just be an ASCII string.
        ABBREV filename: STRING[ASCII](10);

        % Physical blocks on the disk.  We assume that this disk has
        % 1000 blocks of 80*100 ASCII characters.
        ABBREV diskblock: INT(0..999);

        % The [logical] blocks of the file.  A file consists of
        % blocks 0 thru n-1.
        ABBREV fileblock: INT(0..999);

        % Flags that give the status of the file.
        ABBREV FILEFLAG: ENUM['clear, 'being_written, 'being_read];


% Records as below form the elements of the linked lists.
TYPE dir_entry: PTR
        RECORD[ name:FILENAME,
                startblock:DISKBLOCK,
                endblock:DISKBLOCK,
                eofblock:FILEBLOCK,
                        % eofblock is the block that is BEYOND the end.
                flag:FILEFLAG,
                numreaders:INT(0..99),
                writer:ACT,
                next:dir_entry];

% Blocks are assumed to be 80*100 characters.
ABBREV block: STRING[ASCII](80*100);

% The header for the link list that is the directory.
VAR dir_header: dir_entry;

% Various error exceptions.  The second portion of the name
% indicates which routine uses the exception.
EXCEPTION
        x_create_exists     % OCR? the rest of this declaration list is cut off
                            % in the published image; names used below are
                            % x_disk_error, x_noexists, x_beingread,
                            % x_otherwriter, x_write_size_exceeded,
                            % x_endwrite_notwriting, x_destroy_fileused,
                            % x_read_illegal_block, x_read_beingwritten

% The critical sections of accessing the directory by different
% user TASKS are handled by this data lock.
VAR dir_busy: DATA_LOCK;

% ---------------------------------------
% specification of Disk hardware interface
%
% control record
TYPE disk_opers: ENUM ['read, 'write]   % recognized operations
                REP ENUM (STANDARD);
TYPE disk_command: RECORD [cmd:  disk_opers,
                           blk:  diskblock]
                REP SIZE (1*words),
                    RECORD [cmd:  SIZE (2),
                            blk:  SIZE (words - 2)];

% status info returned by hardware
TYPE disk_status:  ENUM ['ok, 'read_error, 'write_error]
        REP ENUM (STANDARD);

% interrupt mailbox -- signals completion of operation
VAR disk_int_mailbox: MAILBOX[disk_status] LOCATION (OCTAL ("32"));

% data-lock to force one-at-a-time useage of actual disk
VAR disk_busy:  DATA_LOCK;

% procedure to actually access the disk..
%       starts operation & waits for completion
%       in event of hardware error, raises X_DISK_ERROR

PROC perform_disk_op (oper: doper, blknum: diskblock, VAR data: BLOCK)
                IMPORTS disk_int_mailbox, disk_busy;
        VAR stat: disk_status;
    REGION disk_busy DO
                % start up the hardware
        LOW_IO ('disk, [cmd:oper, blk: blknum], data);
                % now wait for completion interrupt
        RECEIVE (disk_int_mailbox, stat);
        IF stat /= 'ok THEN RAISE x_disk_error;  END IF;
    END REGION;
END PROC perform_disk_op;

% --------------------
% utility routines to manage directory, etc.
FUNC searchdirectory (n:FILENAME) => dir_entry IMPORTS dir_header;
  VAR f:dir_entry;
    f := dir_header;
  search_directory
    WHILE f /= NIL REPEAT
        IF f.name = n THEN RETURN f; END IF;
        f := f.next;
    END REPEAT search_directory;
  RETURN NIL;
  END FUNC searchdirectory;

PROC add_to_directory (VAR f:dir_entry) IMPORTS dir_header;
  f.next := dir_header;
  dir_header := f;
  END PROC add_to_directory;

%
% ------------ procedures exported from capsule  ---------
%

PROC createfile (n:FILENAME, estsize:FILEBLOCK)
      IMPORTS dir_busy,current_free_disk_block;
    VAR f:dir_entry;
    REGION dir_busy DO
        % Look for file.
        f := search_directory(n);
        % If it already exists then raise an exception.
        IF f /= NIL THEN RAISE x_create_exists; END IF;

        % Make a new directory entry.
        ALLOC f PTR;

        % Fill it with relevant information.
        f.name := n;
        % and with appropriate null values
        f.flag := 'clear;
        f.numreaders := 0;
        f.eofblock := 0;

        % Handle space allocation.  Maximum size is given
        % by the estsize parameter.
        f.startblock := current_free_disk_block;
        current_free_disk_block := f.startblock + estsize;
        f.endblock := current_free_disk_block - 1;

        % Assume we are writing.
        f.flag := 'writing;

        % Store ACTivation variable of the current process in the
        % writer field.  No one else may write.
        f.writer := ME;

        % And put it in the directory.
        add_to_directory(f);
    END region;
  END PROC createfile;

PROC write (n:FILENAME, VAR data:BLOCK) IMPORTS dir_busy;
    VAR f:dir_entry;
    VAR dr:DISKBLOCK;

    REGION dir_busy DO
        % Find the file.
        f := search_directory(n);

        % Raise exception if no such file.
        IF f = NIL THEN RAISE x_noexists;  END IF;

        % Here with the proper file in f.

        % If, for some reason, not marked as being written, then
        % mark it now.  N.B.  With a different design, the concept
        % of "opening" the file for writing would exist.
        CASE f.flag
            WHEN 'clear => f.flag := 'being_written;
                           f.writer := ME;
            WHEN 'being_read => RAISE x_beingread;
            WHEN 'being_written =>
                IF f.writer /= ME THEN RAISE x_otherwriter; END IF;
        END CASE;

        % Translate the next record number to a physical disk block
        % and check it.
        dr := f.startblock + f.eofblock;
        IF dr > f.endblock THEN RAISE x_write_size_exceeded; END IF;

        % Indicate that this block is being written on.
        f.eofblock := f.eofblock + 1;

        % Now leave the critical section in which the directory is
        % examined.
    END REGION;

        % now do the actual write operation.  This procedure will
        % hold until the operation is completed sucessfully.
    perform_disk_op ('write, dr, data);

  END PROC write;


  PROC endwrite(n:FILENAME) IMPORTS dir_busy,search_directory;
      VAR f:dir_entry;
      REGION dir_busy DO
          % Look for file.
          f := search_directory(n);
          IF f = NIL then RAISE x_noexists; END IF;

          % Raise an exception if no writing is happening.
          IF f.flag /= 'writing THEN RAISE x_endwrite_notwriting; END IF;   % OCR? line cut at right margin of image
          IF f.writer /= ME THEN RAISE x_otherwriter; END IF;

          % Indicate nothing happening.
          f.flag := 'clear;
      END REGION;
  END PROC endwrite;


PROC destroy (n:FILENAME) IMPORTS dir_busy,dir_header;
  VAR f, prev: dir_entry;
    REGION dir_busy DO
      % Look for file in the directory.  Need to keep previous
      % pointer for standard deletion from
      f := dir_header;
      WHILE f /= NIL AND f.name /= n REPEAT
        prev := f;
        f := f.next;
      END REPEAT;

      IF f.flags /= 'clear THEN RAISE x_destroy_fileused; END IF;

      % Link list deletion.
      IF f = dir_head THEN dir_head := f.next;
      ELSE prev.next := f.next;
      END IF;
    END REGION;
  END PROC destroy;


PROC read (n:FILENAME, b:FILEBLOCK, VAR data:BLOCK)
    IMPORTS dir_busy,search_directory,mr;
  VAR f:dir_entry;
  VAR db:DISKBLOCK;
    REGION dir_busy DO
        % Look for file.
        f := search_directory (n);
        IF f = NIL then RAISE x_noexists; END IF;

        % Raise an exception if after end-of-file. N.B.  This
        % automatically checks for
        % the case in which b is beyond the maximum size of the file.
        IF b < 0 OR b >= f.eofblock THEN
            RAISE x_read_illegal_block;
            END IF;

        % This could be weakened to allow read/write by the same user.
        IF f.flag = 'writing then RAISE x_read_beingwritten; END IF;

        % Calculate the diskblock.
        db := f.startblock + b;

        % Indicate a read operation is taking place.
        f.flag := 'reading;
        % Increment usage count.
        f.numreaders := f.numreaders + 1;
    END REGION;

    perform_disk_op ('read, db, data);
                % waits for sucessful completion..

    % Reset directory entry.
    REGION dir_busy DO
        f.numreaders := f.numreaders - 1;
        IF f.numreaders = 0 THEN f.flags := 'clear; END IF;
    END REGION;
  END PROC read;


END CAPSULE directory;
