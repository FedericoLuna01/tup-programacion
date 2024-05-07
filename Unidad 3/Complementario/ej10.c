#include <stdio.h>
#include <math.h>

int main()
{
    int n, x;
    do
    {
        printf("Ingrese un numero entero positivo: ");
        scanf("%i", &n);
    } while (n <= 0);
    for (int i = 0; i <= n; i++)
    {
        if (i == 0)
        {
            x = 1;
            printf("n = %i ==> %i\n", i, 1);
        }
        else
        {
            x = pow(2, i);
            printf("n = %i ==> %i\n", i, x);
        }
    }
    return 0;
}
