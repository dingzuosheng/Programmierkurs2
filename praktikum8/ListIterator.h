#ifndef LISTITERATOR_H_
#define LISTITERATOR_H_
#include "Iterator.h"
#include "node.h"
namespace fhdo_pk2{
class ListIterator: public Iterator{
    private:
        node* zeiger;
    public:
        ListIterator(node* zeiger):zeiger{zeiger}{}
        bool hasNext() override;
        const char* next() override;
};
}
#endif
