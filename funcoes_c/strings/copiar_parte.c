#include <stdio.h>
#include <string.h>

int main()
{
    char a[10] = "1234567890";
    char b[5];

    strncpy(b, a, 5);

    printf("Valor = %s\n", b);

    return 0;
}

/* SAÍDA

Valor = 12345

*/
