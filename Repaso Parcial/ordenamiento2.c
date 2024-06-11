#include <stdio.h>
#include <stdlib.h>

void main()
{
    int arreglo[] = {4, 6, 3, 1, 7};
    int aux;
    for (int i = 0; i < 5 - 1; i++)
    {
        for (int j = i + 1; j < 5 - 1; j++)
        {
            if (arreglo[j] < arreglo[i])
            {
                aux = arreglo[i];
                arreglo[i] = arreglo[j];
                arreglo[j] = aux;
            }
        }
    }

    for (int i = 0; i < 5; i++)
    {
        printf("%i ", arreglo[i]);
    }
}