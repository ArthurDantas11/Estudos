#include <stdio.h>
#include <stdlib.h>

float **vetor_de_ponteiro(int colunas, int linhas)
{
    float **matriz = (float *)malloc(sizeof(float) * linhas);

    for (int i = 0; i < linhas; i++)
    {
        matriz[i] = (float **)malloc(sizeof(float) * colunas);
    }

    return matriz;
}

float **bloco_continuo(int colunas, int linhas)
{
    float **matriz = (int **)malloc(linhas * colunas * sizeof(int));

    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            matriz[i * colunas + j] = i + j;
        }
    }

    return matriz;
} 

int main()
{
    int linhas, colunas;
    float** matriz, matriz_bc;

    matriz = vetor_de_ponteiro(linhas, colunas);
    matriz_bc = bloco_continuo(linhas, colunas);

    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            matriz[j][j] == matriz[j][j];
        }
    }

    return 0;
}