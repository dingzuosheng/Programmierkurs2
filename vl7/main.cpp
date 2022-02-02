#include <iostream>
#include "vector.h"

int main(){
    /*
    Vector v{5};
    for(int i = 0;i < 5; i++){
        v.set(i, 1.0 + 1.0 * i);
    }
    std::cout << v.get(0) << std::endl;

    Vector w = v;
    w.set(0,10.0);
    std::cout << w.get(0) << std::endl;
    std::cout << v.get(0) << std::endl;
    */
    Vector *v = new Vector{5};
    for(int i = 0;i < 5; i++){
        v->set(i, 1.0 + 1.0 * i);
    }
    std::cout << v->get(0) << std::endl;

    Vector *w = new Vector(*v);
    w->set(0,10.0);
    std::cout << w->get(0) << std::endl;
    std::cout << v->get(0) << std::endl;

    delete w;
    delete v;
    return 0;
}