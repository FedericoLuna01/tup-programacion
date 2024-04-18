#include <stdio.h>
#include <stdbool.h>
/*
Ingresar la fecha de nacimiento de una persona e informar la edad
*/

void main()
{
    int diaActual, mesActual, anioActual, diaNacimiento, mesNacimiento, anioNacimiento;
    int edad;
    bool anioInvalido, mesInvalido, diaInvalido;
    diaActual = 16;
    mesActual = 4;
    anioActual = 2024;

    do
    {
        printf("Ingrese su anio de nacimiento: ");
        scanf("%i", &anioNacimiento);

        if (anioNacimiento > anioActual)
        {
            printf("El anio ingresado no es valido\n");
            anioInvalido = true;
        }
        else
        {
            anioInvalido = false;
        }

    } while (anioInvalido);

    edad = anioActual - anioNacimiento;

    do
    {
        printf("Ingrese su mes de nacimiento: ");
        scanf("%i", &mesNacimiento);

        if (mesNacimiento > 12)
        {
            printf("El mes ingresado no es valido\n");
            mesInvalido = true;
        }
        else
        {
            mesInvalido = false;
        }

    } while (mesInvalido);

    do
    {
        printf("Ingrese su dia de nacimiento: ");
        scanf("%i", &diaNacimiento);

        if (diaNacimiento > 31)
        {
            printf("El dia ingresado no es valido\n");
            diaInvalido = true;
        }
        else
        {
            diaInvalido = false;
        }

    } while (diaInvalido);

    if (mesActual < mesNacimiento)
    {
        edad--;
    }
    else if (mesActual == mesNacimiento & diaNacimiento < diaActual)
    {
        edad--;
    }

    printf("Su edad es: %i", edad);
}