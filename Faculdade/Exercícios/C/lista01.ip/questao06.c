#include <stdio.h>

/*Crie um programa em C que peça um número inteiro ao usuário, e imprima a seguinte
tabela:*/

int main(int argc, char const *argv[])
{
    int numero, i;

    printf("digite um numero INTEIRO\n");
    scanf("%d", &numero);

    for (i = 0; i <= numero; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", j * i);
        }
        
        printf("\n");
    }
    
    return 0;
}
