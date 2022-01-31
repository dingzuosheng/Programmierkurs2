#include <stdio.h>

void preincrement(){
    int a = 0;
    int b = ++a;
    /*a = a + 1;
    int b = a;*/
    printf("Der Wert von a ist: %d\n",a);
    printf("Der Wert von b ist: %d\n",b);
}