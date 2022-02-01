#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]){
    if(argc != 3){
        printf("Fehler: add benoetigt zwei Argumente\n");
    }else{
        int a = atoi(argv[1]);
        int b = atoi(argv[2]);
        printf("%d + %d = %d\n",a,b,a+b);
    }
    return 0;
}