#ifndef LINKEDLIST_H_
#define LINKEDLIST_H_
#include "node.h"
#include "listIterator.h"



namespace fh_pk2{
template<class T>
class LinkedList{
    private:
        element<T>* start;
        element<T>* end;
        int size;

    public:
        LinkedList();
        LinkedList(const LinkedList& orig);
        ~LinkedList();
        int append(T* text);
        int insert(T* text, int p);
        int remove(int p);
        T* get(int p);
        void visit_all(void (*work)(T* t));
        Iterator<T>* iterator();
};
template<class T>
LinkedList<T>::LinkedList(): start{nullptr},end{nullptr}{}

template<class T>
LinkedList<T>::LinkedList(const LinkedList& orig):LinkedList(){
    element<T>* temp = orig.start;
    while(temp){
        this->append(temp->text);
        temp = temp->next;
    }
}
template<class T>
LinkedList<T>::~LinkedList(){
    while(remove(0)!=0);
}
template<class T>
int LinkedList<T>::append(T* text){
    element<T> *neu = new element<T>();
    neu->text = text;
    neu->next = nullptr;
    if(start == nullptr){
        neu->prev = nullptr;
        start = end = neu;
        size++;
        return 1;
    }else{
        neu->prev = end;
        end->next = neu;
        end = neu;
        size++;
        return 1;
    }
    return 0;
}
template<class T>
int LinkedList<T>::insert(T* text ,int p){
    element<T>* neu = new element<T>;
    neu->text = text;
    if(p==0){
        neu->prev = nullptr;
        neu->next = start;
        start->prev = neu;
        size++;
        return 1;
    }else if(p >= size - 1){
        return LinkedList<T>::append(text);
    }else{
        int count = 0;
        element<T>* temp = start;
        while(count < p){
            if(temp){
                temp = temp->next;
            }
            count++;
        }
        temp->prev->next = neu;
        neu->next = temp;
        neu->prev = tmp->prev;
        temp->prev = neu;
        size++;
        return 1;
    }
    return 0;
}

template<class T>
int LinkedList<T>::remove(int p){
    if(start == nullptr) return 0;
    element<T>* temp;
    if(p == 0){
        temp = start;
        if(start == end){
            delete temp;
            size--;
            return 1;
        }else{
            start = temp->next;
            start->prev = nullptr;
            delete temp;
            size--;
            return 1;
        }
    }else if(p >= size-1){
        temp = end;
        end = temp->prev;
        if(temp->prev != nullptr){
            temp->prev->next = nullptr;
        }else{
            head = nullptr;
        }
        delete temp;
        size--;
        return 1;
    }else{
        int count = 0;
        temp = start;
        while(count < p){    
            if(temp){
                temp = temp->next;
            }
            count++;
        }
        temp->prev->next = temp->next;
        temp->next->prev = temp->prev;
        size--;
        return 1;  
    }
}
template<class T>
T* LinkedList<T>::get(int p){
    if(p == 0){
        if(start != nullptr)
            return start->text;
        else
            return nullptr;
    }else if(p >= size){
        return nullptr;
    }else {
        int count = 0;
        element<T>* temp = start;
        while(count < p){
            if(temp){
                temp = temp->next;
            }
            count++;
        }
        return temp->text;
    }
}
template<class T>
void LinkedList<T>::visit_all(void (*work)(T* t)){
    /*if(start){
        element<T>* temp = start;
        while(temp){
            work(temp->text);
            temp = temp->next;
        }
    }*/
    Iterator*<T> it = iterator();
    while(it->hasNext(start)){
        work(it->next());
    }
    delete it;
}
template<class T>
Iterator<T>* LinkedList<T>::iterator(){
    Iterator<T>* iterator = new ListIterator<T>(start);
    return iterator;
}
}
#endif