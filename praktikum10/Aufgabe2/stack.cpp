#include "stack.h"
template<T>
Stack::Stack(){
    //std::cout << "Constructor " << std::endl;
    top = nullptr;
}
template<T>
Stack::~Stack(){
    //std::cout << "Destruktor" << std::endl;
    while(pop()!=-1);
}
template<T>
Stack::Stack(const Stack& orig):Stack{}{
    Stack tmp;
    element* e = orig.top;
    while(e!=nullptr){
        tmp.push(e->key);
        e = e->next;
    }
    double k;
    while((k=tmp.pop())!=-1.0){
        push(k);
    }
}
template<T>
int Stack::push(T key){
    element* neu = new element{key,top};
    if(neu){//wenn es gespeichert wurde
        top = neu;
        return 1;
    } else {
        return 0;
    }
}
template<T>
T Stack::pop(){
    if(top){
        T k = top->key;
        element* tmp = top;
        top = top->next;
        delete tmp;
        return k; 
    }else{
        //TODO throw exception
        return -1;
    }
}