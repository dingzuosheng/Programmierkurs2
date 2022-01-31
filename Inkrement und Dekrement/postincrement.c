#include <stdio.h>

void postincrement(){
    int a = 0;
    int b = a++;
    /*int b = a;
    a = a + 1;*/
    printf("Der Wert von a ist: %d\n",a);
    printf("Der Wert von b ist: %d\n",b);
} 