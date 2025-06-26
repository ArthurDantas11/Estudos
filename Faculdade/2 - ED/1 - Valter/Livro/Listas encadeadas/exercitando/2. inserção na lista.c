#include <stdio.h>
#include <stdlib.h>

/*estrutura da lista*/
typedef struct Node 
{
    int head;
    struct Node *tail;
}Node;

Node *lista_cria(void)
{
    return NULL;
}

Node *lista_incerssao(Node *lista, int valor)
{
    Node* novo = (Node*)malloc(sizeof(Node));

    novo->head = valor;
    novo->tail = lista;

    return novo;
}

int main()
{
    Node *minha_lista = lista_cria();

    minha_lista = lista_incerssao(minha_lista, 4);
    minha_lista = lista_incerssao(minha_lista, 3);
    minha_lista = lista_incerssao(minha_lista, 2);

    return 0;
}