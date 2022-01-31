#include <stdio.h>
#include <string.h>

void strcpy(char* duplikat, const char* original){
    while(*duplikat++==*original++);
}

int main(){
    const char* original = "C macht Spass!";
    char* duplikat;
    strcpy(duplikat,original);
    printf("%s",duplikat);
    return 0;
}