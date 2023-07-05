#include <stdio.h>

#define numero_elementos 10

int main()
{
    int vector[numero_elementos];
    int maximo, minimo;

    printf("Ingrese %d elementos:\n", numero_elementos);
    for (int a = 0; a < numero_elementos; a++)
    {
        printf("Elemento %d: ", a + 1);
        scanf("%d", &vector[a]);
    }

    maximo = vector[0];
    minimo = vector[0];

    for (int i = 1; i < numero_elementos; i++)
    {
        if (vector[i] > maximo)
        {
            maximo = vector[i];
        }
        if (vector[i] < minimo)
        {
            minimo = vector[i];
        }
    }

    // Resultados
    printf("Valor maximo: %d\n", maximo);
    printf("Valor minimo: %d\n", minimo);

    return 0;
}