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

OBJECTS = big_file_C26_c.o 

OLDOBJECTS =  ev1784.o ev1784d.o ev1791.o ev1791d.o ev1804.o ev1804d.o ev1807.o \
	ev1807d.o ev1803.o ev1803d.o ev1795.o ev1795d.o ev1786.o ev1786d.o \
	ev1787.o ev1787d.o ev1802.o ev1802d.o ev1788.o ev1788d.o ev1801.o \
	ev1801d.o ev1794.o ev1794d.o ev1811.o ev1811d.o ev1790.o ev1790d.o \
	ev1813.o ev1813d.o ev1785.o ev1785d.o ev1806.o ev1806d.o ev1808.o \
	ev1808d.o ev1805.o ev1805d.o ev1798.o ev1798d.o ev1812.o ev1812d.o \
	ev1792.o ev1792d.o ev1799.o ev1799d.o ev1789.o ev1789d.o ev1810.o \
	ev1810d.o ev1814.o ev1814d.o ev1797.o ev1797d.o ev1793.o ev1793d.o \
	ev1800.o ev1800d.o ev1783.o ev1783d.o ev1796.o ev1796d.o ev1809.o \
	ev1809d.o ev1782.o ev1782d.o 

all::  Cobj26.o

Cobj26.o: $(OBJECTS) Makefile
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

