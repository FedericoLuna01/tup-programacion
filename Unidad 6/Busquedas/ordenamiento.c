#include <stdio.h>
#include <stdlib.h>

void main()
{
    int arreglo[] = {4, 6, 3, 1, 7};
    int posMenor, aux;
    for (int i = 0; i < 5 - 1; i++)
    {
        posMenor = i;
        for (int j = i + 1; j < 5 - 1; j++)
        {
            if (arreglo[j] < arreglo[posMenor])
            {
                // printf("%i es menor a %i\n", arreglo[j], arreglo[posMenor]);
                posMenor = j;
            }
        }
        aux = arreglo[i];
        arreglo[i] = arreglo[posMenor];
        arreglo[posMenor] = aux;
    }

    for (int i = 0; i < 5; i++)
    {
        printf("%i ", arreglo[i]);
    }
}