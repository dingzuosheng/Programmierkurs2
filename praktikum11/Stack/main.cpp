#include "stack.h"
#include "stack_empty_exception.h"
#include <iostream>
void test(){
    Stack s;
   /* s.push(1);*/
}

int main(){
    //test();
    //std::cout << "test" << std::endl;

    Stack stack{};

    stack.push(1);
    stack.push(2);

    Stack t = stack;
    try{
        t.pop();
        t.pop();
        t.pop();
    }catch(stack_empty_exception& e){ //Exception fangen
        std::cout << e.what() << std::endl; 
    }

    return 0;
}