#
# -- START --
# $Id: preremove.freebsd.sh,v 1.4 2000/10/29 22:52:50 papowell Exp papowell $
#
# This is the shell script that does the preremove
# lpd shutdown.  It is the script from hell
echo RUNNING preremove.freebsd.sh parms "'$0 $@'"
if [ "X$2" = "XDEINSTALL" ] ; then
	echo "Stopping LPD"
	kill -INT `ps ${PSHOWALL} | awk '/lpd/{ print $1;}'` >/dev/null 2>&1
fi
exit 0
