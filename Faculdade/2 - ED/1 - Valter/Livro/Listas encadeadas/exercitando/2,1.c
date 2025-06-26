#include <stdio.h>
#include <stdlib.h>

typedef struct Lista
{
    int head;
    struct Lista* tail;
}Lista;

Lista* lista_cria(void)
{
    return NULL;
}

Lista* lista_insere(Lista* lista, int valor)
{
    Lista* my_list = (Lista*)malloc(sizeof(Lista));

    my_list->head = valor;
    my_list->tail = lista;

    return my_list;
}

int comprimento (Lista* l)
{
    int cont = 0;

    for(Lista* aux = l; aux != NULL; aux = aux->tail)    {
        cont++;    
    }

    return cont;
}

void lista_percorre(Lista* lista)
{
    for(Lista* aux = lista; aux != NULL; aux = aux->tail)
    {
        printf("%d -> ", aux->head);
    }
}

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