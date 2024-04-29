#include <stdio.h>

int main()
{
    char vendedor = 'A';
    float importeVenta, totalVentas, comision;

    do
    {
        totalVentas = 0;
        printf("Ventas del vendedor %c:\n", vendedor);

        // Ingresar ventas hasta que se ingrese un importe igual a 0
        do
        {
            printf("Ingrese el importe de la venta (0 para terminar): ");
            scanf("%f", &importeVenta);
            totalVentas += importeVenta;
        } while (importeVenta != 0);

        // Calcular la comisión (2.5% de las ventas)
        comision = totalVentas * 0.025;

        // Mostrar el código del vendedor y la comisión
        printf("Vendedor %c - Comisión: %.2f\n", vendedor, comision);

        // Pasar al siguiente vendedor
        vendedor++;

    } while (vendedor <= 'E'); // Mientras no se hayan procesado todos los vendedores

    return 0;
}