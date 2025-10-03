/* Crie um programa que declare um ponteiro para um ponteiro de inteiros. Atribua o
endereço de um ponteiro para um valor inteiro e, por fim, altere o valor da variável
original através do ponteiro para ponteiro.*/
#include <stdio.h>
#include <stdlib.h>

int main()
{   
    int valor = 10;
    int *ptr = &valor;
    int **ptr2 = &ptr;

    **ptr2 = 20;

    printf("valor: %d\n", valor);
    
    return 0;
}