#include <stdio.h>
#include <stdlib.h>

/* Implemente um TAD, minimizando o espaço de memória utilizado, para
representar uma matriz triangular inferior. Nesse tipo de matriz, todos os elementos acima da diagonal têm valor zero.*/

int **matriz_aloca(int linha, int colunas);

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

