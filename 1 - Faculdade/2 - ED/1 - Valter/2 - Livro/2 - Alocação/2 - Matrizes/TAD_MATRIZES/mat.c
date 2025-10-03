#include <stdio.h>
#include <stdlib.h>
#include "mat.h"

// Função para criar uma matriz de tamanho n_linhas x m_colunas
float **matriz_cria(int n_linhas, int m_colunas)
{
    float **matriz = (float**)malloc(sizeof(float*)*n_linhas);

    for (int i = 0; i < n_linhas; i++)
    {
       matriz[i] = (float*)malloc(sizeof(float)*m_colunas); 
    }
    
    for (int i = 0; i < n_linhas; i++)
    {
        for (int j = 0; j < m_colunas; j++)
        {
            matriz[i][j] = 0.0;
        }
    }
    
    return matriz;
}

// Função para preencher a matriz com valores fornecidos pelo usuário
void preenche_matriz(float **matriz, int linhas, int colunas)
{
    for (int i = 0; i < linhas; i++)
    {
        printf("Linha: %d", i + 1);
        for (int j = 0; j < colunas; j++)
        {
            printf("Coluna: %d", j + 1);
            scanf("%f", &matriz[i][j]);
        }
    }
}

// Função para liberar a memória alocada para a matriz
void libera_matriz(float **matriz, int n_linhas)
{
    for (int i = 0; i < n_linhas i++)
    {
       free(matriz[i]);
    }
    
    free(matriz);
}

// Função para imprimir a matriz na tela
void imprime_matriz(float **matriz, int n_linhas, int m_colunas)
{
    for (int i = 0; i < n_linhas; i++)
    {
        for (int j = 0; j < m_colunas; j++)
        {
            printf("%.1f", matriz[i][j]);
        }
        printf("\n");
    }
    
}

// Função para transpor uma matriz (trocar linhas por colunas)
float **transpor_matriz(float **matriz, int n_linhas, int m_colunas)
{
    float** transposta = (float**)malloc(sizeof(float*)*m_colunas);
    for (int i = 0; i < m_colunas; i++)
    {
        transposta[i] = (float*)malloc(sizeof(float)*n_linhas);
    }

    for (int i = 0; i < n_linhas; i++)
    {
        for (int j = 0; j < m_colunas; j++)
        {
            transposta[j][i] = matriz[i][j];
        }
    }
    
    return 0;
}

// Função para somar duas matrizes
float **soma_matriz(float **matriz_a, float **matriz_b, int n_linhas_a, int m_colunas_a);

// Função para subtrair duas matrizes
float **sub(float **matriz_a, float **matriz_b, int n_linhas_a, int m_colunas_a);

// Função para fazer a multiplicação elemento a elemento entre duas matrizes
float **mult(float **matriz_a, float **matriz_b, int n_linhas_a, int m_colunas_a);