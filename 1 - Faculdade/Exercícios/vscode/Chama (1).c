#include <stdio.h>
#include <stdbool.h>
#define NOMES 2

int main()
{
    char nome[50], nomes[NOMES][50];

    printf("Digite %d nomes: ", NOMES);
    for (int i = 0; i < NOMES; i++)
    {
        gets(nomes[i]);
    }

    printf("\nDigite o nome que deseja procurar no array:");
    gets(nome);

    bool encontrado;

    for (int i = 0; i < NOMES; i++)
    {
        encontrado = true;
        for (int j = 0; nomes[i][j] != '\0'; j++)
        {
            if (nomes[i][j] != nome[j])
            {
                encontrado = false;
                break;
            }
        }

        if (encontrado)
        {
            printf("\nACHEI\n");
            break;
        }
    }

    if (!encontrado)
    {
        printf("\nNAO ACHEI\n");
    }

    return 0;
}