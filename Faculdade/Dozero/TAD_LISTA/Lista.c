#include "Lista.h"
#include <stdio.h>
#include <stdlib.h>

Lista *lista_cria(void)
{
    return NULL;
}

Lista *lista_insere(Lista *lista, int valor)
{
    Lista *novo = (Lista *)malloc(sizeof(Lista));

    novo->info = valor;
    novo->prox = lista;

    return novo;
}

int lista_comprimento(Lista *l)
{
    int cont = 0;

    while (l != NULL)
    {
        cont++;
        l = l->prox;
    }

    return cont;
}

void lista_percorre(Lista *lista)
{
    Lista *aux = lista;

    while (aux != NULL)
    {
        printf("%d ->", aux->info);
        aux = aux->prox;
    }

    printf("NULL\n");
}

int lista_busca(Lista *lista, int valor)
{
    Lista *aux = lista;

    while (aux != NULL)
    {
        if (aux->info == valor)
        {
            return 1;
        }
        aux = aux->prox;
    }

    return 0;
}

void lista_libera(Lista *lista)
{
    while (lista != NULL)
    {
        Lista *aux = lista->prox;
        free(lista);
        lista = aux;
    }
}

Lista *lista_remove(Lista *l, int valor)
{
    Lista *atual = l;
    Lista *anterior = NULL;

    while (atual != NULL)
    {
        if (atual->info == valor)
        {
            if (anterior == NULL)
            {
                l = atual->prox;
                free(atual);
                return l;
            }
            else
            {
                anterior->prox = atual->prox;
                free(atual);
            }

            return l;
        }
        anterior = atual;
        atual = atual->prox;
    }
}

Lista *lista_insere_ordenado(Lista *l, int valor)
{
    Lista* atual = l;
    Lista* anterior = NULL;

    Lista* novo = (Lista *)malloc(sizeof(Lista));

    if (atual == NULL)
    {
        novo->info = valor;
        novo->prox = atual;

        return novo;
    }

    if (valor > atual->info)
    {
        novo->info = valor;
        novo->prox = atual;

        return novo;
    }
    
    while (atual != NULL && valor < atual->info)
    {
        anterior = atual;
        atual = atual->prox;
    }

    novo->info = valor;
    anterior->prox = novo;
    novo->prox = atual;

    return l;
}

Lista* lista_inverte(Lista* l)
{
    Lista* atual = l;
    Lista* anterior = NULL;
    Lista* proximo = NULL;

    while  (atual != NULL)
    {
        proximo = atual->prox;
        atual->prox = anterior;
        anterior = atual;
        atual = proximo;
        
    }

    return anterior;
        
} 

Lista* lista_concatenar(Lista* l1, Lista* l2)
{
    Lista* aux = l2;

    while (aux->prox != NULL)
    {
       aux = aux->prox;
    }

    aux->prox = l1;

    return l2;
}

// Implemente uma função que, dada uma lista encadeada (TAD_LISTA) e um valor inteiro n, percorra a lista original em busca  
// da primeira ocorrência de n e divida em duas listas. A função deve retornar um ponteiro para a cabeça da segunda lista, 
// que se inicia no nó imediatamente após o nó que contém o valor n. A lista original deve ser truncada nesse ponto. 

Lista* lista_separa(Lista* lista, int valor_n)
{
    Lista* atual = lista;

    if (lista == NULL)
        return NULL; // lista vazia

    while (atual != NULL && atual->info != valor_n) {
        atual = atual->prox;
    }

    if (atual == NULL) // valor não encontrado
        return NULL;

    Lista* segunda_lista = atual->prox; // começa depois do valor_n
    atual->prox = NULL; // corta a ligação

    return segunda_lista;
}

Lista* lista_copia(Lista* l)
{
    Lista* aux = NULL;
    Lista* copia = (Lista*)malloc(sizeof(Lista));

    while (aux != NULL)
    {
        copia->info = aux->info;
        copia->prox = aux;
        aux = aux->prox;
    }
    
    return copia;
}