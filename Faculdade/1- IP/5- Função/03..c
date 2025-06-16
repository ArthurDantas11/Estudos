#include <stdio.h>

float operacoes (float a, float b, char operacao)
{
    float resultado; 

    switch (operacao)
    {
    case '+':
        resultado = a + b;
        break;
    case '-':
        resultado = a - b;
        break;
    case '*':
        resultado = a * b;
        break;
    case '/':
        resultado = a / b;
        break;
    default:
        printf("ERRO!");
        return 0;
    }


    return resultado;
}

int main(int argc, char const *argv[])
{
    float valor, n1, n2;
    char menu;
    printf("Digite dois numeros inteiros:\n");
    scanf("%f %f", &n1, &n2);

    printf("Escolha a operacao:\n"); 
    printf("+ para Soma\n- para Subtracao\n* para Multiplicacao\n/ para Divisao\n");
    fflush(stdin);
    scanf("%c", &menu);

    valor = operacoes(n1, n2, menu);
    
    printf("operacao: %.0f %c %.0f:\n", n1, menu, n2);
    printf("Resultado: %.1f", valor);
    
    return 0;
}
