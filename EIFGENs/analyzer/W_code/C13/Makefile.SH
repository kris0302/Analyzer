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
echo "Compiling C code in C13"
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

OBJECTS = big_file_C13_c.o 

OLDOBJECTS =  et1359.o et1359d.o et1384.o et1384d.o et1382.o et1382d.o et1380.o \
	et1380d.o et1378.o et1378d.o et1376.o et1376d.o et1374.o et1374d.o \
	et1372.o et1372d.o et1370.o et1370d.o et1368.o et1368d.o et1366.o \
	et1366d.o et1358.o et1358d.o et1360.o et1360d.o et1364.o et1364d.o \
	et1362.o et1362d.o et1385.o et1385d.o et1383.o et1383d.o et1381.o \
	et1381d.o et1379.o et1379d.o et1377.o et1377d.o et1375.o et1375d.o \
	et1373.o et1373d.o et1371.o et1371d.o et1369.o et1369d.o et1367.o \
	et1367d.o et1365.o et1365d.o et1363.o et1363d.o et1361.o et1361d.o \
	da1357.o da1357d.o ev1356.o ev1356d.o ev1355.o ev1355d.o kl1353.o \
	kl1353d.o ki1354.o ki1354d.o 

all: Cobj13.o

Cobj13.o: $(OBJECTS) Makefile
	$(LD) $(LDFLAGS) -r -o Cobj13.o $(OBJECTS)
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

