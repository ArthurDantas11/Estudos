/* Escreva um programa que aloque memória para um vetor de inteiros, preencha os
valores e imprima os valores. Após o uso, libere a memória alocada com free().*/

#include <stdio.h>
#include <stdlib.h>
#define n 5

int main()
{
    int *vetor = (int*) malloc(sizeof(int)*n);

    printf("preencha o seguinte vetor:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &vetor[i]);
    }

    printf("vetor: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", vetor[i]);
    }

    free(vetor);
    
    return 0;
}
