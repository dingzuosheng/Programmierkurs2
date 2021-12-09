#ifndef NODE_H_
#define NODE_H_
namespace fhdo_pk2{
struct node{
    const char* data;
    node* next;
    node* previous;
};
}
#endif