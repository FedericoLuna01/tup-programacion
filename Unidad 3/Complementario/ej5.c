#include <stdio.h>

/*
    En un supermercado Toco, el cliente tiene un descuento del 10% si compra 15 o más
    productos de más y que el importe total supere los $149.999. Además si es miembro de
    TocoPlus tiene un 5% de descuento adicional.
    Por cada uno de los productos se ingresa precio. La cantidad de productos se supone conocida
    X y se ingresa por el usuario. Los precios de los productos son sin IVA, por lo que se le debe
    adicionar al importe total a abonar.
    Se desea conocer:
    ● El importe total a abonar con IVA incluido.
    ● La cantidad de productos.
    ● El monto de descuento.
*/

void main()
{
    int cantProductos;
    float precioTotal = 0, precioProducto, descuentoTotal = 0, totalAbonar = 0;
    char esMiembro;

    printf("Ingrese la cantidad de productos: ");
    scanf("%i", &cantProductos);

    for (int i = 1; i <= cantProductos; i++)
    {
        printf("Ingrese el precio del producto %i: ", i);
        scanf("%f", &precioProducto);

        precioTotal += precioProducto;
    }

    printf("Es miembro de Toco? Ingrese S / N: ");
    scanf(" %c", &esMiembro);

    if (cantProductos >= 2 && precioTotal > 149999)
    {
        descuentoTotal += 0.10;
    }

    if (esMiembro == 's' || esMiembro == 'S')
    {
        descuentoTotal += 0.05;
    }

    // En caso de que el descuento sea mas de 0
    if (descuentoTotal != 0)
    {
        // Le resto el descuento
        totalAbonar = precioTotal - (precioTotal * descuentoTotal);
    }
    else
    {
        totalAbonar = precioTotal;
    }

    // Agrego el iva
    totalAbonar = (totalAbonar + (totalAbonar * 0.21));

    printf("El descuento total es de %.f por ciento\n", descuentoTotal * 100);
    printf("El total a abonar con iva es de: %.2f\n", totalAbonar);
    printf("El descuento fue de: $%.2f", totalAbonar * descuentoTotal);
}