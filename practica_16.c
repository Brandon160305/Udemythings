#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define nombres 50
#define jugadores_max 5

struct Jugador
{
    char nombre[nombres];
    int edad;
    float altura;
};

int main()
{
    struct Jugador equipo[nombres];

    printf("Ingrese los datos de los jugadores:\n");
    for (int i = 0; i < jugadores_max; i++)
    {
        printf("Jugador %d:\n", i + 1);
        printf("Nombre: ");
        fgets(equipo[i].nombre, sizeof(equipo[i].nombre), stdin);
        equipo[i].nombre[strcspn(equipo[i].nombre, "\n")] = '\0';
        printf("Edad: ");
        char edadStr[10];
        fgets(edadStr, sizeof(edadStr), stdin);
        equipo[i].edad = atoi(edadStr);
        printf("Altura: ");
        char alturaStr[10];
        fgets(alturaStr, sizeof(alturaStr), stdin);
        equipo[i].altura = atof(alturaStr);
        printf("\n");
    }

    int opcion;
    char nombreBusqueda[nombres];

    do
    {

        printf("MENU:\n");
        printf("1. Listar nombres y alturas de los jugadores.\n");
        printf("2. Buscar jugador por nombre.\n");
        printf("3. Jugador más alto del equipo.\n");
        printf("4. Salir.\n");
        printf("Ingrese una opcion: ");
        scanf("%d", &opcion);

        switch (opcion)
        {
        case 1:

            printf("Nombres y alturas de los jugadores:\n");
            for (int i = 0; i < jugadores_max; i++)
            {
                printf("Jugador %d - Nombre: %s, Altura: %.2f\n", i + 1, equipo[i].nombre, equipo[i].altura);
            }
            break;
        case 2:

            printf("Ingrese el nombre del jugador a buscar: ");
            getchar();
            fgets(nombreBusqueda, sizeof(nombreBusqueda), stdin);
            nombreBusqueda[strcspn(nombreBusqueda, "\n")] = '\0';
            for (int i = 0; i < jugadores_max; i++)
            {
                if (strcmp(equipo[i].nombre, nombreBusqueda) == 0)
                {
                    printf("Jugador encontrado:\n");
                    printf("Nombre: %s, Altura: %.2f, Edad: %d\n", equipo[i].nombre, equipo[i].altura, equipo[i].edad);
                    break;
                }
            }
            break;
        case 3:

            int indiceMasAlto = 0;
            for (int i = 1; i < jugadores_max; i++)
            {
                if (equipo[i].altura > equipo[indiceMasAlto].altura)
                {
                    indiceMasAlto = i;
                }
            }
            printf("Jugador mas alto del equipo:\n");
            printf("Nombre: %s, Altura: %.2f, Edad: %d\n", equipo[indiceMasAlto].nombre, equipo[indiceMasAlto].altura, equipo[indiceMasAlto].edad);
            break;
        case 4:
            printf("Saliendo del programa...\n");
            break;
        default:
            printf("Opción invalida. Por favor, ingrese una opción valida.\n");
            break;
        }

        printf("\n");
    } while (opcion != 4);

    return 0;
}