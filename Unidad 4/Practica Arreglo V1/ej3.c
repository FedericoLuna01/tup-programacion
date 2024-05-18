#include <stdio.h>
#include <stdlib.h>

/*
Desarrollar un algoritmo que permita ingresar 5 datos numéricos en un arreglo y que luego los sume a todos y muestre el resultado en pantalla
*/

void main()
{
    int arreglo[5], suma = 0;

    for (int i = 0; i < 5; i++)
    {
        printf("Ingrese el numero %i: ", i + 1);
        scanf("%i", &arreglo[i]);
        suma += arreglo[i];
    }

    printf("La suma es: %i", suma);
}