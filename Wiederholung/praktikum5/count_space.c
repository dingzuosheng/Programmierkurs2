#include <stdio.h>

int count_space(char s[]){
    int count = 0;
    int i = 0;
    while(s[i]!='\0'){
        if(s[i]==' '){
            count++;
        }
        i++;
    }
    return count;
}

int count_space(char s[]){
    int count = 0;
    char* zeiger = s;
    while(*zeiger!='\0'){
        if(*zeiger==' '){
            count++;
        }
        *zeiger = *(zeiger+1);
    }
    return count;
}