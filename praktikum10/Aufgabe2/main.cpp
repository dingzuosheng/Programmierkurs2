#include "Stack.h"
#include <iostream>

void foo(Stack* s){

}

int main(){
    //Stack s{};
    Stack* s = new Stack();

    for(int i = 0; i<=10; i++){
        s->push(1.0*i);
    }

    //s.push(1.0);
    //s.push(10.0);

    foo(s);

    //Stack t = s;

    //std::cout << t.pop() << std::endl;
    //std::cout << s.pop() << std::endl;
    delete s;
    return 0;
}