#include <stdio.h>

int main()
{

    float salario = 4600, cartao, carro, ipva, internet, energia, vivo, emprestimo;

    printf("valor do cartao:\n");
    scanf("%f", &cartao);

    printf("valor do carro:\n");
    scanf("%f", &carro);

    printf("valor do ipva:\n");
    scanf("%f", &ipva);

    printf("valor da internet:\n");
    scanf("%f", &internet);

    printf("valor da energia:\n");
    scanf("%f", &energia);

    printf("valor da vivo:\n");
    scanf("%f", &vivo);

    printf("valor do emprestimo:\n");
    scanf("%f", &emprestimo);

    printf("a sobra do liso: %.2f\n", salario - carro - ipva - internet - energia - vivo - emprestimo - cartao);

    return 0;
}