#include <stdio.h>

/* Escrever um algoritmo que leia um número n que indica quantos valores devem ser lidos a
seguir. Para cada número lido, mostre uma tabela contendo o valor lido e o fatorial deste
valor.*/

int main(int argc, char const *argv[])
{
    int n, valor, fatorial = 1;

    printf("digite quantos valores deseja ler:\n");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        printf("digite o %d valor:\n", i);
        scanf("%d", &valor);

        fatorial = 1;

        for (int j = 1; j <= valor; j++)
        { 
            fatorial*=j; 
        }
        
        printf("valor | fatorial\n");
        printf("  %d  |   %d  \n", valor, fatorial);
    }
    

    return 0;
}
