#include "ListIterator.h"
using namespace fhdo_pk2;

template<class T>
bool ListIterator<T>::hasNext(){
    return zeiger != nullptr;
}

template<class T>
T* ListIterator<T>::next(){
    node* tmp = zeiger;
    zeiger = zeiger->next; //generieren
    return tmp->data;
}