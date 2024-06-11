#include <stdio.h>
#include <stdlib.h>

void main()
{
    // Validar entro 0 y 10
    int num;
    do
    {
        printf("Ingrese un numero: ");
        scanf("%i", &num);
        if (num < 0 || num > 10)
        {
            printf("Numero incorrecto\n");
        }
        else
        {
            // Procedimientos
        }

    } while (num < 0 || num > 10);
}