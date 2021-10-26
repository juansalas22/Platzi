#include <stdio.h>

int main()
{
    int arm;
   
    printf("Escoge un arma:\n1. Pistola\n2. Escopeta\n3. Cuchillo\n");
    scanf("%i", &arm);

    switch (arm)
    {
    case 1:
        printf("Es un arma corta\n");
        break;
    case 2:
        printf("Es un arma larga\n");
        break;
    case 3:
        printf("Es un arma cortopunzante\n");
        break;
    
    default:
        printf("Escogiste una opcion invalida\n");
        break;
    }
   
    return 0;
} 