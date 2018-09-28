all: strings.o test.o
	gcc strings.o test.o

run: 
	./a.out

test.o: test.c strings.h
	gcc -c test.c

strings.o: strings.c
	gcc -c strings.c

clean:
	rm *.o
	rm a.out
