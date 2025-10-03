#ifndef PILHA_H
#define PILHA_H

typedef struct Lista
{
    char link;
    struct Lista *prox;
} Lista;

typedef struct
{
    Lista *prim;
} Pilha;

int pilha_vazia(Pilha *pilha);

Pilha *pilha_cria(void);

void pilha_push(Pilha *pilha, char *link_push);

char *pilha_pop(Pilha *pilha);

void pilha_libera(Pilha *pilha);

int pilha_tamanho(Pilha *p);

char *pilha_topo(Pilha *p);

#endif