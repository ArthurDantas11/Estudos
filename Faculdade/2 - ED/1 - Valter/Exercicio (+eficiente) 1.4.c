#include <stdio.h>

int soma_impares(int n);

int main()
{
    int termo;

    printf("Digite o numero de termos a serem somados:\n");
    scanf("%d", &termo);

    int resultado = soma_impares(termo);

    printf("%d", resultado);

    return 0;
}

int soma_impares(int n)
{
    return n*n;
}