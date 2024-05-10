#include <stdio.h>
#include <stdlib.h>

/*
Ingrese por teclado la facturación de los últimos 6 meses del año. Informar:
a. La facturación total
b. El promedio de facturación
c. La máxima facturación
d. La mínima facturación
*/

void main()
{
    float facturacion[6];
    float promedio, facturacionTotal = 0;
    float maxFacturacion, minFacturacion;
    for (int i = 0; i < 6; i++)
    {
        printf("Ingrese la facturacion del mes %i: ", i + 1);
        scanf("%f", &facturacion[i]);
        facturacionTotal += facturacion[i];

        if (i == 0)
        {
            maxFacturacion = facturacion[i];
            minFacturacion = facturacion[i];
        }
        else
        {
            if (maxFacturacion < facturacion[i])
            {
                maxFacturacion = facturacion[i];
            }
            if (minFacturacion > facturacion[i])
            {
                minFacturacion = facturacion[i];
            }
        }
    }
    promedio = facturacionTotal / 6;

    printf("La facturacion total es: %.2f\n", facturacionTotal);
    printf("El promedio de facturacion es: %.2f\n", promedio);
    printf("La maxima facturacion es: %.2f\n", maxFacturacion);
    printf("La minima facturacion es: %.2f\n", minFacturacion);
}