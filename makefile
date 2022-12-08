.PHONY: all clean
FLAG = -Wall -g

all: connection

connection: libmylib.a
	gcc $(FLAG) main.o my_math.o -o connection

libmylib.a: main.o my_math.o
	ar -rcs libmylib.a main.o my_math.o

main.o: main.c my_math.h
	gcc $(FLAG) -c main.c

my_math.o: my_math.c my_math.h
	gcc $(FLAG) -c my_math.c


clean:
	rm -f *.o connection *.a

