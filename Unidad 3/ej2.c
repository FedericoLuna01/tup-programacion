#include <stdio.h>

/*
Ingresar los lados de un triángulo e informar si es equilátero, isósceles o escaleno.
*/

void main()
{
    float lado1, lado2, lado3;

    printf("Ingrese el primer lado: ");
    scanf("%f", &lado1);
    printf("Ingrese el segundo lado: ");
    scanf("%f", &lado2);
    printf("Ingrese el tercer lado: ");
    scanf("%f", &lado3);

    if (lado1 == lado2 && lado2 == lado3)
    {
        printf("El triangulo es equilatero");
    }
    else if (lado1 != lado2 && lado2 != lado3 && lado1 != lado3)
    {
        printf("El triangulo es escaleno");
    }
    else
    {
        printf("El triangulo es isosceles");
    }
}