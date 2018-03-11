INCLUDE_PATH =  -I"C:\Tools\estudio\library\time\spec\include" -I"C:\Tools\estudio\library\vision2\spec\include" -I"C:\Tools\estudio\library\wel\spec\windows\include"
SHELL = /bin/sh
CC = "C:\Tools\estudio/gcc/win64/mingw/bin/gcc"
CPP = "C:\Tools\estudio/gcc/win64/mingw/bin/gcc"
CFLAGS = -O0 -pipe -imacros eif_config.mingw.h -D_WIN32_WINNT=0x0500 -DWINVER=0x0500 -D_UNICODE -DUNICODE -DWIN32_LEAN_AND_MEAN  -DEIF_THREADS  -DEIF_IEEE_BEHAVIOR -DWORKBENCH -I"C:\Tools\estudio/studio/spec/win64/include" -I. $(INCLUDE_PATH)
CPPFLAGS = -O0 -pipe -imacros eif_config.mingw.h -D_WIN32_WINNT=0x0500 -DWINVER=0x0500 -D_UNICODE -DUNICODE -DWIN32_LEAN_AND_MEAN  -DEIF_THREADS  -DWORKBENCH -I"C:\Tools\estudio/studio/spec/win64/include" -I. $(INCLUDE_PATH)
LDFLAGS = 
CCLDFLAGS =   -mwindows
LDSHAREDFLAGS =  
EIFLIB = "C:\Tools\estudio/studio/spec/win64/lib/mingw/mtwkbench.a"
EIFTEMPLATES = C:\Tools\estudio/studio/config/win64/templates
LIBS = 
MAKE = "C:\Tools\estudio/gcc/win64/msys/1.0/bin/make.exe"
AR = "C:\Tools\estudio/gcc/win64/mingw/bin/ar"
LD = "C:\Tools\estudio/gcc/win64/mingw/bin/ld"
MKDEP =   --
MV = "C:\Tools\estudio/gcc/win64/msys/1.0/bin/cp"
CP = "C:\Tools\estudio/gcc/win64/msys/1.0/bin/cp"
RANLIB = "C:\Tools\estudio/gcc/win64/mingw/bin/ranlib.exe"
RM = "C:\Tools\estudio/gcc/win64/msys/1.0/bin/rm" -f
FILE_EXIST = 
RMDIR = "C:\Tools\estudio/gcc/win64/msys/1.0/bin/rd"
X2C = "C:\Tools\estudio/studio/spec/win64/bin/x2c.exe"
SHAREDLINK = "C:\Tools\estudio/gcc/win64/mingw/bin/dllwrap"
SHAREDLIBS = -luser32 -lws2_32 -ladvapi32 -lgdi32 -lshell32 -lmsimg32 -lcomdlg32 -luuid -lole32 -loleaut32 -lcomctl32 -lmpr -lshlwapi -lwinspool -lstdc++ 
SHARED_SUFFIX = .dll
COMMAND_MAKEFILE = 
START_TEST = if [ ! -f finished ] ; then 
END_TEST = ; fi 
CREATE_TEST = "C:\Tools\estudio/gcc/win64/msys/1.0/bin/touch" finished
PATH := C:\Tools\estudio/gcc/win64/mingw/libexec/gcc/mingw32/3.4.2;C:\Windows\system32;C:\Windows;C:\Windows\System32\Wbem;C:\Windows\System32\WindowsPowerShell\v1.0\;C:\Program Files (x86)\NVIDIA Corporation\PhysX\Common;C:\WINDOWS\system32;C:\WINDOWS;C:\WINDOWS\System32\Wbem;C:\WINDOWS\System32\WindowsPowerShell\v1.0\;C:\Tools\ETF\exe;C:\Users\kris0\AppData\Local\Microsoft\WindowsApps; 
SYSTEM_IN_DYNAMIC_LIB = analyzer.dll 

.SUFFIXES:.cpp .o 

.c.o:
	$(CC) $(CFLAGS) -c $<

.cpp.o:
	$(CPP) $(CPPFLAGS) -c $<

OBJECTS = big_file_C12_c.o 

OLDOBJECTS =  ev1339.o ev1339d.o ev1338.o ev1338d.o ev1320.o ev1320d.o ev1321.o \
	ev1321d.o ev1337.o ev1337d.o kl1344.o kl1344d.o kl1343.o kl1343d.o \
	ev1336.o ev1336d.o ev1335.o ev1335d.o ev1334.o ev1334d.o ev1333.o \
	ev1333d.o ev1332.o ev1332d.o ev1331.o ev1331d.o kl1352.o kl1352d.o \
	we1341.o we1341d.o ev1330.o ev1330d.o ev1329.o ev1329d.o we1340.o \
	we1340d.o we1342.o we1342d.o ki1349.o ki1349d.o ki1350.o ki1350d.o \
	ev1328.o ev1328d.o ev1327.o ev1327d.o ki1348.o ki1348d.o ki1347.o \
	ki1347d.o ev1326.o ev1326d.o kl1351.o kl1351d.o ev1325.o ev1325d.o \
	ev1324.o ev1324d.o ev1323.o ev1323d.o ev1322.o ev1322d.o kl1346.o \
	kl1346d.o uc1345.o uc1345d.o 

all::  Cobj12.o

Cobj12.o: $(OBJECTS) Makefile
	$(RM) $@
	$(LD) -r -o $@ $(OBJECTS)
	$(CREATE_TEST)
	$(RM) $(OBJECTS)


clean: local_clean
clobber: local_clobber

local_clean::
	$(RM) core finished *.o

local_clobber:: local_clean
	$(RM) Makefile

