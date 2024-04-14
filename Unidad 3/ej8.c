#include <stdio.h>
#include <stdbool.h>

/*
Ingresar dos ángulos de un triángulo e informar si es un triángulo rectángulo,
acutángulo u obtusángulo. Se debe validar además que los ángulos ingresados sean
números positivos menores a 180 y a su vez se debe validar que la suma de los dos
ángulos ingresados sea menor a 180.
Ejemplo1: A1=180  Error el ángulo debe ser un número positivo menor a 180°.
Ejemplo2: A1=91, A2=89  Error la suma de dos ángulos no puede ser mayor o igual a
180°
*/

// Obtusangulo = un angulo > 90
// Acutángulo = angulo < 90
// Rectangulo = angulo == 90

void main()
{
    float angulo1, angulo2, angulo3;
    bool anguloValido;
    do
    {
        printf("Ingrese el primer angulo del triangulo: ");
        scanf("%f", &angulo1);
        if (angulo1 >= 180)
        {
            printf("El angulo debe ser menor a 180\n");
            anguloValido = false;
        }
        else
        {
            anguloValido = true;
        }
    } while (anguloValido == false);

    do
    {
        printf("Ingrese el segundo angulo del triangulo: ");
        scanf("%f", &angulo2);
        if (angulo2 >= 180)
        {
            printf("El angulo debe ser menor a 180\n");
            anguloValido = false;
        }
        else if ((angulo1 + angulo2) >= 180)
        {
            printf("La suma de los 2 angulos debe dar menos de 180\n");
            anguloValido = false;
        }
        else
        {
            anguloValido = true;
        }
    } while (anguloValido == false);

    // Hago el calculo para saber lo que mide el tercer angulo
    angulo3 = (angulo1 + angulo2) - 180;

    if (angulo1 == 90 || angulo2 == 90 || angulo3 == 90)
    {
        printf("El triangulo es rectangulo\n");
    }
    else if (angulo1 >= 90 || angulo2 >= 90 || angulo3 >= 90)
    {
        printf("El triangulo es obtusangulo\n");
    }
    else
    {
        printf("El triangulo es acutangulo\n");
    }
}