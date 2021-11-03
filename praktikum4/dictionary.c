#include "dictionary.h"
#include <stdlib.h> 


struct element{
    int value;
    struct element* next;
};

static struct element array[SIZE];

int insert(int a){
    int index = a%SIZE;
    struct element* neu = malloc(sizeof(struct element));
    neu->value = a;
    if(array[index].next==NULL){
        array[index].next = neu;
        neu->next = NULL;
        return 1;    
    } else {
        neu->next = array[index].next;
        array[index].next = neu;
        return 1;
    }
    return 0;// Speicherplatz nicht genug
}

int member(int a){
    int index = a % SIZE;
    if(array[index].next==NULL) return 0; // wenn es auf der Arrayindex keine verkettete List gibt
    struct element* tmp = array[index].next;
    while(tmp!=NULL){
        if(tmp->value==a){
            return 1;
        }else{
            tmp = tmp->next;
        }
    }
    return 0;// wenn keine gefunden wird
}

int delete(int a){
    int index = a % SIZE;
    if(array[index].next==NULL) return 0;
    struct element* tmp = array[index].next;
    if(tmp->value==a){ // am anfang loeschen
        array[index].next = tmp->next;
        free(tmp);
        return 1;
    }
    struct element* vorgaenger = tmp;
    tmp = tmp->next;
    while(tmp!=NULL){ // in der Mittel loschen
        if(tmp->value==a){
            vorgaenger->next = tmp->next;
            free(tmp);
            return 1;
        }else{
            vorgaenger = tmp;
            tmp = tmp->next;
        }        
    }
    return 0;
}
