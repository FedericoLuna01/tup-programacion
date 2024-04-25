#include <stdio.h>
int main()
{
    int usuario, contrasenia, contador;
    int usuario_guardado, contrasenia_guardada;
    usuario_guardado = 33;
    contrasenia_guardada = 33;
    printf("Ingrese usuario\n");
    scanf("%d", &usuario);
    printf("Ingrese contrasenia\n");
    scanf("%d", &contrasenia);
    contador = 1;
    while ((usuario != usuario_guardado || contrasenia != contrasenia_guardada) && contador < 3)
    {
        printf("Alguno de los datos ingresados es incorrecto\n");
        printf("Ingrese usuario\n");
        scanf("%d", &usuario);
        printf("Ingrese contrasenia\n");
        scanf("%d", &contrasenia);
        contador += 1;
    }
    if (usuario == usuario_guardado && contrasenia == contrasenia_guardada)
    {
        printf("Ingreso correctamente\n");
    }
    else
    {
        printf("Agoto los intentos permitidos, llame por telefono para desbloquear");
    }

    return 0;
}