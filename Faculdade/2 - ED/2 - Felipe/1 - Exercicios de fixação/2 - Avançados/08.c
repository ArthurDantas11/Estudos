/* Crie uma estrutura que represente um "Livro", contendo os campos titulo e autor (do
tipo char*). Depois, declare um ponteiro para essa estrutura, aloque dinamicamente
memória para a estrutura e preencha os campos com informações fornecidas pelo
usuário. Imprima as informações usando o ponteiro.*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct 
{
    char* titulo;
    char* autor;
} Livro;


int main()
{

    Livro *livro1 = (Livro*) malloc(sizeof(Livro));
    livro1->titulo = (char*) malloc(sizeof(char)*50); 
    livro1->autor = (char*) malloc(sizeof(char)*50); 


    printf("Preencha:\nTitulo:\n");
    scanf("%s", livro1->titulo);
    fflush(stdin);

    printf("Autor:\n");
    scanf("%s", livro1->autor);
    fflush(stdin);

    printf("Titulo: %s\nAutor: %s\n", livro1->titulo, livro1->autor);

    return 0;
}