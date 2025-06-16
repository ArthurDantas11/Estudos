/* Implemente uma função para testar se um número inteiro é primo ou não.
Essa função deve obedecer ao protótipo e seguir ter como valor de retorno 1 se
n for primo e 0 caso contrario
int primo (int n);*/

#include <stdio.h>

int primo(int n);

int main()
{
    int numero;

    printf("Digite um numero para descobrir se ele e primo:\n");
    scanf("%d", &numero);

    int result = primo(numero);

    if (result)
    {
        printf("E um numero primo.\n");
    }
    else
    {
        printf("Nao e um numero primo.\n");
    }

    return 0;
}

int primo(int n)
{
    if (n == 1 || n == 2)
    {
        return 1;
    }
    else
    {
        for (int i = 2; i < n; i++)
        {
            if (n % i == 0)
            {
                return 0;
                break;
            }
        }
        return 1;
    }
}