#include <stdio.h>

/*
Realizar un programa de conversión que traduzca un peso ingresado en Kg a gramos, o
a libras, o a toneladas o a onzas. El sistema debe preguntar al usuario a qué lo quiere
convertir.
Ejemplo de cómo se puede preguntar:
Seleccione la opción deseada: 1: para convertir a gramos - 2: para convertir a
toneladas – 3: para convertir a libras - 4: para convertir a onzas.
*/

void main()
{
    int opcion;
    float pesoEnKilos, total;

    printf("A que peso lo quiere convertir?\n1-Gramos\n2-Toneladas\n3-Libras\n4-Onzas\nIngrese una opcion:");
    scanf("%i", &opcion);
    printf("Ingrese el peso en Kilos: ");
    scanf("%f", &pesoEnKilos);
    switch (opcion)
    {
    case 1:
        // Convertir a gramos
        total = pesoEnKilos * 1000;
        printf("%.2f Kilos en gramos es: %.2f", pesoEnKilos, total);
        break;
    case 2:
        // Convertir a toneladas
        total = pesoEnKilos / 1000;
        printf("%.2f Kilos en toneladas es: %.2f", pesoEnKilos, total);
        break;
    case 3:
        // Convertir a libras
        total = pesoEnKilos * 2.2042;
        printf("%.2f Kilos en libras es: %.2f", pesoEnKilos, total);
        break;
    case 4:
        // Convertir a onzas
        total = pesoEnKilos * 35.2739;
        printf("%.2f Kilos en onzas es: %.2f", pesoEnKilos, total);
        break;
    default:
        printf("Ingreso un numero incorrecto");
        break;
    };
}