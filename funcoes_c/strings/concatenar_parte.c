#include <stdio.h>
#include <string.h>

int main()
{
    char a[10] = "Curso ";
    char b[10] = " de C na";

    strncat(a, b, 5);

    printf("%s\n", a);

    return 0;
}

/* SAÍDA

Curso de C

*/
