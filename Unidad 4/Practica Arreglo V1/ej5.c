#include <stdio.h>
#include <stdlib.h>

/*
Realice un algoritmo que lea en un arreglo las marcas obtenidas por 10 corredores en una carrera e imprimir cuántos tienen una marca mayor, cuántos tienen una marca menor que el promedio y el promedio.
*/

void main()
{
    float marcas[3], sumaMarcas = 0, promedio;
    int marcasMayores = 0, marcasMenores = 0;

    for (int i = 0; i < 3; i++)
    {
        printf("Ingrese la marca del corredor %i: ", i + 1);
        scanf("%f", &marcas[i]);

        sumaMarcas += marcas[i];
    }

    promedio = sumaMarcas / 3;

    for (int i = 0; i < 3; i++)
    {
        if (marcas[i] < promedio)
        {
            marcasMenores++;
        }
        else
        {
            marcasMayores++;
        }
    }

    printf("El promedio fue: %f\n", promedio);
    printf("Corredores mas rapidos que el promedio: %i\n", marcasMenores);
    printf("Corredores mas lentos que el promedio: %i\n", marcasMayores);
}