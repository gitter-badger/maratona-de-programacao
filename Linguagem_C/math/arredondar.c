#include <stdio.h>
#include <math.h>

int main()
{
    float n1 = 5.7;
    float n2 = 5.4;
    float N1, N2;

    // ARREDONDAR PARA BAIXO
    N1 = floor(n1);
    N2 = floor(n2);
    printf("%f\n", N1);
    printf("%f\n", N2);

    printf("\n===============\n\n");

    // ARREDONDAR PARA CIMA
    N1 = ceil(n1);
    N2 = ceil(n2);
    printf("%f\n", N1);
    printf("%f\n", N2);

    printf("\n===============\n\n");

    // ARREDONDAR PARA O MAI PRÓXIMO
    N1 = round(n1);
    N2 = round(n2);
    printf("%f\n", N1);
    printf("%f\n", N2);

    return 0;
}

/* SAÍDA

5.000000
5.000000

===============

6.000000
6.000000

===============

6.000000
5.000000

*/
