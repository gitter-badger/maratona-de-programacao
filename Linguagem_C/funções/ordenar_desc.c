#include <stdio.h>

int *ordernar(int quant_num, int *num)
{
    int x, y, temp, desc[quant_num];

    for(x = 0; x < quant_num; x++)
    {
        for(y = 0; y < quant_num; y++)
        {
            if(num[y] > num[y + 1])
            {
                temp = num[y];
                num[y] = num[y + 1];
                num[y + 1] = temp;
            }
        }
    }

    for(x = quant_num - 1; x >= 0; x--) desc[x] = num[quant_num - x];

    for(x = 0; x < quant_num; x++) num[x] = desc[x];

    num[quant_num] = 0;

    return num;
}

int main()
{
    int num[3];

    num[0] = 3;
    num[1] = 2;
    num[2] = 4;

    ordernar(3, num);

    printf("%d\n", num[0]);
    printf("%d\n", num[1]);
    printf("%d\n", num[2]);

    return 0;
}

/* SAÍDA

4
3
2

*/
