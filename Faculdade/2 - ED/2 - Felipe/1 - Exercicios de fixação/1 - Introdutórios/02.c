/*Crie um programa que tenha um vetor de inteiro. Você pode definir os valores a
mão. Declare um ponteiro e use esse ponteiro para percorrer e modificar os
elementos do vetor, os substituindo pelo valor do resto da divisão de cada elemento
por 2. Após a modificação, imprima o vetor.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vetor[5] = {3, 6, 9, 12, 15};
    int *ptr = vetor;

    for (int i = 0; i < 5; i++)
    {
        *(ptr + i) = *(ptr + i) % 2;
    }

    printf("Vetor modificado:\n");

    for (int i = 0; i < 5; i++) 
    {
        printf("%d ", vetor[i]);
    }

    printf("\n");
    
    return 0;
}