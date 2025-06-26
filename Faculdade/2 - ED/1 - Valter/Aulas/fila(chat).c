#include <stdio.h>
#define TAM 5
/*"Crie um programa em C que simule uma fila de atendimento. O programa deve permitir ao usuário:

Adicionar uma pessoa na fila (inserção).

Remover a próxima pessoa da fila (remoção).

Visualizar todas as pessoas atualmente na fila.

Sair do programa.

Use um vetor com tamanho fixo para representar a fila. Quando a fila estiver cheia, informe que não é possível inserir mais. Quando estiver vazia, avise que não há ninguém para remover."

*/
void preenche_fila(int fila[])
{
    for (int i = 0; i < TAM; i++)
    {
       scanf("%d", &fila[i]);
    }
    
    
}

int main()
{
    int fila[TAM];

    
    return 0;
}