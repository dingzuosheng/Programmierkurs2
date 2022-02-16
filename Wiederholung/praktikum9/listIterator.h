#ifndef  LISTITERATOR_H_
#define  LSITITERATOR_H_
#include <iostream>
#include "iterator.h"
#include "node.h"


namespace fh_pk2{
template<class T>
class ListIterator : public Iterator<T>{
    private:
        element<T>* zeiger;

    public:
        ListIterator(element<T>* zeiger): zeiger{zeiger} {}
        bool hasNext() override;
        T* next() override;
};
template<class T>
bool ListIterator<T>::hasNext(){
    return zeiger != nullptr;
}
template<class T>
T* ListIterator<T>::next(){
    element<T>* temp = zeiger;
    zeiger = zeiger->next;
    return temp->text;
}
}
#endif