#include "../Estrutura/Lista.c"

int main(int argc, char const *argv[])
{

    return 0;
}

Lista *invete(Lista *l)
{
    Lista *atual = l;
    Lista *ant = NULL;
    Lista *prox = NULL;

    while (atual != NULL)
    {
        prox = atual->prox;
        atual->prox = ant;
        ant = atual;
        atual = prox;
    }

    return ant;
}
