#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void copy(char* duplikat, const char* original){
    int i = 0;
    while(*duplikat++=*original++);
    *(duplikat+1) = '\0';
}
char* copy_string(char* orig){
    //char copy[strlen(orig)+1];
    char* copy = (char*) malloc(strlen(orig)+1);
    int i = 0;
    while((copy[i]=*(orig+i))){i++;}
    copy[i+1]='\0';
    return copy;
}
int main(){
    const char* original = "C macht Spass!"; 
    char* orig = "C macht Spass!";
    char* duplikat = (char*) malloc(strlen(original)+1);// dynamischen Speicherplatz reservieren, sonst gibt es Segmentation fault
    copy(duplikat,original);
    printf("%s\n",duplikat);
    char* text = copy_string(orig);
    printf("%s\n",text);
    return 0;
}