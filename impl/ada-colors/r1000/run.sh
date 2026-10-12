#!/bin/sh
# Runs rdv_bench.ada in the Rational Environment on the R1000 software emulator
# of DataMuseum.dk, through the operator console, as their Slim scripts do:
# boot, log in, copy the source in through DFS, parse, code, run.
#
#   r1000/run.sh <path to r1000sim> <disk0 image> <disk1 image> <workdir>
#
# At every "BEGIN <test>" and "END <test>" line the script asks the emulator
# for "r1000 rate": its sim time is the R1000 microcycle count times 200 ns,
# which is what the real machine would have taken. parse.py turns the log into
# a table.
set -eu
SIM=$1
DISK0=$2
DISK1=$3
W=$4
HERE=$(cd "$(dirname "$0")" && pwd)

mkdir -p "$W"
cp "$HERE/rdv_bench.ada" "$W/tmp_txt"
cp "$DISK0" "$W/_.disk.0"
cp "$DISK1" "$W/_.disk.1"
chmod 644 "$W"/_.disk.?

TESTS="EMPTY_LOOP CALL RENDEZVOUS RENDEZVOUS_PARAM TASK_LIFE"

{
	# The museum's published operator account, used by its own scripts
	# (Slim/slim_common.sh in the emulator repository).
	cat <<-'EOT'
		r1000 watchdog -dont_bite 60
		r1000 quota add 100000
		r1000 quota exit
		iop reset
		console match expect "Enter option [enter CLI] : "
		console << "6"
		console match expect "Transport_Name.Undefined"
		console match expect "username:"
		r1000 rate
		console << "pam"
		console match expect "password:"
		console << "rachel"
		console match expect "session:"
		console << "s_1"
		console match expect "command:"
		r1000 rate
		dfs write tmp_txt R1000_DUMP1
		console << dfs.copy("R1000_DUMP1","TMP_TXT")
		console match expect "command:"
		console << compilation.parse("TMP_TXT")
		console match expect "command:"
		console << code("rdv_bench")
		console match expect "command:"
		r1000 rate
		console << rdv_bench.run
	EOT
	for t in $TESTS; do
		echo "console match expect \"BEGIN $t \""
		echo "r1000 rate"
		echo "console match expect \"END $t \""
		echo "r1000 rate"
	done
	# A matcher only sees output that comes after it is armed, and "BENCH
	# DONE" follows the last END at once, so the run ends here.
	echo "exit"
} > "$W/_.cli"

cd "$W"
# -T (no telnet ports) takes an argument in the emulator's getopt string, so
# it gets one; the exit status is kept past tee
{ "$SIM" -T x -0 +_.disk.0 -1 +_.disk.1 -w . "include _.cli"; echo $? > _.status; } 2>&1 | tee _.log
exit "$(cat _.status)"
