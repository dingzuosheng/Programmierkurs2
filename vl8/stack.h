#include <iostream>

template<class T>
class stack{
    private:
        struct element{
            T key;
            element *next;
            element(T key,element *next):key{key},next{next}{}
            ~element(){
                std::cout << "Destructor " << key << std::endl;
            }
        };
        element *top;
        T emptyerror;
    public:
        stack(T emptyerror);
        ~stack();
        stack(const stack& orig);
        int push(T key);
        T pop();
};

template<class T>
stack<T>::stack(T emptyerror): top{nullptr}, emptyerror{emptyerror}{}

template<class T>
stack<T>::~stack(){
    while(pop() != emptyerror);
}

template<class T>
stack<T>::stack(const stack& orig): stack<T>{}{
    stack<T> tmp;
    element* e = orig.top;
    while(e != nullptr){
        tmp.push(e->key);
        e = e->next;
    }
    T k;
    while((k=tmp.pop()) != emptyerror){
        push(k);
    }
}

template<class T>
int stack<T>::push(T key){
    element *neu = new element{key,top};
    if(neu){
        top = neu;
        return 1;
    }else{
        return 0;
    }
}

template<class T>
T stack<T>::pop(){
    if(top){
        element *tmp = top;
        T k = top->key;
        top = top->next;
        delete tmp;
        return k;
    }else{
        return emptyerror;
    }
}