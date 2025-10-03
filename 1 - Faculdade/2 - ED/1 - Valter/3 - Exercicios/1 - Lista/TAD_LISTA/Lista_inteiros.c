#include <stdio.h>
#include <stdlib.h>
#include "Lista_inteiros.h"

Lista* lista_cria()    
{
    return NULL;
}

int lista_vazia(Lista* l)
{
    return (l == NULL);
}

Lista* lista_insere(Lista* l, int i)
{
    Lista* novo = (Lista*)malloc(sizeof(Lista));

    novo->info = i;
    novo->prox = l;

    return novo;
}

void Lista_percorre(Lista* l)
{
    Lista* aux = l;

    while (aux != NULL)
    {
        printf("%d ", aux->info);

        aux = aux->prox;
    }

    printf("\n");
}

Lista* lista_busca(Lista* l, int v)
{
    Lista* aux = l;

    while (aux != NULL)
    {
        if (aux->info == v)
        {
            return aux;
        }
        
        aux = aux->prox;
    }

    return NULL;
}

Lista* lista_retira(Lista* l, int v)
{
    Lista* aux = l;
    Lista* ant = NULL;

    
    while (aux != NULL)
    {
        if (aux->info == v)
        {
            if (ant == NULL)
            {
                Lista* prox = aux->prox;
                free(aux);
                
                return prox;
            }

            ant->prox = aux->prox;
            free(aux);
            return l;
        }
        
        ant = aux;
        aux = aux->prox; 
    }

    return l;
}

void lista_libera(Lista* l)
{
    Lista* aux = l;
    Lista* temp = NULL;
    
    while (aux != NULL)
    {
        temp = aux->prox;
        free(aux);
        aux = temp;
    }
}  
Lista* lista_insere_final(Lista* l, int v)
{
    Lista* aux = l;

    while (aux->prox != NULL)
    {
        aux = aux->prox;
    }

    aux->info = v;

    return l;
    
}

int lista_maior(Lista* l)
{
    Lista* aux = l;
    int maior = 0;

    while (aux != NULL)
    {
        if (aux->info > maior)
        {
            maior = aux->info;
        }
        
        aux = aux->prox;
    }

    return maior;
    
}

Lista* lista_iverso(Lista* l)
{
    //non sei
}

Lista* lista_concatena(Lista* l1, Lista* l2)
{
    Lista* aux = l1;

    while (aux->prox != NULL)
    {
        aux = aux->prox;
    }

    aux->prox = l2;
   
    return aux;
}

Lista *lista_copia(Lista* l)
{
    Lista* copia = (Lista*)malloc(sizeof(Lista));

    while (l != NULL)
    {
        copia = l->info;
        copia = l->prox;

        l = l->prox;
    }
    
    return copia;
}

int lista_iguais(Lista* l, Lista* l2)
{
    Lista* aux = l;

    while (aux != NULL || aux->info != l2)
    {
        aux = aux->prox;
    }

    if (aux == NULL)
    {
        return 0;
    }

    return  1;
}

Lista* lista_intercala(Lista* l1, Lista* l2)
{
    //i know, but its time to go...
}