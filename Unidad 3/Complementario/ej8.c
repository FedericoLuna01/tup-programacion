#include <stdio.h>
#include <stdlib.h>

/*
    Se dispone de un conjunto de corredores de una carrera de 3 vueltas,se contabiliza para cada vuelta la marca obtenida por cada corredor. Se desea saber:
    ● Número del corredor con el mejor promedio (más bajo).
    ● Promedio general de la carrera.
    ● Promedio general por vuelta.
    Validar que las marcas sean un número entero positivo.
    El número del corredor es un entero entre[2000,3000]
*/

void main()
{
    float promedioGeneral = 0, promedioVuelta = 0, vuelta = 0, promedioCorredor, marca, marcaMin, marcaTotal;
    int numCorredor, contadorCorredores = 0, mejorCorredor;

    do
    {
        printf("Ingresar numero del corredor (0 para terminar): ");
        scanf("%d", &numCorredor);
        marca = 0;

        if (numCorredor != 0 && numCorredor >= 2000 && numCorredor <= 3000)
        {
            contadorCorredores++;
            for (int i = 1; i <= 3; i++)
            {
                do
                {
                    printf("Ingrese el tiempo de la vuelta %i: ", i);
                    scanf("%f", &vuelta);
                    if (vuelta < 0)
                    {
                        printf("Ingrese un valor positivo de vuelta \n");
                    }
                    else
                    {
                        marca += vuelta;
                        marcaTotal += vuelta;
                    }
                } while (vuelta < 0);
            }

            if (contadorCorredores == 1)
            {
                marcaMin = marca;
                mejorCorredor = numCorredor;
            }
            else
            {
                if (marca < marcaMin)
                {
                    marcaMin = marca;
                    mejorCorredor = numCorredor;
                    printf("Ahora la mejor marca es: %.2f\n", marcaMin);
                }
            }

            promedioVuelta = marca / 3;
            printf("El promedio de la vuelta es: %.2f\n", promedioVuelta);
        }
        else if (numCorredor == 0)
        {
            printf("Gracias por usar :)\n");
        }
        else
        {
            printf("Numero de corredor incorrecto\n");
        }
    } while (numCorredor >= 2000 && numCorredor <= 3000 || numCorredor != 0);

    promedioGeneral = marcaTotal / (contadorCorredores * 3);

    printf("Hubo %i corredores\n", contadorCorredores);
    printf("El promedio general de la carrera es %.2f\n", promedioGeneral);
    printf("El promedio mas bajo es el corredor %i con un tiempo promedio de: %.2f\n", mejorCorredor, marcaMin / 3);
}