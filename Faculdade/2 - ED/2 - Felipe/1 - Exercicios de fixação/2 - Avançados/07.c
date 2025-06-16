/*Escreva um programa que declare uma função que some dois números. Em
seguida, declare um ponteiro para essa função e use o ponteiro para chamar a
função e imprimir o resultado.
*/

#include <stdio.h>
#include <stdlib.h>

int soma (int a, int b);

int main(int argc, char const *argv[])
{
    int (*ponteirofunc)(int, int); //declaração
    ponteirofunc  = soma; //atribuição
    
    int resultado = ponteirofunc(2, 2);

    printf("Resultado: %d", resultado);

    return 0;
}

int soma (int a, int b)
{
    return a + b;
}