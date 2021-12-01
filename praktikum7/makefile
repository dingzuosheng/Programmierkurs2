main: main.cpp Medium.o Audio.o Bild.o
	g++ -o main main.cpp Medium.o Audio.o Bild.o
Medium.o: Medium.cpp	
	g++ -c Medium.cpp
Audio.o: Audio.cpp
	g++ -c Audio.cpp
Bild.o: Bild.cpp
	g++ -c Bild.cpp
clean:
	rm -f main Medium.o Audio.o Bild.o