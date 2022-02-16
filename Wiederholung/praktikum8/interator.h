#include <iostream>
#ifndef "ITERATOR_H_"

namespace fh_pk2{
class Iterator{
    public:
        virtual bool hasNext() = 0;
        virtual const char* next() = 0;
};
}
#endif