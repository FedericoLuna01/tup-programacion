#include <stdio.h>
#include <stdlib.h>

/*
Crear una función llamada “signo”, que reciba un número real, y devuelva un número
entero con el valor: -1 si el número es negativo, 1 si es positivo o 0 si es cero.
*/

int signo(float num);

void main()
{
    float num, res;
    printf("Ingrese un numero: ");
    scanf("%f", &num);
    res = signo(num);
    if (res == -1)
    {
        printf("Numero negativo");
    }
    else if (res == 1)
    {
        printf("Numero positivo");
    }
    else
    {
        printf("Cero");
    }
}

int signo(float num)
{
    if (num < 0)
    {
        return -1;
    }
    else if (num > 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}