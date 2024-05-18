#include <stdio.h>
#include <stdlib.h>

void main()
{
    int n;

    do
    {
        printf("Ingrese la cantidad de numeros que desea escanear: ");
        scanf("%d", &n);
    } while (n <= 0);

    int arreglo[n];

    for (int i = 0; i < n; i++)
    {
        printf("Ingrese el valor %i: ", i);
        scanf("%i", &arreglo[i]);
    }

    for (int i = 0; i < n; i++)
    {
        printf("Los valores son %i\n", arreglo[i]);
    }
}