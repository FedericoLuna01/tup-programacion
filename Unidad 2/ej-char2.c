#include <stdio.h>
#include <stdlib.h>
/*
Pide al usuario que ingrese dos caracteres y luego imprime la suma de sus códigos ASCII.
*/
void main()
{
    char caracter1, caracter2;
    int suma;
    printf("Ingresa un caracter: ");
    // caracter1 = getchar();
    scanf(" %c", &caracter1);
    printf("Ingresa otro caracter: ");
    scanf(" %c", &caracter2);
    // caracter2 = getchar();

    suma = caracter1 + caracter2;

    printf("La suma de %c y %c en sus codigos ascii es: %d\n", caracter1, caracter2, suma);
    system("pause");
}
