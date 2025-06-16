/*Faça um programa para criptografar uma frase dada pelo usuário (a criptografia troca as vogais da
frase por *).
Exemplo:
Frase: EU ESTOU NA ESCOLA
Saída: ** * ST** N* *SC*L*
Solução:
■ Digitar uma frase.
■ Pegar o tamanho da frase.
■ Percorrer a frase, comparando cada caractere com as vogais.
■ Quando encontrar uma vogal, substituí-la por um asterisco.*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char frase[20];

    printf("Digite uma frase:\n");
    fgets(frase, sizeof(frase), stdin);

    for (int i = 0; i < strlen(frase); i++)
    {
        int c = tolower(frase[i]);

        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
        {
            frase[i] = '*';
        }
    }

    printf("Frase criptografada: %s", frase);
    
    return 0;
}
