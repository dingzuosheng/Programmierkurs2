#include <stdio.h>

int a(int n){
    int i;
    int j = 1;
    for(i = 1; i <= n;i++){
        j *=i;
    }
    return j;
}
int ar(int n){
    if(n>0) return n*a(n-1);
}
int main(){
    int n = 4;
    printf("Das Ergebnis von Produktion ist: %d\n",a(4));
    printf("Das Ergebnis von Produktion ist: %d\n",ar(4));
    return 0;
}