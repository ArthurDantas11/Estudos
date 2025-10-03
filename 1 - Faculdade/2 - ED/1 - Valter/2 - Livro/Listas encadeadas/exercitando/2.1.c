#include <stdio.h>
#include <stdlib.h>

/*2.1 Implemente uma função que tenha como valor de retorno o comprimento
de uma lista encadeada, isto é, que calcule o número de nós de uma lista. Essa
função deve obedecer ao protótipo:*/

typedef struct Lista
{
    int info;
    struct Lista* prox;
}Lista;

Lista* lista_cria(void);

Lista* lista_insere(Lista* lista, int valor);

int comprimento (Lista* l);

void lista_percorre(Lista* lista);

int main()
{
    Lista* my_list = lista_cria();

    my_list = lista_insere(my_list, 1);
    my_list = lista_insere(my_list, 2);
    my_list = lista_insere(my_list, 3);
    my_list = lista_insere(my_list, 4);
    my_list = lista_insere(my_list, 5);

    lista_percorre(my_list);
    printf("NULL\n");
    
    int tamanho = comprimento(my_list);
    printf("Comprimento da lista: %d", tamanho);

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

int comprimento (Lista* l)
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