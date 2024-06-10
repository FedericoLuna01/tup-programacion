#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>
// 6. Realice un algoritmo que lea N elementos y que imprima el número que se repite más veces dentro del arreglo
void main()
{
    int numArray;
    int cantVecesRepetido = 1;
    int maxCantVecesRepetido = 0;
    int numRepetido = 0;
    printf("Cuantos numeros desea analizar?: ");
    scanf("%d", &numArray);
    int array[numArray];

    for (int i = 0; i < numArray; i++)
    {
        printf("Ingrese el numero %d: ", i + 1);
        scanf("%d", &array[i]);
    }

    for (int i = 0; i < numArray; i++)
    {
        cantVecesRepetido = 1;

        for (int j = i + 1; j < numArray; j++)
        {
            if (array[i] == array[j])
            {
                cantVecesRepetido++;
            }
        }

        if (maxCantVecesRepetido < cantVecesRepetido)
        {
            numRepetido = array[i];
            maxCantVecesRepetido = cantVecesRepetido;
        }
    }

    printf("El numero %d se repitio %d veces", numRepetido, maxCantVecesRepetido);
}