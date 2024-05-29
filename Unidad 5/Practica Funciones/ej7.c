#include <stdio.h>
#include <stdlib.h>

/*
Crear una función “esPrimo”, que reciba un número y devuelva el valor 1 si es un
número primo o 0 en caso contrario.
*/

int esPrimo(int num);

void main()
{
    int num, primo;
    printf("Ingrese un numero: ");
    scanf("%d", &num);

    primo = esPrimo(num);

    if (primo == 1)
    {
        printf("El numero es primo");
    }
    else
    {
        printf("El numero no es primo");
    }
}

int esPrimo(int num)
{
    for (int i = 2; i <= num / 2; i++)
    {
        if (num % i == 0)
        {
            return 0;
        }
    }

    return 1;
}