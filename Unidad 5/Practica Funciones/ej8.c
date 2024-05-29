#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
Crear una función que reciba un número cualquiera y que devuelva como resultado la
suma de sus dígitos.
*/

int sumaDigitos(char num[10]);

void main()
{
    char num[10];
    int suma;
    printf("Ingrese un numero: ");
    scanf("%s", num);
    suma = sumaDigitos(num);
    printf("La suma de sus digitos es: %d", suma);
}

int sumaDigitos(char num[10])
{
    int suma = 0;

    for (int i = 0; i < strlen(num); i++)
    {
        // Lo de - '0' me lo dijo ChatGPT, no se xq funciona
        suma += num[i] - '0';
    }

    return suma;
}