#include <stdio.h>
#include <stdlib.h>

/*
Crea una función llamada calcularAreaCuadrado que reciba el lado de un cuadrado
como parámetro y devuelva el área de ese cuadrado. Luego, desarrolla un programa
que invoque a esta función y muestre el resultado.
*/

float calcularAreaCuadrado(float lado);

void main()
{
    float lado, res;

    printf("Ingrese el lado del cuadrado: ");
    scanf("%f", &lado);
    res = calcularAreaCuadrado(lado);
    printf("El area del cuadrado es: %.2f", res);
}

float calcularAreaCuadrado(float lado)
{
    return lado * lado;
};
