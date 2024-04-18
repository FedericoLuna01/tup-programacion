#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void main()
{
    int num, numMayor, numMenor, cantidadNumeros;
    int i;
    bool primerNumero;

    primerNumero = true;
    numMayor = 0;
    numMayor = 0;

    printf("Ingrese la cantidad de numeros: ");
    scanf("%i", &cantidadNumeros);

    for (i = 0; i < cantidadNumeros; cantidadNumeros--)
    {
        printf("Ingrese un numero entero mayor o igual a cero: ");
        scanf("%i", &num);

        while (num < 0)
        {
            printf("Numero incorrecto.\n");
            printf("Ingrese un numero entero mayor o igual a cero: ");
            scanf("%i", &num);
        }

        if (primerNumero)
        {
            numMayor = 0;
            numMenor = 0;
            primerNumero = false;
        }
        else
        {
            if (num > numMayor)
            {
                numMayor = num;
            }

            if (num < numMenor)
            {
                numMayor = num;
            }
        }
    }

    printf("El mayor numero es: %i\nY el menor es: %i", numMayor, numMenor);
}