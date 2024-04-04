#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
    Solicitar ingresar dos lados de un triángulo rectángulo y calcular, la hipotenusa, el
    perímetro, la superficie. Imprima los resultados de las operaciones solicitadas.
*/

void main()
{
    int altura, base;
    float superficie, perimetro, hipotenusa;

    printf("Ingrese la base de su triangulo rectangulo: ");
    scanf("%d", &base);

    printf("Ingrese la altura de su triangulo rectangulo: ");
    scanf("%d", &altura);

    hipotenusa = sqrt((base * base) + (altura * altura));
    perimetro = hipotenusa + base + altura;
    superficie = (base * altura) / 2.0;

    printf("La hipotenusa del triangulo es: %.2f\n", hipotenusa);
    printf("El perimetro del triangulo es: %.2f\n", perimetro);
    printf("La superficie del triangulo es: %.2f\n", superficie);

    system("pause");
};