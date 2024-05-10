#include <stdio.h>
#include <stdlib.h>

/*
Dado el vector inflación {0.8, 0.1, 0.3, 0.4, 0.3, 0.6, 0.5, 0.3, 0.7, 0.3, 0.2, 0.9}
Cada ítem del vector representa la inflación de un mes de tal manera que el primer
ítem del vector que es 0.8 representa la inflación de Enero, y el último ítem del vector
que es 0.9 representa la inflación de diciembre. Se pide:
a. Informar la inflación anual
b. Informar la inflación más baja, junto con el nro. de mes. Por ejemplo: Mes 2 = 0.1
c. Informar la inflación más alta, junto con el nro. de mes. Por ejemplo: Mes 12 = 0.9
*/

void main()
{
    float vector[] = {0.8, 0.1, 0.3, 0.4, 0.3, 0.6, 0.5, 0.3, 0.7, 0.3, 0.2, 0.9};
    float inflacionAnual = 0;
    float max[2], min[2];
    for (int i = 0; i < 12; i++)
    {
        inflacionAnual += vector[i];
        if (i == 0)
        {
            max[0] = vector[i];
            max[1] = i + 1;
            min[0] = vector[i];
            min[1] = i + 1;
        }
        else
        {
            if (vector[i] > max[0])
            {
                max[0] = vector[i];
                max[1] = i + 1;
            }
            if (vector[i] < min[0])
            {
                min[0] = vector[i];
                min[1] = i + 1;
            }
        }
    }
    printf("El mes %.f tiene la inflacion mas alta que es de: %.2f\n", max[1], max[0]);
    printf("El mes %.f tiene la inflacion mas baja que es de: %.2f\n", min[1], min[0]);
    printf("La inflacion anual es de: %.f", inflacionAnual);
}