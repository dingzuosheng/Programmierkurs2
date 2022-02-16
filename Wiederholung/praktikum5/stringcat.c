#include <stdio.h>
#include <stdlib.h>
#include "stringcat.h"

char* stringcat(const char* str1,const char* str2){
    int size1 = 0;
    const char* tmp = str1;
    while((*tmp++) != '\0'){
        size1++;
    }
    int size2 = 0;
    tmp = str2;
    while((*tmp++) != '\0'){
        size2++;
    }
    int totalSize = size1 + size2 + 1;
    char* neu = (char*) malloc(sizeof(char) * totalSize);
    int i = 0;
    while(i < size1){
        neu[i] = str1[i];
        i++;
    }
    int j = 0;
    while(j < size2){
        neu[size1+j] = str2[j];
        j++;
    }
    neu[totalSize-1] = '\0';
    return neu;
}

char* stringcat_alternativ(const char* str1, const char* str2){
    int count1 = 0;
    const char* temp = str1;
    while(*temp++ != '\0' ){
        count1++;
    }
    int count2 = 0;
    temp = str2;
    while(*temp++ != '\0'){
        count2++;
    }
    int sum = count1 + count2 + 1;
    char* new = (char*) malloc(sizeof(char) * sum);
    int i = 0;
    while(i < count1){
        new[i] = *str1++;
        i++;
    }
    int j = 0;
    while(j < count2){
        new[count1+j] = *str2++;
        j++;
    }
    new[sum-1] = '\0';
    return new;
}