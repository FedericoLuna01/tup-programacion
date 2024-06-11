#include <stdio.h>

void main()
{
    int opc;
    do
    {
        printf("MENU\n");
        printf("1-test\n");
        printf("2-test\n");
        printf("0-Salir\n");
        printf("Ingrese una opcion: ");
        scanf("%i", &opc);

        switch (opc)
        {
        case 1:
            // Procedimientos
            break;
        case 2:
            // Procedimientos
            break;
        case 0:
            printf("Gracias por usar.");
            break;
        default:
            printf("Opcion incorrecta.");
            break;
        }

        //  Procedimientos

        if (opc == 1)
        {
            // procedimientos
        }
        else if (opc == 2)
        {
            // procedimientos
        }
        else if (opc == 0)
        {
            printf("Gracias por usar.");
        }
        else
        {
            printf("Opcion incorrecta.");
        }

    } while (opc != 0);
}