#include <stdio.h>
#include <stdlib.h>

/*
En Bike’s Best Shop, un comercio que se especializa en la venta de distintos tipos de
bicicletas, se está armando una nueva promoción de descuentos según el tipo de cliente y
la bicicleta que desea comprar. Luego de hablar con el negocio, armamos los siguientes
requisitos para aplicar los descuentos:
- Hay tres tipos de bicicletas: deportiva, común(sin cambios). A su vez, la común se divide
en con canasto y sin canasto.
- Hay dos tipos de medio de pago: efectivo/débito o crédito.
- Si el cliente es jubilado y compra una bicicleta deportiva, obtiene un 25% de
descuento en el total de lo comprado. En cualquier otro caso,el jubilado tiene un
10% de descuento.
- Si el cliente paga en efectivo/débito, posee un 15% de descuento extra, indistinto del
tipo de cliente o bicicleta seleccionada.
*/

void main()
{
    int medioPago, tipoBici;
    char esJubilado;
    char tipoBiciComun;
    float precioBici, descuento;

    printf("Ingrese medio de pago\n1-Efectivo/debito\n2-Credito\nOpcion: ");
    scanf("%d", &medioPago);

    printf("Es jubilado? Ingrese 'S' o 'N': ");
    scanf(" %c", &esJubilado);

    printf("Ingrese el tipo de bicicleta\n1-Deportiva\n2-Comun\nOpcion: ");
    scanf("%d", &tipoBici);

    if (tipoBici == 1)
    {
        precioBici = 500;
    }
    else
    {
        printf("desea que tenga canasto? Ingrese S o N segun el caso\n");
        scanf(" %c", &tipoBiciComun);

        if (tipoBiciComun == 'S' || tipoBiciComun == 's')
        {
            precioBici = 400;
        }
        else
        {
            precioBici = 300;
        }
    }

    if (esJubilado == 'S' || esJubilado == 's')
    {
        if (tipoBici == 1)
        {
            descuento = 0.25;
        }
        else
        {
            descuento = 0.10;
        }
    }

    if (medioPago == 1)
    {
        descuento = descuento + 0.15;
    }

    precioBici = precioBici - precioBici * descuento;
    printf("El precio de la bici es %.2f\n", precioBici);
}