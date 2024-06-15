#include <stdio.h>
#include <stdlib.h>

int busquedaDicotomica(int array[], int numABuscar, int tamanio);

void main()
{
    int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int numABuscar, posEncontrado;
    printf("Ingrese un numero: ");
    scanf("%i", &numABuscar);

    posEncontrado = busquedaDicotomica(array, numABuscar, 10);

    if (posEncontrado != -1)
    {
        printf("El numero %d se encontro en la posicion %i", array[posEncontrado], posEncontrado);
    }
    else
    {
        printf("El numero no se encontro\n");
    }
}

int busquedaDicotomica(int array[], int numABuscar, int tamanio)
{
    int pos = -1, encontrado = 0;
    int centro, superior, inferior;

    inferior = 0;
    superior = tamanio - 1;
    do
    {
        centro = (inferior + superior) / 2;

        if (array[centro] == numABuscar)
        {
            pos = centro;
            encontrado = 1;
        }
        else
        {
            if (array[centro] < numABuscar)
            {
                inferior = centro + 1;
            }
            else
            {
                superior = centro - 1;
            }
        }
    } while (encontrado == 0 && inferior <= superior);

    return pos;
}