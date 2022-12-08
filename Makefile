.PHONY: all clean
FLAG = -Wall -g

all: connections

connections: libmylib.a
	gcc $(FLAG) main.o my_math.o -o connections

libmylib.a: main.o my_math.o
	ar -rcs libmylib.a main.o my_math.o

main.o: main.c my_math.h
	gcc $(FLAG) -c main.c

my_math.o: my_math.c my_math.h
	gcc $(FLAG) -c my_math.c


clean:
	rm -f *.o connections *.a

