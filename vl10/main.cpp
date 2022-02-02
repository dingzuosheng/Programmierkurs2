#include <iostream>
#include "rational.h"

int main(){
    rational a {2,5};
    rational b {3,4};

    std::cout << a << "*" << b << " = " << a*b << std::endl;
    return 0;
}