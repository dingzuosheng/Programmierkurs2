#include <iostream>
#include "stack.h"

void foo(stack *s){

}

int main(){
    stack s;
    stack *t = new stack{};

    s.push(1.0);
    s.push(50.0);

    t->push(1.0);
    t->push(50.0);
   // stack t = s;

/*
    for(int i = 1;i <= 10; i++){
        s->push(1.0 * i);
    }

    foo(s);
*/
   /* 
    std::cout << t.pop() << std::endl;
    std::cout << s.pop() << std::endl;
   */
    delete t;

    return 0;
}