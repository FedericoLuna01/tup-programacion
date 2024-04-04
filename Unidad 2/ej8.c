#include <stdio.h>
#include <stdlib.h>

/*
Ingresar el tiempo trabajado por un contador y considerando que el valor de la hora es
de 800 pesos, calcular su sueldo e imprimirlo
*/

// #define VALORPORHORA 800;

void main()
{
    float horasTrabajadas, sueldo;
    const int VALORPORHORA = 800;
    printf("Ingrese cuanto tiempo trabajo el empleado en horas: ");
    scanf("%f", &horasTrabajadas);

    sueldo = VALORPORHORA * horasTrabajadas;

    printf("Su sueldo es: %.2f\n", sueldo);

    system("pause");
}