#include "stack.h"
#include "stack_empty_exception.h"

Stack::Stack():top{nullptr}{

}

Stack::~Stack(){
    /*try{
        while(1){
            pop();
        }
    }catch(stack_empty_exception& e){
        
    } */
    while(top!=nullptr){
        pop();
    }
    //while(pop()!=-1);
}

Stack::Stack(const Stack& orig):top{nullptr}{
    /*Stack tmp;
    element* e = orig.top;
    while(e!=nullptr){
        tmp.push(e->key);
        e = e->next;
    }
    int k;
    try{
        while(1){
            push(tmp.pop());
        }
    }catch(stack_empty_exception& e){

    }*/
    //eine effizientere Lösung ist durch rekursive Methode 
    Stack* temp;
    element* e = orig.top;
    while(e){
        temp.push(e->key);
        e = e->next;
    }
    int k;
    while((k=temp.pop())!=-1){
        push(k);
    } 
}

int Stack::Stack::push(int key){
    element* neu = new element(key,top);
    if(neu){
        top = neu;
        return 1;
    }else{
        return 0;
    }
}

int Stack::pop(){
    if(top){
        int k = top->key;
        element* tmp = top;
        top = tmp->next;
        delete tmp;
        return k;
    }else{
        throw stack_empty_exception("Stack is empty!");//Exception werfen
    }
}