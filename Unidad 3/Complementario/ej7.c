#include <stdio.h>

/*
    Una planta que fabrica perfiles de hierro posee un lote de N piezas de M lotes y desea verificar
    la longitud y espesor de los perfiles del lote con un programa.
    Al iniciar el programa solicitar que se ingrese la cantidad M de lotes a evaluar.
    Por cada pieza en el lote de N piezas se ingresa:
    ● Longitud
    ● Espesor
    Un perfil (pieza) es apto cuando:
    ● La longitud del mismo se encuentra en [1.3, 2.1] m
    ● El espesor del mismo se encuentra en [2.5, 3.1] mm

    Mostrar al finalizar la carga de las piezas del lote:
    ● Longitud promedio del lote
    ● Espesor promedio del lote
    Mostrar al finalizar la carga de todos los lotes:
    ● El lote con una Longitud promedio menor
    ● El lote con un Espesor promedio mayor
    ● La cantidad total de piezas evaluadas
    ● La cantidad total de lotes evaluados
*/

void main()
{
    float longitud, espesor, longitudPromedioLote, espesorPromedioLote, menorLongitudPromedioLote, mayorEspesorPromedioLote;
    float longitudTotalLote = 0, espesorTotalLote = 0;
    int cantPiezas, cantLotes, totalPiezasEvaluadas = 0;

    printf("Ingrese la cantidad de lotes: ");
    scanf("%i", &cantLotes);

    for (int i = 1; i <= cantLotes; i++)
    {
        printf("Ingrese la cantidad de lotes: ");
        scanf("%i", &cantPiezas);

        // Acumulador de piezas totales
        totalPiezasEvaluadas += cantPiezas;

        for (int j = 1; j <= cantPiezas; j++)
        {
            printf("Ingrese la longitud de la pieza");
            scanf("%f", &longitud);

            printf("Ingrese el espesor de la pieza");
            scanf("%f", &espesor);

            // Longitud [1.3, 2.1]
            // Espesor [2.5, 3.1]
            // En caso de que cumpla las condiciones ingresa al if / es apto
            if (longitud >= 1.3 && longitud <= 2.1 && espesor >= 2.5 && espesor <= 3.1)
            {
                longitudTotalLote += longitud;
                espesorTotalLote += espesor;
            }
        }

        longitudPromedioLote = longitudTotalLote / cantPiezas;
        espesorPromedioLote = espesorTotalLote / cantPiezas;

        printf("La longitud promedio del lote es: %f", longitudPromedioLote);
        printf("El espesor promedio del lote es: %f", espesorPromedioLote);
    }
}