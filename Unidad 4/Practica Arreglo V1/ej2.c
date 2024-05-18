#include <stdio.h>
#include <stdlib.h>

/*
Escribir un algoritmo que permita al usuario ingresar 5 números y luego imprimirlos en pantalla.
*/

void main()
{
    int arreglo[5];

    for (int i = 0; i < 5; i++)
    {
        printf("Ingrese el numero %i: ", i + 1);
        scanf("%i", &arreglo[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        printf("%i, ", arreglo[i]);
    }

    return 0;
}