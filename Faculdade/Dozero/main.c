#include "TAD_LISTA/Lista.c"

int main()
{
    Lista *lista1 = lista_cria();

    for (int i = 0; i < 5; i++)
    {
        lista1 = lista_insere(lista1, i + 1);
    }

    lista_percorre(lista1);

    Lista *lista2 = lista_cria();

    for (int i = 5; i < 10; i++)
    {
        lista2 = lista_insere(lista2, i + 1);
    }

    lista_percorre(lista2);

    Lista *lista_concatenada = lista_concatenar(lista1, lista2);

    printf("\nLista concatenada:\n");

    lista_percorre(lista_concatenada);

    int elemento_busca;

    printf("Procure um elemento na lista:\n");
    scanf("%d", &elemento_busca);

    int verifica = lista_busca(lista_concatenada, elemento_busca);

    if (verifica)
    {
        printf("Elemento: %d encontrado!\n", elemento_busca);
    }
    else
    {
        printf("Elemento: %d NAO encontrado!\n", elemento_busca);
    }

    lista_percorre(lista_concatenada);

    int remove;

    printf("Remova um elemento na lista:\n");
    scanf("%d", &remove);

    lista1 = lista_remove(lista_concatenada, remove);

    lista_percorre(lista_concatenada);

    int elemento_ordenado;

    printf("Insira um novo elemento na lista:\n");
    scanf("%d", &elemento_ordenado);

    Lista *ordenada = lista_insere_ordenado(lista_concatenada, elemento_ordenado);

    lista_percorre(ordenada);

    printf("Lista invertida:\n\n");

    Lista *lista_invertida = lista_inverte(lista_concatenada);

    lista_percorre(lista_invertida);

    int n;

    printf("Digite um valor para n:\n");
    scanf("%d", &n);

    // Lista *lista_truncada = lista_separa(lista_concatenada, n);

    // lista_percorre(lista_truncada);

    Lista *lista_truncada = lista_separa(lista_concatenada, n);

    printf("\nPrimeira lista (original truncada):\n");
    lista_percorre(lista_concatenada);

    printf("Segunda lista (retornada pela função):\n");
    lista_percorre(lista_truncada);

    //Lista *copia_lista = lista_copia(lista2);

    // lista_percorre(copia_lista);

    return 0;
}