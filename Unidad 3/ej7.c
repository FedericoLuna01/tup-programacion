#include <stdio.h>
/*
Ingresar 5 números enteros e informar el mayor y el menor. Nota: Los números
ingresados no deben ser negativos.
*/

void main()
{
    int num, menor, mayor;
    int i;
    menor = 0;
    mayor = 0;
    for (i = 1; i <= 5; i++)
    {
        printf("Ingrese el %i° numero: ", i);
        scanf("%i", &num);
        if (menor > num || menor == 0)
        {
            menor = num;
            printf("Ahora el menor paso a ser %i\n", menor);
        }
        if (mayor < num)
        {
            mayor = num;
            printf("Ahora el mayor paso a ser %i\n", mayor);
        }
    };

    printf("El mayor es: %i\n", mayor);
    printf("El menor es: %i", menor);
}