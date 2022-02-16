#include "listIterator.h"
#include "node.h"


using namespace fh_pk2;

bool ListIterator::hasNext(){
    return zeiger != nullptr;
}

const char* ListIterator::next(){
    element* temp = zeiger;
    zeiger = zeiger->next;
    return temp->text;
}