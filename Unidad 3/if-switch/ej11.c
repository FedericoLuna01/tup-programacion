#include <stdio.h>

/*
Pedir al usuario que ingrese dos números (permitir ingresar número con decimales).
Luego presentar el siguiente menú:
1. Informar su suma
2. Informar su resta
3. Informar su multiplicación
4. Informar su división
5. Salir
Seleccione una operación:
Mostrar el resultado de la operación seleccionada. Si el usuario ingresa la opción 5 el
programa debe terminar
*/

void main()
{
    float num1, num2;
    int opcion;

    printf("Ingrese el primer numero: ");
    scanf("%f", &num1);

    printf("Ingrese el segundo numero: ");
    scanf("%f", &num2);

    printf("Que operacion desea realizar?\n1-Informar suma\n2-Informar resta\n3-Informar multiplicacion\n4-Informar division\n5-Salir\nIngrese una opcion: ");
    scanf("%i", &opcion);

    switch (opcion)
    {
    case 1:
        printf("La suma es: %.2f", num1 + num2);
        break;
    case 2:
        printf("La resta es: %.2f", num1 - num2);
        break;
    case 3:
        printf("El producto es: %.2f", num1 * num2);
        break;
    case 4:
        printf("La division es: %.2f", num1 / num2);
        break;
    case 5:
        printf("Gracias por usar mi aplicacion!");
        break;
    default:
        printf("Opcion incorrecta");
        break;
    }
}