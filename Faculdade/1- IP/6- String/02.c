#include <stdio.h>
#include <string.h>
#include <ctype.h> 
#define TAM 21

int main()
{
    int cont_consoantes = 0;
    char frase[TAM];

    printf("Digite uma frase:\n");
    fgets(frase, TAM, stdin);
    int j = strlen(frase);

   for (int i = 0; i < j; i++)
    {
        char c = tolower(frase[i]); // Converte para minúscula para evitar repetição de verificação

        if ((c >= 'a' && c <= 'z') && !(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'))
        { 
            cont_consoantes++;
        }
    }
    
    printf("Frase: ");
    puts(frase);
    printf("Quantidade de consoantes: %d\n", cont_consoantes);
    
    return 0;
}