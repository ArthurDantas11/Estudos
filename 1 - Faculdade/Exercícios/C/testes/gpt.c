#include <stdio.h>

int exibemenu() 
{
    int opcao;
    printf("Escolha uma das seguintes opcoes do menu:\n");
    printf("1 - Soma\n2 - Subtracao\n3 - Multiplicacao\n4 - Divisao\n");
    scanf("%d", &opcao);
    return opcao;
}

void soma(float *a, float *b) {
    *a = *a + *b;
}

void subtracao(float *a, float *b) {
    *a = *a - *b;
}

void multiplicacao(float *a, float *b) {
    *a = *a * *b;
}

void divisao(float *a, float *b) {
    if (*b == 0) {
        printf("Erro: Divisao por zero nao permitida!\n");
    } else {
        *a = *a / *b;  // Mantendo resultado como float
    }
}

int main() {
    float n1, n2;
    int menu;

    printf("Digite dois valores:\n");
    scanf("%f %f", &n1, &n2);

    menu = exibemenu();

    switch (menu) {
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
            divisao(&n1, &n2);
            break;
        default:
            printf("OPCAO INVALIDA!\n");
            return 1;  // Finaliza o programa se a opção for inválida
    }


    printf("Resultado: %.2f\n", n1);  // Agora exibe sempre com duas casas decimais
    return 0;
}
