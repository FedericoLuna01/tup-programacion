#include <stdio.h>
#include <stdlib.h>
// 5. Escriba un algoritmo donde se le pida al usuario que ingrese la cantidad de personas invitadas a un evento, luego pedir que ingresé
// los nombres de la misma y el tipo de menú. Al finalizar la carga mostrar al usuario la lista de invitados con el menú seleccionando.
// El menú puede ser "tradicional", "vegano" y "Sin TACC"
void main()
{
    int cantPersonas;

    printf("Ingrese cantidad de personas invitadas: ");
    scanf("%d", &cantPersonas);
    char nombre[cantPersonas][30];
    char menu[cantPersonas][40];
    for (int i = 0; i < cantPersonas; i++)
    {
        printf("Ingrese el nombre de la persona");
        scanf("%s", nombre[i]);
        printf("Ingrese el menu de la persona");
        scanf("%s", menu[i]);
    }
    for (int i = 0; i < cantPersonas; i++)
    {
        printf("%s : %s \n", nombre[i], menu[i]);
    }
}