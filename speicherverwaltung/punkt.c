#include <stdio.h>
#include <stdlib.h>

struct Punkt{
    double x;
    double y;
};

typedef struct Punkt t_punkt;

int main(){
    t_punkt p1;
    p1.x = 10.0;
    p1.y = 20.0;

    printf("(%.2lf, %.2lf)\n", p1.x, p1.y);

    t_punkt *ptr;
    ptr = malloc(sizeof(t_punkt));
    if(ptr){
        ptr->x = 10.5;
        ptr->y = 20.5;

        printf("(%.2lf, %.2lf)\n",ptr->x, ptr->y);
        free(ptr);
    }
    return 0;
}