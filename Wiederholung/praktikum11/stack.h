#include <iostream>

template<class T>
class Stack{
    private:
        struct element{
            T key;
            element* next;
            element(T key,element* next):key{key},next{next}{}
            ~element(){
                std::cout << "Destructor" << std::endl;
            }
        }
        element* top;
        T emptyerror;
    public:
        Stack(T emptyerror);
        Stack(const Stack& orig);
        ~Stack();
        int push(T key);
        int pop();
};

template<class T>
Stack<T>::Stack(T emptyerror): top{nullptr},emptyerror{emptyerror}{}

template<class T>
Stack<T>::Stack(const Stack& orig):Stack{}{
    Stack<T> temp;
    element<T>* e = orig.top;
    while(e){
        temp.push(e->key);
        e = e->next;
    }
    int k;
    while((k=temp.pop())!=emptyerror){
        push(k);
    }
}

template<class T>
Stack<T>::~Stack(){
    while(pop()!=emptyerror);
}

template<class T>
int Stack<T>::push(int key){
    element<T>* neu = new element(key,top);
    if(neu){
        top = neu;
        return 1;
    }else{
        return 0;
    }
}

template<class T>
int Stack<T>::pop(){
    if(top){
        element<T>* temp = top;
        int k = temp->key;
        top = temp->next;
        delete temp;
        return k;
    }else{
        //throw Stack_empty_exception("Stack ist leer");
        return emptyerror;
    }
}