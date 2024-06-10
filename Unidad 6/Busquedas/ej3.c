#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

/*
Al programa del ejercicio anterior modificarle la funcionalidad que muestra la lista de personas ordenadas por apellido, además debe estar ordenado por apellido+nombre
*/

#define CANT_PERSONAS 8

void cargarDatos(char datos[CANT_PERSONAS][5][20]);
int busquedaPaciente(char datos[CANT_PERSONAS][5][20], char dni[]);
void ordenarPacientes(char datos[CANT_PERSONAS][5][20], int columnaOrd);
void mostrarLista(char datos[CANT_PERSONAS][5][20]);

void main()
{
    char datos[CANT_PERSONAS][5][20];
    char dniABuscar[20];
    cargarDatos(datos);

    int opcMenu;
    do
    {
        system("cls");
        printf("Menu de opciones\n");
        printf("1-Lista de pacientes\n");
        printf("2-Buscar por DNI\n");
        printf("3-Ordenar por apellido\n");
        printf("4-Ordenar por nombre y apellido\n");
        printf("0-Salir\n");
        printf("Ingrese una opcion: ");
        scanf("%i", &opcMenu);

        switch (opcMenu)
        {
        case 1:
            system("cls");
            mostrarLista(datos);
            system("pause");
            break;
        case 2:
            system("cls");
            printf("Ingrese el dni: ");
            // fgets(dniABuscar, sizeof(dniABuscar), stdin);
            scanf("%s", dniABuscar);
            int dniEncontrado = busquedaPaciente(datos, dniABuscar);

            if (dniEncontrado == -1)
            {
                printf("No se encontro a la persona\n");
            }
            else
            {
                printf("Los datos de la persona encontrada son: \n");
                for (int i = 0; i < 5; i++)
                {
                    printf("%s, ", datos[dniEncontrado][i]);
                }
            }
            system("pause");
            break;
        case 3:
            system("cls");
            ordenarPacientes(datos, 1);
            mostrarLista(datos);
            system("pause");
            break;
        case 4:
            system("cls");
            ordenarPacientes(datos, 1);
            ordenarPacientes(datos, 0);
            mostrarLista(datos);
            system("pause");
            break;
        default:
            printf("Opcion invalida\n");
            system("pause");
            break;
        }
    } while (opcMenu != 0);
}

int busquedaPaciente(char datos[CANT_PERSONAS][5][20], char dni[])
{
    bool encontrado = false;
    int i = 0, pos;
    while (encontrado == false && i < CANT_PERSONAS)
    {
        if (strcmp(datos[i][2], dni) == 0)
        {
            // Encontrado
            pos = i;
            i = CANT_PERSONAS;
            encontrado = true;
            return pos;
        }
        else
        {
            i++;
        }
    }

    return -1;
}

void ordenarPacientes(char datos[CANT_PERSONAS][5][20], int columnaOrd)
{
    int posMenor;
    char aux[5][20];
    for (int i = 0; i < CANT_PERSONAS - 1; i++)
    {
        posMenor = i;
        for (int j = i + 1; j < CANT_PERSONAS; j++)
        {
            if (strcmp(datos[j][columnaOrd], datos[posMenor][columnaOrd]) == -1)
            {
                posMenor = j;
            }
        }
        for (int k = 0; k < 5; k++)
        {
            strcpy(aux[k], datos[i][k]);
            strcpy(datos[i][k], datos[posMenor][k]);
            strcpy(datos[posMenor][k], aux[k]);
        }
    }

    if (columnaOrd == 0)
    {
        printf("Pacientes ordenados por nombre\n");
    }
    else if (columnaOrd == 1)
    {
        printf("Pacientes ordenados por apellido\n");
    }
}

void mostrarLista(char datos[CANT_PERSONAS][5][20])
{
    printf("%-2s %-10s %-20s %-20s %-15s %-15s\n", "ID", "Nombre", "Apellido", "DNI", "Telefono", "Edad");
    printf("--------------------------------------------------------------------------------\n");
    for (int i = 0; i < CANT_PERSONAS; i++)
    {
        printf("%-2d %-10s %-20s %-20s %-15s %-15s\n",
               i,
               datos[i][0],  // Nombre
               datos[i][1],  // Apellido
               datos[i][2],  // DNI
               datos[i][3],  // Telefono
               datos[i][4]); // Edad
    }
}

void cargarDatos(char datos[CANT_PERSONAS][5][20])
{
    strcpy(datos[0][0], "Ana");
    strcpy(datos[1][0], "Camila");
    strcpy(datos[2][0], "Bruno");
    strcpy(datos[3][0], "Dardo");
    strcpy(datos[4][0], "Ernestina");
    strcpy(datos[5][0], "Fausto");
    strcpy(datos[6][0], "Jasmin");
    strcpy(datos[7][0], "Leonardo");

    strcpy(datos[0][1], "Martinez");
    strcpy(datos[1][1], "Noe");
    strcpy(datos[2][1], "Noe");
    strcpy(datos[3][1], "Pistilli");
    strcpy(datos[4][1], "Quesada");
    strcpy(datos[5][1], "Ramirez");
    strcpy(datos[6][1], "Sosa");
    strcpy(datos[7][1], "Tolosa");

    strcpy(datos[0][2], "17123456");
    strcpy(datos[1][2], "25789101");
    strcpy(datos[2][2], "39121314");
    strcpy(datos[3][2], "21151617");
    strcpy(datos[4][2], "33181920");
    strcpy(datos[5][2], "15212223");
    strcpy(datos[6][2], "40242526");
    strcpy(datos[7][2], "11272829");

    strcpy(datos[0][3], "+541141200011");
    strcpy(datos[1][3], "+543419485831");
    strcpy(datos[2][3], "+541145565789");
    strcpy(datos[3][3], "+541158637543");
    strcpy(datos[4][3], "+541158637543");
    strcpy(datos[5][3], "+543423444567");
    strcpy(datos[6][3], "+543402512345");
    strcpy(datos[7][3], "+541151234567");

    strcpy(datos[0][4], "56");
    strcpy(datos[1][4], "45");
    strcpy(datos[2][4], "26");
    strcpy(datos[3][4], "48");
    strcpy(datos[4][4], "35");
    strcpy(datos[5][4], "60");
    strcpy(datos[6][4], "25");
    strcpy(datos[7][4], "70");
}
