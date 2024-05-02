#include <stdio.h>
#include <stdlib.h>

void main()
{
    int j, nro;

    printf("Ingrese un numero: ");
    scanf("%i", &nro);

    for (nro; nro >= 1; nro--)
    {
        for (j = 1; j <= nro; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
}