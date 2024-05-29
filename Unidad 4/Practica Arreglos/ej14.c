#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// 14. Escribe un programa que solicite al usuario una cadena de caracteres y luego cuente el
// número de vocales que contiene.
void main()
{
    char nombre[30];
    int contadorVocales = 0;
    printf("Ingrese una palabra: ");
    scanf("%s", nombre);
    for (int i = 0; i < strlen(nombre); i++)
    {
        if (nombre[i] == 'a' || nombre[i] == 'A') //[i] xq va de letra en letra
        {
            contadorVocales++;
        }
        if (nombre[i] == 'e' || nombre[i] == 'E')
        {
            contadorVocales++;
        }
        if (nombre[i] == 'i' || nombre[i] == 'I')
        {
            contadorVocales++;
        }
        if (nombre[i] == 'o' || nombre[i] == 'O')
        {
            contadorVocales++;
        }
        if (nombre[i] == 'u' || nombre[i] == 'U')
        {
            contadorVocales++;
        }
    }
    printf("cantidad de a: %d", contadorVocales);
}