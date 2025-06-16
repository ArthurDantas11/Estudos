#include <stdio.h>
#define elementos 2

void preenche_vetor(int vetor[]) //função que preenche o vetor 
{
    for (int i = 0; i < elementos; i++)
    {
        scanf("%d", &vetor[i]);
    }
}
void uniao_vetor(int vetor1[], int vetor2[]) //função que recebe e mostra a união de dois vetores
{
    int uniao[elementos * 2], cont = 0;

    for (int i = 0; i < elementos; i++)
    {
        uniao[cont++] = vetor1[i];
        
        uniao[cont++] = vetor2[i];
    }

    printf("Vetor resultante:\n");

    for (int i = 0; i < cont; i++)
    {
        printf("%d ", uniao[i]);
    }
}
int recebe (int vetor[], int n_inteiro) //funçção que recebe um vetor e um numero inteiro e mostra a posição desejada de acordo com o numero qque o usuario digitar
{
    if (n_inteiro < 0 || n_inteiro > 9)
    {
        return -1;
    }
    else
    {
        return vetor[n_inteiro];
    }
}

int main(int argc, char const *argv[])
{
    int v1[elementos], v2[elementos], n, posicaov1, posicaov2; 

    printf("Preencha o 1 vetor de %d elementos:\n", elementos);
    preenche_vetor(v1);

    printf("Preencha o 2 vetor de %d elementos:\n", elementos);
    preenche_vetor(v2);
    
    uniao_vetor(v1, v2);

    printf("\nDigite qual posicao do vetor deseja:\n");
    scanf("%d", &n);

    posicaov1 = recebe(v1, n);
    posicaov2 = recebe(v2, n);

    printf("vetor 1: %d \n", posicaov1);
    printf("vetor 2: %d ", posicaov2);

    return 0;
}
