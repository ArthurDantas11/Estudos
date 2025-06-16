#include <stdio.h>
#define anoatual 2024

int main()
{
    
    int anonascimento, idade;
        
    //considerando o ano como 2024 e a idade minima para votar é 16 anos. 
   
    printf("informe o ano em que voce nasceu: ");
    scanf("%d", &anonascimento);

    idade = anoatual - anonascimento;

    if (idade >= 16)
    {
        printf("%d anos. parabens! voce ja pode votar.", idade);
    }
    else
    {
        printf("%d anos! sinto muito, voce ainda nao pode votar.", idade);
    }
    

    return 0;
}