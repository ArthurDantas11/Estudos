/*criar uma estrutura pessoa, que tem os atributos: nome, sobrenome e idade, e pode ter um amigo, do mesmo tipo pessoa*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define TAM 50

typedef struct
{
    char nome[TAM];
    char sobrenome[TAM];
    int idade;

   struct pessoa *amigo;
    
}Pessoa;

int main()
{
    char nome[TAM], sobrenome[TAM];
    int idade;
    Pessoa *pessoa1 = (Pessoa*)malloc(sizeof(Pessoa));
    Pessoa *pessoa2 = (Pessoa*)malloc(sizeof(Pessoa));

    printf("digite seu nome:\n");
    fgets(pessoa1->nome, TAM, stdin);
   
    printf("digite seu sobrenome:\n");
    fgets(pessoa1->sobrenome, TAM, stdin);

    printf("Digite sua idade:\n");
    scanf("%d", &pessoa1->idade);

    fflush(stdin);

    printf("digite seu nome do seu amigo(a):\n");
    fgets(pessoa2->nome, TAM, stdin);
   
    printf("digite o sobrenome:\n");
    fgets(pessoa2->sobrenome, TAM, stdin);

    printf("Digite sua idade:\n");
    scanf("%d", pessoa2->idade);

    pessoa1->amigo = &pessoa2;

    printf("Pessoa: %s\n", pessoa1->nome);
    printf("Amigo de %s: %s\n", pessoa1->amigo);



    

    return 0;
}

