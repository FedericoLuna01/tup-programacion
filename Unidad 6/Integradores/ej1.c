#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define CANT_PRODUCTOS 4

void cargarDatos(char datos[CANT_PRODUCTOS][3][50]);
void mostrarDatos(char datos[CANT_PRODUCTOS][3][50]);
void cargarCantidades(char datos[CANT_PRODUCTOS][3][50]);
float obtenerTotal(char datos[CANT_PRODUCTOS][3][50]);

void main()
{
    char datos[CANT_PRODUCTOS][3][50];
    cargarDatos(datos);
    mostrarDatos(datos);
    cargarCantidades(datos);
    mostrarDatos(datos);
    float total = obtenerTotal(datos);
    printf("El total es %f", total);
}

void cargarDatos(char datos[CANT_PRODUCTOS][3][50])
{
    strcpy(datos[0][0], "3500");
    strcpy(datos[0][1], "Mantel 2x2");
    strcpy(datos[0][2], "");
    strcpy(datos[1][0], "800.99");
    strcpy(datos[1][1], "Plato playo 24cm");
    strcpy(datos[1][2], "");
    strcpy(datos[2][0], "1450.50");
    strcpy(datos[2][1], "Copa vino");
    strcpy(datos[2][2], "");
    strcpy(datos[3][0], "650.50");
    strcpy(datos[3][1], "Plato hondo 22cm");
    strcpy(datos[3][2], "");
}

float obtenerTotal(char datos[CANT_PRODUCTOS][3][50])
{
    float total;
    total = 0;
    for (int i = 0; i < CANT_PRODUCTOS; i++)
    {
        total += (atof(datos[i][2]) * atof(datos[i][0]));
    }
    return total;
}

void cargarCantidades(char datos[CANT_PRODUCTOS][3][50])
{
    for (int i = 0; i < CANT_PRODUCTOS; i++)
    {
        printf("Ingrese la cantidad de %s vendidos: ", datos[i][1]);
        scanf("%s", datos[i][2]);
    }
}

void mostrarDatos(char datos[CANT_PRODUCTOS][3][50])
{
    printf("%-10s %-25s %-15s\n", "Precio", "Producto", "Cantidad vendida");
    for (int i = 0; i < CANT_PRODUCTOS; i++)
    {
        printf("%-10s %-25s %-15s\n", datos[i][0], datos[i][1], datos[i][2]);
    }
}