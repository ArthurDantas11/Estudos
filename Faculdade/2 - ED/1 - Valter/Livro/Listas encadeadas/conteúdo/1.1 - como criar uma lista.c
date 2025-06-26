#include <stdio.h>
#include <stdlib.h>

typedef struct Lista
{
    int info;
    struct lista *tail;
} Lista;

// Função de criação
Lista *lista_cria(void);

// Função de inserção
Lista *lista_insercao(Lista *l, int i);

// Função que percorre/imprime os elementos da lista
void lista_percorre(Lista *l);

// Função que verifica se a lista está vazia
int *lista_verifica(Lista *l);

// Função de busca
Lista *lista_busca(Lista *l, int v);

// Função para liberar a lista
void lista_libera(Lista *l);

int main()
{
    Lista *minha_lista = lista_cria();

    minha_lista = lista_insercao(minha_lista, 1);
    minha_lista = lista_insercao(minha_lista, 2);
    minha_lista = lista_insercao(minha_lista, 3);
    minha_lista = lista_insercao(minha_lista, 4);
    minha_lista = lista_insercao(minha_lista, 5);
    minha_lista = lista_insercao(minha_lista, 6);

    
    if (lista_verifica(minha_lista))
    {
        printf("Lista vazia\n");
        exit(1);
    }

    lista_percorre(minha_lista);

    Lista *busca = lista_busca(minha_lista, 3);

    if (busca != NULL)
    {
        printf("O elemento foi encontrado na lista\n");
    }
    else
    {
        printf("O elemento nao foi encontrado\n");
    }
    
    lista_libera(minha_lista);

    return 0;
}

/* função de criação: retorna uma lista vazia */
Lista *lista_cria(void)
{
    return NULL;
}

/* inserção no início: retorna a lista atualizada */
Lista *lista_insercao(Lista *l, int i)
{
    Lista *novo = (Lista *)malloc(sizeof(Lista));

    novo->info = i;
    novo->tail = l;

    return novo;
}

/* função imprime: imprime valores dos elementos */
void lista_percorre(Lista *l)
{
    Lista *p; /*variavel auxiliar para percorrer a lista*/

    for (p = l; p != NULL; p = p->tail)
    {
        printf("info = %d\n", p->info);
    }
}

/* função vazia: retorna 1 se vazia ou O se não vazia */
int *lista_verifica(Lista *l)
{
    if (l == NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

/* função busca: busca um elemento na lista */
Lista *lista_busca(Lista *l, int v)
{
    Lista *p;

    for (p = l; p != NULL; p = p->tail)
    {
        if (p->info == v)
        {
            return p;
        }
    }
    
    return NULL; /*não achou o elemento*/
}

// Função para liberar a lista
void lista_libera(Lista *l)
{
    Lista *p = l; 
    
    while (p != NULL)
    {
        Lista *t = p->tail; /* guarda referência p/ próx. elemento */
        free(p);  /* libera a memória apontada por p*/
        p = t;  /* faz p apontar para o próximo */
    }
}