main: main.c preincrement.o postincrement.o
	gcc -o main main.c preincrement.o postincrement.o
preincrement.o: preincrement.c
	gcc -c preincrement.c
postincrement.o: postincrement.c
	gcc -c postincrement.c
clean:
	rm -f main main.o preincrement.o postincrement.o