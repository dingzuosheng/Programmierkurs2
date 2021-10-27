#include <stdio.h>
#include "to_upper_case.h"

void upper(char text[]){
    int i=0;
    while(text[i]!='\0'){
        text[i]=to_upper_case(text[i]);
        i++;
    }
}