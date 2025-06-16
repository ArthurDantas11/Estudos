#include <stdio.h>

/*Um elemento Aij de uma matriz é dito ponto de sela da matriz A se, e somente se, Aij for, ao mesmo
tempo, o menor elemento da linha i e o maior elemento da coluna j. Faça um programa que carregue
uma matriz de ordem 5  7, verifique se a matriz possui ponto de sela e, se possuir, mostre seu valor
e sua localização.*/
// void looping(int matriz[][])
// {
//     for (int i = 0; i < 5; i++)
//     {
//         for (int j = 0; j < 7; j++)
//         {

//         }

//     }

// }
int main()
{
    int matriz[5][7];

    printf("Preencha a matriz 5x7 a seguir:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("Linha %d - ", i);
        for (int j = 0; j < 7; j++)
        {
            printf("Coluna %d: ", j);
            scanf("%d", &matriz[i][j]);
        }
    }

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 7; j++)
        {
            if ()
            {
                /* code */
            }
            
        }
    }

    return 0;
}
