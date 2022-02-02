main: main.cpp stack.o stack.h
	g++ main.cpp -o main stack.o

stack.o: stack.cpp
	g++ stack.cpp -c
clean:
	rm -f main stack.o