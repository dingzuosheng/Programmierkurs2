#ifndef LINKEDLIST_H_
#define LINKEDLIST_H_
#include "node.h"
#include "ListIterator.h"
namespace fhdo_pk2{
class LinkedList{
    private:
        node* head;
        node* tail;
        int size;
        
    public:
        LinkedList();
        LinkedList(const LinkedList& orig);
        ~LinkedList();
        int append(const char* text);
        int insert(const char* text, int p);
        int remove(int p);
        const char *get(int p);
        int index_of(const char *text);
        const char *first();
        const char *last();
        void visit_all(void (*work)(const char* t));
        Iterator* iterator();
};
}
#endif