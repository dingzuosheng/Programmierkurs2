#include <iostream>

class stack{
    private:
        struct element{
            double key;
            element *next;
            element(double key,element *next):key{key},next{next}{}
            ~element(){
                std::cout << "Destructor " << key << std::endl;
            }
        };
        element *top;
    public:
        stack();
        ~stack();
        stack(const stack& orig);
        int push(double key);
        double pop();
};