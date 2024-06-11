#include <stdio.h>
#include <stdlib.h>

void validarNum(int *numeroAValidar);

void main()
{
    int num;
    validarNum(&num);
    printf("el numero es %i", num);
}

void validarNum(int *numeroAValidar)
{
    do
    {
        printf("Ingrese un numero: ");
        scanf("%i", *&numeroAValidar);
        if (*numeroAValidar < 0 || *numeroAValidar > 10)
        {
            printf("Numero incorrecto\n");
        }
        else
        {
            // Procedimientos
        }
    } while (*numeroAValidar < 0 || *numeroAValidar > 10);
}