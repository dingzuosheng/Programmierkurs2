#ifndef LISTITERATOR_H_
#define LISTITERATOR_H_
#include "Iterator.h"
#include "node.h"
namespace fhdo_pk2{
template<class T>
class ListIterator: public Iterator<T>{
    private:
        node<T>* zeiger;
    public:
        ListIterator(node<T>* zeiger):zeiger{zeiger}{}
        bool hasNext() override;
        T next() override;
};

template<class T>
bool ListIterator<T>::hasNext(){
    return zeiger != nullptr;
}

template<class T>
T ListIterator<T>::next(){
    node<T>* tmp = zeiger;
    zeiger = zeiger->next; //generieren
    return tmp->data;
}
}
#endif
