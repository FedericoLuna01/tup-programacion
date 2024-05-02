#include <stdio.h>
#include <stdlib.h>

/*
Imprimir por consola 10 renglones, de manera que se visualice la siguiente salida:
@
@@
@@@
@@@@
@@@@@
@@@@@@
*/

int main()
{
    int i, j;

    for (i = 1; i <= 10; i++)
    {
        for (j = 10; j >= i; j--)
        {
            printf("@");
        }
        printf("\n");
    }
    return 0;
}
