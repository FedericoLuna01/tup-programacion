#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
    El usuario debe poder ingresar los lados de un rectángulo y el programa calcula con
    esos datos la diagonal principal del rectángulo, superficie y perímetro. Mostrar al
    usuario los resultado
*/

void main()
{
    float base, altura, diagonal, superficie, perimetro;

    printf("Ingrese la base del rectangulo: ");
    scanf("%f", &base);

    printf("Ingrese la altura del rectangulo: ");
    scanf("%f", &altura);

    diagonal = sqrt(pow(base, 2) + pow(altura, 2));
    superficie = base * altura;
    perimetro = (base * 2) + (altura * 2);

    printf("La diagonal del rectangulo mide: %.2f \n", diagonal);
    printf("La superficie del rectangulo es: %.2f \n", superficie);
    printf("El perimetro del rectangulo es: %.2f \n", perimetro);

    system("pause");
}