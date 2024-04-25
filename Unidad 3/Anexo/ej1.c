#include <stdio.h>
#include <stdlib.h>

/*
    Un alumno desea recursar una materia del cuatrimestre anterior, para ello debe enviar una
    solicitud. Se desea validar que los datos requeridos para enviar la solicitud estén cargados
    correctamente.
    Datos requeridos:
    ● Nombre y Apellido // NO HACE FALTA
    ● Legajo (Numérico - longitud 5) // Menor a 99999
    ● Materia a recursar (Mostrar una lista y validar que ingrese una de las opciones
    mostradas). // Mostrar 1-lab comp 1, 2-program 1, 3-matemática
    ● Comisión cursado cuatrimestre anterior (Mostrar una lista y validar que ingrese una de
    las opciones mostradas). // Mostrar 1, 2 o 3
    ● Turno de preferencia para recursar (Opciones posibles: [TM/ TT/TN] ). // M = MAÑANA, T = TARDE, N = NOCHE
*/

void main()
{
    int legajo, materiaARecursar, comisionCursada;
    char turno;

    do
    {
        printf("Ingrese su legajo: ");
        scanf("%i", &legajo);

        if (legajo > 99999 || legajo < 10000)
        {
            printf("Su legajo es incorrecto. Intente de nuevo\n");
        }

    } while (legajo > 99999 || legajo < 10000);

    printf("Listado de materias: \n1-Laboratorio de computacion\n2-Programacion\n3-Matematica\nIngrese la materia a recursar: ");
    scanf("%i", &materiaARecursar);
    while (materiaARecursar < 1 || materiaARecursar > 3)
    {
        printf("Materia incorrecta. Intente de nuevo\n");
        printf("Listado de materias: \n1-Laboratorio de computacion\n2-Programacion\n3-Matematica\nIngrese la materia a recursar:");
        scanf("%i", &materiaARecursar);
    }

    do
    {
        printf("Listado de comisiones:\n1-Comision 1\n2-Comision 2\n3-Comision 3\nIngrese su comision anterior: ");
        scanf("%i", &comisionCursada);

        if (comisionCursada < 1 || comisionCursada > 3)
        {
            printf("La comision es incorrecta. Intente de nuevo\n");
        }

    } while (comisionCursada < 1 || comisionCursada > 3);

    do
    {
        // M = MAÑANA, T = TARDE, N = NOCHE
        printf("Listado de turnos:\nM-Maniana\nT-Tarde\nN-Noche\nIngrese su turno: ");
        scanf(" %c", &turno);

        if ((turno != 'n' && turno != 'N') && (turno != 'm' && turno != 'M') && (turno != 't' && turno != 'T'))
        {
            printf("El turno es incorrecto. Intente de nuevo\n");
        }

    } while ((turno != 'n' && turno != 'N') && (turno != 'm' && turno != 'M') && (turno != 't' && turno != 'T'));

    printf("Legajo: %i\n", legajo);
    if (materiaARecursar == 1)
    {
        printf("Materia a recursar laboratorio\n");
    }
    else if (materiaARecursar == 2)
    {
        printf("Materia a recursar programacion\n");
    }
    else if (materiaARecursar == 3)
    {
        printf("Materia a recursar matematica\n");
    }
    printf("Comision anterior: %i\n", comisionCursada);
    printf("Turno: %c ", turno);
}