#include <stdio.h>

int main()
{
    int x, y, aux;
    printf("Ingresa primero un numero para X y luego un numero para Y: ");
    scanf("%i%i", &x, &y);

    aux = x;
    x = y;
    y = aux;

    printf("El valor intercambiado del entero x es: %i\n", x);
    printf("El valor intercambiado del entero y es: %i\n", y);

    return 0;
}