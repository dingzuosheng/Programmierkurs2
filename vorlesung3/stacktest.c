#include <stdio.h>
#include "stack.h"

int main(){
    int i;
    for(i=1;i<=10;i++){
        push(i);
    }
    for(i=0; i < 10;i++){
        printf("%d\n", pop());
    }

    return 0;
}