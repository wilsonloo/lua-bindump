.PHONY: all

INCLUDE_DIR = "./"
CFLAGS = -g3 -rdynamic -Wall -I$(INCLUDE_DIR)
LDFLAGS = -pthread -lm -ldl -lrt
SHARED = -fPIC --shared

all: bindump.so
bindump.so: bindump.c luabinding.c
	gcc $(CFLAGS) $(SHARED) $^ -o $@ $(LDFLAGS)

cleanall:
	rm bindump.so