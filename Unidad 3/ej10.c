#include <stdio.h>
#include <stdbool.h>
#include <string.h>

/*
Ingresar los resultados del parcial para los alumnos de un curso y al finalizar informar
el promedio, la cantidad de desaprobados y la cantidad de aprobados. Nota: Se
aprueba con 6 y se debe validar que la nota ingresada sea un número decimal entre 1
y 10.
*/

void main()
{
    int cantAlumnos = 0, cantAprobados = 0, cantDesaprobados = 0;
    float promedio, totalNotas = 0, nota;
    char opcion[2];
    bool notaValida;
    do
    {
        do
        {
            printf("Ingrese la nota del alumno: ");
            scanf("%f", &nota);
            if (nota > 10)
            {
                printf("La nota debe ser menor a 11\n");
                notaValida = false;
            }
            else if (nota < 1)
            {
                printf("La nota debe ser mayor a 1\n");
                notaValida = false;
            }
            else
            {
                notaValida = true;
            }
        } while (notaValida == false);

        cantAlumnos++;
        totalNotas += nota;

        if (nota >= 6)
        {
            cantAprobados++;
        }
        else
        {
            cantDesaprobados++;
        }

        printf("Desea ingresar otro alumno?\ns/n ");
        scanf(" %1s", opcion);

    } while (strcmp(opcion, "s") == 0); // En caso de que la opcion sea "s" vuelve al DO
    promedio = totalNotas / cantAlumnos;
    printf("El promedio de los %i es: %.2f\n", cantAlumnos, promedio);
    printf("Los alumnos aprobados son: %i\nLos alumnos desaprobados son: %i", cantAprobados, cantDesaprobados);
}