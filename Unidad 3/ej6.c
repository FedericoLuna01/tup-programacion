#include <stdio.h>

/*
Ingresar los resultados del parcial para los 20 alumnos de un curso y al finalizar
informar el promedio.
*/
void main()
{
    const int CANTIDADALUMNOS = 3;
    float promedio, nota, totalNotas;
    int i;
    for (i = 1; i <= CANTIDADALUMNOS; i++)
    {
        printf("Ingrese la nota del alumno %i: ", i);
        scanf("%f", &nota);
        totalNotas += nota;
    }
    promedio = totalNotas / CANTIDADALUMNOS;
    printf("El promedio es %.2f", promedio);
}