#include <stdio.h>
int Recebe(int a, int b)
{
    int resultado = 0;

    for (int i = a; i < b; i++)
    {
        resultado += i;
    }

    return resultado;
}

int main(int argc, char const *argv[])
{
    int n1, n2, valor;

    printf("Digite dois numeros inteiros:\n");
    scanf("%d %d", &n1, &n2);

    valor = Recebe(n1, n2);

    printf("%d ", valor);

    return 0;
}