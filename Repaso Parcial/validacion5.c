#include <stdio.h>
#include <stdlib.h>

void cargarNotasValidadas(float notas[3]);

void main()
{
    float notas[3];
    cargarNotasValidadas(notas);
    for (int i = 0; i < 3; i++)
    {
        printf("Las notas son:  %.2f\n", notas[i]);
    }
}

void cargarNotasValidadas(float notas[3])
{
    for (int i = 0; i < 3; i++)
    {
        do
        {
            printf("Ingrese la nota del alumno %i: ", i + 1);
            scanf("%f", &notas[i]);
            if (notas[i] < 0 || notas[i] > 10)
            {
                printf("Numero incorrecto\n");
            }
            else
            {
                // Procedimientos
            }

        } while (notas[i] < 0 || notas[i] > 10);
    }
}