#include <stdio.h>

#define numero_personas 5

int main()
{
    float pesos[numero_personas];
    float suma = 0;
    float promedio;
    int mayores = 0;
    int menores = 0;

    printf("Ingrese el peso de las %d personas:\n", numero_personas);
    for (int i = 0; i < numero_personas; i++)
    {
        printf("Persona %d: ", i + 1);
        scanf("%f", &pesos[i]);
        suma += pesos[i];
    }

    promedio = suma / numero_personas;

    for (int i = 0; i < numero_personas; i++)
    {
        if (pesos[i] > promedio)
        {
            mayores++;
        }
        else if (pesos[i] < promedio)
        {
            menores++;
        }
    }

    printf("Promedio de peso: %.2f\n", promedio);
    printf("Personas con peso mayor al promedio: %d\n", mayores);
    printf("Personas con peso menor al promedio: %d\n", menores);

    return 0;
}
