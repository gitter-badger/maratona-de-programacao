#include <stdio.h>
#include <string.h>

int main()
{
    char a[5] = "Curso";
    char b[5] = " C";

    strcat(a, b);

    printf("%s\n", a);

    return 0;
}

/* SAÍDA

Curso C

*/
