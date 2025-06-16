#include <stdio.h>
#define N 5

/*Dados dois vetores de tamanho N, faça uma função
que diga se os mesmos possuam conteúdo igual.*/

void receber_vetor(int *vet1);
int compara_vetor(int *vet1, int *vet2); 

int main()
{
    int vet1[N], vet2[N];

    printf("digite %d numero:\n", N);
    receber_vetor(vet1);
   
    printf("digite %d numero:\n", N);
    receber_vetor(vet2);

    if(compara_vetor(vet1, vet2) == 1)
    {
        printf("Sao iguais.\n");
    }
    else
    {
        printf("Nao sao iguais.\n");
    }

    return 0;
}

void receber_vetor(int *vet1)
{
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &vet1[i]);
    }
}

int compara_vetor(int *vet1, int *vet2) 
{
    for (int i = 0; i < N; i++)
    {
        int achou = 0;

        for (int j = 0; j < N; j++)
        {
            if (vet1[i] == vet2[j])
            {
               achou = 1;
               break;
            }
            
        }
        
        if (achou == 0)
        {
            return 0;
        }
        
    }
    
    return 1;
}