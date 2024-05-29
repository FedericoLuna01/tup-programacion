#include <stdio.h>
#include <stdlib.h>

float sumar(float num1, float num2); // prototipo de la función sumar

int main()
{
    float numero1, numero2, resultado;
    printf("Ingresa primer numero: ");
    scanf("%f", &numero1);
    printf("Ingresa segundo numero: ");
    scanf("%f", &numero2);
    resultado = sumar(numero1, numero2); // LLAMADA a la función sumar
    printf("La suma es: %f\n", resultado);
    system("pause");
    return 0;
}

// función sumar
float sumar(float num1, float num2)
{
    float respuesta;
    respuesta = num1 + num2;
    return respuesta;
}