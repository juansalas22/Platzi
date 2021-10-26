#include <stdio.h>

int main()
{
    int res1, res2, res3;
    int mul [3][4] = {
        {1,1,1,1},
        {4,3,2,1},
        {9,8,4,5}
    };

    res1 = mul[0][0] + mul[0][1] + mul[0][2] + mul[0][3];

    printf("\n El resultado de la suma de la primera fila: \t\t %i", res1);

    res2 = mul[1][0] + mul[1][1] + mul[1][2] + mul[1][3];

    printf("\n El resultado de la suma de la segunda fila: \t\t %i", res2);

    
    res3 = mul[2][0] + mul[2][1] + mul[2][2] + mul[2][3];

    printf("\n El resultado de la suma de la segunda fila: \t\t %i", res3);

    
    
    return 0;
} 