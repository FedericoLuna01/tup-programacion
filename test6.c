#include <stdio.h>

int main()
{
    int cantAlumnos, cantAprobados = 0, cantDesaprobados = 0;
    float sumaNotas = 0, nota;

    printf("Ingrese la cantidad de alumnos: ");
    scanf("%i", &cantAlumnos);
    for (int i = 0; i < cantAlumnos; i++)
    {
        do
        {

            printf("Ingrese la nota del alumno %i: ", i + 1);
            scanf("%f", &nota);

            if (nota <= 0 || nota > 10)
            {
                printf("Nota invalida\n");
            }
            else
            {
                sumaNotas += nota;
                if (nota >= 6)
                {
                    cantAprobados++;
                }
                else
                {
                    cantDesaprobados++;
                }
            }
        } while (nota <= 0 || nota > 10);
    }

    printf("El promedio es: %f\n", sumaNotas / cantAlumnos);
    printf("Desaprobaron %i alumnos\n", cantDesaprobados);
    printf("Aprobaron %i alumnos\n", cantAprobados);
    return 0;
}