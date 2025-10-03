#include <stdio.h>
#include <stdlib.h>

// Função para criar uma matriz de tamanho n_linhas x m_colunas
float **cria_matriz(int n_linhas, int m_colunas);

// Função para preencher a matriz com valores fornecidos pelo usuário
void preenche_matriz(float **matriz, int linhas, int colunas);

// Função para liberar a memória alocada para a matriz
void libera_matriz(float **matriz, int n_linhas);

// Função para imprimir a matriz na tela
void imprime_matriz(float **matriz, int n_linhas, int m_colunas);

// Função para transpor uma matriz (trocar linhas por colunas)
float **transpor_matriz(float **matriz, int n_linhas, int m_colunas);

// Função para somar duas matrizes
float **soma_matriz(float **matriz_a, float **matriz_b, int n_linhas_a, int m_colunas_a);

// Função para subtrair duas matrizes
float **sub(float **matriz_a, float **matriz_b, int n_linhas_a, int m_colunas_a);

// Função para fazer a multiplicação elemento a elemento entre duas matrizes
float **mult(float **matriz_a, float **matriz_b, int n_linhas_a, int m_colunas_a);

int main()
{
    int n_linhas = 3, m_colunas = 3;

    // Criação das matrizes A e B
    float **matriz_A = cria_matriz(n_linhas, m_colunas);
    float **matriz_B = cria_matriz(n_linhas, m_colunas);

    // Preenchimento da matriz A
    printf("Preencha a matriz A 3x3:\n");
    printf("Matriz A:\n");
    preenche_matriz(matriz_A, n_linhas, m_colunas);

    // Preenchimento da matriz B
    printf("Preencha a matriz B 3x3:\n");
    printf("Matriz B:\n");
    preenche_matriz(matriz_B, n_linhas, m_colunas);

    // Realização das operações: soma, subtração, multiplicação e transposição
    float **soma = soma_matriz(matriz_A, matriz_B, n_linhas, m_colunas);
    float **subtracao = sub(matriz_A, matriz_B, n_linhas, m_colunas);
    float **multiplicacao = mult(matriz_A, matriz_B, n_linhas, m_colunas);
    float **matriz_A_transposta = transpor_matriz(matriz_A, n_linhas, m_colunas);
    float **matriz_B_transposta = transpor_matriz(matriz_B, n_linhas, m_colunas);

    // Impressão das matrizes originais
    printf("Matriz A:\n");
    imprime_matriz(matriz_A, n_linhas, m_colunas);

    printf("\nMatriz B:\n");
    imprime_matriz(matriz_B, n_linhas, m_colunas);

    // Impressão dos resultados
    printf("Soma:\n");
    imprime_matriz(soma, n_linhas, m_colunas);

    printf("Subtracao:\n");
    imprime_matriz(subtracao, n_linhas, m_colunas);

    printf("Multiplicacao:\n");
    imprime_matriz(multiplicacao, n_linhas, m_colunas);

    // Impressão das transpostas
    printf("Transposta:\nMatriz A:\n");
    imprime_matriz(matriz_A_transposta, m_colunas, n_linhas);

    printf("Transposta:\nMatriz B:\n");
    imprime_matriz(matriz_B_transposta, m_colunas, n_linhas);

    // Liberação da memória de todas as matrizes
    libera_matriz(matriz_A, n_linhas);
    libera_matriz(matriz_B, n_linhas);
    libera_matriz(matriz_A_transposta, m_colunas); // cuidado: linhas e colunas trocados na transposta
    libera_matriz(matriz_B_transposta, m_colunas);
    libera_matriz(soma, n_linhas);
    libera_matriz(subtracao, n_linhas);
    libera_matriz(multiplicacao, n_linhas);

    return 0;
}

// Função que cria uma matriz com n_linhas linhas e m_colunas colunas
float **cria_matriz(int n_linhas, int m_colunas)
{
    // Aloca um vetor de ponteiros para linhas
    float **mat = (float**)malloc(sizeof(float*)*n_linhas);

    // Aloca cada linha individualmente
    for (int i = 0; i < n_linhas; i++)
    {
        mat[i] = (float *)malloc(sizeof(float) * m_colunas);
    }

    return mat;
}

// Função para preencher uma matriz com valores do usuário
void preenche_matriz(float **matriz, int linhas, int colunas)
{
    for (int i = 0; i < linhas; i++)
    {
        printf("Linha %d:\n", i + 1);
        for (int j = 0; j < colunas; j++)
        {
            printf("Posicao [%d][%d]: ", i + 1, j + 1);
            scanf("%f", &matriz[i][j]);
        }
    }
}

// Função para liberar a memória alocada para uma matriz
void libera_matriz(float **matriz, int n_linhas)
{
    // Libera cada linha
    for (int i = 0; i < n_linhas; i++)
    {
        free(matriz[i]);
    }

    // Libera o vetor de ponteiros
    free(matriz);
}

// Função para imprimir uma matriz
void imprime_matriz(float **matriz, int n_linhas, int m_colunas)
{
    for (int i = 0; i < n_linhas; i++)
    {
        for (int j = 0; j < m_colunas; j++)
        {
            printf("%10.1f ", matriz[i][j]);
        }
        printf("\n");
    }
}

// Função que cria e retorna a transposta de uma matriz
float **transpor_matriz(float **matriz, int n_linhas, int m_colunas)
{
    // Cria uma nova matriz transposta (trocando linhas e colunas)
    float **transposta = cria_matriz(m_colunas, n_linhas);

    for (int i = 0; i < n_linhas; i++)
    {
        for (int j = 0; j < m_colunas; j++)
        {
            // Inverte a posição dos elementos
            transposta[j][i] = matriz[i][j];
        }
    }

    return transposta;
}

// Função para somar duas matrizes
float **soma_matriz(float **matriz_a, float **matriz_b, int n_linhas_a, int m_colunas_a)
{
    float **soma = cria_matriz(n_linhas_a, m_colunas_a);

    for (int i = 0; i < n_linhas_a; i++)
    {
        for (int j = 0; j < m_colunas_a; j++)
        {
            soma[i][j] = matriz_a[i][j] + matriz_b[i][j];
        }
    }

    return soma;
}

// Função para subtrair duas matrizes
float **sub(float **matriz_a, float **matriz_b, int n_linhas_a, int m_colunas_a)
{
    float **sub = cria_matriz(n_linhas_a, m_colunas_a);

    for (int i = 0; i < n_linhas_a; i++)
    {
        for (int j = 0; j < m_colunas_a; j++)
        {
            sub[i][j] = matriz_a[i][j] - matriz_b[i][j];
        }
    }

    return sub;
}

// Função para multiplicar duas matrizes elemento a elemento
float **mult(float **matriz_a, float **matriz_b, int n_linhas_a, int m_colunas_a)
{
    float **mult = cria_matriz(n_linhas_a, m_colunas_a);

    for (int i = 0; i < n_linhas_a; i++)
    {
        for (int j = 0; j < m_colunas_a; j++)
        {
            mult[i][j] = matriz_a[i][j] * matriz_b[i][j];
        }
    }

    return mult;
}
