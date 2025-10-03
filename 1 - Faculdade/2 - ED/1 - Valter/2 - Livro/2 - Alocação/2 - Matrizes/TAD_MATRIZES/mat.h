#ifndef TAD_MATRIZ
#define TAD_MATRIZ

// Função para criar uma matriz de tamanho n_linhas x m_colunas
float **matriz_cria(int n_linhas, int m_colunas);

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

#endif