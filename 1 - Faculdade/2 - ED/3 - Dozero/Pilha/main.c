#include "TAD_Pilha/Pilha.c"

int main(void)
{
    Pilha *pilha = pilha_cria();

    if (pilha_vazia(pilha))
        printf("A pilha está vazia.\n");

    // Testando push
    pilha_push(pilha, "google.com");
    pilha_push(pilha, "youtube.com");
    pilha_push(pilha, "github.com");

    if (!pilha_vazia(pilha))
        printf("Agora a pilha NAO está vazia.\n");

    // Testando pop
    char *site;

    site = pilha_pop(pilha);
    printf("Desempilhou: %s\n", site);

    site = pilha_pop(pilha);
    printf("Desempilhou: %s\n", site);

    site = pilha_pop(pilha);
    printf("Desempilhou: %s\n", site);

    if (pilha_vazia(pilha))
        printf("A pilha está vazia novamente.\n");

    // Liberar memória (se você tiver função de destruir a pilha, use aqui)
    free(pilha);

    return 0;
}
