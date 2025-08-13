#include "Lista.h"
#include <stdio.h>
#include <stdlib.h>

Lista* lista_cria(void)
{
    return NULL;
}

Lista* lista_insere(Lista* lista, int valor)
{
    Lista* my_list = (Lista*)malloc(sizeof(Lista));

    my_list->info = valor;
    my_list->prox = NULL;

    if (lista == NULL)
    {
       return my_list;
    }
    
    Lista* aux = lista;

    while (aux->prox != NULL)
    {
        aux = aux->prox;
    }

    aux->prox = my_list;
    
    return lista;
}

int lista_comprimento (Lista* l)
{
    int cont = 0;

    for(Lista* aux = l; aux != NULL; aux = aux->prox)    {
        cont++;    
    }

    return cont;
}

void lista_percorre(Lista* lista)
{
    for(Lista* aux = lista; aux != NULL; aux = aux->prox)
    {
        printf("%d -> ", aux->info);
    }
}