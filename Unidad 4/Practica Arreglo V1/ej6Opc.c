#include <stdio.h>
#include <stdlib.h>

/*
Escriba un algoritmo donde se le pida al usuario que ingrese una matriz cuadrada de dimensión 3. Luego mostrar los elementos de la diagonal principal.
*/

void main()
{
    int matriz[3][3];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Ingrese el valor de la posicion %i, %i: ", i, j);
            scanf("%i", &matriz[i][j]);
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (i == j)
            {
                printf("%i\n", matriz[i][j]);
            }
        }
    }
}