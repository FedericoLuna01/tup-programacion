#include <stdio.h>
#include <stdlib.h>

/*
Escriba un algoritmo donde se le pida al usuario que ingrese la cantidad de personas invitadas a un evento, luego pedir que ingrese
los nombres de la misma. Al finalizar la carga mostrar al usuario la lista de invitados.
*/

int main()
{
    int cantInvitados;
    printf("Ingrese la cantidad de invitados: ");
    scanf("%i", &cantInvitados);

    char invitados[cantInvitados][40];

    for (int i = 0; i < cantInvitados; i++)
    {
        printf("Ingrese el nombre del invitado %i: ", i + 1);
        scanf("%s", invitados[i]);
    };

    printf("Lista de invitados:\n");
    for (int i = 0; i < cantInvitados; i++)
    {
        printf("%i-%s\n", i + 1, invitados[i]);
    };

    return 0;
}