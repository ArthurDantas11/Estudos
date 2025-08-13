/*Implemente duas versões de uma função, seguindo as diferentes estratégias
discutidas para alocar matrizes, que determine se uma matriz é simétrica quadrada ou não.*/

#include <stdio.h>
#include <stdlib.h>

int **matriz_aloca(int linha, int colunas);

void matriz_verifica_simetrica(int **matriz, int linha, int coluna);

int **matriz_preenche(int **matriz, int linhas, int colunas);

int main(int argc, char const *argv[])
{
    int linhas, colunas;

    printf("Digite o numero de linhas e colunas\n");
    printf("Linhas: ");
    scanf("%d", &linhas);

    printf("colunas: ");
    scanf("%d", &colunas);

    int **matriz = matriz_aloca(linhas, colunas);

    matriz = matriz_preenche(matriz, linhas, colunas);

    matriz_verifica_simetrica(matriz, linhas, colunas);

    return 0;
}

int **matriz_aloca(int linha, int colunas)
{
    int **matriz = (int *)malloc(sizeof(int) * linha);
    for (int i = 0; i < linha; i++)
    {
        matriz[i] = (int *)malloc(sizeof(int) * colunas);
    }

    return matriz;
}

int **matriz_preenche(int **matriz, int linhas, int colunas)
{
    for (int i = 0; i < linhas; i++)
    {
        printf("linha %d:\n", i + 1);
        for (int j = 0; j < colunas; j++)
        {
            printf("Coluna %d:\n", j + 1);
            scanf("%d", &matriz[i][j]);
        }
    }

    return matriz;
}

void matriz_verifica_simetrica(int **matriz, int linha, int coluna)
{
    if (linha == coluna)
    {
        for (int i = 0; i < linha; i++)
        {
            for (int j = 0; j < coluna; j++)
            {
                if (matriz[i][j] != matriz[j][i])
                {
                    printf("Matriz nao e simetrica quadratica!\n");

                    return;
                }
            }
        }

        printf("Matriz simetrica quadratica!\n");
    }
}