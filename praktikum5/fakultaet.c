#include "fakultaet.h"

double fakultaet(int n)
{
    if (n == 0)
        return 1;
    if (n > 0)
    {
        return n * fakultaet(n - 1);
    }
}

double bionomial(int n, int k)
{
    double zaehler = fakultaet(n);
    double nenner1 = fakultaet(k);
    double nenner2 = fakultaet(n - k);
    return zaehler / (nenner1 * nenner2);
}