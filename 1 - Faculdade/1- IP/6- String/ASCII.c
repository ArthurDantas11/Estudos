#include <stdio.h>
#include <string.h>
#define TAM 51

/*Faça um programa para criptografar uma frase em que cada caractere deverá ser substituído pelo caractere que está três posições à sua frente na tabela ASCII.
Os três últimos caracteres da tabela ASCII deverão ser substituídos pelos três primeiros.
Exemplo:

 BONECO ZABUMBA
 ERQHFR cDEXPED

 Solução:
- Digitar uma frase.
- Pegar o tamanho da frase.
- Percorrer toda a frase, convertendo cada caractere para ASCII, acrescentando três e convertendo novamente para caractere.
- Copiar o novo caractere para a frase criptografada.*/

int main()
{

    char frase[TAM];

    printf("digite uma frase (ate 50 caracteres)\n");
    gets(frase);

    int j = strlen(frase), ascii[j];

    printf("Caracteres em ASCII:\n");

    for (int i = 0; i < j; i++)
    {
        printf("%d ", frase[i]);
    }
    
    printf("\n");
    printf("Frase digitada:\n");

    for (int i = 0; i < j; i++)
    {
        printf("%c", frase[i]);
    }
    
    for (int i = 0; i < j; i++)
    {
        ascii[i] = (int)frase[i] + 3;
    }

    printf("\n");
    printf("Caracteres alterados:\n");
    
    for (int i = 0; i < j; i++)
    {
        printf("%d ", ascii[i]);
    }

    printf("\n");
    printf("Frase criptografada:\n");

    for (int i = 0; i < j; i++)
    {
        printf("%c ", ascii[i]);
    }
    

    return 0;
    
}
