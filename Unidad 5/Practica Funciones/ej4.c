#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
Crear una función que calcule el cubo de un número real (float). El resultado deberá
ser otro número real.
*/

float cubo(float num);

void main()
{
    float res, num;
    printf("Ingrese un numero: ");
    scanf("%f", &num);
    res = cubo(num);
    printf("El cubo es: %.2f", res);
}

float cubo(float num)
{
    return pow(num, 3);
}