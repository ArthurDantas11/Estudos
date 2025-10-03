#include <stdio.h>

/*. Escrever um algoritmo que lê 10 valores, um de cada vez, e conta quantos deles estão no
intervalo [10,20] e quantos deles estão fora do intervalo, escrevendo estas informações.
*/

int main(int argc, char const *argv[])
{
    int i, valor, cont_valor_fora=0, cont_valor_dentro=0;

    for (i = 1; i <= 10; i++)
    {
        printf("digite o %d valor\n", i);
        scanf("%d", &valor);

        if (valor < 10)
        {
            cont_valor_fora++;
        }
        else if (valor <=20)
        {
            cont_valor_dentro++;
        }
    }

    printf("Valores DENTRO do intervalo (10,20): %d\nValores FORA do intervalo (10,20): %d\n", cont_valor_dentro, cont_valor_fora);

    return 0;
}
