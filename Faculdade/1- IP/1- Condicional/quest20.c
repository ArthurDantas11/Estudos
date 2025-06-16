#include <stdio.h>

int main()
{
    int codigoProduto, codigoPaisOrigem;
    float peso, precoGrama, imposto, valorTotal;

    printf("digite o codigo do produto comprado:\n");
    scanf("%d", &codigoProduto);

    printf("digite o peso(kg) do protudo:\n");
    scanf("%f", &peso);

    peso = peso * 1000;

    printf("digite o codigo do pais de origem do produto:\n");
    scanf("%d", &codigoPaisOrigem);

    if (codigoProduto > 10 && codigoProduto < 1)
        {
            printf("opção invalida.");
        }
        else if (codigoProduto <= 4)
        {
            precoGrama = peso * 10;
        }
        else if (codigoProduto <= 7)
        {
            precoGrama = peso * 25;
        }
        0 else
        {
            precoGrama = peso * 35;
        }

    if (codigoPaisOrigem > 3 && codigoPaisOrigem < 1)
        {
            printf("opcao invalida.");
        }
        else if (codigoPaisOrigem = 1)
        {
            imposto = precoGrama * 0;
        }
        else if (codigoPaisOrigem = 2)
        {
            imposto = precoGrama * 0.15;
        }
        else
        {
            imposto = precoGrama * 0.25;
        }

    valorTotal = imposto + precoGrama;

    printf("valor imposto adicionado sobre o produto foi de: %.2f\n", imposto);
    printf("o valor total é: %.2f\n", valorTotal);

    return 0;
}