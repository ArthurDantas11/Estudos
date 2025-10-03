/*Ler um número N do usuário e alocar dinamicamente um vetor de N inteiros. Depois, ler os N valores, imprimir a soma de todos e liberar a 
memória.

Objetivos:

Alocar um array com malloc

Fazer um loop com ponteiro/vetor

Usar free ao final*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, soma = 0;

    printf("digite um valor para 'n'\n ");
    scanf("%d", &n);

    int *vetor = (int*) malloc(sizeof(int)*n);

    for (int i = 0; i < n; i++) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &vetor[i]);
        soma += vetor[i];
    }

    printf("%d", soma);
    
    free(vetor);

    return 0;
}