#include <stdio.h>

#define longitud_max 100

int main()
{
    char cadenas[4][longitud_max];

    printf("Ingrese 4 cadenas:\n");
    for (int i = 0; i < 4; i++)
    {
        printf("Cadena %d: ", i + 1);
        scanf("%s", cadenas[i]);
    }

    printf("Cadenas ingresadas:\n");
    for (int i = 0; i < 4; i++)
    {
        printf("%s", cadenas[i]);
        if (i != 3)
        {
            printf(" - ");
        }
    }

    return 0;
}