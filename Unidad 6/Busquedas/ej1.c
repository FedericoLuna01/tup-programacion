#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

/*
Realizar un programa que permita al usuario de un hospital, buscar a un paciente por el
número de DNI e informar al usuario los datos de la persona.
Realizar una búsqueda secuencial
*/

#define CANT_PERSONAS 8

void cargarDatos(char datos[CANT_PERSONAS][5][20]);
int busquedaPaciente(char datos[CANT_PERSONAS][5][20], char dni[]);

void main()
{
    // char datos[CANT_PERSONAS][5][20];
    {
        char datos[8][5][20] = {
            {"Ana", "Martinez", "+541141200011", "56", "17.123456"},
            {"Camila", "Noe", "+541141200031", "57", "25.789101"},
            {"Bruno", "Noe", "+543419485831", "45", "39.121314"},
            {"Dardo", "Pistilli", "+541145565789", "26", "21.151617"},
            {"Ernestina", "Quesada", "+541158637543", "48", "33.181920"},
            {"Fausto", "Ramirez", "+541161294758", "35", "15.212223"},
            {"Jasmín", "Sosa", "+543423444567", "60", "40.242526"},
            {"Leonardo", "Tolosa", "+543402512345", "25", "11.272829"}};

        char dniABuscar[20];
        // cargarDatos(datos);

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
    }
}

int busquedaPaciente(char datos[CANT_PERSONAS][5][20], char dni[])
{
    bool encontrado = false;
    int i = 0, pos;
    while (encontrado == false && i < CANT_PERSONAS)
    {
        // printf("DNI: %s\n", datos[i][2]);

        if (strcmp(datos[i][2], dni) == 0)
        {
            // printf("Encontrado\n");
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

// void cargarDatos(char datos[CANT_PERSONAS][5][20])
// {
//     strcpy(datos[0][0], "Ana");
//     strcpy(datos[0][1], "Martinez");
//     strcpy(datos[0][2], "17123456");
//     strcpy(datos[0][3], "541141200011");
//     strcpy(datos[0][4], "56");

//     strcpy(datos[1][0], "Camila");
//     strcpy(datos[1][1], "Noe");
//     strcpy(datos[1][2], "25789101");
//     strcpy(datos[1][3], "543419485831");
//     strcpy(datos[1][4], "45");

//     strcpy(datos[2][0], "Bruno");
//     strcpy(datos[2][1], "Noe");
//     strcpy(datos[2][2], "39121314");
//     strcpy(datos[2][3], "541145565789");
//     strcpy(datos[2][4], "26");
// }