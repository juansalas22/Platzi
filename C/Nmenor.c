#include <stdio.h>
#include <math.h>

int main()
{
    int num1, num2;
   
    printf("Ingresa un numero: ");
    scanf("%i", &num1);

    printf("Ingresa otro numero: ");
    scanf("%i", &num2);

    if (num1 < num2)
        printf("El numero menor es: %i \n", num1);
    else 
        printf("El numero menor es: %i \n", num2);
   
    return 0;
} 