#include "TAD_LISTA/Lista_inteiros.c"

int main()
{
    Lista* l;
    l = lista_cria();

    l = lista_insere(l, 10);
    l = lista_insere(l, 20);
    l = lista_insere(l, 30);
    l = lista_insere(l, 40);
    l = lista_insere(l, 50);

    Lista_percorre(l);

    l = lista_retira(l, 30);

    Lista_percorre(l);

    lista_libera(l);

    return 0;
}