#include <stdio.h>
#include "countspace_index.h"
#include "countspace_zeiger.h"
#include "min.h"
#include "stringcat.h"
#include "fakultaet.h"

int main()
{
    char text[] = "Hallo Dortmund !";
    char *inhalt = "Hallo Dortmund ! ";
    double a[] = {1.22, 3.14, -2.0, -3.0};
    const char *str1 = "Hallo";
    const char *str2 = "Dortmund!";

    printf("Die Anzahl von Leerzeichen in \"%s\"ist %d\n", text, countspace_index(text));
    printf("Die Anzahl von Leerzeichen in \"%s\"ist %d\n", inhalt, countspace_index(inhalt));
    printf("Die kleinste Zahl ist:%f\n", min(a, 4));
    printf("Das neues Zeichenkette ist %s\n", stringcat(str1, str2));
    printf("Das neues Zeichenkette ist %s\n", stringcatAlter(str1, str2));
    printf("Das Ergebnis von (10 0) ist %d\n", bionomial(10, 0));
    printf("Das Ergebnis von (10 1) ist %d\n", bionomial(10, 1));
    printf("Das Ergebnis von (10 10) ist %d\n", bionomial(10, 10));
    printf("Das Ergebnis von (49 6) ist %d\n", bionomial(49, 6));

    return 0;
}