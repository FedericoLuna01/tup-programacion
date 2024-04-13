#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main()
{
    char sexo[2];
    bool validacion;
    printf("Ingrese el sexo de la persona:\nf: femenino \nm: masculino\n");
    do
    {
        printf("Ingrese una opcion: ");
        // IMPORTANTE! En strings no agregar & en la variable para escanear
        scanf(" %1s", sexo);
        // strcmp es una función que devuelve 0 en caso de que sean iguales
        if (strcmp(sexo, "m") != 0 & strcmp(sexo, "f") != 0)
        {
            printf("Ingrese una opcion valida\n");
            validacion = false;
        }
        else
        {
            validacion = true;
        }
    } while (validacion == false);
    printf("%s\n", sexo);
    return 0;
}