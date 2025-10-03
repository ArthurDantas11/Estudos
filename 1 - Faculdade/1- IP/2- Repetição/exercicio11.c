/*Faça um programa que receba um número inteiro maior que 1, verifique se o número fornecido é primo ou não e mostre uma mensagem de número primo ou de número não primo.
Um número é primo quando é divisível apenas por 1 e por ele mesmo.*/
#include <stdio.h>

int main()
{
    int primo, num, i;

    do
    {
        printf("digite um numero inteiro maior que 1:\n");
        scanf("%d", &num);

    } while (num <= 1);

    if (num == 2)
    {
        primo = 1;
    }
    else
    {
        for (i = 2; i < num; i++)
        {
            if (num % i == 0)
            {
                primo = 0;
                break;
            }
            else
            {
                primo = 1;
            }
        }
    }

    if (primo == 0)
    {
        printf("%d nao e um numero primo\n", num);
    }
    else
    {
        printf("%d e um numero primo\n", num);
    }

    return 0;
}