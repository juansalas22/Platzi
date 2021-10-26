#include <stdio.h>
#include <math.h>

int main()
{
    int Adiv = 5;
    int numU;
   
    printf("Adivina el numero de 1 a 10: ");
    scanf("%i", &numU);

    if (numU == Adiv)
        printf("Adivinaste el numero ");
    else 
        printf("No adivinaste ");
   
    return 0;
}
//Probando el sistema de versiones GIT