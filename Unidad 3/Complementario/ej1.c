#include <stdio.h>
#include <stdlib.h>

void main()
{
    int edadAlumno;
    int cantidadAlumnosMayores;
    int i;
    cantidadAlumnosMayores = 0;

    for (i = 0; i <= 29; i++) // i++ | i = i + 1 | i += 1
    {
        printf("Ingrese la edad del alumno %i: ", i + 1);
        scanf("%i", &edadAlumno);

        if (edadAlumno > 21)
        {
            cantidadAlumnosMayores = cantidadAlumnosMayores + 1;
        }
    }

    printf("La cantidad de alumnos que superan los 21 anios es: %i", cantidadAlumnosMayores);
    system("pause");
}