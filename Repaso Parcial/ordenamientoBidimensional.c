#include <stdio.h>
#include <stdlib.h>

#define COLUMNAS 3
#define FILAS 3
#define COL_ORDENAR 2

void main()
{
    int arreglo[COLUMNAS][FILAS] = {
        {1, 5, 3},
        {4, 2, 9},
        {6, 4, 2}};

    int aux;
    for (int i = 0; i < COLUMNAS - 1; i++)
    {
        for (int j = i + 1; j < FILAS; j++)
        {
            if (arreglo[j][COL_ORDENAR] < arreglo[i][COL_ORDENAR])
            {
                for (int k = 0; k < COLUMNAS; k++)
                {
                    aux = arreglo[i][k];
                    arreglo[i][k] = arreglo[j][k];
                    arreglo[j][k] = aux;
                }
            }
        }
    }

    for (int i = 0; i < COLUMNAS; i++)
    {
        for (int j = 0; j < FILAS; j++)
        {
            printf("%i ", arreglo[i][j]);
        }
        printf("\n");
    }
}