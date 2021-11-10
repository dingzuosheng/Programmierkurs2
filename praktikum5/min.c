#include <stdio.h>

double min(double a[], int n){
    if(n == 0) return 0.0;
    double smallest = a[0];
    int i = 1;
    while(i<n){
        if(a[i]<smallest){
            smallest = a[i];
        }
        i++;
    }
    return smallest;
}