#include <stdio.h>
#include <string.h>
#define TAM 20

int main(int argc, char const *argv[])
{
    char origem[TAM] = {"ola, mundo!"}, destino[TAM];

    printf("antes do strcpy:\n");
    puts(origem);
    puts(destino);
    //"puts" é uma função permite exibir o conteudo das strings

    strcpy(destino, origem); 
    //strcpy é uma função que permite atribuir algo nas strings, ja que nao é possivel usar "=" para atribuí-las.

    printf("Apos o strcy:\n");
    puts(origem);
    puts(destino);

    return 0;
}
