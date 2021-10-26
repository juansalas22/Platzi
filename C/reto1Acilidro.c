#include <stdio.h>

int main()
{
    int r, h;
    float P, Area;
    P = 3.14;
    printf("Ingresa el radio de una circunferencia: ");
    scanf("%i", &r);

    printf("Ingresa la altura de una circunferencia: ");
    scanf("%i", &h);

    Area = 2 * P * r * (r + h);

    printf("El valor del area de la circunferencia es: %f\n", Area);
   

    return 0;
}