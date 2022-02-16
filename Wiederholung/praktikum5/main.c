#include <stdio.h>
#include "stringcat.h"
#include <string.h>
#include "fakultaet.h"

int main(){

    char *s1 = "C macht";
    char *s2 = " Spass!";
    printf("Ausgabe der neuen Stringkette ist: %s\n",stringcat(s1,s2));
    printf("Ausgabe der neuen Stringkette ist: %s\n",stringcat_alternativ(s1,s2));

    int input = 5;
    printf("Fakultaet von 5 ist: %.f\n",fakultaet(input));
    printf("Fakultaet von 5 ist: %.f\n",fakultaet_alternativ(input));
    return 0;
}