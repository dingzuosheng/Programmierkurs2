#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void copy(char* duplikat, const char* original){
    int i = 0;
    while(*duplikat++=*original++);
    *(duplikat+1) = '\0';
}

int main(){
    const char* original = "C macht Spass!"; 
    char* duplikat = (char*) malloc(strlen(original)+1);// dynamischen Speicherplatz reservieren, sonst gibt es Segmentation fault
    copy(duplikat,original);
    printf("%s",duplikat);
    return 0;
}