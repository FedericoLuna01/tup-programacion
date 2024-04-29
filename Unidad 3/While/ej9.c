#include <stdio.h>
#include <stdlib.h>

/*
Realizar un programa que permita ver información a un cliente de un banco. Para ello
el cliente deberá ingresar su usuario (número de DNI) y contraseña (número entero),
validar que los datos ingresados sean correctos, se permitirá al cliente 3 intentos de
ingreso de contraseña. Al loguearse correctamente presentar un menú con las
siguientes opciones:
1- Consultar saldo
2- Consultar CBU
3- Salir
Trabajar con las siguientes variables:
 int dni = 35654123;
 int pass = 1234;
 int saldo = 150000;
 int cbu = 986323456;
 int dniIngresado = 0;
 int passIngresado = 0;
 int intentos = 1;
 int ingresaCorrectamente = 0;
*/

void main()
{
    // int dni = 35654123;
    int dni = 123;
    int pass = 123;
    int saldo = 150000;
    int cbu = 986323456;
    int dniIngresado = 0;
    int passIngresado = 0;
    int intentos = 1;
    int ingresaCorrectamente = 0;
    int opcion;
    do
    {
        printf("Ingrese el DNI: ");
        scanf("%i", &dniIngresado);

        printf("Ingrese la pass: ");
        scanf("%i", &passIngresado);

        if (dniIngresado != dni || passIngresado != pass)
        {
            printf("Credenciales incorrectas\n");
            intentos++;
        }

    } while (intentos <= 3 && (passIngresado != pass || dni != dniIngresado));

    if (intentos > 3)
    {
        printf("Excedio el limite de intentos\n");
    }
    else
    {
        do
        {
            system("cls");
            printf("Ingreso correctamente\nMenu:\n1- Consultar saldo\n2- Consultar CBU\n3- Salir\nIngrese una opcion: ");
            scanf("%i", &opcion);
            if (opcion == 1)
            {
                printf("El saldo es de %i\n", saldo);
                system("pause");
                system("cls");
            }
            else if (opcion == 2)
            {
                printf("Su cbu es: %i\n", cbu);
                system("pause");
                system("cls");
            }
            else if (opcion == 3)
            {
                printf("Sesion cerrada\n");
            }
        } while (opcion != 3);
    }
}