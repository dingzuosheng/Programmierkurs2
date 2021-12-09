#include "ListIterator.h"
using namespace fhdo_pk2;

bool ListIterator::hasNext(){
    return zeiger != nullptr;
}

const char* ListIterator::next(){
    node* tmp = zeiger;
    zeiger = zeiger->next; //generieren
    return tmp->data;
}