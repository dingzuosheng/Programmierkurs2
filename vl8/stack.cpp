#include <iostream>
#include "stack.h"

stack::stack(): top{nullptr}{}

stack::~stack(){
    while(pop() != -1);
}

stack::stack(const stack& orig): stack{}{
    stack tmp;
    element* e = orig.top;
    while(e != nullptr){
        tmp.push(e->key);
        e = e->next;
    }
    double k;
    while((k=tmp.pop()) != -1){
        push(k);
    }
}

int stack::push(double key){
    element *neu = new element{key,top};
    if(neu){
        top = neu;
        return 1;
    }else{
        return 0;
    }
}

double stack::pop(){
    if(top){
        element *tmp = top;
        double k = top->key;
        top = top->next;
        delete tmp;
        return k;
    }else{
        return -1;
    }
}