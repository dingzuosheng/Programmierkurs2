#include <stdlib.h>
#define SIZE 2

struct element{
    int value;
    struct element* next;
};

static struct element array[SIZE];

int insert(int a){
    int index = a % SIZE;
    struct element* neu = malloc(sizeof(struct element));
    neu->value = a;
    if(array[index].next==NULL){
        array[index].next = neu;
        neu->next = NULL;
        return 1;
    }else{
        neu->next = array[index].next;//sobald array[index] != NULL ist, das erste Element ist array[index].next
        array[index].next = neu;
        return 1;
    }
    return 0;
}

int member(int a){
    int index = a % SIZE;
    if(array[index].next == NULL) return 0;
    struct element* tmp = array[index].next;
    while(tmp!=NULL){
        if(tmp->value == a){
            return 1;
        }else{
            tmp = tmp->next;
        }
    }
    return 0;
}

int delete(int a){
    int index = a % SIZE;
    if(member(a)){
        struct element* tmp = array[index].next;
        // am anfang loeschen
        if(tmp->value == a){
            array[index].next = tmp->next;
            free(tmp);
            return 1;
        }
        // in der mittel loeschen
        struct element* vorgaenger = tmp;
        tmp = tmp->next;
        while(tmp){
            if(tmp->value == a){
                vorgaenger->next = tmp->next;
                free(tmp);
                return 1;
            }
            vorgaenger = tmp;
            tmp = tmp->next;
        }
    }
    return 0;
}