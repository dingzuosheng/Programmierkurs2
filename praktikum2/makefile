main: main.c upper.o to_upper_case.o
	gcc main.c -o main upper.o to_upper_case.o
to_upper_case.o: to_upper_case.c
	gcc -c to_upper_case.c
upper.o: upper.c
	gcc -c upper.c
clean:
	rm -f main upper.o to_upper_case.o 