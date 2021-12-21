#ifndef ITERATOR_H_
#define ITERATOR_H_
namespace fhdo_pk2{
template<class T>
class Iterator{
    public:
        virtual ~Iterator(){}
        virtual bool hasNext() = 0;
        virtual T next() = 0;
};
}
#endif