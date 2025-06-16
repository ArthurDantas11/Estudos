#include <stdio.h>

int main()
{
    int n;

    printf("Digite um numero impar para desenhar o diamante: ");
    scanf("%d", &n);

    if (n % 2 == 0)
    {
        printf("Insira um numero impar.\n");
        return 1;
    }

    for (int i = 1; i <= n; i += 2)
    {

        for (int j = 1; j <= (n - i) / 2; j++)
        {
            printf(" ");
        }
       
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    for (int i = n - 2; i >= 1; i -= 2)
    {

        for (int j = 1; j <= (n - i) / 2; j++)
        {
            printf(" ");
        }
        
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}

