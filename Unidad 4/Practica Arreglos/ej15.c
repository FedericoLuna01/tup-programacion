#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// 15. Escribe un programa que solicite al usuario una cadena de caracteres y luego imprima la cadena invertida.
void main()
{
    char nombre[20];
    printf("Ingrese su nombre: ");
    scanf("%s", nombre);
    for (int i = strlen(nombre); i >= 0; i--)
    {
        printf("%c", nombre[i]);
    }
}