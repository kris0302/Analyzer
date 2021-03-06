case $CONFIG in
'')
	if test ! -f ../config.sh; then
		(echo "Can't find ../config.sh."; exit 1)
	fi 2>/dev/null
	. ../config.sh
	;;
esac
case "$O" in
*/*) cd `expr X$0 : 'X\(.*\)/'` ;;
esac
echo "Compiling C code in C14"
$spitshell >Makefile <<!GROK!THIS!
INCLUDE_PATH =  -I"\$(ISE_LIBRARY)\library\time\spec\include" -I"\$(ISE_LIBRARY)\library\vision2\spec\include" -I"\$(ISE_LIBRARY)\library\wel\spec\windows\include"
SHELL = /bin/sh
CC = $cc
CPP = $cpp
CFLAGS = $wkoptimize $mtccflags $large -DEIF_IEEE_BEHAVIOR -DWORKBENCH -I"$rt_include" -I. \$(INCLUDE_PATH)
CPPFLAGS = $wkoptimize $mtcppflags $large -DWORKBENCH -I"$rt_include" -I. \$(INCLUDE_PATH)
LDFLAGS = $ldflags
CCLDFLAGS = $ccldflags  $windows_flags
LDSHAREDFLAGS =  $mtldsharedflags
EIFLIB = "$rt_lib/$prefix$mt_prefix$wkeiflib$suffix"
EIFTEMPLATES = $rt_templates
LIBS = $mtlibs
MAKE = $make
AR = $ar
LD = $ld
MKDEP = $mkdep \$(DPFLAGS) --
MV = $mv
CP = $cp
RANLIB = $ranlib
RM = $rm -f
FILE_EXIST = $file_exist
RMDIR = $rmdir
X2C = "$x2c"
SHAREDLINK = $sharedlink
SHAREDLIBS = $sharedlibs
SHARED_SUFFIX = $shared_suffix
COMMAND_MAKEFILE = 
START_TEST = $start_test 
END_TEST = $end_test 
CREATE_TEST = $create_test 
SYSTEM_IN_DYNAMIC_LIB = analyzer$shared_suffix 
!GROK!THIS!
$spitshell >>Makefile <<'!NO!SUBS!'

.SUFFIXES:.cpp .o

.c.o:
	$(CC) $(CFLAGS) -c $<

.cpp.o:
	$(CPP) $(CPPFLAGS) -c $<

OBJECTS = big_file_C14_c.o 

OLDOBJECTS =  et1410.o et1410d.o et1408.o et1408d.o et1406.o et1406d.o et1404.o \
	et1404d.o et1402.o et1402d.o et1400.o et1400d.o et1398.o et1398d.o \
	et1396.o et1396d.o et1394.o et1394d.o et1392.o et1392d.o et1390.o \
	et1390d.o et1388.o et1388d.o et1386.o et1386d.o et1409.o et1409d.o \
	et1407.o et1407d.o et1405.o et1405d.o et1403.o et1403d.o et1401.o \
	et1401d.o et1399.o et1399d.o et1397.o et1397d.o et1395.o et1395d.o \
	et1393.o et1393d.o et1391.o et1391d.o et1389.o et1389d.o et1387.o \
	et1387d.o va1411.o va1411d.o va1412.o va1412d.o kl1413.o kl1413d.o \
	kl1418.o kl1418d.o kl1417.o kl1417d.o uc1416.o uc1416d.o uc1415.o \
	uc1415d.o uc1414.o uc1414d.o 

all: Cobj14.o

Cobj14.o: $(OBJECTS) Makefile
	$(LD) $(LDFLAGS) -r -o Cobj14.o $(OBJECTS)
	$(RM) $(OBJECTS)
	$(CREATE_TEST)

clean: local_clean
clobber: local_clobber

local_clean::
	$(RM) core finished *.o

local_clobber:: local_clean
	$(RM) Makefile

!NO!SUBS!
chmod 644 Makefile
$eunicefix Makefile

