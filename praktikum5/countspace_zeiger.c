#include <stdio.h>

int countspace_zeiger(char *s)
{
    char *zeiger = s;
    int count = 0;
    while (*zeiger != '\0')
    {
        if (*zeiger == ' ')
        {
            count++;
        }
        *zeiger = *(zeiger + 1);
    }
    return count;
}