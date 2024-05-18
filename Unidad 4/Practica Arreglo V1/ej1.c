#include <stdio.h>
#include <stdlib.h>

/*
 Escribir un algoritmo que cree un arreglo de dimensión 7, asignarle un valor numérico cualquiera a cada posición y escribirlos en pantalla
*/

int main()
{
    int arreglo[] = {1, 2, 3, 4, 5, 6, 7};

    for (int i = 0; i < 7; i++)
    {
        printf("%i, ", arreglo[i]);
    }

    return 0;
}