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
echo "Compiling C code in C34"
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

OBJECTS = big_file_C34_c.o 

OLDOBJECTS =  he2075.o he2075d.o bi2072.o bi2072d.o bi2071.o bi2071d.o pr2065.o \
	pr2065d.o pr2076.o pr2076d.o tr2073.o tr2073d.o ac2069.o ac2069d.o \
	ac2078.o ac2078d.o li2074.o li2074d.o kl2053.o kl2053d.o kl2056.o \
	kl2056d.o kl2059.o kl2059d.o kl2062.o kl2062d.o kl2054.o kl2054d.o \
	kl2057.o kl2057d.o kl2060.o kl2060d.o kl2063.o kl2063d.o kl2055.o \
	kl2055d.o kl2058.o kl2058d.o kl2061.o kl2061d.o kl2064.o kl2064d.o \
	ki2047.o ki2047d.o kl2066.o kl2066d.o ev2068.o ev2068d.o ev2077.o \
	ev2077d.o ki2046.o ki2046d.o ki2048.o ki2048d.o kl2067.o kl2067d.o \
	ev2049.o ev2049d.o ev2052.o ev2052d.o ev2050.o ev2050d.o ev2051.o \
	ev2051d.o ev2070.o ev2070d.o 

all: Cobj34.o

Cobj34.o: $(OBJECTS) Makefile
	$(LD) $(LDFLAGS) -r -o Cobj34.o $(OBJECTS)
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

