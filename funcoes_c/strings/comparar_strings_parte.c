#include <stdio.h>
#include <string.h>

int main()
{
    char a[10] = "Curso de A";
    char b[10] = "Curso de B";
    int r;

    r = strncmp(a, b, 8); // Compara apenas os 8 primeiros caracteres

    printf("Retorno = %d\n", r);

    return 0;
}

/*
SE AS STRINGS SÃO IGUAIS = 0
SE A PRIMEIRA STRING É MENOR = -1
SE A SEGUNDA STRING É MAIOR = 1
*/

/* SAÍDA

Retorno = 0

*/
