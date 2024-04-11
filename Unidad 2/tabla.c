#include <stdio.h>

int main()
{
    // Imprimir encabezado de la tabla
    printf("| %-10s | %-5s | %-10s |\n", "Nombre", "Edad", "Puntuacion");
    printf("|------------|-------|------------|\n");

    // Datos de ejemplo
    printf("| %-10s | %-5d | %-10.2f |\n", "Juan", 25, 85.50);
    printf("| %-10s | %-5d | %-10.2f |\n", "Maria", 30, 90.00);
    printf("| %-10s | %-5d | %-10.2f |\n", "Pedro", 28, 88.75);

    return 0;
}