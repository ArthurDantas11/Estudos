#include <stdio.h>
#include <stdlib.h>

/* Considere listas de valores inteiros e implemente uma função que receba
como parâmetros uma lista encadeada e um valor inteiro n, retire da lista todas as
ocorrências de n e retorne a lista resultante. Essa função deve obedecer ao protótipo:
Lista* retira_n (Lista* l, int n);*/

typedef struct Lista
{
    int info;
    struct Lista *prox;
} Lista;

Lista *lista_cria(void);

Lista *lista_insere(Lista *lista, int valor);

void lista_percorre(Lista *lista);

Lista *concatena(Lista *l1, Lista *l2);

Lista *retira_n(Lista *l, int n);

int main()
{
    Lista *list1 = lista_cria();

    for (int i = 0; i < 10; i++)
    {
        list1 = lista_insere(list1, i + 1);
    }

    lista_percorre(list1);
    printf("NULL\n");

    int n;
    printf("digite um valor para n:\n");
    scanf("%d", &n);

    printf("NOVA LISTA:\n");

    Lista *return_n = retira_n(list1, n);

    lista_percorre(return_n);
    printf("NULL\n");

    return 0;
}

Lista *lista_cria(void)
{
    return NULL;
}

Lista *lista_insere(Lista *lista, int valor)
{
    Lista *my_list = (Lista *)malloc(sizeof(Lista));

    my_list->info = valor;
    my_list->prox = lista;

    return my_list;
}

void lista_percorre(Lista *lista)
{
    Lista *aux = lista;

    while (aux != NULL)
    {
        printf("%d -> ", aux->info);
        aux = aux->prox;
    }
}

Lista *retira_n(Lista *l, int n)
{
    Lista *aux = l;
    Lista *ant = NULL;

    while (aux != NULL)
    {
        if (aux->info == n)
        {
            if (aux == NULL)
            {
                return l;
            }

            if (ant == NULL)
            {
                l = aux->prox;
                free(aux);
                aux = l;
            }
            else
            {
                ant->prox = aux->prox;
            }
        }

        ant = aux;
        aux = aux->prox;
    }

    free(aux);

    return l;
}
