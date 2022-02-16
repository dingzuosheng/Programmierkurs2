#include <stdio.h>
#include "fakultaet.h"

double fakultaet(int n){
    if(n == 0) return 1;
    if(n > 0)  return n * fakultaet(n-1);
}

double fakultaet_alternativ(int n){
    int erg = 1;
    int i = 1;
    while(i <= n){
        erg*=i;
        i++;
    }
    return erg;
}