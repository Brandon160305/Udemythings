#include <stdio.h>
#include <stdlib.h>

int main()
{
    struct hora_entrada
    {
        int hora;
        int minuto;
    };

    struct entrada
    {
        struct hora_entrada hora1;
        int asistentes;
        float precio;
    };

    struct entrada el;

    char continuar = 's';

    while (continuar == 's')
    {

        printf("Introduce la hora la entrada\n");
        scanf("%d", &el.hora1.hora);
        printf("Introduce el minuto de entrada\n");
        scanf("%d", &el.hora1.minuto);
        printf("Introduce el numero de asistentes\n");
        scanf("%d", &el.asistentes);

        int total = 0;

        for (int i = 0; i < el.asistentes; i++)
        {
            int edad;
            printf("introduce la edad del asistente %d\n", (i + 1));
            scanf("%d", &edad);
            if (edad < 6)
            {
                total = total + 0;
            }
        }
    }
}