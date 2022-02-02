#include <iostream>
#include <stdexcept>
#include "blob.h"

Blob::Blob(unsigned char* feld,long n){
    feld = new unsigned char[n];   
}

Blob::Blob(const Blob& orig):feld{orig.feld},n{orig.n}{
    feld = new unsigned char[n];
}

Blob::~Blob(){
    delete[] feld;
}

unsigned char& Blob::operator[](long index){
    if(index>=0 && index<n){
        return feld[index];
    }else{
        throw std::out_of_range("Indexüberschreitung");
    }
}
void Blob::operator[](long index){
    feld[index] = value;
}

