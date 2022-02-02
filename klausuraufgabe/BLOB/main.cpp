#include <iostream>
#include "blob.h"


int main(){
    unsigned char* feld;
    Blob b{feld,5};
    int i;
    for(i = 0; i < 5; i++){
        b[i] = 1 + i;
    }
    for(i = 0; i < 5; i++){
        std::cout << b[i] << std::endl;
    } 
    return 0;
}