#include <stdio.h>
#include <stdlib.h>

/*
Ingresar dos números enteros, validar que los mismos sean distintos y que la diferencia entre ambos sea mayor a 2. Mostrar todos los números impares entre ambos.
*/

void main()
{
    int num1, num2, diferencia;

    printf("Ingrese el primer numero: ");
    scanf("%i", &num1);

    do
    {
        printf("Ingrese el segundo numero: ");
        scanf("%i", &num2);

        if (num1 < num2)
        {

            diferencia = num2 - num1;
        }
        else
        {
            diferencia = num1 - num2;
        }

        if (num1 == num2)
        {
            printf("El numero es igual al primero.\n");
        }

        if (diferencia < 2)
        {
            printf("La diferencia tiene que ser mayor a 2\n");
        }

        if (num1 < num2)
        {
            for (int i = num1; i < num2; i++)
            {
                if (i % 2 != 0)
                {
                    printf("%i ", i);
                }
            }
        }
        else
        {
            for (int i = num2; i < num1; i++)
            {
                if (i % 2 != 0)
                {
                    printf("%i ", i);
                }
            }
        }

    } while (num1 == num2 || (diferencia <= 2));
}