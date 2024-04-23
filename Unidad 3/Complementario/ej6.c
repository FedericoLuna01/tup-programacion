#include <stdio.h>

/*
    Una institución educativa desea llevar un registro de sus estudiantes que han participado en
    actividades extracurriculares. Se tienen los siguientes datos de los estudiantes:
    ● Cantidad de estudiantes a evaluar
    ● Legajo de cada estudiante
    ● Cantidad de actividades extracurriculares en las que ha participado
    El objetivo es mostrar cuántos estudiantes han participado en más de cinco actividades
    extracurriculares. Además, se desea conocer el legajo del estudiante que ha participado en la
    mayor cantidad de actividades extracurriculares.
*/

void main()
{
    int legajo, actividadesExtra, cantEstudiantes;
    int legajoConMasActividades, masDeCincoActividades, mayorActividadesExtra;

    printf("Ingrese la cantidad de estudiantes: ");
    scanf("%i", &cantEstudiantes);

    for (int i = 1; i <= cantEstudiantes; i++)
    {
        printf("Ingrese el legajo del alumno: ");
        scanf("%i", &legajo);

        printf("En cuantas actividades extra trabajo? ");
        scanf("%i", &actividadesExtra);

        if (i == 1)
        {
            legajoConMasActividades = legajo;
            mayorActividadesExtra = actividadesExtra;
        }
        else
        {
            if (actividadesExtra > mayorActividadesExtra)
            {
                legajoConMasActividades = legajo;
                mayorActividadesExtra = actividadesExtra;
            }
        }
    }

    printf("El estudiante de legajo %i hizo %i actividades extras", legajoConMasActividades, mayorActividadesExtra);
}