#include <stdio.h>
#define SIZE 2 

int array[SIZE];
int count = 0;
int anfang = 0;
int ende = 0;

void enqueue(int i){ // ende wird geaendert
    if(count == SIZE ){ // wenn die queue voll ist, wird array[ende] uebergeschrieben
        array[(ende-1)%SIZE]=i; // ende ist eine stelle nach rechts gezogen, deshalb sollte hier minus 1
    }
    if(count < SIZE){
        array[ende%SIZE]=i;  // i wird hinter ende hinzugefuegt
        ende++; 
        count++;
    }
}
int dequeue(){ // anfang wird geaendert
    if(count==0) return -1; // wenn die queue leer ist
    int erg = 0;
    
        erg = array[anfang%SIZE];
        anfang++;
        count --;
        return erg;
    
    
    
}