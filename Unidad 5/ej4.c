#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/*
Realizar un programa que permita cargar los datos de un cliente, Nombre, apellido, DNI. La
carga del DNI debe validarse a partir de una función llamada ValidarDNI, dicha función
recibirá como parámetro de entrada el dni ingresado y devolverá una variable del tipo lógica Verdadero/Falso. Nota: El DNI debe estar formado por números y tener una longitud máxima de 8 caracteres y una longitud mínima de 6 caracteres.
*/

bool validarDNI(int x);

int main()
{
    char nombre[30], apellido[30];
    int dni;
    bool validado;

    printf("Ingrese su nombre: ");
    scanf("%s", nombre);
    printf("Ingrese su apellido: ");
    scanf("%s", apellido);

    do
    {
        printf("Ingrese el DNI: ");
        scanf("%d", &dni);
        validado = validarDNI(dni);
    } while (!validado);

    printf("Ingresado correctamente!\n");

    return 0;
}

bool validarDNI(int x)
{
    // printf("%i", dni);
    if (x < 999999)
    {
        printf("El dni debe tener al menos 6 caracteres\n");
        return false;
    }
    else if (x > 99999999)
    {
        printf("El dni debe tener menos de 9 caracteres\n");
        return false;
    }

    return true;
}