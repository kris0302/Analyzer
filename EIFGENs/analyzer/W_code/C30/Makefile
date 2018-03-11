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

OBJECTS = big_file_C30_c.o 

OLDOBJECTS =  ev1925.o ev1925d.o we1927.o we1927d.o we1921.o we1921d.o we1920.o \
	we1920d.o we1932.o we1932d.o ev1940.o ev1940d.o we1919.o we1919d.o \
	ev1936.o ev1936d.o ev1935.o ev1935d.o we1942.o we1942d.o we1924.o \
	we1924d.o we1918.o we1918d.o ev1934.o ev1934d.o we1928.o we1928d.o \
	ev1926.o ev1926d.o ev1939.o ev1939d.o we1937.o we1937d.o we1941.o \
	we1941d.o we1929.o we1929d.o ev1938.o ev1938d.o we1944.o we1944d.o \
	we1930.o we1930d.o we1917.o we1917d.o we1931.o we1931d.o we1923.o \
	we1923d.o we1933.o we1933d.o we1916.o we1916d.o we1946.o we1946d.o \
	we1915.o we1915d.o we1945.o we1945d.o we1943.o we1943d.o we1922.o \
	we1922d.o we1914.o we1914d.o 

all::  Cobj30.o

Cobj30.o: $(OBJECTS) Makefile
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

