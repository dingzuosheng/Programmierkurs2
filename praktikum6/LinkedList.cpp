#include <iostream>
#include "LinkedList.h"

LinkedList::LinkedList(){
    head = nullptr;
    tail = nullptr;
    size = 0;
}


int LinkedList::append(const char* text){
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

int LinkedList::insert(const char* text, int p){
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
        return LinkedList::append(text);
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

int LinkedList::remove(int p){
    node* tmp;
    if(size==0) return 0;
    if(p==0){// am anfang loeschen
        tmp = head;
        head = tmp->next;
        head->previous = nullptr;
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

const char* LinkedList::get(int p){
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

int LinkedList::index_of(const char* text){
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

const char* LinkedList::first(){
    if(head!=nullptr){
        return head->data;
    }
    return nullptr;
}

const char* LinkedList::last(){
    if(tail!=nullptr){
        return tail->data;
    }
    return nullptr;
}

//#include <cstdio> 
void LinkedList::visit_all(void (*work)(const char* t)){
//    printf("head: %p\n", head);
    node* tmp = head;
    while(tmp!=nullptr){
        work(tmp->data);
        tmp = tmp->next;
    }
}