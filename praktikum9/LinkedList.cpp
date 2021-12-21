#include <iostream>
#include "LinkedList.h"
#include "ListIterator.h"
#include "Iterator.h"

using namespace fhdo_pk2;

template<class T>
LinkedList<T>::LinkedList(){
    head = nullptr;
    tail = nullptr;
    size = 0;
}

template<class T>
LinkedList<T>::LinkedList(const LinkedList& orig): LinkedList(){
   // this->head = this->tail = nullptr;
   // this->size = 0; 
    node* tmp = orig.head;
    while(tmp!=nullptr){
        this->append(tmp->data);   
        tmp = tmp->next;
    }
}

template<class T>
LinkedList<T>::~LinkedList(){
    while(remove(0));
}

template<class T>
int LinkedList<T>::append(T* text){
    node* neu = new node;
    neu->data = text;
    neu->next = nullptr;
    if(head == nullptr){
        neu->previous = nullptr;
        head = tail = neu;
        size++;
        return 1;
    }else {
        neu->previous = tail;
        tail->next = neu;
        tail = neu;
        size++;
        return 1;
    }
    return 0;
}

template<class T>
int LinkedList<T>::insert(T* text, int p){
    node* tmp = head;
    node* neu = new node;
    neu->data = text;
    if(p==0){ // am anfang hinzufuegen
        neu->previous = nullptr;
        neu->next = head;
        head->previous = neu;
        head =  neu;
        size++;
        return 1;
    }else if(p>size){ // am ende hinzufuegen
        return LinkedList<T>::append(text);
    }else{      // in der mittel hinzufuegen
        int i = 0;
        tmp = head;
        while(i<p){
            tmp = tmp->next;
            i++;
        }
        //tmp ist auf der Position von p      [tmp->prev][tmp] --> [tmp->prev][<-neu->][<-tmp]
        tmp->previous->next = neu;
        neu->next = tmp;
        neu->previous = tmp->previous;
        tmp->previous = neu;
        size++;
        return 1;
    }
    return 0;
}

template<class T>
int LinkedList<T>::remove(int p){
    node* tmp;
    if(size==0) return 0;
    if(p==0){// am anfang loeschen
        tmp = head;
        head = tmp->next;//
        if(head != nullptr){ 
            head->previous = nullptr;
        } else{
            tail = nullptr; 
        }
        delete tmp;
        size--;
        return 1;

    } else if(p>=size-1){// das letzte Element loeschen
        tmp = tail;
        tail = tmp->previous;
        if(tmp->previous!=nullptr){
            tmp->previous->next = nullptr;
        }else{
            head = nullptr;  
        }    
        delete tmp;
        size--;
        return 1;
    
    }else{ // in der Mittel loeschen
        int i = 0;
        tmp = head;
        while(i<p){
            tmp = tmp->next;
            i++;
        }
        // delete tmp;
        tmp->previous->next = tmp->next;
        tmp->next->previous = tmp->previous;
        delete tmp;
        size--;
        return 1;
    }
}
template<class T>
T* LinkedList<T>::get(int p){
    node* tmp;
    if(p>size){
        return nullptr;
    }else{
        int i = 0;
        tmp = head;
        while(i<p){
            i++;
            tmp = tmp->next;
        }
        // liefert tmp->next zurueck
        return tmp->data;
    }
}

template<class T>
int LinkedList<T>::index_of(T* text){
    node* tmp = head;
    int i = 0;
    while(tmp!=nullptr){
        if(tmp->data==text){
            return i;
        }
        tmp = tmp->next;
        i++;
    }
    return 0;
}

template<class T>
T* LinkedList<T>::first(){
    if(head!=nullptr){
        return head->data;
    }
    return nullptr;
}

template<class T>
T* LinkedList<T>::last(){
    if(tail!=nullptr){
        return tail->data;
    }
    return nullptr;
}

//#include <cstdio>
template<class T> 
void LinkedList<T>::visit_all(void (*work)(T* t)){
    /*printf("head: %p\n", head);
    node* tmp = head;
    while(tmp!=nullptr){
        work(tmp->data);
        tmp = tmp->next;
    }*/
    Iterator<T>* it = iterator();
    while(it->hasNext()){ // durchlaufen? 
        work(it->next()); 
    }
    delete it;
}

template<class T>
Iterator<T>* LinkedList<T>::iterator(){
    Iterator<T>* iterator = new ListIterator(head);
    return iterator;
}
