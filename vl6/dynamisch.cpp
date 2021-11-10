#include <iostream>

void dynamisch(){
    int * ptr;
    ptr = new int[4];
    ptr[0] = 2;
    *(ptr+1) = 4;
    std::cout << ptr[1] << std::endl;
}