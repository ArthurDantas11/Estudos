#include "TAD_LISTA/Lista.c"

int main() {
    Lista* lista1 = lista_cria();
    Lista* lista2 = lista_cria();

    // Criando lista1: 1 -> 2 -> 3 -> 4 -> 5
    for (int i = 1; i <= 5; i++) {
        lista1 = lista_insere_final(lista1, i);
    }

    // Criando lista2: 6 -> 7 -> 8 -> 9 -> 10
    for (int i = 6; i <= 10; i++) {
        lista2 = lista_insere_final(lista2, i);
    }

    printf("Lista 1:\n");
    lista_percorre(lista1);

    printf("Lista 2:\n");
    lista_percorre(lista2);

    // Concatenando
    Lista* lista_concatenada = lista_concatenar(lista1, lista2);
    printf("\nLista concatenada:\n");
    lista_percorre(lista_concatenada);

    // Separando
    int n;
    printf("\nDigite o valor para separar: ");
    scanf("%d", &n);

    Lista* segunda_lista = lista_separa(lista_concatenada, n);

    printf("\nPrimeira lista (truncada):\n");
    lista_percorre(lista_concatenada);

    printf("Segunda lista:\n");
    lista_percorre(segunda_lista);

    // Liberar memória
    lista_libera(lista_concatenada);
    lista_libera(segunda_lista);

    return 0;
}