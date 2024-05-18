#include <stdio.h>
#include <stdlib.h>

/*
Escribir un algoritmo que permita ingresar 10 valores numéricos en un arreglo y que como resultado devuelva el mayor de todos los valores ingresados.
*/

void main()
{
    int arreglo[10], max = 0;

    for (int i = 0; i < 10; i++)
    {
        printf("Ingrese el numero %i: ", i + 1);
        scanf("%i", &arreglo[i]);

        if (max < arreglo[i])
        {
            max = arreglo[i];
        }
    }

    printf("El mayor es: %i", max);
}