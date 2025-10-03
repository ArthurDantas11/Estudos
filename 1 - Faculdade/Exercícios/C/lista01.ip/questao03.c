#include <stdio.h>
#define a 5
/*3. Escreva um algoritmo que leia 50 valores e encontre o maior e o menor deles. Mostre o
resultado.*/
int main(int argc, char const *argv[])
{
    int i, num, maior, menor;

    printf("digite o 1 valor:\n");
    scanf("%d", &num);

    menor = num;
    maior = num;

    for (i = 2; i <= a; i++)
    {
        printf("digite o %d valor:\n", i);
        scanf("%d", &num);

        if (num > maior)
        {
            maior = num;
        }
        if (num < menor)
        {
            menor = num;
        }
    }

    printf("O maior numero e %d\nO menor numero: %d\n", maior, menor);

    return 0;
}
