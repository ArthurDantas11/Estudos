#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Pilha.h"

int pilha_vazia(Pilha *pilha)
{
    return (pilha->prim == NULL);
}

Pilha *pilha_cria(void)
{
    Pilha *pilha = (Pilha *)malloc(sizeof(Pilha));

    pilha->prim = NULL;

    return pilha;
}

void pilha_push(Pilha *pilha, char *link_push)
{
    Lista *novo = (Lista *)malloc(sizeof(Lista));

    if (!novo)
    {
        printf("Erro de alocacao\n");
        exit(1);
    }

    novo->link = strdup(link_push);
    novo->prox = pilha->prim;
    pilha->prim = novo;
}

char *pilha_pop(Pilha *pilha)
{
    Lista* aux;
    char* copy;
    
    if (pilha_vazia(pilha))
    {
        printf("Pilha vazia\n");
        return NULL;
    }

    aux = pilha->prim;
    copy = aux->link;
    pilha->prim = aux->prox;
    free(aux);

    return copy;
}

void pilha_libera(Pilha *pilha)
{
    Lista* aux = pilha->prim;

    while (aux != NULL)
    {
        Lista* proximo = aux->prox;
        free(aux);
        aux = proximo;
    }
    
    free(pilha)
}

int pilha_tamanho(Pilha *p)
{
    Lista* aux = p->prim;
    int cont = 0;

    while (aux != NULL)
    {
        cont++;
        aux = aux->prox;
    }
    
    return cont;
}

char *pilha_topo(Pilha *p)
{
    Lista* topo = p->prim;

    return topo->link;
}
 