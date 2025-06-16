/*Faça um programa que receba uma frase e mostre as letras que se repetem, junto com o número de
repetições.*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define TAM 21

int main()
{
    char frase[TAM];
    
    printf("digite uma frase:");
    fgets(frase, TAM, stdin);
    int cont = strlen(frase);
    
    int repeticoes[26] = {0};
    
    for (int i = 0; i < cont; i++)
    {
        if (isalpha(frase[i]))
        {
           int letra = toupper(frase[i]) - 'A';
           repeticoes[letra]++;
        }
    }
    
    
    
    for (int i = 0; i < 26; i++) 
    {
        if (repeticoes[i] > 0)
        {
            printf("Letra %c apareceu %d vezes\n", i + 'A', repeticoes[i]);
        }
        
    }
    
   

    return 0;
}
