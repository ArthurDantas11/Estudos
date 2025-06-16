/*Escreva um programa que use malloc() para alocar dinamicamente um vetor de
inteiros. O tamanho do vetor deve ser determinado pelo usuário em tempo de
execução. Preencha o vetor com valores fornecidos pelo usuário e imprima os
valores.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;

    printf("digite um valor para n:\n");
    scanf("%d", &n);
    
    int *vetor = (int*) malloc(sizeof(int)*n);

    printf("preencha o vetor:\n");

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &vetor[i]);
    }
    
    printf("Vetor: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", vetor[i]);
    }
    
    free(vetor);
    
    return 0;
}
