#include <stdio.h>


void swap(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}
int comparelth(int x, int y){
    if(x == y) return 0;
    if(x < y) return -1;
    return 1;
}
int comparehtl(int x, int y){
    return -1*comparelth(x,y);
}
void bubblesort(int feld[],int length, int (*compare_to)(int a, int b)){
    int sorted = 1;
    int i, j;
    for(i = 0;i< length;i++){
        sorted = 1;
        for(j = 0;j<length - i -1;j++){
            if((*compare_to)(feld[j],feld[j+1])>0){
                swap(&feld[j],&feld[j+1]);
                sorted = 0;
            }
        }
        if(sorted) break;
    }
}
int main(){
    int feld[] = {3,5,4,1,2,8,9,7,6,0};
    bubblesort(feld,10,&comparelth);
    int i;
    for(i=0;i<10;i++){
        printf("%d ",feld[i]);
    }
    printf("\n");
    bubblesort(feld,10,&comparehtl);
    for(i=0;i<10;i++){
        printf("%d ",feld[i]);
    }
    printf("\n");
    return 0;
}