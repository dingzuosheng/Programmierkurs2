main: main.c libmy.a
	gcc main.c -o main -l my -L .
libmy.a: asiII.o einmaleins.o dualzahl.o
	ar r libmy.a asiII.o einmaleins.o dualzahl.o
asiII.o: asiII.c
	gcc -c asiII.c
einmaleins.o: einmaleins.c
	gcc -c einmaleins.c
dualzahl.o: dualzahl.c
	gcc -c dualzahl.c
clean:
	rm -f main libmy.a