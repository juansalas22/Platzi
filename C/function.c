#include <stdio.h>

int power(int base, int n);

int main()
{
    int i;
    for ( i = 0; i < 10; i++)
    {
        /* code */
        printf("n = %d El resultado de la potencia = %d\n", i, power(2,i));
    }
    return 0;
    
}

int power(int base, int n)
{
    int i, p;
    p = 1;
    for ( i = 1; i <= n; i++)
    {
        /* code */
        p = p * base;
    }
    return p;
}