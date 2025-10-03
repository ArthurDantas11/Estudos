#include <stdio.h>

int main()
{

    int codigoEstadoOrigem, codigoCarga;
    float peso, imposto, precoKg, valorTotal;

    printf("selecione o codigo do estado de origem da carga do caminhao:\n(1)\n(2)\n(3)\n(4)\n(5)\n\n");
    
    scanf("%d", &codigoEstadoOrigem);

    switch (codigoEstadoOrigem)
    {
    case 1:
        imposto = precoKg * 0.35;
        break;
    case 2:
        imposto = precoKg * 0.25;
        break;
    case 3:
        imposto = precoKg * 0.15;
        break;
    case 4:
        imposto = precoKg * 0.05;
        break;
    case 5:
        imposto = precoKg * 0;
        break;

    default:
        printf("opcao invalida.\n");
        break;
    }

    printf("digite o peso da carga em toneladas:\n");
    scanf("%f", &peso);

    peso = peso * 1000;

    printf("digite o codigo da carga:\n");
    scanf("%d", &codigoCarga);

    if (codigoCarga < 10)
    {
        printf("codigo da carga incorreto. por favor escolher numeros de 10 a 40.\n");
    }
    else if (codigoCarga > 40)
    {
        printf("codigo da carga incorreto. por favor escolher numeros de 10 a 40.\n");
    }
    else
    {
        if (codigoCarga <= 20)
        {
            precoKg = peso * 100;
        }
        else if (codigoCarga <= 30)
        {
            precoKg = peso * 250;
        }
        else if (codigoCarga <= 40)
        {
            precoKg = peso * 340;
        }

        printf("imposto total:  %.2f", imposto);
        printf("Valor Total: %.2f\n",  precoKg + imposto);
    }

    return 0;
}