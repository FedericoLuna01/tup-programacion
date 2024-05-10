#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/*
    Deseamos realizar un programa que gestione las notas de una materia de N alumnos para las 3 comisiones. Suponer que todas las comisiones tienen la misma cantidad N de alumnos que
    debe solicitarse por teclado antes del menú.
    El programa debe mostrar un menú con las siguientes opciones:
    1. Cargar notas alumnos por comisión
    2. Promedio por Comisión
    3. Promedio de la materia
    4. Cantidad de aplazos en la materia
    5. Cantidad de regularizados en la materia
    6. Cantidad de aprobados en la materia
    7. Salir

    La opción 2 muestra para cada comisión el promedio de dicha comisión.
    La opción 3 muestra el promedio total de la materia.
    La opción 4 muestra la cantidad de alumnos que tuvieron una nota entre 0 y 3. [0,4)
    La opción 5 muestra la cantidad de alumnos que tuvieron una nota [4,6).
    La opción 6 muestra la cantidad de alumnos que tuvieron una nota mayor o igual a 6.
    SÓLO se saldrá de la aplicación si se selecciona la opción 7.
*/

void main()
{
    int opcion,
        cantAlumnos,
        cantAlumnosAplazados = 0,
        cantAlumnosRegularizados = 0,
        cantAlumnosAprobados = 0;
    float notasAlumnos[100][3],
        promedioPorComision[3],
        totalNotasPorComision[] = {0, 0, 0},
        totalNotasMateria = 0;
    bool notasIngresadas = false;

    do
    {
        printf("Ingrese la cantidad de alumnos: ");
        scanf("%i", &cantAlumnos);

        if (cantAlumnos <= 0 || cantAlumnos >= 100)
        {
            printf("Cantidad invalida\n");
        }
    } while (cantAlumnos <= 0 || cantAlumnos >= 100);

    do
    {
        system("cls");

        printf("----------MENU----------\n1. Cargar notas alumnos por comision\n2. Promedio por Comision\n3. Promedio de la materia\n4. Cantidad de aplazos en la materia\n5. Cantidad de regularizados en la materia\n6. Cantidad de aprobados en la materia\n7. Salir\nIngrese una opcion: ");
        scanf("%i", &opcion);

        switch (opcion)
        {
        case 1:
            system("cls");

            for (int c = 0; c < 3; c++)
            {
                printf("Notas de la comision %d:\n", c + 1);
                for (int i = 0; i < cantAlumnos; i++)
                {
                    do
                    {
                        printf("Ingrese la nota del alumno %i: ", i + 1);
                        scanf("%f", &notasAlumnos[i][c]);

                        if (notasAlumnos[i][c] < 0 || notasAlumnos[i][c] > 10)
                        {
                            printf("Nota invalida\n");
                        }
                        else
                        {
                            if (notasAlumnos[i][c] > 0 && notasAlumnos[i][c] < 4)
                            {
                                cantAlumnosAplazados++;
                            }
                            else if (notasAlumnos[i][c] >= 4 && notasAlumnos[i][c] < 6)
                            {
                                cantAlumnosRegularizados++;
                            }
                            else
                            {
                                cantAlumnosAprobados++;
                            }
                        }

                    } while (notasAlumnos[i][c] < 0 || notasAlumnos[i][c] > 10);
                }
            }

            // Cuando se termina de ingresar las notas calculo las notas por comision
            for (int c = 0; c < 3; c++)
            {
                for (int i = 0; i < cantAlumnos; i++)
                {
                    totalNotasPorComision[c] += notasAlumnos[i][c];
                }
            };

            printf("Notas ingresadas correctamente.\n");
            notasIngresadas = true;
            system("pause");
            break;
        case 2:
            system("cls");

            if (notasIngresadas == false)
            {
                printf("No hay notas ingresadas\n");
            }
            else
            {
                for (int c = 0; c < 3; c++)
                {
                    printf("El promedio de la comision %i es: %.2f\n", c + 1, totalNotasPorComision[c] / cantAlumnos);
                };
            }

            system("pause");
            break;
        case 3:
            system("cls");

            if (notasIngresadas == false)
            {
                printf("No hay notas ingresadas\n");
            }
            else
            {
                for (int c = 0; c < 3; c++)
                {
                    totalNotasMateria += totalNotasPorComision[c];
                }
                printf("El promedio de la materia es: %.2f\n", totalNotasMateria / (3 * cantAlumnos));
            }

            system("pause");
            break;
        case 4:
            system("cls");

            if (notasIngresadas == false)
            {
                printf("No hay notas ingresadas\n");
            }
            else
            {
                printf("Cantidad de alumnos aplazados: %d\n", cantAlumnosAplazados);
            }

            system("pause");
            break;
        case 5:
            system("cls");

            if (notasIngresadas == false)
            {
                printf("No hay notas ingresadas\n");
            }
            else
            {

                printf("Cantidad de alumnos regularizados: %d\n", cantAlumnosRegularizados);
            }

            system("pause");
            break;
        case 6:
            system("cls");

            if (notasIngresadas == false)
            {
                printf("No hay notas ingresadas\n");
            }
            else
            {
                printf("Cantidad de alumnos aprobados: %d\n", cantAlumnosAprobados);
            }

            system("pause");
            break;
        case 7:
            system("cls");
            printf("Gracias por usar :)\n");
            system("pause");
            break;
        default:
            printf("Opcion incorrecta.\n");
            system("pause");
            break;
        }
    } while (opcion != 7 || (opcion >= 1 && opcion <= 7));
}