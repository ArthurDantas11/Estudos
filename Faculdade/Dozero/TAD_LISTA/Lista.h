#ifndef LISTA_H
#define LISTA_H

typedef struct Lista
{
    int info;
    struct Lista* prox;
}Lista;

Lista* lista_cria(void);

Lista* lista_insere(Lista* lista, int valor);

Lista *lista_insere_na_oredem(Lista *lista, int valor);

int lista_comprimento (Lista* l);

void lista_percorre(Lista* lista);

int lista_busca(Lista* lista, int valor);

void lista_libera(Lista* lista);

Lista* lista_remove(Lista* l, int valor);

Lista* lista_insere_ordenado(Lista* l, int valor);

Lista* lista_inverte(Lista* l);

Lista* lista_concatenar(Lista* l1, Lista* l2);

Lista* lista_remove_duplicatas(Lista* l);

Lista* lista_separa(Lista* lista, int valor_n);

Lista* lista_copia(Lista* l);

#endif
