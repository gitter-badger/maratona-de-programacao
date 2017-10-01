#include <stdio.h>

int primo(int num)
{
    int c, d = 0;

    for(c = 1; c <= num; c++)
        if(num % c == 0) d++;
    
    if(d == 2) return 1;
    else return 0;
}

int main()
{
    int n = primo(7);

    if(n) printf("Sim");
    else printf("Não");

    return 0;
}

/* SAÍDA

Sim

*/
