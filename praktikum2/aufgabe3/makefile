main: main.c queue.o
	gcc main.c -o main queue.o
queue.o: queue.c
	gcc -c queue.c
clean:
	rm -f main queue.o