#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// 13. Ingresar por consola 10 nombres de alumnos en un array  y sus apellidos en otro,
//  concatenar de la forma "nombre apellido" para cada uno, y mostrar por consola.
void main()
{
    char nombres[3][30];
    char apellidos[3][30];
    char nombresApellidos[3][40];
    for (int i = 0; i <= 2; i++)
    {
        printf("Ingrese nombre %d: ", i + 1);
        scanf("%s", nombres[i]);
        printf("Ingrese Apellido %d: ", i + 1);
        scanf("%s", apellidos[i]);
        (strcat(nombres[i], " "));
        strcpy(nombresApellidos[i], strcat(nombres[i], apellidos[i]));
    }

    for (int i = 0; i <= 2; i++)
    {
        printf("Su nombre y apellido es:%s\n", nombresApellidos[i]);
    }
}