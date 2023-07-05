#include <stdio.h>
#include <stdlib.h>

struct producto
{
    int codigo;
    char descripcion[50];
    float precio;
};

int main()
{
    struct producto *prod;

    prod = malloc(sizeof(struct producto));

    printf("Introduce el codigo\n");
    scanf("%d", &prod->codigo);
    printf("Introduce el codigo\n");
    scanf("&s", prod->descripcion);
    printf("Introduce el precio\n");

    printf("Codigo del articulo: %d", prod->codigo);
    printf("Descripcion: %\n", prod->descripcion);
    printf("Precio: %f\n", prod->precio);

    free(prod);
    prod = NULL;
}