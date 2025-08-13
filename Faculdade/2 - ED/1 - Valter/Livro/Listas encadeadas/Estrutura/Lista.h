#ifndef LISTA_H
#define LISTA_H

typedef struct Lista
{
    int info;
    struct Lista* prox;
}Lista;

Lista* lista_cria(void);

Lista* lista_insere(Lista* lista, int valor);

int lista_comprimento (Lista* l);

void lista_percorre(Lista* lista);


#endif