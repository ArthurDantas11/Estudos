#include <stdio.h>
#define elementos 10

int main()
{
    int x[elementos], y[elementos], cont_uniao = 0, uniao[20], cont_difereca = 0, diferenca[20], cont_soma = 0, soma[20], cont_mult = 0, mult[20], cont_interseccao = 0, interseccao[20];

    printf("preencha os seguintes vetores de 10 elementos:\nvetor X\n");
    for (int i = 0; i < elementos; i++)
    {
        scanf("%d", &x[i]);
    }

    printf("vetor Y:\n");
    for (int i = 0; i < elementos; i++)
    {
        scanf("%d", &y[i]);
    }

    for (int i = 0; i < elementos; i++)
    {
        if (x[i] != y[i]) // verificando se o numero se repete
        {
            uniao[cont_uniao++] = x[i];
        }
        else
        {
            uniao[cont_uniao++] = y[i];
        }
    }

    for (int i = 0; i < elementos; i++) // Diferença
    {
        int aux = 0;

        for (int j = 0; j < elementos; j++)
        {
            if (x[i] == y[j])
            {
                aux = 1;
            }
        }

        if (aux == 0)
        {
            diferenca[cont_difereca++] = x[i];
        }
    }

    for (int i = 0; i < elementos; i++) // Soma
    {
        soma[cont_soma++] = x[i] + y[i];
    }

    for (int i = 0; i < elementos; i++) // Produto
    {
        mult[cont_mult++] = x[i] * y[i];
    }

    for (int i = 0; i < elementos; i++) // Interseccao
    {
        for (int j = 0; j < elementos; j++)
        {
            if (x[i] == y[j])
            {
                interseccao[cont_interseccao++] = x[i];
            }
        }
    }

    printf("UNIAO: ");
    for (int i = 0; i < cont_uniao; i++) // exibindo o vetor da uniao
    {
        printf("%d ", uniao[i]);
    }

    printf("\nDIFERENCA: ");
    for (int i = 0; i < cont_difereca; i++) // exibindo o vetor da diferença
    {
        printf("%d ", diferenca[i]);
    }

    printf("\nSOMA: ");
    for (int i = 0; i < cont_soma; i++) // exibindo o vetor da soma
    {
        printf("%d ", soma[i]);
    }

    printf("\nPRODUTO: ");
    for (int i = 0; i < cont_mult; i++) // exibindo o vetor da soma
    {
        printf("%d ", mult[i]);
    }

    printf("\nINTERSECCAO: ");
    for (int i = 0; i < cont_interseccao; i++) // exibindo o vetor da soma
    {
        printf("%d ", interseccao[i]);
    }

    return 0;
}