#include <stdio.h>

int main()
{
    int a, i, cont_negativos = 0;

    for ( i = 0; i <= 5; i++)
    {
        printf("Digite um valor para 'a':\n");
        scanf("%d", &a);

        if (a < 0)
        {
            cont_negativos++;
        }
        
    }

    printf("quantidade de numeros negativos: %d\n", cont_negativos);

    return 0;
}