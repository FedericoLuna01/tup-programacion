#include <stdio.h>
#include <stdlib.h>

// 8. Leer 10 números por teclado, 5 para un array y 5 para otro array distinto. Mostrar los 10 números en pantalla mediante un solo array.

void main()
{
    int array1[5], array2[5], arrayCompleta[10];

    printf("Valores del primer array\n");
    for (int i = 0; i < 5; i++)
    {
        printf("Ingrese el valor n %i: ", i + 1);
        scanf("%i", &array1[i]);
        arrayCompleta[i] = array1[i];
    }

    printf("Valores del segundo array\n");
    for (int i = 0; i < 5; i++)
    {
        printf("Ingrese el valor n %i: ", i + 1);
        scanf("%i", &array2[i]);
        arrayCompleta[i + 5] = array2[i];
    }

    for (int i = 0; i < 10; i++)
    {
        printf("Los valores son: %i\n", arrayCompleta[i]);
    }
}