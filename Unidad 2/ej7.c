#include <stdio.h>
#include <stdlib.h>

/*
Ingresar el valor de la hora y el tiempo trabajado por un comerciante, calcular su
sueldo e imprimirlo
*/

void main()
{
    float valorPorHora, tiempoTrabajado, sueldo;

    printf("Ingrese el valor por hora: ");
    scanf("%f", &valorPorHora);

    printf("Ingrese cuanto tiempo trabajo el empleado en horas: ");
    scanf("%f", &tiempoTrabajado);

    sueldo = valorPorHora * tiempoTrabajado;

    printf("El sueldo es %.2f\n", sueldo);

    system("pause");
}