#ifndef LISTA_INTEIROS_H
#define LISTA_INTEIROS_H

typedef struct Lista
{
    int info;
    struct Lista* prox;
}Lista;

Lista* lista_cria();    

int lista_vazia(Lista* l);

Lista* lista_insere(Lista* l, int i);

void Lista_percorre(Lista* l);

Lista* lista_busca(Lista* l, int v);

Lista* lista_retira(Lista* l, int v);

void lista_libera(Lista* l);

Lista* lista_insere_final(Lista* l, int v);

int lista_maior(Lista* l);

Lista* lista_iverso(Lista* l);

Lista* lista_concatena(Lista* l1, Lista* l2);

Lista *lista_copia(Lista* l);

int lista_iguais(Lista* l);

Lista* lista_intercala(Lista* l1, Lista* l2);

#endif //LISTA_INTEIROS_H



