#include <stdio.h>
// faça um programa q leia um numero fatorial
int main()
{
    int n, fatorial = 1;

    printf("digite o numero que deseja calcular o fatorial:\n");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("o numero digitado não corresponde a um numero positivo.");
    }
    else
    {
        for (int i = 1; i <= n; i++)
        {
            fatorial *= i;
            printf("\nvalor %d / fatorial %d", i, fatorial);
        }
    }

    return 0;
}