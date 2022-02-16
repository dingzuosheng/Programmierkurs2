#ifndef NODE_H_
#define NODE_H_



namespace fh_pk2{
template<class T>
struct element{
    T* text;
    element* prev;//struct kann in c++ entfallen
    element* next;
};
}
#endif