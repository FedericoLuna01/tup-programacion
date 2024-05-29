#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// 12. Ingresar 2 nombres e indicar cuál de los dos precede alfabéticamente al otro o si son
// iguales.
void main()
{
    char nombre[2][30];
    for (int i = 0; i <= 1; i++)
    {
        printf("Ingrese el nombre %d: ", i + 1);
        scanf("%s", nombre[i]);
        //   fgets(nombre[i], sizeof(nombre[i]), stdin);
    }
    if (strcmp(nombre[0], nombre[1]) == 0)
    {
        printf("Es igual");
    }
    else
    {
        if (strcmp(nombre[0], nombre[1]) == 1)
        {
            printf("Es mayor");
        }
        else
        {
            printf("es menor");
        }
    }
}