#ifndef ITERATOR_H_
#define ITERATOR_H_
namespace fhdo_pk2{
class Iterator{
    public:
        virtual ~Iterator(){}
        virtual bool hasNext() = 0;
        virtual const char* next() = 0;
};
}
#endif