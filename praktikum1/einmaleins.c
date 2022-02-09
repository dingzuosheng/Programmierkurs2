#include "einmaleins.h"
#include <stdio.h>

void ausgabe2(int a, int b){
    printf("Einmaleins\n");
    printf("Von: %d\n",a);
    printf("Bis: %d\n",b);
    for(int i = 0; i < a; i++){
        for(int j = 0; j < b - a + 1; j++){
            printf("%d ",a * (i + 1) + j * (i + 1));
        }
        printf("\n");
    }
}