main: main.c stringcat.o stringcat.h fakultaet.o fakultaet.h
	gcc main.c -o main stringcat.o fakultaet.o
stringcat.o: stringcat.c
	gcc -c stringcat.c
fakultaet.o: fakultaet.c
	gcc -c fakultaet.c
clean:
	rm -f main stringcat.o fakultaet.o