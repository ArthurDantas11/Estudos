/* Escreva um programa que declare e atribua um valor a uma variável inteira e, em
seguida, declare um ponteiro para essa variável. Imprima o valor antes. Use o
ponteiro para alterar o valor da variável e exiba o valor depois da alteração a partir
da variável original. Você talvez queira utilizar funções que recebem argumentos por
referência.*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int var = 10;
    int *ptr = &var;

    printf("%d\n", var);

    *ptr = 5;

    printf("%d", var);

    return 0;
}
