all: connection

connection: main.o my_math.o
	gcc main.o my_math.o -o connection

main.o: main.c my_math.h
	gcc -c main.c

my_math.o: my_math.c my_math.h
	gcc -c my_math.c

.PHONY: all clean

clean:
	rm -f *.o connection
