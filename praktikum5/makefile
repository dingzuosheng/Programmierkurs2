main: main.c countspace_index.o countspace_zeiger.o min.o stringcat.o fakultaet.o
	gcc -o main main.c countspace_index.o countspace_zeiger.o min.o stringcat.o fakultaet.o
countspace_index.o: countspace_index.c
	gcc -c countspace_index.c
countspace_zeiger.o: countspace_zeiger.c
	gcc -c countspace_zeiger.c
min.o: min.c
	gcc -c min.c
stringcat.o: stringcat.c
	gcc -c stringcat.c
fakultaet.o: fakultaet.c
	gcc -c fakultaet.c
clean:
	rm -f main countspace_index.o countspace_zeiger.o min.o stringcat. fakultaet.o