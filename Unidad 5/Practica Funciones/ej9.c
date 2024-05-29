#include <stdio.h>
#include <stdlib.h>

/*
Crear una función que reciba un caracter y un número, y escriba un “triángulo”
formado por ese caracter, que tenga como anchura inicial la que se ha indicado.
Por ejemplo, si la caracter es * y la anchura es 4, debería escribir:
****
***
**
*
*/

void mostrarTriangulo(int num, char caracter);

void main()
{
    int num;
    char caracter;

    printf("Ingrese un caracter: ");
    scanf(" %c", &caracter);
    printf("Ingrese el tamanio del triangulo: ");
    scanf("%d", &num);

    mostrarTriangulo(num, caracter);
}

void mostrarTriangulo(int num, char caracter)
{
    for (int i = 0; i < num; i++)
    {
        // for (int j = num - i; j > 0; j--)
        for (int j = num; j > i; j--)
        {
            printf("%c", caracter);
        }
        printf("\n");
    }
}
