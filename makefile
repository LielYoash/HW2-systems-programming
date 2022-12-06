all: main.o my_math.o
	gcc main.o my_math.o -o HW2-systems-programing

main.o: main.c my_math.h stdio.h
	gcc -c main.c

my_math.o: my_math.c my_math.h
	gcc -c my_math.c

clean:
	rm *.o HW2-systems-programing
