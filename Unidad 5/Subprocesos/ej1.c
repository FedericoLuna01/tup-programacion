#include <stdio.h>

/* Realizar un programa que llame a un subproceso que pida al usuario ingresar el nombre, el apellido y la edad de una persona, luego llamar a otro subproceso que muestre por pantalla los datos de la persona. */

void cargaDatos(char nom[], char ape[], int *edad);
void muestraDatos(char nombre[], char apellido[], int anios);

int main()
{
    char nombre[20];
    char apellido[20];
    int edad;

    cargaDatos(nombre, apellido, &edad);
    muestraDatos(nombre, apellido, edad);
    return 0;
}

void cargaDatos(char nom[], char ape[], int *edad)
{
    printf("Ingrese su nombre\n");
    scanf("%s", nom);
    printf("Ingrese su apellido\n");
    scanf("%s", ape);
    printf("Ingrese su edad\n");
    scanf("%d", *&edad);
}

void muestraDatos(char nombre[], char apellido[], int anios)
{
    printf("Su nombre y apellido es: %s %s, y su edad es: %d", nombre, apellido, anios);
}