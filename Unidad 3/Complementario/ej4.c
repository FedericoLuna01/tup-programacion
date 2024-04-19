#include <stdio.h>

/*
    “La empresa System SRL cuenta con 5 departamentos donde se realizan diferentes actividades
    (A saber: marketing, comercial, soporte técnico, administrativo y finanzas). Para cada uno de
    los departamentos se conoce el número de empleados X (se ingresa).
    3
    Se tiene por otro lado, por cada uno de los empleados dentro del departamento, la cantidad de
    horas trabajadas y el código de turno de trabajo (“M”: Mañana, “T”: tarde).
    Se deberá mostrar:
    ● La cantidad de horas trabajadas en cada departamento.
    ● La cantidad de horas trabajadas en turno tarde y turno mañana de toda la empresa.
*/

void main()
{
    int cantEmpleadosMarketing, cantEmpleadosComercial, cantEmpleadosSoporte, cantEmpleadosAdmin, cantEmpleadosFinanzas;
    float horasTrabajadasMarketing, horasTrabajadasComercial, horasTrabajadasSoporte, horasTrabajadasAdmin, horasTrabajadasFinanzas;
    float totalHorasTrabajadasMarketing = 0, totalHorasTrabajadasComercial = 0, totalHorasTrabajadasSoporte = 0, totalHorasTrabajadasAdmin = 0, totalHorasTrabajadasFinanzas = 0;
    char turno;
    float horasTarde, horasManiana;

    for (int i = 1; i <= 5; i++)
    {
        switch (i)
        {
        case 1:
            printf("Ingrese la cantidad de empleados de marketing: ");
            scanf("%i", &cantEmpleadosMarketing);

            for (int j = 1; j <= cantEmpleadosMarketing; j++)
            {
                printf("Ingrese las horas trabajadas del empleado %i: ", j);
                scanf("%f", &horasTrabajadasMarketing);

                totalHorasTrabajadasMarketing += horasTrabajadasMarketing;

                printf("En que turno trabaja? M / T: ");
                scanf(" %c", &turno);

                if (turno == 'M' || turno == 'm')
                {
                    horasManiana += horasTrabajadasMarketing;
                }
                else if (turno == 'T' || turno == 't')
                {
                    horasTarde += horasTrabajadasMarketing;
                }
                else
                {
                    printf("Codigo incorrecto\n");
                }
            }
            break;
        case 2:
            printf("Ingrese la cantidad de empleados de comercial: ");
            scanf("%i", &cantEmpleadosComercial);

            for (int k = 1; k <= cantEmpleadosComercial; k++)
            {
                printf("Ingrese las horas trabajadas del empleado %i: ", k);
                scanf("%f", &horasTrabajadasComercial);

                totalHorasTrabajadasComercial += horasTrabajadasComercial;

                printf("En que turno trabaja? M / T: ");
                scanf(" %c", &turno);

                if (turno == 'M' || turno == 'm')
                {
                    horasManiana += horasTrabajadasComercial;
                }
                else if (turno == 'T' || turno == 't')
                {
                    horasTarde += horasTrabajadasComercial;
                }
                else
                {
                    printf("Codigo incorrecto\n");
                }
            }
            break;
        case 3:
            printf("Ingrese la cantidad de empleados de soporte: ");
            scanf("%i", &cantEmpleadosSoporte);

            for (int l = 1; l <= cantEmpleadosSoporte; l++)
            {
                printf("Ingrese las horas trabajadas del empleado %i: ", l);
                scanf("%f", &horasTrabajadasSoporte);

                totalHorasTrabajadasSoporte += horasTrabajadasSoporte;

                printf("En que turno trabaja? M / T: ");
                scanf(" %c", &turno);

                if (turno == 'M' || turno == 'm')
                {
                    horasManiana += horasTrabajadasSoporte;
                }
                else if (turno == 'T' || turno == 't')
                {
                    horasTarde += horasTrabajadasSoporte;
                }
                else
                {
                    printf("Codigo incorrecto\n");
                }
            }
            break;
        case 4:
            printf("Ingrese la cantidad de empleados de admin: ");
            scanf("%i", &cantEmpleadosAdmin);

            for (int m = 1; m <= cantEmpleadosAdmin; m++)
            {
                printf("Ingrese las horas trabajadas del empleado %i: ", m);
                scanf("%f", &horasTrabajadasAdmin);

                totalHorasTrabajadasAdmin += horasTrabajadasAdmin;

                printf("En que turno trabaja? M / T: ");
                scanf(" %c", &turno);

                if (turno == 'M' || turno == 'm')
                {
                    horasManiana += horasTrabajadasAdmin;
                }
                else if (turno == 'T' || turno == 't')
                {
                    horasTarde += horasTrabajadasAdmin;
                }
                else
                {
                    printf("Codigo incorrecto\n");
                }
            }
            break;
        case 5:
            printf("Ingrese la cantidad de empleados de finanzas: ");
            scanf("%i", &cantEmpleadosFinanzas);

            for (int j = 1; j <= cantEmpleadosFinanzas; j++)
            {
                printf("Ingrese las horas trabajadas del empleado %i: ", j);
                scanf("%f", &horasTrabajadasFinanzas);

                totalHorasTrabajadasFinanzas += horasTrabajadasFinanzas;

                printf("En que turno trabaja? M / T: ");
                scanf(" %c", &turno);

                if (turno == 'M' || turno == 'm')
                {
                    horasManiana += horasTrabajadasFinanzas;
                }
                else if (turno == 'T' || turno == 't')
                {
                    horasTarde += horasTrabajadasFinanzas;
                }
                else
                {
                    printf("Codigo incorrecto\n");
                }
            }
            break;
        default:
            break;
        }
    }

    printf("Las horas trabajadas en el turno maniana son: %.2f\n", horasManiana);
    printf("Las horas trabajadas en el turno tarde son: %.2f\n", horasTarde);
    printf("Las horas de marketing son: %.2f\n", totalHorasTrabajadasMarketing);
    printf("Las horas de comercial son: %.2f\n", totalHorasTrabajadasComercial);
    printf("Las horas de soporte tecnico son: %.2f\n", totalHorasTrabajadasSoporte);
    printf("Las horas de administrativo son: %.2f\n", totalHorasTrabajadasAdmin);
    printf("Las horas de finanzas son: %.2f\n", totalHorasTrabajadasFinanzas);
}