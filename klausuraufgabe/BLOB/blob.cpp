#include <iostream>
#include <stdexcept>
#include "blob.h"

Blob::Blob(byte* feld,long n): feld{new byte[n]}, n{n}{
    for(int i = 0; i < n; i++){
        this->feld[i] = feld[i];
    }
}

Blob::Blob(const Blob& orig): Blob{orig.feld,orig.n}{
}

Blob::~Blob(){
    delete[] feld;
}

byte& Blob::operator[](long index){
    if(index>=0 && index<n){
        return feld[index];
    }else{
        throw std::out_of_range("Indexüberschreitung");
    }
}


