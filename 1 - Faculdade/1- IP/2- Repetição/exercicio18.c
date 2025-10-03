#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    double numero, quadrado, cubo, raiz;

    do
    {
        printf("Digite um numero (negativo ou zero para sair): ");
        scanf("%lf", &numero);

        quadrado = numero * numero;

        cubo = numero * numero * numero;

        raiz = sqrt(numero);

    } while (numero <= 0);

    printf("Numero: %.2f\n", numero);
    printf("Quadrado: %.2f\n", numero * numero);
    printf("Cubo: %.2f\n", numero * numero * numero);
    printf("Raiz quadrada: %.2f\n", sqrt(numero));
    printf("-----------------------------\n");

    return 0;
}
