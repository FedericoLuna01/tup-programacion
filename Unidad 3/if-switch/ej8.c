#include <stdio.h>

/*
Actualizar el saldo de una cuenta bancaria, a partir de un retiro. Verificar que el saldo
sea mayor o igual que el importe a retirar.
*/

void main()
{
    float SALDO_BANCO = 1000;
    float cantidadRetiro;

    printf("Cuanto dinero quiere retirar? ");
    scanf("%f", &cantidadRetiro);

    if (cantidadRetiro > SALDO_BANCO)
    {
        printf("No puede retirar %f.\nSu saldo es de: %f", cantidadRetiro, SALDO_BANCO);
    }
    else
    {
        SALDO_BANCO = SALDO_BANCO - cantidadRetiro;
        printf("Retiro exitoso!\nSaldo actual: %.2f", SALDO_BANCO);
    }
}