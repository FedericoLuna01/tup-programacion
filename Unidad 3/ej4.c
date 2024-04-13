#include <stdio.h>

/*
Ingresar un número e informar su factorial.
*/

void main()
{
    int numero, i;
    int factorial = 1;
    printf("Ingrese un numero: ");
    scanf("%i", &numero);
    // Asigno 1 a factorial porque si no le asigna un numero random de memoria
    for (i = 1; i <= numero; i++)
    {
        factorial = factorial * i;
    }
    printf("El factorial de %i es: %i", numero, factorial);
}