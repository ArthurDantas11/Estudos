#include "Lista.h"
#include <stdio.h>
#include <stdlib.h>

Lista* lista_cria(void) {
    return NULL;
}

Lista* lista_insere_final(Lista* lista, int valor) {
    Lista* novo = (Lista*)malloc(sizeof(Lista));
    novo->info = valor;
    novo->prox = NULL;

    if (lista == NULL) {
        return novo;
    }

    Lista* aux = lista;
    while (aux->prox != NULL) {
        aux = aux->prox;
    }
    aux->prox = novo;
    return lista;
}

void lista_percorre(Lista* lista) {
    Lista* aux = lista;
    while (aux != NULL) {
        printf("%d -> ", aux->info);
        aux = aux->prox;
    }
    printf("NULL\n");
}

int lista_busca(Lista* lista, int valor) {
    Lista* aux = lista;
    while (aux != NULL) {
        if (aux->info == valor) {
            return 1;
        }
        aux = aux->prox;
    }
    return 0;
}

Lista* lista_remove(Lista* lista, int valor) {
    Lista* atual = lista;
    Lista* anterior = NULL;

    while (atual != NULL) {
        if (atual->info == valor) {
            if (anterior == NULL) {
                Lista* temp = atual->prox;
                free(atual);
                return temp;
            } else {
                anterior->prox = atual->prox;
                free(atual);
                return lista;
            }
        }
        anterior = atual;
        atual = atual->prox;
    }
    return lista;
}

Lista* lista_concatenar(Lista* l1, Lista* l2) {
    if (l1 == NULL) return l2;
    Lista* aux = l1;
    while (aux->prox != NULL) {
        aux = aux->prox;
    }
    aux->prox = l2;
    return l1;
}

Lista* lista_separa(Lista* lista, int valor_n) {
    if (lista == NULL) return NULL;

    Lista* atual = lista;
    while (atual != NULL && atual->info != valor_n) {
        atual = atual->prox;
    }

    if (atual == NULL) return NULL; // valor não encontrado

    Lista* segunda_lista = atual->prox; // começa após o valor_n
    atual->prox = NULL; // corta a lista

    return segunda_lista;
}

Lista* lista_inverte(Lista* lista) {
    Lista* anterior = NULL;
    Lista* atual = lista;
    Lista* proximo = NULL;

    while (atual != NULL) {
        proximo = atual->prox;
        atual->prox = anterior;
        anterior = atual;
        atual = proximo;
    }
    return anterior;
}

void lista_libera(Lista* lista) {
    while (lista != NULL) {
        Lista* temp = lista;
        lista = lista->prox;
        free(temp);

    }
}