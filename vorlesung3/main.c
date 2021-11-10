#include <stdio.h>

int laenge(char text[]){
    int counter = 0;
    while(text[counter]){
        counter++;
    }
    return counter;
}

int main(){
    char text[100]="Hallo PK2";

    printf("Laenge = %d\n", laenge(text));
    return 0;
}