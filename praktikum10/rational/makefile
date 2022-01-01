main: main.cpp rational.o
	g++ main.cpp -o main rational.o
rational.o: rational.cpp
	g++ -c rational.cpp
clean:
	rm -f main rational.o