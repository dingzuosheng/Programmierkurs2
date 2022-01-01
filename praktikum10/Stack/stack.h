#include <iostream>
template<class T>
class stack{
    private:
        struct element{
            T key;
            element* next;
            element(T key,element* next): key{key}, next{next}{}
            ~element(){
                std::cout << "Konstruktor" << key << std::endl;
            }
        };
        element* top;
    public:
        stack(): top{nullptr}{}
        ~stack();
        int push(T key);
        T pop();
};
template<class T>
stack<T>::~stack(){
    while(pop()!=-1);
}
template<class T>
int stack<T>::push(T key){
    element* neu = new element{key,top};
    if(neu){
        top = neu;
        return 1;
    }else{
        return 0;
    }
}
template<class T>
double stack<T>::pop(){
    if(top){
        element* tmp = top;
        T k = top->key;
        top = tmp->next;
        delete tmp;
        return k;
    }else{
        return -1;
    }
}