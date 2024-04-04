#include <stdio.h>
#include <stdlib.h>
/*
    Ingresar los lados de un triángulo calcular su perímetro e imprimirlo
*/
void main()
{
    int lado1;
    int lado2;
    int lado3;
    int perimetro;

    printf("Ingrese el primer lado: ");
    scanf("%d", &lado1);
    printf("Ingrese el segundo lado: ");
    scanf("%d", &lado2);
    printf("Ingrese el tercer lado: ");
    scanf("%d", &lado3);

    perimetro = lado1 + lado2 + lado3;

    printf("El perimetro del triangulo es: %d\n", perimetro);

    system("pause");
}