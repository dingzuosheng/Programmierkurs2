#include <stdio.h>
#define SIZE 2

typedef enum Flag{
    leer,
    besetzt,
    geloescht
} FlagT;

typedef struct element{
    int value;
    FlagT status;
} element_t;

static element_t dictionary[SIZE];

int insert(int a){
    int index = a % SIZE;
    if(dictionary[index].status != besetzt){
        dictionary[index].status = besetzt;
        dictionary[index].value = a;
        return 1;
    }else{
        int count = 1;
        while(count <= SIZE){
            if(dictionary[index+count].status != besetzt){
                dictionary[index+count].status = besetzt;
                dictionary[index+count].value = a;
                return 1;
            }else{
                count++;
            }
        }
    }
    return 0;
}

int member(int a){
    int index = a % SIZE;
    if(dictionary[index].status == leer) return 0;
    if(dictionary[index].status = besetzt && dictionary[index].value == a) return 1;
    int count = 1;
    while(count <= SIZE){
        if(dictionary[index+count].status == besetzt && dictionary[index+count].value == a){
            return 1;
        }else{
            count++;
        }
    }
}

int delete(int a){
    int index = a % SIZE;
    if(!member(a)){
        return 0;
    }else{
        int count = 1;
        while(count <= SIZE){
            if(dictionary[index + count].status == besetzt && dictionary[index + count].value == a){
                dictionary[index+count].status = geloescht;
                return 1;
            }else{
                count++;
            }
        }
    }
}