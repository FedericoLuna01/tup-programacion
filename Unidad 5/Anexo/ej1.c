#include <stdio.h>
#include <stdlib.h>
/*
Se tiene un (dos, uno de mujeres y otros de hombres) arreglo con las marcas obtenidas por n corredores separados en categoría femenina y masculina de los últimos tres años para la “Berlin Marathon”. Los n corredores que de los que se disponen sus marcas han participado en los últimos 3 años. Calcular:
● El mejor marca de la categoría femenina y el mejor marca de la categoría
masculina para el último año.
● El promedio de los últimos años para ambas categorías.
● La mejor marca para cualquier categoría de los últimos 3 años.
● El promedio por año para cada categoría.
*/

// Crear un subproceso para la carga de los 2 arreglos
// Crear un subproceso o función por cada item

void cargarCorredores(float marcas[3][2], int cantCorredores);
float mejorMarcaPorAnio(float marcas[3][2], int cantCorredores, int anio);
float promedioGeneral(float marcas[3][2], int cantCorredores);
float mejorMarcaTodosAnios(float marcasFemeninas[3][2], float marcasMasculinos[3][2]);
void promedioPorAnio(float marcas[3][2], int cantCorredores);

void main()
{
    int cantCorredoresMasculinos, cantCorredoresFemeninos;
    printf("Ingrese la cantidad de corredores mujeres: ");
    scanf("%i", &cantCorredoresFemeninos);
    printf("Ingrese la cantidad de corredores hombres: ");
    scanf("%i", &cantCorredoresMasculinos);
    float marcasFemeninas[3][cantCorredoresFemeninos];
    float marcasMasculinos[3][cantCorredoresMasculinos];
    system("cls");
    printf("Cargar corredores femeninos: \n");
    cargarCorredores(marcasFemeninas, cantCorredoresFemeninos);
    system("cls");
    printf("Cargar corredores masculinos: \n");
    cargarCorredores(marcasMasculinos, cantCorredoresMasculinos);
    float mejorMarcaFemenino = mejorMarcaPorAnio(marcasFemeninas, cantCorredoresFemeninos, 2);
    printf("La mejor marca femenina del ultimo anio es: %f\n", mejorMarcaFemenino);
    float mejorMarcaMasculino = mejorMarcaPorAnio(marcasMasculinos, cantCorredoresMasculinos, 2);
    printf("La mejor marca masculina del ultimo anio es: %f\n", mejorMarcaMasculino);
    float promedioGeneralFemenino = promedioGeneral(marcasFemeninas, cantCorredoresFemeninos);
    float promedioGeneralMasculino = promedioGeneral(marcasMasculinos, cantCorredoresMasculinos);
    float promedioTotal = (promedioGeneralFemenino + promedioGeneralMasculino) / 2;
    printf("El promedio total de la carrera es: %.2f\n", promedioTotal);
    float mejorMarca = mejorMarcaTodosAnios(marcasFemeninas, marcasMasculinos);
    printf("la mejor marca de la carrera es: %.2f\n", mejorMarca);
    printf("El promedio por anio femenino es: \n");
    promedioPorAnio(marcasFemeninas, cantCorredoresFemeninos);
    printf("El promedio por anio masculino es: \n");
    promedioPorAnio(marcasMasculinos, cantCorredoresMasculinos);
}

void cargarCorredores(float marcas[3][2], int cantCorredores)
{
    for (int i = 0; i < 3; i++)
    {
        printf("Anio %i\n", i + 1);
        for (int j = 0; j < cantCorredores; j++)
        {
            printf("Ingrese la marca del corredor %i: ", j + 1);
            scanf("%f", &marcas[i][j]);
        }
    }
};

// Retorna el mejor promedio del ultimo año
float mejorMarcaPorAnio(float marcas[3][2], int cantCorredores, int anio)
{
    float mejorMarca;

    for (int i = 0; i < cantCorredores; i++)
    {
        if (i == 0)
        {
            mejorMarca = marcas[anio][i];
        }
        else
        {
            if (marcas[2][i] < mejorMarca)
            {
                mejorMarca = marcas[anio][i];
            }
        }
    }

    return mejorMarca;
}

float promedioGeneral(float marcas[3][2], int cantCorredores)
{
    float suma = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < cantCorredores; j++)
        {
            suma += marcas[i][j];
        }
    }
    return suma / (cantCorredores * 3);
}

// ● La mejor marca para cualquier categoría de los últimos 3 años.
float mejorMarcaTodosAnios(float marcasFemeninas[3][2], float marcasMasculinos[3][2])
{
    float mejoresMarcasMasculinas[3], mejoresMarcasFemeninas[3];
    float mejorMarcaMasculina, mejorMarcaFemenina;
    for (int i = 0; i < 3; i++)
    {
        mejoresMarcasFemeninas[i] = mejorMarcaPorAnio(marcasFemeninas, 2, i);
        mejoresMarcasMasculinas[i] = mejorMarcaPorAnio(marcasMasculinos, 2, i);
    }

    for (int i = 0; i < 3; i++)
    {
        if (i == 0)
        {
            mejorMarcaFemenina = mejoresMarcasFemeninas[i];
            mejorMarcaMasculina = mejoresMarcasMasculinas[i];
        }
        else
        {
            if (mejorMarcaFemenina > mejoresMarcasFemeninas[i])
            {
                mejorMarcaFemenina = mejoresMarcasFemeninas[i];
            }

            if (mejorMarcaMasculina > mejoresMarcasMasculinas[i])
            {
                mejorMarcaMasculina = mejoresMarcasMasculinas[i];
            }
        }
    }

    if (mejorMarcaFemenina > mejorMarcaMasculina)
    {
        return mejorMarcaMasculina;
    }

    return mejorMarcaFemenina;
}

void promedioPorAnio(float marcas[3][2], int cantCorredores)
{
    float sumaMarcas = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < cantCorredores; j++)
        {
            sumaMarcas += marcas[i][j];
        }
        printf("El promedio del anio %i es: %.2f\n", i, sumaMarcas / cantCorredores);
        sumaMarcas = 0;
    };
}