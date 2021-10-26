#include <stdio.h>
#include <math.h>

int main()
{
    int F, C;
   
    printf("Ingresa grados fahrenheit para convertirlos celcius: ");
    scanf("%i", &F);

    C = (F - 32) * 5 / 9;

    printf("El valor de celcius es: %i\n", C);
   

    return 0;
}