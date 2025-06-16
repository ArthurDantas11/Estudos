/*Escreva um programa que aloque dinamicamente um vetor de inteiros e, depois,
redimensione este vetor usando realloc() para aumentar seu tamanho. Preencha o
vetor com novos valores e imprima o conteúdo final.*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int *vetor = (int*) malloc(sizeof(int)*5);

    for (int i = 0; i < 5; i++)
    {
        vetor[i] = i+1;
    }
    

    int *novo_vetor = (int*) realloc(vetor, sizeof(int)*7);
    if (novo_vetor == NULL) {
        printf("Erro ao realocar memória.\n");
        free(vetor);
        return 1;
    }

    vetor = novo_vetor;

    for (int i = 0; i < 7; i++)
    {
        vetor[i] = i+1;
    }

    printf("vetor: ");
    for (int i = 0; i < 7; i++)
    {
        printf("%d ", vetor[i]);
    }

    free(vetor);

    return 0;
}
