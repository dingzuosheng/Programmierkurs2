#include <iostream>
#include "linkedlist.h

LinkedList::LinkedList(): start{nullptr},end{nullptr}{}

int LinkedList::append(const char* text){
    element *neu = new element;
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

int LinkedList::insert(const char* text ,int p){
    element* neu = new element;
    neu->text = text;
    if(p==0){
        neu->prev = nullptr;
        neu->next = start;
        start->prev = neu;
        size++;
        return 1;
    }else if(p >= size - 1){
        return LinkedList::append(text);
    }else{
        int count = 0;
        element* temp = start;
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


int LinkedList::remove(int p){
    if(start == nullptr) return 0;
    element* temp;
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

const char* LinkedList::get(int p){
    if(p == 0){
        if(start != nullptr)
            return start->text;
        else
            return nullptr;
    }else if(p >= size){
        return nullptr;
    }else {
        int count = 0;
        element* temp = start;
        while(count < p){
            if(temp){
                temp = temp->next;
            }
            count++;
        }
        return temp->text;
    }
}

int LinkedList::index_of(const char* text){
    element* temp = start;
    int count = 0;
    while(temp){
        if(temp->text == text){
            return count;
        }
        temp = temp->next;
        count++;
    }
}

const char* LinkedList::first(){
    if(start){
        return start->text;
    }else{
        return nullptr;
    }
}

const char* LinkedList::last(){
    if(end){
        return end->text;
    }else{
        return nullptr;
    }
}

void LinkedList::visit_all(void (*work)(const char* t)){
    if(start){
        element* temp = start;
        while(temp){
            work(temp->text);
            temp = temp->next;
        }
    }
}