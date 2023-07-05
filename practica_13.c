#include <stdio.h>

#define numero_hab 3
#define numero_temp 3

int main()
{
    int habitaciones[numero_hab][numero_temp] = {
        {1, 120, 150, 220},
        {2, 130, 160, 230},
        {3, 100, 120, 200}};

    float promedios[numero_temp] = {0};

    for (int i = 0; i < numero_hab; i++)
    {
        for (int j = 1; j <= numero_temp; j++)
        {
            promedios[j - 1] += habitaciones[i][j];
        }
    }

    for (int i = 0; i < numero_temp; i++)
    {
        promedios[i] /= numero_hab;
    }

    printf("Promedio de precios por temporada:\n");
    for (int i = 0; i < numero_temp; i++)
    {
        printf("Temporada %d: %.2f\n", i + 1, promedios[i]);
    }

    return 0;
}