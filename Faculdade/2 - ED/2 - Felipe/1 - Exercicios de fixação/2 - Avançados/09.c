/* Escreva um programa que conte quantos elementos existem em um vetor usando
apenas ponteiros (sem usar a notação de vetores com [ ] diretamente). Imprima o
número de elementos.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vetor[] = {1, 2, 3, 4, 5};
    int tam = sizeof(vetor) / sizeof(*vetor);

    printf("Numero de elementos: %d", tam);
    
    return 0;
}