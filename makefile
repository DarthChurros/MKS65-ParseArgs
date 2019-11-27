ifdef MEM
	DATA = -g
	VG = valgrind --leak-check=full
endif

all: parse.o
	gcc $(DATA) -o program parse.o

parse.o: parse.c
	gcc $(DATA) -c parse.c

run:
	$(VG) ./program $(ARGS)

clean:
	rm *.o
	rm program
