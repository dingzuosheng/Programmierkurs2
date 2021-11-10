#include "countspace_index.h"

int countspace_index(char s[]){
    int count = 0; 
    int i = 0;
    while(s[i]!='\0'){ /*in der AsiII Table ist der Wert von einem leeren Zeichen 32*/
        if(s[i]==32){
            count++;
        }
        i++;
    }
    return count;
}