#include <iostream> 

class Stack{
    private:
        struct element{
            int key;
            element* next;
            element(int key,element* next):key{key},next{next}{}
            ~element(){
                std::cout << "Destructor" << std::endl;
            }
        };
        element* top;
    public:
        Stack();
        ~Stack();
        Stack(const Stack& orig);
        int push(int key);
        int pop();
};