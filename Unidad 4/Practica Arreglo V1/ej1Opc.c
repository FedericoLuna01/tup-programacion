#include <stdio.h>
#include <stdlib.h>

/*
Realice un pseudocódigo que permita sumar los elementos de dos arreglos y guarde el resultado en otro arreglo. Deberá imprimir el arreglo resultante, el tamaño del arreglo será introducido por el usuario, se debe comprobar que el tamaño del arreglo sea válido,
es decir, no permitir valores negativos y que sea mayor que 2.
*/

void main()
{
    int tamanio;
    do
    {
        printf("Ingrese el tamanio del arreglo: ");
        scanf("%i", &tamanio);

        if (tamanio < 2)
        {
            printf("Valor invalido\n");
        }

    } while (tamanio < 2);

    int arregloUno[tamanio], arregloDos[tamanio], suma[tamanio];

    printf("Primer arreglo: \n");
    for (int i = 0; i < tamanio; i++)
    {
        printf("Ingrese el valor %i: ", i + 1);
        scanf("%i", &arregloUno[i]);
    }

    printf("Segundo arreglo: \n");
    for (int i = 0; i < tamanio; i++)
    {
        printf("Ingrese el valor %i: ", i + 1);
        scanf("%i", &arregloDos[i]);
    }

    for (int i = 0; i < tamanio; i++)
    {
        suma[i] = arregloUno[i] + arregloDos[i];
        printf("Las sumas son: %i\n", suma[i]);
    };
}