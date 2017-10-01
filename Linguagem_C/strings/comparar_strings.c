#include <stdio.h>
#include <string.h>

int main()
{
    char s1[3] = "abc";
    char s2[3] = "abd";
    int r;

    r = strcmp(s1, s2);

    printf("Retorno = %d\n", r);

    return 0;
}

/*
SE AS STRINGS SÃO IGUAIS = 0
SE A PRIMEIRA STRING É MENOR = -1
SE A SEGUNDA STRING É MAIOR = 1
*/

/* SAÍDA

Retorno = -1

*/
