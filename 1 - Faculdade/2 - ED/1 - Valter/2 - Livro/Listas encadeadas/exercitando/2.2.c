#include <stdio.h>
#include <stdlib.h>

/*2.2. Considere listas encadeadas de valores inteiros e implemente uma função
para retornar o número de nós da lista que possuem o campo info com valores
maiores do que n. Essa função deve obedecer ao protótipo:
Exercicios 215
int maiores (Lista* 1, int n);*/

typedef struct Lista
{
    int info;
    struct Lista* prox;
}Lista;

Lista* lista_cria(void);

Lista* lista_insere(Lista* lista, int valor);

void lista_percorre(Lista* lista);

int maiores (Lista* l, int n);

int main()
{
    Lista* my_list = lista_cria();

    for (int i = 0; i < 25; i++)
    {
        my_list = lista_insere(my_list, i + 1);
    }
    
    int n;

    printf("digite um valor para n:\n");
    scanf("%d", &n);
    

    lista_percorre(my_list);
    printf("NULL\n");
    
    int valores = maiores(my_list, n);
    
    printf("numero de nos da lista que possuem o campo info com valores maiores do que n: %d", valores);

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
    for(Lista* aux = lista; aux != NULL; aux = aux->prox)
    {
        printf("%d -> ", aux->info);
    }
}

int maiores (Lista* l, int n)
{
    Lista* aux = l;
    int cont = 0;

    while (aux != NULL)
    {
        if (aux->info > n)
        {
            cont++;        
        }

        aux = aux->prox;
    }

    return cont;
}