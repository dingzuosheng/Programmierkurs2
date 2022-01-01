#include <iostream>
template<class T>
class Stack{
    private:
        struct element{
            T key;
            element *next;
            element(T key,element* next):key{key},next{next}{}
            ~element(){
                std::cout << "Destructor " << key << std::endl;
            }
        };
        element* top;
        T emptyerror;
    public:
        Stack(T emptyerror);
        ~Stack();
        Stack(const Stack& orig);
        int push(T key);
        T pop();
};

template<class T>
Stack<T>::Stack(T emptyerror):top{nullptr},emptyerror{emptyerror}{

}
template<class T>
Stack<T>::~Stack(){
    //std::cout << "Destruktor" << std::endl;
    while(pop()!=emptyerror);
}
template<class T>
Stack<T>::Stack(const Stack& orig):Stack<T>{}{
    Stack<T> tmp;
    element* e = orig.top;
    while(e!=nullptr){
        tmp.push(e->key);
        e = e->next;
    }
    double k;
    while((k=tmp.pop())!=emptyerror){
        push(k);
    }
}
template<class T>
int Stack<T>::push(T key){
    element* neu = new element{key,top};
    if(neu){//wenn es gespeichert wurde
        top = neu;
        return 1;
    } else {
        return 0;
    }
}
template<class T>
T Stack<T>::pop(){
    if(top){
        T k = top->key;
        element* tmp = top;
        top = top->next;
        delete tmp;
        return k; 
    }else{
        //TODO throw exception
        return emptyerror;
    }
}