#include <iostream>
#include <string>
#include "stack.h"
/*
void foo(stack *s){

}
*/
int main(){
    stack<std::string> s{"emptypop"};
    stack<double> *t = new stack<double>{-1.0};

    s.push("Hallo");
    s.push("PK 2");

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