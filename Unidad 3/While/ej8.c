#include <stdio.h>
#include <stdlib.h>

/*
    Al finalizar cada día, los vendedores de un comercio rinden al dueño sus ventas para
    calcular la comisión que cobrarán. Los vendedores son 5, codificados de la ‘A’ a la ‘E’, y
    no se sabe cuántas ventas realizó cada uno. Los datos vienen ordenados y agrupados
    por vendedor. Por cada vendedor se ingresan cada uno de los importes de sus ventas.
    Para indicar fin de cada uno de ellos, se ingresa un valor de venta igual a 0. Se solicita
    mostrar para cada uno de los vendedores: su código, y la comisión que cobrará, que es
    el 2,5% de la suma de sus ventas.
*/

void main()
{
    float acumuladorA = 0, acumuladorB = 0, acumuladorC = 0, acumuladorD = 0, acumuladorE = 0;
    float venta, comision;
    char codigoVendedor;

    do
    {
        printf("Ingrese su codigo de vendedor (n para terminar): ");
        scanf(" %c", &codigoVendedor);

        if (codigoVendedor != 'n' && codigoVendedor != 'N')
        {
            if (codigoVendedor == 'a')
            {
                do
                {
                    printf("Ingrese el importe de su venta (0 para terminar): ");
                    scanf("%f", &venta);

                    if (venta != 0)
                    {
                        acumuladorA += venta;
                    }

                } while (venta != 0);
            }
            else if (codigoVendedor == 'b')
            {
                do
                {
                    printf("Ingrese el importe de su venta (0 para terminar): ");
                    scanf("%f", &venta);

                    if (venta != 0)
                    {
                        acumuladorB += venta;
                    }

                } while (venta != 0);
            }
            else if (codigoVendedor == 'c')
            {
                do
                {
                    printf("Ingrese el importe de su venta (0 para terminar): ");
                    scanf("%f", &venta);

                    if (venta != 0)
                    {
                        acumuladorC += venta;
                    }

                } while (venta != 0);
            }
            else if (codigoVendedor == 'd')
            {
                do
                {
                    printf("Ingrese el importe de su venta (0 para terminar): ");
                    scanf("%f", &venta);

                    if (venta != 0)
                    {
                        acumuladorD += venta;
                    }

                } while (venta != 0);
            }
            else if (codigoVendedor == 'e')
            {
                do
                {
                    printf("Ingrese el importe de su venta (0 para terminar): ");
                    scanf("%f", &venta);

                    if (venta != 0)
                    {
                        acumuladorE += venta;
                    }

                } while (venta != 0);
            }
        }

    } while (codigoVendedor != 'n' && codigoVendedor != 'N');

    printf("Comision del comerciante 'A': %.2f\n", acumuladorA * 0.025);
    printf("Comision del comerciante 'B': %.2f\n", acumuladorB * 0.025);
    printf("Comision del comerciante 'C': %.2f\n", acumuladorC * 0.025);
    printf("Comision del comerciante 'D': %.2f\n", acumuladorD * 0.025);
    printf("Comision del comerciante 'E': %.2f\n", acumuladorE * 0.025);
}