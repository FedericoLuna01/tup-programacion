#include <stdio.h>

/*
Crea un programa que a partir del número del mes nos informe la cantidad de días que posee el mismo.
*/

void main()
{
    int numeroMes;
    printf("Ingrese un numero de mes: ");
    scanf("%d", &numeroMes);
    if (numeroMes >= 12 || numeroMes <= 1)
    {
        printf("El numero de mes ingresado no es valido");
    }
    else
    {
        switch (numeroMes)
        {
        case 2:
            printf("Los dias del mes son 28 (29 si es bisiesto)");
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            printf("Los dias del mes son 30");
            break;
        default:
            printf("Los dias del mes son 31");
            break;
        }
    }
}