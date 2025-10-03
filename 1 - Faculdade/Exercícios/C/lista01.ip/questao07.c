#include <stdio.h>

/*. Números de Fibonacci: Crie um aplicativo em C que peça um número inteiro ao usuário -
'n' - e exiba o n-ésimo termo da série de Fibonacci, sabendo que o primeiro termo é 0, o
segundo é 1 e o próximo número é sempre a soma dos dois anteriores*/

int main(int argc, char const *argv[])
{
    int n, i, a = 0, b = 1, c;

    printf("digite um numero inteiro:\n");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("Insira um numero maior que 0.\n");
        return 1;
    }
    for (i = 0; i < n; i++)
    {
        c = a + b; 
        a = b;    
        b = c;

    }

    printf("O %d termo da serie de fibonacci e: %d\n", n, c);

    return 0;
}
