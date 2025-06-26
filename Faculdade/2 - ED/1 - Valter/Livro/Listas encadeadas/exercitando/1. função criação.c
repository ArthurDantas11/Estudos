#include <stdio.h>
#include <stdlib.h>

/*estrutura da lista*/
typedef struct Node 
{
    int head;
    struct Node *tail;
}Node;

Node *lista_cria(void)
{
    return NULL;
}

int main()
{
    Node *minha_lista = lista_cria(); //Assim, a lista ja estara teoricamente criada com NULL, que significa que a lista ainda está vazia.

    return 0;
}