#include <stdio.h>
#include <string.h>

int main()
{

    int i, j, m;
    float promedio, promedioMayor = 0, suma = 0, nota;
    char nombre[30];
    char nombreMayor[30];

    for (i = 0; i < 2; i++)
    {
        printf("ingrese el nombre del alumno: ", j++);
        scanf("%s", nombre);

        for (m = 0; m <= 4; m++)
        {
            printf("ingrese la nota %d del alumno %s: ", m + 1, nombre);
            scanf("%f", &nota);

            suma = suma + nota;
        }

        promedio = suma / 4;

        if (promedio > promedioMayor)
        {
            promedioMayor = promedio;
            strcpy(nombreMayor, nombre);
        }
        printf("el promedio de %s es %f: \n ", nombre, promedio);
        suma = 0;
    }
    printf("el promedio mayor lo tiene %s y es de %f: ", nombreMayor, promedioMayor);

    return 0;
}