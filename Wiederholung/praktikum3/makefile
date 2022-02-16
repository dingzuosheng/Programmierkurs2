main: main.c dictionary.o dictionary.h
	gcc main.c -o main dictionary.o
dictionary.o: dictionary.c
	gcc -c dictionary.c
clean:
	rm -f main dictionary.o
	