#include "asiII.h"
#include <stdio.h>

void ausgabe1(int s){
    for(int i = 0; i < 10; i++){
        int zeilenanfang = 32 + 10 * i;
        for(int j = 0; j < 10; j++){
            int erg = zeilenanfang + j;
            if(erg < 127){
                printf("%d ", erg);
                printf("%c ", erg);
            }
        }
        printf("\n");
    }
}