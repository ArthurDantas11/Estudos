/*Alocar dinamicamente memória para armazenar um único número inteiro, ler esse valor do usuário e imprimir o dobro dele.

Objetivos:

Usar malloc

Usar *ptr para acessar o valor

*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr = (int*) malloc(sizeof(int));

    printf("Digite um valor:");
    scanf("%d", ptr); //ao alocar memoria e ultilizar o * não nescessario ultilizar o &.


    printf("Valor digitado: %d", *ptr); //ao imprimir, deve-se usar o *
    return 0;
}