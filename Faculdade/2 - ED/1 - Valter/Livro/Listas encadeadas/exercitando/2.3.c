#include <stdio.h>
#include <stdlib.h>

/*2.3. Implemente uma função que tenha como valor de retorno o ponteiro para
o último nó de uma lista encadeada. Essa função deve obedecer ao protótipo:
Lista* ultimo (Lista* 1);
*/

typedef struct Lista
{
    int info;
    struct Lista* prox;
}Lista;

Lista* lista_cria(void);

Lista* lista_insere(Lista* lista, int valor);

void lista_percorre(Lista* lista);

Lista* ultimo(Lista* l);

int main()
{
    Lista* my_list = lista_cria();

    for (int i = 0; i < 25; i++)
    {
        my_list = lista_insere(my_list, i + 1);
    }

    lista_percorre(my_list);
    printf("NULL\n");
    
    Lista* ultimo_node = ultimo(my_list);
    
    lista_percorre(ultimo_node);
    printf("NULL");

    return 0;
}

Lista* lista_cria(void)
{
    return NULL;
}

Lista* lista_insere(Lista* lista, int valor)
{
    Lista* my_list = (Lista*)malloc(sizeof(Lista));

    my_list->info = valor;
    my_list->prox = lista;

    return my_list;
}

void lista_percorre(Lista* lista)
{
    Lista* aux = lista;

    while(aux != NULL)
    {
        printf("%d -> ", aux->info);
        aux = aux->prox;
    }
}

Lista* ultimo(Lista* l)
{
    Lista* aux = l;
    Lista* ant = NULL;

    while (aux != NULL)
    {
        ant = aux;
        aux = aux->prox;
    }
    
    return ant;
}

