#include <stdio.h>

/*
    Se desea leer las calificaciones de 5 alumnos, por cada alumno se leen 3 calificaciones.
    Mostrar el promedio por alumno y el promedio general
*/

void main()
{
    int alumnos, i, j;
    float calificaciones = 0, nota, promedioAlumno, promedioGeneral, calificacionesAlumno = 0;
    for (i = 1; i <= 5; i++)
    {
        calificacionesAlumno = 0;
        for (j = 1; j <= 3; j++)
        {
            printf("Ingrese la nota %d del alumno %d: ", j, i);
            scanf("%f", &nota);
            calificaciones += nota;
            calificacionesAlumno += nota;
        }
        promedioAlumno = calificacionesAlumno / 3;
        printf("El promedio del alumno %d es %.2f\n", i, promedioAlumno);
    }
    promedioGeneral = calificaciones / 15;
    printf("El promedio general de todos los alumnos es %.2f\n", promedioGeneral);
}