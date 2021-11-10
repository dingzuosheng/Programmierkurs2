#include <stdio.h>
#include "stringcat.h"
#include <stdlib.h>

char *stringcat(const char *str1, const char *str2)
{
    const char *temp = str1;
    int count1 = 0;
    while ((*temp++) != '\0')
    {
        count1++;
    }
    temp = str2;
    int count2 = 0;
    while ((*temp++) != '\0')
    {
        count2++;
    }
    int sum = count1 + count2 + 1;
    printf("Die anzahl von sum ist:%d\n", sum);
    char *new = malloc(sum * sizeof(char));
    int i = 0;
    while (i < count1)
    {
        new[i] = str1[i];
        i++;
    }
    int j = 0;
    while (j < count2)
    {
        new[count1 + j] = str2[j];
        j++;
    }
    new[sum - 1] = '\0';
    return new;
}
char *stringcatAlter(const char *str1, const char *str2)
{
    int size1 = 0;
    const char *temp = str1;
    while ((*temp++) != '\0')
    {
        size1++;
    }
    int size2 = 0;
    temp = str2;
    while ((*temp++) != '\0')
    {
        size2++;
    }
    int totalSize = size1 + size2 + 1;
    char *new = malloc(sizeof(char) * totalSize);
    int i = 0;
    while (i < size1)
    {
        new[i] = *str1;
        i++;
        str1++;
    }
    while (i < totalSize)
    {
        new[i] = *str2;
        i++;
        str2++;
    }
    new[totalSize - 1] = '\0';
    return new;
}