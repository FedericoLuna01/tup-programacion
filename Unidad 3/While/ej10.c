#include <stdio.h>
#include <stdlib.h>
/*
Pedir al usuario que ingrese dos numeros(decimales si quiere) Luego presentar el siguiente menu
1)Informar su suma
2)Informar su resta
3)Informar su multiplicacion
4) Informar su division
5) Informar cantidad de operaciones realizadas
6) salir
Seleccione una operacion:
Que seleccione una operacion y mostrar la solución ahi mismo,
El menu se sigue mostrando hasta que el usuario ingrese el 6
Com el num 6 salimos
*/
void main()
{
    float num1, num2, suma = 0, resta = 0, mult = 0, division = 0;
    int opcion, opRealizadas = 0;
    printf("Ingrese numero 1: ");
    scanf("%f", &num1);
    printf("Ingrese numero 2: ");
    scanf("%f", &num2);
    do
    {
        system("cls");
        printf("Listado de opciones:\n1-Informar su suma \n2-Informar su resta \n3-Informar su multiplicacion \n4-Informar su division \n5-Informar cantidad de operaciones realizadas\nIngrese una opcion: ");
        scanf("%d", &opcion);
        if (opcion < 1 || opcion >= 7)
        {
            printf("Opcion incorrecta\n");
            system("pause");
        }

        if (opcion == 1)
        {
            suma = num1 + num2;
            opRealizadas++;
            printf("La suma de %.2f y %.2f es: %.2f\n", num1, num2, suma);
            system("pause");
        }
        else if (opcion == 2)

        {
            resta = num1 - num2;
            opRealizadas++;
            printf("La resta de %.2f y %.2f es: %.2f\n", num1, num2, resta);
            system("pause");
        }
        else if (opcion == 3)
        {
            mult = num1 * num2;
            opRealizadas++;
            printf("La multiplicacion de %.2f y %.2f es: %.2f\n", num1, num2, mult);
            system("pause");
        }
        else if (opcion == 4)
        {
            division = num1 / num2;
            opRealizadas++;
            printf("La division de %.2f y %.2f es: %.2f\n", num1, num2, division);
            system("pause");
        }
        else if (opcion == 5)
        {
            printf("Se realizaron %d operaciones\n", opRealizadas);
            system("pause");
        }
    } while (opcion != 6);
}