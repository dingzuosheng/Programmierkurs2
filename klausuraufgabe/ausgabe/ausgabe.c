#include <stdio.h>

void ausgabe(){
    int **x;
    int **y;
    int r[] = {10,15,20,25};
    int *f[2];
    int *g[2];
    f[0] = (r+3);//f[0] = 25
    printf("*f[0] ist: %i\n",*f[0]);
    g[1] = &r[0];//g[1] = 10
    printf("*g[1] ist: %i\n",*g[1]);
    *(f+1) = (r+2);//*(f+1) = 20
    printf("**(f+1) ist: %i\n",**(f+1));
    g[0] = r;// g[0] = {10,15,20,25}, g[1] = 10;
    printf("*g[0] ist: %i\n",*g[0]);
    x = g;// x = {{10,15,20,25},{10}}
    printf("**x ist: %d\n",**x);
    printf("**(x+1) ist: %d\n",**(x+1));
    printf("x[0][1] ist: %d\n",x[0][1]);
    y = f;// y = {{25},{20}}
    printf("**y ist: %d\n",**y);
    printf("**(y+1) ist: %d\n",**(y+1));
    printf("%i\n",**x + **(y+1));
}

int main(){
    ausgabe();
    return 0;
}