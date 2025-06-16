#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
/*Faça uma função que receba uma frase, calcule e mostre a quantidade de vogais da frase digitada. O
programa deverá contar vogais maiúsculas e minúsculas.*/

int conta_vogais (char* str);

int main()
{
    char string[20];
    
    printf("digite uma frase ate 20 palavras:\n");
    fgets(string, 20, stdin);
    
    int n_vogais = conta_vogais(string);

    printf("numero de vogais: %d \n", n_vogais);

    return 0;
}

int conta_vogais (char* str)
{
    int cont = 0;

    for (int i = 0; str[i] != '\0'; i++)
    {
        char c = str[i];
        c = tolower(c);

        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
        {
            cont++;
        }
    }

    return cont;
    
}