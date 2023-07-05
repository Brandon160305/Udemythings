#include <stdio.h>

int main()
{
    int precio_base, kilometros;
    float consumo, precio_f;

    printf("Introduce el precio del vehiculo:  \n");
    scanf("%d", &precio_base);
    printf("Introduce los kilometros:  \n");
    scanf("%d", &kilometros);

    printf("Introduce el consumo: \n");
    scanf("%f", &consumo);

    if (kilometros < 20000 && consumo <= 5)
    {
        precio_f = precio_base * 1.2;
    }
    else if (kilometros > 20000 && consumo <= 5)
    {
        precio_f = precio_base * 1.1;
    }
    else if (consumo > 5)
    {
        precio_f = precio_base * 1.5;
    }

    printf("El precio final del vehiculo es %2.f\n", precio_f);

    return 0;
}