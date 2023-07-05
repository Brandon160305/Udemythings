#include <stdio.h>

int main()
{
    char c1, c2, c3;

    printf("Ingrese el primer caracter: ");
    scanf(" %c", &c1);

    printf("Ingrese el segundo caracter: ");
    scanf(" %c", &c2);

    printf("Ingrese el tercer caracter: ");
    scanf(" %c", &c3);

    printf("Caracteres ingresados: %c-%c-%c\n", c1, c2, c3);

    return 0;
}
