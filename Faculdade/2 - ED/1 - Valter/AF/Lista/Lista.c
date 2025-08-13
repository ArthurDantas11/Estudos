#include <stdio.h>
#include <stdlib.h>

// Função que verifica se a lista está vazia
// Função de busca
// Função que retira um elemento da lista
// Função para líberar a lista
// Manutenção da lista ordenada
// Implementações recursivas
// Função para comparar duas listas
// Listas circulares

typedef struct Lista
{
    int info;
    Lista* prox;
}Lista;

Lista* lista_cria(void)
{
    return NULL;
}

Lista* lista_insere(Lista* minha_lista, int valor)
{
    Lista* lista = (Lista*)malloc(sizeof(Lista));

    lista->info = valor;
    lista->prox = minha_lista; 

    return lista;
}

void lista_percorre(Lista* lista)
{
    Lista* aux = lista;

    while (aux != NULL)
    {
        printf("%d -> ", aux->info);
        aux = aux->prox;
    }
}

int lista_verifica_NULL(Lista* lista)
{
    Lista* aux = lista;
    if (aux == NULL)
    {
        return 1;
    }
    
    return 0;
}

int lista_busca(Lista* lista, int elemento)
{
    Lista* aux = lista;

    while (aux != NULL)
    {
        if (aux == elemento)
        {
            return 1;
        }
        
        aux = aux->prox;
    }
    
    return 0;
}

Lista* lista_retira(Lista* lista, int elemento)
{
    Lista* aux = lista;
    Lista* ant = NULL;
    
    while (aux != NULL && aux->info != elemento)
    {
        ant = aux;
        aux = aux->prox;
    }
    
    //verifica se o elemento foi encontrado de primeira
    if (ant == NULL)
    {
        lista = aux->prox;
    }
    else
    {
        ant->prox = aux->prox;
    }
    
    //verifica se o elemento não foi encontrado
    if (aux == NULL)
    {
        return lista;
    }
    
    free(aux);

    return lista;
}

Lista* lista_oredenada(Lista* minha_lista, int elemento)
{
    Lista* aux = minha_lista;
    Lista* ant = NULL;

    while (aux != NULL &&  aux->info < elemento)
    {
        ant = aux;
        aux = aux->prox
    }

    Lista* novo = (Lista*)malloc(sizeof(Lista));

    novo->info = elemento;

    if (aux == NULL)
    {
        /* code */
    }
    
    
}
