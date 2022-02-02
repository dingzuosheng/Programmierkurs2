main: main.cpp rational.o rational.h
	g++ main.cpp -o main rational.o
rational.o: rational.cpp
	g++ rational.cpp -c
clean:
	rm -f main rational.o