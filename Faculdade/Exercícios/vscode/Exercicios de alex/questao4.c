#include <stdio.h>

int main()
{
    int macas;
    float preco_macas, valor_total;

    printf("quantas macas deseja comprar? ");
    scanf("%d", &macas);

    if (macas >= 12)
    {
        preco_macas = 0.25;
    }
    else
    {
        preco_macas = 0.30;
    }

    valor_total = macas*preco_macas;

    printf("valor total: %.2f", valor_total);

    return 0;
}