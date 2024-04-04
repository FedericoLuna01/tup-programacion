#include <stdio.h>
#include <stdlib.h>

void main()
{
    int num1;
    int num2;
    int resultado;
    printf("Ingrese el primer numero: ");
    scanf("%d", &num1);
    printf("Ingrese el segundo numero: ");
    scanf("%d", &num2);

    resultado = num1 + num2;

    printf("El resultado de la suma de %d y %d es: %d\n", num1, num2, resultado);
    // En caso de que quiera mostrar un dato de tipo CHAR tengo que poner %c

    // Me puedo ahorrar la variable resultado
    // printf("El resultado de la suma de %d y %d es: %d\n", num1, num2, num1 + num2);
    system("pause");
}