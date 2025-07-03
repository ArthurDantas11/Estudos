#include <stdio.h>
#include <stdlib.h>

typedef struct Lista
{
    int info;
    struct Lista* prox;
}Lista;

Lista* lista_cria(void)
{
    return NULL;
}

Lista* lista_insere(Lista* minha_lista, int valor)
{
    Lista* novo = (Lista*)malloc(sizeof(Lista));

    if (!novo)
    {
        printf("memoria insuficiente...");
        exit(1);
    }

    novo->info = valor;
    novo->prox = minha_lista;

    return novo;
}
void lista_percorre(Lista* minha_lista)
{
    Lista* aux = minha_lista;

    while (aux != NULL)
    {
        printf("%d-> ", aux->info);

        aux = aux->prox;
    }
}
int lista_busca(Lista* minha_lista, int valor)
{
    Lista* aux = minha_lista;

    while (aux != NULL)
    {
        if (valor == aux->info)
        {
            return valor;
        }
        
        aux = aux->prox;
    }
}

void lista_libera(Lista* minha_lista)
{
    while (minha_lista != NULL)
    {
        Lista* aux = minha_lista->prox;
        free(minha_lista);
        minha_lista = aux
    }
}

Lista* Lista_retira (Lista* minha_lista, int valor)
{
    Lista* aux = minha_lista;
    Lista* anterior = NULL;

    while (aux != NULL && aux != valor)
    {
        anterior = aux;
        aux = aux->prox;
    }

    if (aux == NULL)
    {
        return minha_lista;
    }

    if (anterior == NULL)
    {
        minha_lista = aux->prox
    }
    else
    {
        anterior->prox = aux->prox;
    }
    
    free(aux);
    return minha_lista;
    
    
}

int main()
{
    Lista* minha_lista = lista_cria();

    minha_lista = lista_insere(minha_lista, 1);
    minha_lista = lista_insere(minha_lista, 2);
    minha_lista = lista_insere(minha_lista, 3);
    minha_lista = lista_insere(minha_lista, 4);
    minha_lista = lista_insere(minha_lista, 5);
    minha_lista = lista_insere(minha_lista, 6);

    int valor;
    printf("verifique algum numero na lista\nDigite o numero que deseja buscar:\n");
    scanf("%d", &valor);
    
    int busca = lista_busca(minha_lista, valor);
    if (busca == valor)
    {
        printf("Numero encontrado!\n");
    }
    else
    {
        printf("o numero nao esta na lista\n");
    }

    return 0;
}