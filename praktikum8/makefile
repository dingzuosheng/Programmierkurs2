main: main.cpp LinkedList.o ListIterator.o
	g++ -o main main.cpp LinkedList.o ListIterator.o
LinkedList.o: LinkedList.cpp
	g++ -c LinkedList.cpp
ListIterator.o: ListIterator.cpp
	g++ -c ListIterator.cpp
clean:
	rm -f main LinkedList.o ListIterator.o