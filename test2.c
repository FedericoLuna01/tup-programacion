#include <stdio.h>
#include <stdlib.h>

void main()
{
    int cantAlumnos = 0;
    float promedio, nota, sumaNotas = 0;

    do
    {
        printf("Ingrese la nota del alumno (0 para terminar): ");
        scanf("%f", &nota);

        if (nota != 0 && nota > 0 && nota <= 10)
        {
            sumaNotas += nota;
            cantAlumnos++;
        }

        if (nota < 0 || nota > 10)
        {
            printf("Nota invalida\n");
        }

    } while (nota != 0 || nota < 0 || nota > 10);

    promedio = sumaNotas / cantAlumnos;

    printf("El promedio de los %i alumnos es: %f", cantAlumnos, promedio);
}