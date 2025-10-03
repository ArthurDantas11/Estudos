#include <stdio.h>

/*1. Faça um programa que:
a. Possua uma função que exibe o seguinte menu, peça ao usuário para escolher uma das opções e retorne o valor da opção escolhida:
      1 - Soma
      2 - Subtração
      3 - Multiplicação
      4 - Divisão
b. Com base no retorno da função anterior, chama as funções responsáveis por efetuar a operação escolhida.
c. As funções soma, subtração, multiplicação e divisão devem receber os valores passados por referência e colocar o resultado da operação na variável do primeiro parâmetro.
Portanto, não deve retornar valores e sim alterar o valor da variável passada por referência.
d. O programa deve exibir o resultado da operação.*/

int exibemenu()
{
    int opcao;

    printf("Escolha uma das seguintes opcoes do menu:\n");

    printf("1 - Soma\n2 - subtracao\n3 - Multipicacao\n4 - Divisao\n");
    scanf("%d", &opcao);
    return opcao;
}

void soma(int *a, int *b)
{
    *a = *a + *b;
}

void subtracao(int *a, int *b)
{
    *a = *a + *b;
}

void multiplicacao(int *a, int *b)
{
    *a = *a * *b;
}

void divisao(int *a, int *b)
{
    *a = *a/ (float)*b;
}

int main(int argc, char const *argv[])
{
    int n1, n2, menu;

    printf("digite dois valores:\n");
    scanf("%d", &n1);
    scanf("%d", &n2);

    menu = exibemenu();

    switch (menu)
    {
    case 1:
        soma(&n1, &n2);    
        break;
    case 2:
        subtracao(&n1, &n2);
        break;
    case 3:
        multiplicacao(&n1, &n2);
        break;
    case 4:
        subtracao(&n1, &n2);
        break;
    default:
        printf("OPCAO INVALIDA!\n");
        break;
    }

    printf("Resultado: %d \n", n1);

    return 0;
}
