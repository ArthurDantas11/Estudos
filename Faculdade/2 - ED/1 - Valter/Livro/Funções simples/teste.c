// lista encadeadas inteiros
#include <stdio.h>
#include <stdlib.h>

typedef struct Lista
{
    int info;
    struct Lista *prox;

} Lista;

Lista *lista_cria(void);

Lista lista_insere(Lista l, int i);

void imprime(Lista *l);

int main()
{
    Lista *minha_lista = lista_cria();

    minha_lista = lista_insere(minha_lista, 1);
    minha_lista = lista_insere(minha_lista, 2);
    minha_lista = lista_insere(minha_lista, 3);
    minha_lista = lista_insere(minha_lista, 4);
    minha_lista = lista_insere(minha_lista, 5);

    imprime(minha_lista);

    return 0;
}

Lista *lista_cria(void)
{
    return NULL;
}

Lista lista_insere(Lista l, int i)
{
    Lista novo = (Lista)malloc(sizeof(Lista));
    if (!novo)
    {
        printf("Nao foi possivel inserir novo elemento...");
        exit(1);
    }

    novo->info = i;
    novo->prox = l;

    return novo;
}

void imprime(Lista *l)
{
    Lista *p;

    for (p = l; p != NULL; p = p->prox)
    {
        printf("info: %d\n", p->info);
    }
}