# $Id: Makefile,v 1.17 2002/10/08 18:42:59 Administrator Exp $

UNREAL_FLAGS = -mmacosx-version-min=10.15
CFLAGS = -g -Wreturn-type -Werror-implicit-function-declaration $(UNREAL_FLAGS)
CPPFLAGS = -g -Wreturn-type -Werror-implicit-function-declaration $(UNREAL_FLAGS) -Wc++11-extensions
LDFLAGS = -g

CC = gcc
CPP = g++

SEXP_OBJS = sexp.o sbuild.o sparse.o
LIB_OBJS = $(SEXP_OBJS) mem.o spew.o debug.o
PARSER_OBJS = kp.yy.o kp.tab.o

K_LIB = $(LIB_OBJS) $(PARSER_OBJS) kexec.o kfile.o kerr.o kps.o \
  kunparse.o keval.o kcps.o ksym.o kinit.o kprim.o kenv.o growbuf.o \
  strm.o sstrm.o fstrm.o kprim_numop.o kprim_list.o ksem.o sexputil.o \
  kprim_import.o kprim_boolean.o kprim_reflect.o hash.o gc.o

K_OBJS = k.o $(K_LIB)

UMM_K_OBJS = kfile.o keval.o kp.yy.o kp.tab.o kps.o kmisc.o kerr.o \
  klayer.o kvalue.o kinit.o kunparse.o kexec.o katom.o kcps.o ktree.o ksym.o

PARSER_GENERATED = kp.c kp.output kp.tab.c kp.tab.h kp.exe kp.grammar \
  kp.y kp.l kp.yy.c kp.h kp.yy.c
GENERATED = k k.a engine shavtest *.o $(PARSER_GENERATED)
COMMON_DEPS = kstruct.h

ENGINE_OBJS = engine.o KActor.o kembed.o

k: $(K_OBJS)
	@# $(CC) -Lgc6.0/.libs $(LDFLAGS) -o k $(K_OBJS) -lgc
	$(CC) $(LDFLAGS) -o k $(K_OBJS)

k.a: $(K_OBJS)
	libtool -static -o k.a *.o

engine: $(K_LIB) $(ENGINE_OBJS)
	$(CPP) $(LDFLAGS) -o engine $(K_LIB) $(ENGINE_OBJS)

KActor.o: KActor.h KActor.cpp
	$(CPP) $(CPPFLAGS) -c KActor.cpp

engine.o: engine.cpp
	$(CPP) $(CPPFLAGS) -c engine.cpp

kembed.o: kembed.cpp kembed.h
	$(CPP) $(CPPFLAGS) -c kembed.cpp

shavtest: shavtest.o shav.o mem.o spew.o
	@# $(CC) -Lgc6.0/.libs $(LDFLAGS) -o shavtest shavtest.o shav.o mem.o spew.o -lgc
	$(CC) $(LDFLAGS) -o shavtest shavtest.o shav.o mem.o spew.o

clean:
	rm -f $(GENERATED)

test: k
	@utest

shavtest.o: shavtest.c shav.h
	$(CC) $(CFLAGS) -c shavtest.c

shav.o: shav.c shav.h
	$(CC) $(CFLAGS) -c shav.c

debug.o: debug.c
	$(CC) $(CFLAGS) -c debug.c

spew.o: spew.c
	$(CC) $(CFLAGS) -c spew.c

mem.o: mem.c
	$(CC) $(CFLAGS) -c -Igc6.0/include mem.c

k.o: k.c $(COMMON_DEPS)
	$(CC) $(CFLAGS) -c k.c

#kp.yy.h kp.yy.c: kp.ccc
kp.yy.c: kp.ccc
	ccc -vb -u kp.ccc

kp.tab.h kp.tab.c: kp.ccc
	ccc -vb -u kp.ccc

kp.h: kp.ccc
	ccc -vb -u kp.ccc

keval.o: keval.c keval.h $(COMMON_DEPS)
	$(CC) $(CFLAGS) -c keval.c

kfile.o: kfile.c kfile.h $(COMMON_DEPS)
	$(CC) $(CFLAGS) -c kfile.c

kps.o: kps.c kps.h $(COMMON_DEPS)
	$(CC) $(CFLAGS) -c kps.c

kmisc.o: kmisc.c kmisc.h $(COMMON_DEPS)
	$(CC) $(CFLAGS) -c kmisc.c

kerr.o: kerr.c kerr.h $(COMMON_DEPS)
	$(CC) $(CFLAGS) -c kerr.c

klayer.o: klayer.c klayer.h $(COMMON_DEPS)
	$(CC) $(CFLAGS) -c klayer.c

kvalue.o: kvalue.c kvalue.h $(COMMON_DEPS)
	$(CC) $(CFLAGS) -c kvalue.c

kinit.o: kinit.c kinit.h $(COMMON_DEPS)
	$(CC) $(CFLAGS) -c kinit.c

kunparse.o: kunparse.c kunparse.h $(COMMON_DEPS)
	$(CC) $(CFLAGS) -c kunparse.c

kexec.o: kexec.c kexec.h $(COMMON_DEPS)
	$(CC) $(CFLAGS) -c kexec.c

katom.o: katom.c katom.h $(COMMON_DEPS)
	$(CC) $(CFLAGS) -c katom.c

kcps.o: kcps.c kcps.h $(COMMON_DEPS)
	$(CC) $(CFLAGS) -c kcps.c

ktree.o: ktree.c ktree.h $(COMMON_DEPS)
	$(CC) $(CFLAGS) -c ktree.c

ksym.o: ksym.c ksym.h $(COMMON_DEPS)
	$(CC) $(CFLAGS) -c ksym.c

sexp.o: sexp.c sexp.h $(COMMON_DEPS)
	$(CC) $(CFLAGS) -c sexp.c

sbuild.o: sbuild.c sbuild.h $(COMMON_DEPS)
	$(CC) $(CFLAGS) -c sbuild.c

sparse.o: sparse.c sparse.h $(COMMON_DEPS)
	$(CC) $(CFLAGS) -c sparse.c

kprim.o: kprim.c kprim.h $(COMMON_DEPS)
	$(CC) $(CFLAGS) -c kprim.c

kenv.o: kenv.c kenv.h $(COMMON_DEPS)
	$(CC) $(CFLAGS) -c kenv.c

growbuf.o: growbuf.c growbuf.h $(COMMON_DEPS)
	$(CC) $(CFLAGS) -c growbuf.c

strm.o: strm.c strm.h $(COMMON_DEPS)
	$(CC) $(CFLAGS) -c strm.c

sstrm.o: sstrm.c sstrm.h $(COMMON_DEPS)
	$(CC) $(CFLAGS) -c sstrm.c

fstrm.o: fstrm.c fstrm.h $(COMMON_DEPS)
	$(CC) $(CFLAGS) -c fstrm.c

kprim_numop.o: kprim_numop.c kprim_numop.h $(COMMON_DEPS)
	$(CC) $(CFLAGS) -c kprim_numop.c

kprim_list.o: kprim_list.c kprim_list.h $(COMMON_DEPS)
	$(CC) $(CFLAGS) -c kprim_list.c

ksem.o: ksem.c ksem.h $(COMMON_DEPS)
	$(CC) $(CFLAGS) -c ksem.c

hash.o: hash.c hash.h $(COMMON_DEPS)
	$(CC) $(CFLAGS) -c hash.c

gc.o: gc.c gc.h $(COMMON_DEPS)
	$(CC) $(CFLAGS) -c gc.c

sexputil.o: sexputil.c sexputil.h $(COMMON_DEPS)
	$(CC) $(CFLAGS) -c sexputil.c

kprim_import.o: kprim_import.c kprim_import.h $(COMMON_DEPS)
	$(CC) $(CFLAGS) -c kprim_import.c

kprim_boolean.o: kprim_boolean.c kprim_boolean.h $(COMMON_DEPS)
	$(CC) $(CFLAGS) -c kprim_boolean.c

kprim_reflect.o: kprim_reflect.c kprim_reflect.h $(COMMON_DEPS)
	$(CC) $(CFLAGS) -c kprim_reflect.c

#kp.yy.o: kp.yy.c kp.yy.h $(COMMON_DEPS)
kp.yy.o: kp.yy.c $(COMMON_DEPS)
	$(CC) $(CFLAGS) -c kp.yy.c

kp.tab.o: kp.tab.c kp.tab.h $(COMMON_DEPS)
	$(CC) $(CFLAGS) -c kp.tab.c
