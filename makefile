all: strings.o test.o
	gcc strings.o test.o -o string_functions_test

run: all 
	./string_functions_test

test.o: test.c strings.h
	gcc -c test.c

strings.o: strings.c
	gcc -c strings.c

clean:
	rm *.o
	rm a.out
