#include <stdio.h>
#include <stdlib.h>

/*
Crea una función llamada esPar que reciba un número entero como parámetro y
devuelva 1si el número es par o 0 si es impar. Después, crea un programa que utilice
esta función y muestre los mensajes en consola “El número ingresado es par” o “El
número ingresado es impar” dependiendo del valor retornado por la función.
*/

int esPar(int num);
void main()
{
    int num;
    printf("Ingrese un numero: ");
    scanf("%i", &num);
    int par = esPar(num);
    if (par == 1)
    {
        printf("El numero es par");
    }
    else
    {
        printf("El numero es impar");
    }
}

int esPar(int num)
{
    if (num % 2 == 0)
    {
        return 1;
    }
    return 0;
}