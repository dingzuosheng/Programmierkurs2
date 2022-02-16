#include <iostream>
#include "iterator.h"
#include "node.h"
#ifndef "LISTITERATOR_H_"

namespace fh_pk2{
class ListIterator : public Iterator{
    private:
        element* zeiger;

    public:
        ListIterator(element* zeiger): zeiger{zeiger} {}
        bool hasNext() override;
        const char* next() override;
};
}
#endif