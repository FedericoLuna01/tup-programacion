#include <stdio.h>

int main()
{
    int edad;

    printf("Ingrese la edad: ");
    scanf("%i", &edad);

    // Compila pero no funciona. Porque no muestra el valor ingresado.
    // Muestra el de la memoria.
    printf("Edad: %d\n", &edad);
}