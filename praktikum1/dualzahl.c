#include "dualzahl.h"
#include <stdio.h>

void dualzahl(int x){
    char erg[16];
    int i = 0;
    if(x >= 0 && x <= 65535){
        while(x > 0){
            if(x % 2 == 0)
                erg[i++] = '0';
            else
                erg[i++] = '1';
            x = x / 2;
        }
        while(i < 16){
            erg[i++] = '0';
        }
        for(int j = 16; j >= 0; j--){
            if(erg[j] != '\0'){
                printf("%c",erg[j]);
            }
        }
        printf("\n");
    }else{
        printf("Diese Zahl ist zu groß");
    }
}