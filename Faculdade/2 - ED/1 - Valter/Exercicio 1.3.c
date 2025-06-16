/*1.3. Implemente uma função que retorne o n-ésimo termo da série de Fibonaci. A série de Fibonacci dada por: 1 1 2 3 5 8 13 21..
roS termos são iguais a 1 e cada termo seguinte 6 asoma dos dois termos anterio-
res. Essa função deve obedecer ao protótipo*/

#include <stdio.h>

long int fibonaci(long int n);

int main(int argc, char const *argv[])
{
    int termo;

    printf("Digite o termo da sequencia de Fibonacci que voce deseja saber:\n");
    scanf("%d", &termo);

    long int retorno = fibonaci(termo);

    printf("O termo %d da sequencia de Fibonacci e %ld\n", termo, retorno);

    return 0;
}

long int fibonaci(long int n)
{
    if (n <= 1)
    {
        return 1;
    }
    else
    {
        return fibonaci(n - 1) + fibonaci(n - 2);
    }
}
