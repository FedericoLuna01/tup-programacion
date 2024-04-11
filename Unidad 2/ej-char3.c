#include <stdio.h>
#include <stdlib.h>

/*
Pide al usuario que ingrese un carácter en mayúscula y luego imprime su equivalente en minúscula.
*/

void main()
{
    char minuscula, mayuscula;
    printf("Ingrese una letra en mayúsculas\n");
    scanf(" %c", &mayuscula);
    minuscula = mayuscula + 32;
    printf("La letra ingresada en MAYUSCULAS es %c y su código es %d\n", mayuscula, mayuscula);
    printf("La letra ingresada en MINUSCULAS es %c y su código es %d\n", minuscula, minuscula);
    system("pause");
}