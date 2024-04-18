#include <stdio.h>
#include <string.h>

/*
Ingresar los resultados del parcial para los alumnos de un curso y al finalizar informar
el promedio de notas. Se desconoce la cantidad de notas a ingresar. El sistema le
preguntará al usuario si quiere ingresar otro parcial o si ya terminó.
*/

void main()
{
    int cantAlumnos = 0;
    float promedio, totalNotas = 0, nota;
    char opcion[2];
    do
    {
        printf("Ingrese la nota del alumno: ");
        scanf("%f", &nota);
        cantAlumnos++;
        totalNotas += nota;

        printf("Desea ingresar otro alumno?\ns/n ");
        scanf(" %1s", opcion);

    } while (strcmp(opcion, "s") == 0); // En caso de que la opcion sea "s" vuelve al DO
    promedio = totalNotas / cantAlumnos;
    printf("El promedio de %i alumnos es: %.2f", cantAlumnos, promedio);
}