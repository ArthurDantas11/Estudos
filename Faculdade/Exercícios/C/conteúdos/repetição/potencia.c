#include <stdio.h>

int main()
{
    int base, i, expoente, resultado = 1;

    printf("digite um numero:\n");
    scanf("%d", &base);

    printf("digite o numero do expoente:\n");
    scanf("%d", &expoente);

    for ( i = 1; i <= expoente; i++)
    {
       resultado*= base;
    }
    
    printf("Resultado: %d^%d=%d", base, expoente, resultado);

    return 0;
}

