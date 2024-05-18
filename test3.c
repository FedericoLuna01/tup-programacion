#include <stdio.h>
#include <stdlib.h>

void main()
{
    float cantVentasxVendedor, ventasVendedor, acumVentasporVendedor = 0, acumVentasTotal = 0;
    int v;
    printf("Ingrese cant vendedores: ");
    scanf("%d", &v);
    float vendedoresYproductos[v][5];
    acumVentasTotal = 0;
    for (int i = 0; i < v; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("Ingrese la venta del %d producto: ", j + 1);
            scanf("%f", &vendedoresYproductos[v][j]);
            acumVentasTotal += vendedoresYproductos[v][j];
        }
    }
    for (int i = 0; i < v; i++)
    {
        for (int j = 0; j <= 4; j++)
        {
            acumVentasporVendedor += vendedoresYproductos[v][j];
        }
        printf("La cantidad total por vendedor es: %.2f", acumVentasporVendedor);
        printf("La cantidad total es: %.2f", acumVentasTotal);
    }
}