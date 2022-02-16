#include "node.h"
#include "listIterator.h"
#ifndef "LINKEDLIST_H_"


namespace fh_pk2{
class LinkedList{
    private:
        element* start;
        element* end;
        int size;

    public:
        LinkedList();
        LinkedList(const LinkedList& orig);
        ~LinkedList();
        int append(const char* text);
        int insert(const char* text, int p);
        int remove(int p);
        const char* get(int p);
        int index_of(const char* text);
        const char* first();
        const char* last();
        void visit_all(void (*work)(const char* t));
        Iterator* iterator();
};
}
#endif