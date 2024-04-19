#include <stdio.h>

/*
Leer una nota de un alumno por consola e informar la condición del mismo. (menor
que 4: Reprobado, menor que 6: Regular, mayor o igual que 6: Promocionado). Validar
que la nota ingresada se encuentre entre el 0 y el 10, de lo contrario informar “Nota
inválida”.
*/

void main()
{
    float notaAlumno;

    printf("Ingrese la nota del alumno: ");
    scanf("%f", &notaAlumno);

    while (notaAlumno < 1 | notaAlumno > 10)
    {
        printf("Nota invalida\n");
        printf("Ingrese la nota del alumno: ");
        scanf("%f", &notaAlumno);
    }

    if (notaAlumno < 4)
    {
        printf("Reprobado\n");
    }

    if (notaAlumno < 6 & notaAlumno >= 4)
    {
        printf("Regular\n");
    }

    if (notaAlumno >= 6)
    {
        printf("Promocionado\n");
    }
}