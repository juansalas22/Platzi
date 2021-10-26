#include <stdio.h>
#include <math.h>

int main()
{
    int cal;
   
    printf("Ingresa la calificacion del alumno: ");
    scanf("%i", &cal);

    if (cal < 60)
        printf("El alumno esta reprobado ");
        else if (cal > 60 && cal <= 90)
        printf("El alumno esta aprobado ");
        else if (cal > 90)
        printf("El alumno esta aprobado :) ");
   
    return 0;
}