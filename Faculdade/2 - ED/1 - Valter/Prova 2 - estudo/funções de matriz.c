#include <stdio.h>
#include <stdlib.h>


float** cria_matriz(int n_linhas, int m_colunas);
float** soma_matriz(float** A, float** B, int n_linhas, int m_colunas);

int main(int argc, char const *argv[])
{
    int n_linhas = 5, m_colunas = 5, soma;
    float** matriz_A = cria_matriz(n_linhas, m_colunas);
    float** matriz_B = cria_matriz(n_linhas, m_colunas);

    soma = soma_matri(matriz_A, matriz_B, n_linhas, m_colunas);
    
    return 0;
}

float** cria_matriz(int n_linhas, int m_colunas)
{
    float** mat = (float**)malloc(sizeof(float)*n_linhas);

    for (int i = 0; i < n_linhas; i++)
    {
        mat[i] = (float**)malloc(sizeof(float)*m_colunas);
    }
    
    return mat;
}

float** soma_matriz(float** A, float** B, int n_linhas, int m_colunas)
{
    float soma_matriz;

    for (int i = 0; i < n_linhas; i++)
    {
        for (int j = 0; j < m_colunas; j++)
        {
            soma_matriz = A[i][j] + B[i][j];            
        }
    }
    
    return soma_matriz;
}
