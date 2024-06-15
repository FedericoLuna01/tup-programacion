#include <stdio.h>
#include <stdlib.h>

int validarNum();

void main()
{
    int numeros[3];
    for (int i = 0; i < 3; i++)
    {
        numeros[i] = validarNum();
    }
    for (int i = 0; i < 3; i++)
    {
        printf("el numero es %i\n", numeros[i]);
    }
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