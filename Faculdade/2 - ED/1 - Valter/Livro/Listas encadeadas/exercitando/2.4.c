#include <stdio.h>
#include <stdlib.h>

/*2.4. Implemente uma função que receba duas listas encadeadas de valores reais
e retorne a lista resultante da concatenação das duas listas recebidas como parâmetros,
isto é, após a concatenação, o último elemento da primeira lista deve
apontar para o primeiro elemento da segunda lista, conforme ilustrado a seguir:
*/

typedef struct Lista
{
    int info;
    struct Lista* prox;
}Lista;

Lista* lista_cria(void);

Lista* lista_insere(Lista* lista, int valor);

void lista_percorre(Lista* lista);

Lista* concatena(Lista* l1, Lista* l2);

int main()
{
    Lista* list1 = lista_cria();
    Lista* list2 = lista_cria();

    for (int i = 0; i < 10; i++)
    {
        list1 = lista_insere(list1, i + 1);
    }

    for (int i = 10; i < 20; i++)
    {
        list2 = lista_insere(list2, i + 1);
    }

    lista_percorre(list1);
    printf("NULL\n");
    
    lista_percorre(list2);
    printf("NULL\n");

    Lista* lst_resultante = concatena(list1, list2);

    printf("lista resultante: \n");
    lista_percorre(lst_resultante);
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

Lista* concatena(Lista* l1, Lista* l2)
{
   Lista* aux = l1;

   while (aux->prox != NULL)
   {
        aux = aux->prox;
   }
   
   aux->prox = l2;

   return l1; 
}


