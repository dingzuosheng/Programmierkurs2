#include <stdio.h>

double min(double a[],int n){
    double smallest = a[0];
    double* ptr = a;
    int i = 1;
    while(i < n){
        if(*ptr < smallest){
            smallest = *ptr;
        }
        *ptr = *(ptr+1);
    }
    return smallest;
}

double min(double a[],int n){
    double smallest = a[0];
    int i = 1;
    while(i < n){
        if(a[i] < smallest){
            smallest = a[i];
        }
        i++;
    }
    return smallest;
}