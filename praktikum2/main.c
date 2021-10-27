#include <stdio.h>
#include "upper.h"
int main(){
    char text[] = "Hallo, Dortmund!"; // char* text ist gleich wie char text[] 
    upper(text);
    printf("%s\n",text);
    return 0;
}