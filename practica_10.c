#include <stdio.h>

int main()
{
    int numero;
    int suma = 0;
    int cantidad_numeros = 0;

    printf("Ingrese un numero:\n");
    printf("(Si ingresa el numero 0 el programa finalizara):");

    while (1)
    {
        scanf("%d", &numero);

        if (numero == 0)
        {
            break;
        }

        suma += numero;
        cantidad_numeros++;

        printf("Ingrese otro numero:");
    }

    if (cantidad_numeros > 0)
    {
        float promedio = (float)suma / cantidad_numeros;
        printf("La suma de los numeros es: %d\n", suma);
        printf("El promedio de los numeros es: %.2f\n", promedio);
    }
    else
    {
        printf("No se ingresaron numeros.\n");
    }

    return 0;
}