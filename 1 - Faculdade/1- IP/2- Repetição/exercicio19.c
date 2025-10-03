#include <stdio.h>

int main(int argc, char const *argv[])
{
    int m, n, valor = 0, i;

    printf("digite um valor inteiro e posivito pra M e N:\nM:");
    scanf("%d", &m);
    printf("N: ");
    scanf("%d", &n);

    for (i = m; i <= n; i++)
    {
        valor += i;
    }

    printf("Soma dos valores entre %d e %d: %d\n", m, n, valor);

    return 0;
}
