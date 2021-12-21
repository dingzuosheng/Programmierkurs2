#ifndef NODE_H_
#define NODE_H_
namespace fhdo_pk2{
template<class T>
struct node{  // sobald node typsiert wurde, sollten die node überall wo die benutzt werden  mit <T> markiert werden
    T data; // T = const char* deshalb hinter T sollte kein weiteres * stehen
    node* next;
    node* previous;
};
}
#endif