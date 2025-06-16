#include <stdio.h>
// Escreva um algoritmo para ler 4 valores (considere que não serão informados valores
// iguais) e informar o maior e o menor deles.
int main()
{
    float numero1, numero2, numero3, numero4, maior_numero, menor_numero;

    printf("informe 4 numeros diferentes\n");
    scanf("%f", &numero1);
    scanf("%f", &numero2);
    scanf("%f", &numero3);
    scanf("%f", &numero4);

    if (numero1 > numero2 && numero1 > numero3 && numero1 > numero4)
    {
        maior_numero = numero1;
    }
    else if (numero2 > numero1 && numero2 > numero3 && numero2 > numero4)
    {
        maior_numero = numero2;
    }
    else if (numero3 > numero1 && numero3 > numero2 && numero3 > numero4)
    {
        maior_numero = numero3;
    }
    else
    {
        maior_numero = numero4;
    }

    if (numero1 < numero2 && numero1 < numero3 && numero1 < numero4)
    {
        menor_numero = numero1;
    }
    else if (numero2 < numero1 && numero2 < numero3 && numero2 < numero4)
    {
        menor_numero = numero2;
    }
    else if (numero3 < numero1 && numero3 < numero2 && numero3 < numero4)
    {
        menor_numero = numero3;
    }
    else
    {
        menor_numero = numero4;
    }

    printf(" o maior numero e: %.0f\n o menor numero e %.0f", maior_numero, menor_numero);

    return 0;
}