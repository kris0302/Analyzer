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
echo "Compiling C code in C28"
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

OBJECTS = big_file_C28_c.o 

OLDOBJECTS =  kl1859.o kl1859d.o kl1858.o kl1858d.o yy1849.o yy1849d.o kl1853.o \
	kl1853d.o yy1848.o yy1848d.o ev1865.o ev1865d.o we1863.o we1863d.o \
	kl1855.o kl1855d.o kl1860.o kl1860d.o kl1851.o kl1851d.o we1864.o \
	we1864d.o we1850.o we1850d.o kl1854.o kl1854d.o kl1880.o kl1880d.o \
	ev1866.o ev1866d.o we1867.o we1867d.o we1878.o we1878d.o kl1852.o \
	kl1852d.o kl1857.o kl1857d.o kl1862.o kl1862d.o ki1879.o ki1879d.o \
	kl1861.o kl1861d.o kl1856.o kl1856d.o we1877.o we1877d.o we1876.o \
	we1876d.o we1875.o we1875d.o we1874.o we1874d.o we1873.o we1873d.o \
	we1872.o we1872d.o we1871.o we1871d.o we1870.o we1870d.o we1869.o \
	we1869d.o we1868.o we1868d.o 

all: Cobj28.o

Cobj28.o: $(OBJECTS) Makefile
	$(LD) $(LDFLAGS) -r -o Cobj28.o $(OBJECTS)
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

