main: main.cpp medium.o audio bild.o linkedList.h listIterator.h node.h
	g++ -o main main.cpp medium.o audio.o bild.o linkedList.h listIterator.h node.h
medium.o: medium.cpp
	g++ -c medium.cpp 
audio.o: audio.cpp
	g++ -c audio.cpp
bild.o: bild.cpp
	g++ -c bild.cpp
clean:
	rm -f main medium.o audio.o bild.o