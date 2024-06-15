#include <stdio.h>
#include <stdlib.h>

int busquedaSecuencial(int array[], int numeroABuscar);

void main()
{
    int array[5] = {3, 5, 2, 7, 8};
    int numeroABuscar, posEncontrado;

    printf("Ingrese un numero: ");
    scanf("%d", &numeroABuscar);

    posEncontrado = busquedaSecuencial(array, numeroABuscar);

    if (posEncontrado != -1)
    {
        printf("El numero %d se encontro en la posicion %i", array[posEncontrado], posEncontrado);
    }
    else
    {
        printf("El numero no se encontro\n");
    }
}

int busquedaSecuencial(int array[], int numeroABuscar)
{
    int pos = -1, encontrado = 0, i = 0;

    // en caso de que no se haya encontrado y que i no
    // haya terminado de recorrer el array sigue
    while (encontrado == 0 && i < 5)
    {
        if (numeroABuscar == array[i])
        // En caso de tipo string
        // if (strcmp(datos[i][2], dni) == 0)
        {
            pos = i;
            encontrado = 1;
            i = 5;
        }
        i++;
    }

    return pos;
}