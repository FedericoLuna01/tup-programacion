#include <stdio.h>
/*
Ingresar 5 números enteros e informar el mayor y el menor. Nota: Los números
ingresados no deben ser negativos.
*/

void main()
{
    int num, menor, mayor;
    int i;
    mayor = 0;
    for (i = 1; i <= 5; i++)
    {
        printf("Ingrese el %i numero: ", i);
        // TODO: Validar que no sea un numero negativo
        scanf("%i", &num);

        if (menor > num || i == 1)
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