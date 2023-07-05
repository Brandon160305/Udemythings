#include <stdio.h>
#include <stdlib.h>

#define longitud_maxima 100

int main()
{
    char cadena[longitud_maxima];
    char caracter;
    int posicion = -1;

    printf("Ingrese una cadena: ");
    fgets(cadena, sizeof(cadena), stdin);
    cadena[strtol(cadena, NULL, 10) - 1] = '\0';

    printf("Ingrese un caracter: ");
    scanf(" %c", &caracter);

    for (int i = 0; cadena[i] != '\0'; i++)
    {
        if (cadena[i] == caracter)
        {
            posicion = i;
            break;
        }
    }

    if (posicion != -1)
    {
        printf("El caracter '%c' se encuentra en la cadena en la posicion %d.\n", caracter, posicion);
    }
    else
    {
        printf("El caracter '%c' no se encuentra en la cadena.\n", caracter);
    }

    return 0;
}
