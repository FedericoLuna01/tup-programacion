#include <stdio.h>
#include <stdlib.h>

int validarNum();

void main()
{
    int num;
    num = validarNum();
    printf("el numero es %i", num);
}

int validarNum()
{
    int numeroAValidar;
    do
    {
        printf("Ingrese un numero: ");
        scanf("%i", &numeroAValidar);
        if (numeroAValidar < 0 || numeroAValidar > 10)
        {
            printf("Numero incorrecto\n");
        }
        else
        {
            // Procedimientos
        }
    } while (numeroAValidar < 0 || numeroAValidar > 10);

    return numeroAValidar;
}