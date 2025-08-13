#include <stdio.h>
#include <stdlib.h>

/* 2.6. Considere listas de valores inteiros e implemente uma função que receba
como parâmetro uma lista encadeada e um valor inteiro n e divida a lista em duas,
de forma à segunda lista começar no primeiro nó logo após a primeira ocorrência
de n na lista original. A figura a seguir ilustra essa separação:
Essa função deve obedecer ao protótipo:
Lista separa (Lista* 1, int n);
*/

typedef struct Lista
{
    int info;
    struct Lista *prox;
} Lista;

Lista *lista_cria(void);

Lista *lista_insere(Lista *lista, int valor);

void lista_percorre(Lista *lista);

Lista *concatena(Lista *l1, Lista *l2);

Lista *separa(Lista *lista, int n);

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

    Lista *return_n = separa(list1, n);

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

Lista *separa(Lista *lista, int n)
{
    Lista* aux = lista;
    Lista* novo = NULL;
    
    while (aux != NULL)
    {
        if (aux->info == n)
        {
            novo = aux->prox;
        }
        
        aux = aux->prox;
    }

    return novo;
}
