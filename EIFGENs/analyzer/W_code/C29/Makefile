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

OBJECTS = big_file_C29_c.o 

OLDOBJECTS =  da1894.o da1894d.o ti1892.o ti1892d.o et1910.o et1910d.o da1890.o \
	da1890d.o da1897.o da1897d.o da1893.o da1893d.o ti1891.o ti1891d.o \
	yy1909.o yy1909d.o et1908.o et1908d.o da1896.o da1896d.o fi1889.o \
	fi1889d.o da1895.o da1895d.o yy1906.o yy1906d.o et1907.o et1907d.o \
	ev1888.o ev1888d.o ev1886.o ev1886d.o ev1901.o ev1901d.o we1887.o \
	we1887d.o ev1885.o ev1885d.o we1900.o we1900d.o we1898.o we1898d.o \
	ev1899.o ev1899d.o ev1884.o ev1884d.o ev1904.o ev1904d.o we1903.o \
	we1903d.o we1913.o we1913d.o ev1911.o ev1911d.o kl1882.o kl1882d.o \
	kl1881.o kl1881d.o we1902.o we1902d.o we1883.o we1883d.o ev1912.o \
	ev1912d.o uc1905.o uc1905d.o 

all::  Cobj29.o

Cobj29.o: $(OBJECTS) Makefile
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

