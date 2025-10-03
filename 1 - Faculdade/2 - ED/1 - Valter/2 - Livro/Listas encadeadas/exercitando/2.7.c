#include "../Estrutura/Lista.c"
/*  Implemente uma função que construa uma nova lista com a intercalação
dos nós de outras duas listas passadas como parâmetros. Essa função deve retornar a lista resultante, conforme ilustrado a seguir:
*/
Lista* merge (Lista* list1, Lista* list2); 

int main()
{
    Lista *list1 = lista_cria();
    Lista *list2 = lista_cria();

    for (int i = 0; i < 5; i++)
    {
        list1 = lista_insere(list1, i + 1);
    }

    for (int i = 5; i < 10; i++)
    {
        list2 = lista_insere(list2, i + 1);
    }

    lista_percorre(list1);
    printf("NULL\n");

    lista_percorre(list2);
    printf("NULL\n");

    printf("NOVA LISTA:\n");

    Lista *returno = merge(list1, list2);

    lista_percorre(returno);
    printf("NULL\n");

    return 0;
}


Lista* merge (Lista* list1, Lista* list2)
{
    if(lista_comprimento(list1) != lista_comprimento(list2))
    {
        return NULL;
    }
    
    Lista* novo = lista_cria();

    while (list1 != NULL)
    {
        novo = lista_insere(novo, list1->info);
        novo = lista_insere(novo, list2->info);

        list1 = list1->prox;
        list2 = list2->prox;
    }
    
    return novo;
}