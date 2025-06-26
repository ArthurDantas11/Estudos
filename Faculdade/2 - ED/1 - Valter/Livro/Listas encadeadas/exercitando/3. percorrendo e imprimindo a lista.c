#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int head;
    struct Node *tail;
}Node;

Node *lista_cria(void)
{
    return NULL;
}

Node *insere(Node *lista, int i)
{
    Node *novo = (Node*)malloc(sizeof(Node));

    novo->head = i;
    novo->tail = lista;

    return novo;
}

void percorre(Node *lista)
{
    Node *aux; //variavel auxiliar para percorrer a lista

    for (aux = lista; aux != NULL; aux = aux->tail)
    {
        printf("%d->", aux->head); 
    }
}

int main()
{
    Node *minha_lista = lista_cria();

    minha_lista = insere(minha_lista, 1);
    minha_lista = insere(minha_lista, 2);
    minha_lista = insere(minha_lista, 3);

    percorre(minha_lista);

    return 0;
}