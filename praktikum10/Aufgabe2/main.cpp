#include "Stack.h"
#include <string>
#include <iostream>
/*
void foo(Stack* s){

}
*/
int main(){
    Stack<std::string> s{"emptypop"};
    Stack<double>  *t = new Stack<double>(-1.0);

    for(int i = 0; i<=10; i++){
        t->push(1.0*i);
    }

    s.push("Hallo");
    s.push("PK 2");
/*
    foo(s);
    foo(t);
*/
    //Stack t = s;

    //std::cout << t.pop() << std::endl;
    //std::cout << s.pop() << std::endl;
    delete t;
    return 0;
}