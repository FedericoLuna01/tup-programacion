#include <stdio.h>

void main()
{
    float longitud, espesor, longitudPromedioLote, espesorPromedioLote, menorLongPiezas, menorLongitudPromedioLote, mayorEspesorPromedioLote;
    float longitudTotalLote = 0, espesorTotalLote = 0;
    int nroLoteMayorEspesor, nroLoteMenorLong, cantPiezas, cantLotes, totalPiezasEvaluadas = 0;

    printf("Ingrese la cantidad de lotes: ");
    scanf("%i", &cantLotes);

    for (int i = 1; i <= cantLotes; i++)
    {
        printf("Ingrese la cantidad de piezas del lote %d: ", i);
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
        if (i == 1)
        {
            menorLongitudPromedioLote = longitudPromedioLote;
            nroLoteMenorLong = i;
            mayorEspesorPromedioLote = espesorPromedioLote;
            nroLoteMayorEspesor = i;
        }
        else
        {
            if (longitudPromedioLote < menorLongitudPromedioLote)
            {
                menorLongitudPromedioLote = longitudPromedioLote;
                nroLoteMenorLong = i;
            }
            if (espesorPromedioLote > mayorEspesorPromedioLote)
            {
                mayorEspesorPromedioLote = espesorPromedioLote;
                nroLoteMayorEspesor = i;
            }
        }

        printf("La longitud promedio del lote es: %f", longitudPromedioLote);
        printf("El espesor promedio del lote es: %f", espesorPromedioLote);
    }
    printf("el lote %d con la menor longitud promedio es %.2f ", nroLoteMenorLong, menorLongitudPromedioLote);
    printf("el lote %d con el mayor espesor promedio es %.2f", nroLoteMayorEspesor, mayorEspesorPromedioLote);
    printf("la cantidad total de piezas evaluadas son %d", totalPiezasEvaluadas);
    printf("la cantidad total de lotes evaluadas son %d", cantLotes);
}