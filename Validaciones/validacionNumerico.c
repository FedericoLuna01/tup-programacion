#include <stdio.h>
#include <stdlib.h>

/*
ingresar un carácter hasta que el mismo sea un carácter numérico con un do-while
*/

void main()
{
    char caracter;

    do
    {
        printf("Ingrese un caracter: ");
        scanf(" %c", &caracter);

        if (caracter < 48 || caracter > 57)
        {
            printf("Caracter invalido\n");
        }

    } while (caracter < 48 || caracter > 57);

    printf("El caracter %c es valido", caracter);
}