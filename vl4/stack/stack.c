#include <stdio.h>
#include <stdlib.h>

struct element{
    int key;
    struct element* next;
};

struct element* top = NULL;

int push(int k){
    struct element *neu = malloc(sizeof(struct element));
    if(neu != NULL){
        neu->key = k;
        neu->next = top;
        top = neu;
        return 1;
    }
    return 0;
}

int pop(){
    if(top != NULL){
        int k = top->key;
        struct element* tmp = top;
        top = top->next;
        free(tmp);
        return k;
    }
    return -1;
}

int main(){
    int i = 0;
    for(i = 1; i <= 100; i++){
        push(i);
    }
    for(i = 0; i < 100; i++){
        printf("%d\n",pop());
    }
    return 0;
}