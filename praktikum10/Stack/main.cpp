#include "stack.h"
#include <iostream>

int main(){
    stack s<double>;
    s.push(1.0);
    s.push(10.0);

    std::cout << s.pop() << std::endl;
    std::cout << s.pop() << std::endl;

    return 0;
}