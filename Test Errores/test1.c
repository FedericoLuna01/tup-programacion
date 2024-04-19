#include <stdio.h>

void main()
{
    int edad;

    printf("Ingrese la edad: ");
    scanf("%i", edad);

    // Compila pero no funciona
    // Llega hasta esta linea
    printf("Edad: %i", edad);
    printf("Edad: %f", edad);
}