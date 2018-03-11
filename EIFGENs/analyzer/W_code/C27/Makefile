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

OBJECTS = big_file_C27_c.o 

OLDOBJECTS =  ev1836.o ev1836d.o ev1830.o ev1830d.o ev1846.o ev1846d.o ev1835.o \
	ev1835d.o ev1834.o ev1834d.o ev1829.o ev1829d.o ev1816.o ev1816d.o \
	ev1820.o ev1820d.o yy1847.o yy1847d.o ev1826.o ev1826d.o ev1828.o \
	ev1828d.o we1845.o we1845d.o we1844.o we1844d.o ev1822.o ev1822d.o \
	ev1821.o ev1821d.o we1833.o we1833d.o we1843.o we1843d.o ev1819.o \
	ev1819d.o ev1818.o ev1818d.o ev1827.o ev1827d.o ev1825.o ev1825d.o \
	ev1824.o ev1824d.o ev1823.o ev1823d.o ev1817.o ev1817d.o ev1815.o \
	ev1815d.o uc1841.o uc1841d.o kl1842.o kl1842d.o ev1832.o ev1832d.o \
	ev1831.o ev1831d.o uc1840.o uc1840d.o uc1839.o uc1839d.o uc1838.o \
	uc1838d.o uc1837.o uc1837d.o 

all::  Cobj27.o

Cobj27.o: $(OBJECTS) Makefile
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

