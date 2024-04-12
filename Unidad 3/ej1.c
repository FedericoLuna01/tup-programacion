#include <stdio.h>

/*
Ingresar por pantalla un número e informar si es un número par o impar (usar el
operador módulo “%”, por ejemplo, el resultado de 100%2 es el resto de la división
100/2).
*/

void main()
{
    int numero;
    printf("Ingrese un numero: ");
    scanf("%i", &numero);

    if (numero % 2 != 0)
    {
        printf("El numero %d es impar", numero);
    }
    else
    {
        printf("El numero %d es par", numero);
    };
}