#include <stdio.h>
#include <stdlib.h>

#define elementos 5

int main()
{
    float vector[elementos];
    float *puntero = vector;
    float suma = 0;
    float media;

    printf("Ingrese %d numeros reales:\n", elementos);
    for (int i = 0; i < elementos; i++)
    {
        printf("Numero %d: ", i + 1);
        scanf("%f", puntero + i);
    }

    for (int i = 0; i < elementos; i++)
    {
        suma += *(puntero + i);
    }

    media = suma / elementos;

    printf("La media de los elementos es: %.2f\n", media);

    return 0;
}