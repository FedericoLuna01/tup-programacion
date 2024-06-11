#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

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
    bool bandera = false;
    do
    {
        printf("Ingrese un numero: ");
        scanf("%i", &numeroAValidar);
        if (numeroAValidar < 0 || numeroAValidar > 10)
        {
            printf("Numero incorrecto\n");
            bandera = false;
        }
        else
        {
            // Procedimientos
            bandera = true;
        }
    } while (bandera == false);

    return numeroAValidar;
}