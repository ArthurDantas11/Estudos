#include <stdio.h>

int main()
{
    int matriz[2][2], matriz_resultante[2][2], maior = 0;

    printf("preencha a matriz 2x2:\n");
    for (int i = 0; i < 2; i++)
    {
        printf("Linha %d - ", i+1);
        for (int j = 0; j < 2; j++)
        {
            printf("Coluna %d:\n", j+1);
            scanf("%d", &matriz[i][j]);
        }
    }

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            if (matriz[i][j] > maior)
            {
                maior = matriz[i][j];
            }
        }
    }
    printf("Matriz resultante: ");
    
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            matriz_resultante[i][j] = matriz[i][j] * maior;
            printf("%d ", matriz_resultante[i][j]);
        }
    }
    
    
   
    
    return 0;
}