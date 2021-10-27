#include <stdio.h>
#define SIZE 2

typedef enum Flag{ // das Flag von einem Arrayfeld definieren
    leer,
    besetzt,
    geloescht
} FlagT;

typedef struct Element { // das Arrayelement definieren
    int value;
    FlagT status;
} Element_t;

static Element_t dictionary[SIZE]; // ein Array von dem Typ Element_t definieren

int insert(int a){
    int index = a % SIZE;
    if(dictionary[index].status == leer || dictionary[index].status == geloescht){
        dictionary[index].value = a;
        dictionary[index].status = besetzt;
        return 1;
    } else {
        int count = 1;
        while(count <= SIZE){
            if(dictionary[index+count].status != besetzt){
                dictionary[index+count].value = a;
                dictionary[index+count].status = besetzt; 
                return 1;
            }else{
                count ++;
            }
        }
    }
    return 0;
} 

int member(int a){
    int index = a % SIZE;
    if(dictionary[index].status == leer) return 0;// wenn die Position leer ist
    if(dictionary[index].status == besetzt && dictionary[index].value == a) return 1;// wenn die Position gerade passt.
    int count = 1;
    while(count <= SIZE) {
        if(dictionary[index+count].status == besetzt && dictionary[index+count].value == a){
            return 1;
        } else {
            count ++;
        }
    } 
    return 0;
}

int delete(int a){
    int index = a % SIZE;
    if(member(a)){
        int count = 1;
        while(count <= SIZE){
            if(dictionary[index+count].status == besetzt && dictionary[index+count].value == a){
                dictionary[index+count].status == geloescht; 
                return 1;
            } else {
                count ++;
            }
        }  
    } else {
        return 0;
    }
}

