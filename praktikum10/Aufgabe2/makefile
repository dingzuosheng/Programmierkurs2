main: main.cpp stack.o stack.h
	c++ main.cpp -o main stack.o 
stack.o: stack.cpp	
	c++ stack.cpp -c
clean: main stack.o
	rm -f main stack.o