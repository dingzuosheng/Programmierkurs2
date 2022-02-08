#include <iostream>
#include "rational.h"

int main(){
    rational a {2,5};
    rational b {3,4};

    rational r = static_cast<rational>(5); //Alternativ: rational r = (rational) 5;


    int k = 2;

    rational c = k * a;
    rational d = b * k;

    std::cout << k << "*" << a << " = " << c << std::endl;
    std::cout << b << "*" << k << " = " << d << std::endl;

    std::cout << a << "*" << b << " = " << a*b << std::endl;

    std::cout << "r = " << r << std::endl;
    return 0;
}