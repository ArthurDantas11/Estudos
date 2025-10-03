#include <stdio.h>
#include <string.h>
#define TAM 31
/*Faça um programa que receba uma frase, calcule e mostre a quantidade de vogais da frase digitada. O
programa deverá contar vogais maiúsculas e minúsculas.*/

int main()
{
    char frase[TAM], cont_vogal = 0;

    printf("Digite uma frase (ate %d caracteres):\n", TAM);
    fgets(frase, TAM, stdin);
    fflush(stdin);

    for (int i = 0; i < TAM; i++)
    {
        if (frase[i] == 'a' || frase[i] == 'e' || frase[i] == 'i' || frase[i] == 'o' || frase[i] == 'u' )
        { 
           cont_vogal++;
        }
        else if (frase[i] == 'A' || frase[i] == 'E' || frase[i] == 'I' || frase[i] == 'O' || frase[i] == 'U' )
        {  
            cont_vogal++;
        } 
    }

    if (cont_vogal > 0)
    {
        printf("A frase contem %d vogais\n", cont_vogal);
    }
    else
    {
        printf("A frase nao contem vogais\n");
    }
     

    return 0;
}