#include <stdio.h>
#include <stdlib.h>

/*
Ingresar dos valores, calcular su suma, su producto y la resta del 1ro menos el 2do
valor ingresado, imprimir los resultados
*/

void main()
{
    float primerValor, segundoValor, suma, resta, producto;

    printf("Ingrese el primer numero: ");
    scanf("%f", &primerValor);
    printf("Ingrese el segundo numero: ");
    scanf("%f", &segundoValor);

    suma = primerValor + segundoValor;
    producto = primerValor * segundoValor;
    resta = primerValor - segundoValor;

    printf("Los resultados entre %.2f y %.2f son: \nSuma: %.2f\nProducto: %.2f\nResta: %.2f\n", primerValor, segundoValor, suma, producto, resta);

    system("pause");
}