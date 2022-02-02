main: main.cpp blob.o blob.h
	g++ main.cpp -o main blob.o
blob.o: blob.cpp
	g++ blob.cpp -c
clean:
	rm -f main blob.o